// roc 2009-12 004095b0  unit: std::logic_error  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004095b0
//
// 004095b0  8b442404             mov eax, dword ptr [esp + 4]
// 004095b4  56                   push esi
// 004095b5  50                   push eax
// 004095b6  8bf1                 mov esi, ecx
// 004095b8  e863feffff           call 0x409420
// 004095bd  c706acfd9900         mov dword ptr [esi], 0x99fdac
// 004095c3  8bc6                 mov eax, esi
// 004095c5  5e                   pop esi
// 004095c6  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
