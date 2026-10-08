// roc 2009-12 00411540  unit: std::Vruntime_error::?$error_info_injector  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00411540
//
// 00411540  8b442404             mov eax, dword ptr [esp + 4]
// 00411544  56                   push esi
// 00411545  50                   push eax
// 00411546  8bf1                 mov esi, ecx
// 00411548  e86302ffff           call 0x4017b0
// 0041154d  c706f41d9a00         mov dword ptr [esi], 0x9a1df4
// 00411553  8bc6                 mov eax, esi
// 00411555  5e                   pop esi
// 00411556  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
