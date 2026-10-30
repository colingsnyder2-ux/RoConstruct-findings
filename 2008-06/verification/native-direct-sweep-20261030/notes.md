# Native direct compilation sweep — 2026-10-30

JPEG: 256 -> 262 owned exact addresses, all baseline addresses preserved. Authentic IJG 6b files compiled directly as C using existing historical flags; module matcher checks instructions and referenced data. Six additions: error_exit 0051e9d0, output_message 0051e9f0, format_message 0051ea70, jinit_memory_mgr 0052b660, memory allocation twin 00530760, free twin 00530770. Twin addresses counted once each. All 69 externally visible exact symbols forced via linker /INCLUDE; static bodies remain exercised through real callers, not independently forced roots.

Compile errors zero; forced link and runtime exit zero. Runtime roundtrips 64x48 RGB JPEG and runs malformed input in a child process using default IJG diagnostics/error exit. Default error_exit returns EXIT_FAILURE as expected. Windows tmpfile was unusable in this environment; fixture now uses a local file removed by parent.

Scintilla RTM baseline/import/MBCS experiments:127/115/115 matches, all compile/link/runtime successful; alternatives lose 1/17/17 baseline addresses. No native Scintilla body gain demonstrated; retained original module recipe and added official MFC RTM runtime-file deployment. Lua raw5.1.4 reproduces431 addresses versus primary441 with historical mixed-version verified objects. Same-version-only forced trial430, no gain; restored original recipe. No mixed-version Lua promotion made.

Counts are local owned exacts and may overlap modules. Accepted native credits unchanged. No self-approval.
