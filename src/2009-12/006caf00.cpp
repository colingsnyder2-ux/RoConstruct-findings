// roc 2009-12 006caf00  unit: RBX::Profiling::Profiler  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006caf00
//
// 006caf00  8b442404             mov eax, dword ptr [esp + 4]
// 006caf04  56                   push esi
// 006caf05  50                   push eax
// 006caf06  8bf1                 mov esi, ecx
// 006caf08  e8a3ffffff           call 0x6caeb0
// 006caf0d  c70654779d00         mov dword ptr [esi], 0x9d7754
// 006caf13  8bc6                 mov eax, esi
// 006caf15  5e                   pop esi
// 006caf16  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
