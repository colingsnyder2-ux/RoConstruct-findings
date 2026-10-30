// roc 2009-12 007fb610  unit: CXTPControlComboBoxList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fb610
//
// 007fb610  8b442404             mov eax, dword ptr [esp + 4]
// 007fb614  56                   push esi
// 007fb615  50                   push eax
// 007fb616  8bf1                 mov esi, ecx
// 007fb618  e823ebffff           call 0x7fa140
// 007fb61d  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007fb620  8b11                 mov edx, dword ptr [ecx]
// 007fb622  8b8270010000         mov eax, dword ptr [edx + 0x170]
// 007fb628  ffd0                 call eax
// 007fb62a  5e                   pop esi
// 007fb62b  c20400               ret 4
// copied from an identical function in another client (function ?OnKillFocus@CXTPControlComboBoxEditCtrl@@IAEXPAVCWnd@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp