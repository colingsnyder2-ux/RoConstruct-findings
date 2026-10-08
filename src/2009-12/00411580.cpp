// roc 2009-12 00411580  unit: std::Vruntime_error::?$error_info_injector  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00411580
//
// 00411580  8b442404             mov eax, dword ptr [esp + 4]
// 00411584  56                   push esi
// 00411585  50                   push eax
// 00411586  8bf1                 mov esi, ecx
// 00411588  e82302ffff           call 0x4017b0
// 0041158d  c706601e9a00         mov dword ptr [esi], 0x9a1e60
// 00411593  8bc6                 mov eax, esi
// 00411595  5e                   pop esi
// 00411596  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
