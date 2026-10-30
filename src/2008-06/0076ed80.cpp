// from server: 100% by auto
// roc 2008-06 0076ed80  unit: CXTPImageEditorDlg::CDlgToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076ed80
//
// 0076ed80  8b442404             mov eax, dword ptr [esp + 4]
// 0076ed84  894158               mov dword ptr [ecx + 0x58], eax
// 0076ed87  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0076ed8a  85c9                 test ecx, ecx
// 0076ed8c  740b                 je 0x76ed99
// 0076ed8e  6a00                 push 0
// 0076ed90  6a00                 push 0
// 0076ed92  51                   push ecx
// 0076ed93  ff15182e8000         call dword ptr [0x802e18]
// 0076ed99  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?SetSelected@CXTPImageEditorPicker@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
