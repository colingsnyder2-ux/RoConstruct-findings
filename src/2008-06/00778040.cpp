// roc 2008-06 00778040  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridNativeXPTheme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00778040
//
// 00778040  8b442404             mov eax, dword ptr [esp + 4]
// 00778044  56                   push esi
// 00778045  50                   push eax
// 00778046  8bf1                 mov esi, ecx
// 00778048  e8d3e7ffff           call 0x776820
// 0077804d  c706ec8c8600         mov dword ptr [esi], 0x868cec
// 00778053  c7467800000000       mov dword ptr [esi + 0x78], 0
// 0077805a  c7460401000000       mov dword ptr [esi + 4], 1
// 00778061  8bc6                 mov eax, esi
// 00778063  5e                   pop esi
// 00778064  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ??0CXTPPropertyGridOffice2003Theme@XTPPropertyGridPaintThemes@@QAE@PAVCXTPPropertyGrid@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
