// roc 2009-12 008c15f0  unit: CXTPImageEditorDlg::CDlgToolBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c15f0
//
// 008c15f0  8b4164               mov eax, dword ptr [ecx + 0x64]
// 008c15f3  85c0                 test eax, eax
// 008c15f5  7411                 je 0x8c1608
// 008c15f7  8b80540a0000         mov eax, dword ptr [eax + 0xa54]
// 008c15fd  85c0                 test eax, eax
// 008c15ff  7407                 je 0x8c1608
// 008c1601  8bc8                 mov ecx, eax
// 008c1603  e9a896b5ff           jmp 0x41acb0
// 008c1608  33c0                 xor eax, eax
// 008c160a  c3                   ret 
// copied from an identical function in another client (function ?GetSelectedColor@CXTPImageEditorPicture@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp