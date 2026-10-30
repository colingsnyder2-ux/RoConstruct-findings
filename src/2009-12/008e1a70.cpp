// roc 2009-12 008e1a70  unit: CXTColorSelectorCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1a70
//
// 008e1a70  8b442404             mov eax, dword ptr [esp + 4]
// 008e1a74  50                   push eax
// 008e1a75  81c13c010000         add ecx, 0x13c
// 008e1a7b  e8a06ef5ff           call 0x838920
// 008e1a80  85c0                 test eax, eax
// 008e1a82  7406                 je 0x8e1a8a
// 008e1a84  8b4008               mov eax, dword ptr [eax + 8]
// 008e1a87  c20400               ret 4
// 008e1a8a  33c0                 xor eax, eax
// 008e1a8c  c20400               ret 4
// copied from an identical function in another client (function ?GetCellFromIndex@CXTColorSelectorCtrl@@QAEPAUCOLOR_CELL@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp