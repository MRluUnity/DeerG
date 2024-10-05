#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace DeerG {
	class DG_API Log
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

// Core log macros
#define DG_CORE_TRACE(...)		::DeerG::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define DG_CORE_INFO(...)		::DeerG::Log::GetCoreLogger()->info(__VA_ARGS__)
#define DG_CORE_WARN(...)		::DeerG::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define DG_CORE_ERROR(...)		::DeerG::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DG_CORE_FATAL(...)		::DeerG::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define DG_TRACE(...)			::DeerG::Log::GetClientLogger()->trace(__VA_ARGS__)
#define DG_INFO(...)			::DeerG::Log::GetClientLogger()->info(__VA_ARGS__)
#define DG_WARN(...)			::DeerG::Log::GetClientLogger()->warn(__VA_ARGS__)
#define DG_ERROR(...)			::DeerG::Log::GetClientLogger()->error(__VA_ARGS__)
#define DG_FATAL(...)			::DeerG::Log::GetClientLogger()->fatal(__VA_ARGS__)