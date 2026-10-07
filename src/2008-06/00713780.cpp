// roc 2008-06 00713780  unit: CPropertyGridItemBrickColor  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00713780
//
// 00713780  56                   push esi
// 00713781  8b742408             mov esi, dword ptr [esp + 8]
// 00713785  56                   push esi
// 00713786  e855f2ffff           call 0x7129e0
// 0071378b  830619               add dword ptr [esi], 0x19
// 0071378e  8bc6                 mov eax, esi
// 00713790  5e                   pop esi
// 00713791  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemColor.cpp (function ?GetValueRect@CXTPPropertyGridItemColor@@MAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemColor.cpp
