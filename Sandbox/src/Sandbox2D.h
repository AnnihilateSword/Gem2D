#pragma once

#include <Gem.h>

class Sandbox2D : public Gem::Layer
{
public:
	Sandbox2D();
	virtual ~Sandbox2D() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Gem::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Gem::Event& e) override;
private:
	Gem::OrthographicCameraController m_CameraController;

	// Temp
	Gem::Ref<Gem::VertexArray> m_SquareVA;
	Gem::Ref<Gem::Shader> m_FlatColorShader;

	glm::vec4 m_SquareColor{ 0.2f, 0.3f, 0.8f, 1.0f };
};