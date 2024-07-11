#pragma once

#include<memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace TBDEngine {

	class TBD_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};

}

// CORE LOG MACROS
#define TBD_CORE_TRACE(...)   ::TBDEngine::Log::GetCoreLogger() -> trace(__VA_ARGS__)
#define TBD_CORE_INFO(...)    ::TBDEngine::Log::GetCoreLogger() -> info(__VA_ARGS__)
#define TBD_CORE_WARN(...)    ::TBDEngine::Log::GetCoreLogger() -> warn(__VA_ARGS__)
#define TBD_CORE_ERROR(...)   ::TBDEngine::Log::GetCoreLogger() -> error(__VA_ARGS__)
#define TBD_CORE_FATAL(...)   ::TBDEngine::Log::GetCoreLogger() -> fatal(__VA_ARGS__)

// CLIENT LOG MACROS
#define TBD_TRACE(...)        ::TBDEngine::Log::GetClientLogger() -> trace(__VA_ARGS__)
#define TBD_INFO(...)         ::TBDEngine::Log::GetClientLogger() -> info(__VA_ARGS__)
#define TBD_WARN(...)         ::TBDEngine::Log::GetClientLogger() -> warn(__VA_ARGS__)
#define TBD_ERROR(...)        ::TBDEngine::Log::GetClientLogger() -> error(__VA_ARGS__)
#define TBD_FATAL(...)        ::TBDEngine::Log::GetClientLogger() -> fatal(__VA_ARGS__)
