// roc 2012-06 00a5b4d0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridNativeXPTheme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5b4d0
//
// 00a5b4d0  8b442404             mov eax, dword ptr [esp + 4]
// 00a5b4d4  56                   push esi
// 00a5b4d5  50                   push eax
// 00a5b4d6  8bf1                 mov esi, ecx
// 00a5b4d8  e8d3e7ffff           call 0xa59cb0
// 00a5b4dd  c706e43bc200         mov dword ptr [esi], 0xc23be4
// 00a5b4e3  c7467800000000       mov dword ptr [esi + 0x78], 0
// 00a5b4ea  c7460401000000       mov dword ptr [esi + 4], 1
// 00a5b4f1  8bc6                 mov eax, esi
// 00a5b4f3  5e                   pop esi
// 00a5b4f4  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ??0CXTPPropertyGridOffice2003Theme@XTPPropertyGridPaintThemes@@QAE@PAVCXTPPropertyGrid@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
