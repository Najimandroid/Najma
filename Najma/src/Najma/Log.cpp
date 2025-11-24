#include "Log.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace Najma
{
	std::shared_ptr<spdlog::logger> Log::s_coreLogger;
	std::shared_ptr<spdlog::logger> Log::s_clientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_coreLogger = spdlog::stdout_color_mt("NAJMA");
		s_coreLogger->set_level(spdlog::level::trace);

		s_clientLogger = spdlog::stdout_color_mt("CLIENT");
		s_clientLogger->set_level(spdlog::level::trace);
	}
}