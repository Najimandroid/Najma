#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Najma
{
	class NAJMA_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_coreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_clientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_coreLogger;
		static std::shared_ptr<spdlog::logger> s_clientLogger;
	};
}

// Core log macros
#define NAJMA_CORE_TRACE(...)    ::Najma::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NAJMA_CORE_INFO(...)     ::Najma::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NAJMA_CORE_WARN(...)     ::Najma::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NAJMA_CORE_ERROR(...)    ::Najma::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NAJMA_CORE_CRITICAL(...) ::Najma::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define NAJMA_TRACE(...)    ::Najma::Log::GetClientLogger()->trace(__VA_ARGS__)
#define NAJMA_INFO(...)     ::Najma::Log::GetClientLogger()->info(__VA_ARGS__)
#define NAJMA_WARN(...)     ::Najma::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NAJMA_ERROR(...)    ::Najma::Log::GetClientLogger()->error(__VA_ARGS__)
#define NAJMA_CRITICAL(...) ::Najma::Log::GetClientLogger()->critical(__VA_ARGS__)