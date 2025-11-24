#pragma once

#ifdef NAJMA_PLATFORM_WINDOWS

extern Najma::Application* Najma::CreateApplication();

int main(int argc, char** argv)
{
	Najma::Log::Init();
	NAJMA_CORE_WARN("Initialized Log!");
	int a = 5;
	NAJMA_INFO("Hello from Najma! Var={0}", a);

	auto app = Najma::CreateApplication();
	app->Run();
	delete app;
}

#endif