// roc 2007-08 00683e70  unit: CXTPPropertyGrid  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00683e70
//
// 00683e70  e8abebffff           call 0x682a20
// 00683e75  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00683e79  8b5020               mov edx, dword ptr [eax + 0x20]
// 00683e7c  6a00                 push 0
// 00683e7e  51                   push ecx
// 00683e7f  6897010000           push 0x197
// 00683e84  52                   push edx
// 00683e85  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00683e8b  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?SetTopIndex@CXTPControlComboBoxList@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBoxExt.cpp
