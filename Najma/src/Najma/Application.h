#pragma once

#include "Core.h"

namespace Najma
{
	class NAJMA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

