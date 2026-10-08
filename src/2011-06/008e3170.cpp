// roc 2011-06 008e3170  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridNativeXPTheme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e3170
//
// 008e3170  8b442404             mov eax, dword ptr [esp + 4]
// 008e3174  56                   push esi
// 008e3175  50                   push eax
// 008e3176  8bf1                 mov esi, ecx
// 008e3178  e8d3e7ffff           call 0x8e1950
// 008e317d  c7064c85ad00         mov dword ptr [esi], 0xad854c
// 008e3183  c7467800000000       mov dword ptr [esi + 0x78], 0
// 008e318a  c7460401000000       mov dword ptr [esi + 4], 1
// 008e3191  8bc6                 mov eax, esi
// 008e3193  5e                   pop esi
// 008e3194  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ??0CXTPPropertyGridOffice2003Theme@XTPPropertyGridPaintThemes@@QAE@PAVCXTPPropertyGrid@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
