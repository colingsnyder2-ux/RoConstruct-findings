// from server: 100% by auto
// roc 2007-08 006faa30  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridDelphiTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006faa30
//
// 006faa30  8b442404             mov eax, dword ptr [esp + 4]
// 006faa34  56                   push esi
// 006faa35  50                   push eax
// 006faa36  8bf1                 mov esi, ecx
// 006faa38  e873e7ffff           call 0x6f91b0
// 006faa3d  c706a4ca7d00         mov dword ptr [esi], 0x7dcaa4
// 006faa43  c7460402000000       mov dword ptr [esi + 4], 2
// 006faa4a  8bc6                 mov eax, esi
// 006faa4c  5e                   pop esi
// 006faa4d  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ??0CXTPPropertyGridOfficeXPTheme@XTPPropertyGridPaintThemes@@QAE@PAVCXTPPropertyGrid@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
