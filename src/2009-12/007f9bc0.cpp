// roc 2009-12 007f9bc0  unit: CXTPControlComboBoxList  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9bc0
//
// 007f9bc0  8b442408             mov eax, dword ptr [esp + 8]
// 007f9bc4  8b542404             mov edx, dword ptr [esp + 4]
// 007f9bc8  50                   push eax
// 007f9bc9  52                   push edx
// 007f9bca  688f010000           push 0x18f
// 007f9bcf  e89c8fc2ff           call 0x422b70
// 007f9bd4  8b4020               mov eax, dword ptr [eax + 0x20]
// 007f9bd7  50                   push eax
// 007f9bd8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 007f9bde  c20800               ret 8
// copied from an identical function in another client (function ?FindString@CXTPControlComboBoxList@@MBEHHPBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp