// roc 2009-12 008e2360  unit: CXTColorSelectorCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e2360
//
// 008e2360  8b442404             mov eax, dword ptr [esp + 4]
// 008e2364  8b9130010000         mov edx, dword ptr [ecx + 0x130]
// 008e236a  81c128010000         add ecx, 0x128
// 008e2370  50                   push eax
// 008e2371  52                   push edx
// 008e2372  e8f988f8ff           call 0x86ac70
// 008e2377  c20400               ret 4
// copied from an identical function in another client (function ?AddListener@CXTColorSelectorCtrl@@QAEXPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp