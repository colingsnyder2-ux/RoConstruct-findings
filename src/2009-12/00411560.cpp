// roc 2009-12 00411560  unit: std::Vruntime_error::?$error_info_injector  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00411560
//
// 00411560  8b442404             mov eax, dword ptr [esp + 4]
// 00411564  56                   push esi
// 00411565  50                   push eax
// 00411566  8bf1                 mov esi, ecx
// 00411568  e84302ffff           call 0x4017b0
// 0041156d  c7062c1e9a00         mov dword ptr [esi], 0x9a1e2c
// 00411573  8bc6                 mov eax, esi
// 00411575  5e                   pop esi
// 00411576  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
