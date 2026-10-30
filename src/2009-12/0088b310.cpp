// roc 2009-12 0088b310  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b310
//
// 0088b310  56                   push esi
// 0088b311  8b742408             mov esi, dword ptr [esp + 8]
// 0088b315  56                   push esi
// 0088b316  e825b6f6ff           call 0x7f6940
// 0088b31b  85c0                 test eax, eax
// 0088b31d  7504                 jne 0x88b323
// 0088b31f  5e                   pop esi
// 0088b320  c20400               ret 4
// 0088b323  e8e8fcffff           call 0x88b010
// 0088b328  50                   push eax
// 0088b329  8bce                 mov ecx, esi
// 0088b32b  e8b88af6ff           call 0x7f3de8
// 0088b330  f7d8                 neg eax
// 0088b332  1bc0                 sbb eax, eax
// 0088b334  f7d8                 neg eax
// 0088b336  5e                   pop esi
// 0088b337  c20400               ret 4
// copied from an identical function in another client (function ?Compare@CXTPControlComboBox@@UAEHPAVCXTPControl@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp