// roc 2012-06 0098f500  unit: CXTPEdit  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098f500
//
// 0098f500  56                   push esi
// 0098f501  8bf1                 mov esi, ecx
// 0098f503  e8d631ffff           call 0x9826de
// 0098f508  c7465400000000       mov dword ptr [esi + 0x54], 0
// 0098f50f  5e                   pop esi
// 0098f510  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?OnKillFocus@CXTPCommandBarEditCtrl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
