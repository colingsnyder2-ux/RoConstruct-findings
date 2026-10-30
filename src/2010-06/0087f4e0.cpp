// roc 2010-06 0087f4e0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridNativeXPTheme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087f4e0
//
// 0087f4e0  8b442404             mov eax, dword ptr [esp + 4]
// 0087f4e4  56                   push esi
// 0087f4e5  50                   push eax
// 0087f4e6  8bf1                 mov esi, ecx
// 0087f4e8  e8d3e7ffff           call 0x87dcc0
// 0087f4ed  c7067ce4a600         mov dword ptr [esi], 0xa6e47c
// 0087f4f3  c7467800000000       mov dword ptr [esi + 0x78], 0
// 0087f4fa  c7460401000000       mov dword ptr [esi + 4], 1
// 0087f501  8bc6                 mov eax, esi
// 0087f503  5e                   pop esi
// 0087f504  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ??0CXTPPropertyGridOffice2003Theme@XTPPropertyGridPaintThemes@@QAE@PAVCXTPPropertyGrid@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
