// roc 2009-12 007f9bf0  unit: CXTPControlComboBoxList  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9bf0
//
// 007f9bf0  8b442408             mov eax, dword ptr [esp + 8]
// 007f9bf4  8b542404             mov edx, dword ptr [esp + 4]
// 007f9bf8  50                   push eax
// 007f9bf9  52                   push edx
// 007f9bfa  68a2010000           push 0x1a2
// 007f9bff  e86c8fc2ff           call 0x422b70
// 007f9c04  8b4020               mov eax, dword ptr [eax + 0x20]
// 007f9c07  50                   push eax
// 007f9c08  ff15c4cb9800         call dword ptr [0x98cbc4]
// 007f9c0e  c20800               ret 8
// copied from an identical function in another client (function ?FindStringExact@CXTPControlComboBoxList@@MBEHHPBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp