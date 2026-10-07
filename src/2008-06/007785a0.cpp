// roc 2008-06 007785a0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOfficeXPTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007785a0
//
// 007785a0  8b442404             mov eax, dword ptr [esp + 4]
// 007785a4  56                   push esi
// 007785a5  50                   push eax
// 007785a6  8bf1                 mov esi, ecx
// 007785a8  e873e2ffff           call 0x776820
// 007785ad  c7063c8f8600         mov dword ptr [esi], 0x868f3c
// 007785b3  c7460401000000       mov dword ptr [esi + 4], 1
// 007785ba  8bc6                 mov eax, esi
// 007785bc  5e                   pop esi
// 007785bd  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ??0CXTPPropertyGridNativeXPTheme@XTPPropertyGridPaintThemes@@QAE@PAVCXTPPropertyGrid@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
