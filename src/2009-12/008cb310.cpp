// roc 2009-12 008cb310  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridNativeXPTheme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cb310
//
// 008cb310  8b442404             mov eax, dword ptr [esp + 4]
// 008cb314  56                   push esi
// 008cb315  50                   push eax
// 008cb316  8bf1                 mov esi, ecx
// 008cb318  e8d3e7ffff           call 0x8c9af0
// 008cb31d  c70684a1a000         mov dword ptr [esi], 0xa0a184
// 008cb323  c7467800000000       mov dword ptr [esi + 0x78], 0
// 008cb32a  c7460401000000       mov dword ptr [esi + 4], 1
// 008cb331  8bc6                 mov eax, esi
// 008cb333  5e                   pop esi
// 008cb334  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ??0CXTPPropertyGridOffice2003Theme@XTPPropertyGridPaintThemes@@QAE@PAVCXTPPropertyGrid@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
