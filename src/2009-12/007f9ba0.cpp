// roc 2009-12 007f9ba0  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9ba0
//
// 007f9ba0  6a00                 push 0
// 007f9ba2  6a00                 push 0
// 007f9ba4  6888010000           push 0x188
// 007f9ba9  e8c28fc2ff           call 0x422b70
// 007f9bae  8b4020               mov eax, dword ptr [eax + 0x20]
// 007f9bb1  50                   push eax
// 007f9bb2  ff15c4cb9800         call dword ptr [0x98cbc4]
// 007f9bb8  c3                   ret 
// copied from an identical function in another client (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp