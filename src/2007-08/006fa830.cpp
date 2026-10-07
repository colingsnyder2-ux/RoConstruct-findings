// roc 2007-08 006fa830  unit: CXTPPropertyGridPaintManager  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fa830
//
// 006fa830  8b442404             mov eax, dword ptr [esp + 4]
// 006fa834  56                   push esi
// 006fa835  50                   push eax
// 006fa836  8bf1                 mov esi, ecx
// 006fa838  e873e9ffff           call 0x6f91b0
// 006fa83d  c70614c97d00         mov dword ptr [esi], 0x7dc914
// 006fa843  c7460401000000       mov dword ptr [esi + 4], 1
// 006fa84a  8bc6                 mov eax, esi
// 006fa84c  5e                   pop esi
// 006fa84d  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ??0CXTPPropertyGridNativeXPTheme@XTPPropertyGridPaintThemes@@QAE@PAVCXTPPropertyGrid@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
