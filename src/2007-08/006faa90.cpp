// roc 2007-08 006faa90  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOfficeXP  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006faa90
//
// 006faa90  8b442404             mov eax, dword ptr [esp + 4]
// 006faa94  56                   push esi
// 006faa95  50                   push eax
// 006faa96  8bf1                 mov esi, ecx
// 006faa98  e813e7ffff           call 0x6f91b0
// 006faa9d  c706f4ca7d00         mov dword ptr [esi], 0x7dcaf4
// 006faaa3  c7460401000000       mov dword ptr [esi + 4], 1
// 006faaaa  8bc6                 mov eax, esi
// 006faaac  5e                   pop esi
// 006faaad  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ??0CXTPPropertyGridNativeXPTheme@XTPPropertyGridPaintThemes@@QAE@PAVCXTPPropertyGrid@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
