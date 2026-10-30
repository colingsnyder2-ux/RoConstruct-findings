// roc 2009-06 007f0790  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridNativeXPTheme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f0790
//
// 007f0790  8b442404             mov eax, dword ptr [esp + 4]
// 007f0794  56                   push esi
// 007f0795  50                   push eax
// 007f0796  8bf1                 mov esi, ecx
// 007f0798  e8d3e7ffff           call 0x7eef70
// 007f079d  c706149d9000         mov dword ptr [esi], 0x909d14
// 007f07a3  c7467800000000       mov dword ptr [esi + 0x78], 0
// 007f07aa  c7460401000000       mov dword ptr [esi + 4], 1
// 007f07b1  8bc6                 mov eax, esi
// 007f07b3  5e                   pop esi
// 007f07b4  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ??0CXTPPropertyGridOffice2003Theme@XTPPropertyGridPaintThemes@@QAE@PAVCXTPPropertyGrid@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
