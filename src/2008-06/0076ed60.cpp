// roc 2008-06 0076ed60  unit: CXTPImageEditorDlg::CDlgToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076ed60
//
// 0076ed60  8b442404             mov eax, dword ptr [esp + 4]
// 0076ed64  894154               mov dword ptr [ecx + 0x54], eax
// 0076ed67  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0076ed6a  85c9                 test ecx, ecx
// 0076ed6c  740b                 je 0x76ed79
// 0076ed6e  6a00                 push 0
// 0076ed70  6a00                 push 0
// 0076ed72  51                   push ecx
// 0076ed73  ff15182e8000         call dword ptr [0x802e18]
// 0076ed79  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?SetColor@CXTPImageEditorPicker@@QAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
