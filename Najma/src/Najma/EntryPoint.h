#pragma once

#ifdef NAJMA_PLATFORM_WINDOWS

extern Najma::Application* Najma::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Najma::CreateApplication();
	app->Run();
	delete app;
}

#endif