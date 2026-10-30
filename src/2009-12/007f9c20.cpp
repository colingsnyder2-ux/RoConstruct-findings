// roc 2009-12 007f9c20  unit: CXTPControlComboBoxList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9c20
//
// 007f9c20  8b442404             mov eax, dword ptr [esp + 4]
// 007f9c24  6a00                 push 0
// 007f9c26  50                   push eax
// 007f9c27  6897010000           push 0x197
// 007f9c2c  e83f8fc2ff           call 0x422b70
// 007f9c31  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007f9c34  51                   push ecx
// 007f9c35  ff15c4cb9800         call dword ptr [0x98cbc4]
// 007f9c3b  c20400               ret 4
// copied from an identical function in another client (function ?SetTopIndex@CXTPControlComboBoxList@@MAEHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp