// roc 2009-12 007faa00  unit: CPatchedControlComboBox  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007faa00
//
// 007faa00  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 007faa06  50                   push eax
// 007faa07  e804ecffff           call 0x7f9610
// 007faa0c  50                   push eax
// 007faa0d  e82c92ffff           call 0x7f3c3e
// 007faa12  83c408               add esp, 8
// 007faa15  c3                   ret 
// copied from an identical function in another client (function ?GetComboBoxPopupBar@CXTPControlComboBox@@QBEPAVCXTPControlComboBoxPopupBar@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp