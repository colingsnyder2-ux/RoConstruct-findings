// from server: 100% by auto
// roc 2007-08 006f0dd0  unit: CXTPImageEditorPicker  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f0dd0
//
// 006f0dd0  8b81500a0000         mov eax, dword ptr [ecx + 0xa50]
// 006f0dd6  83f802               cmp eax, 2
// 006f0dd9  7506                 jne 0x6f0de1
// 006f0ddb  8b81540a0000         mov eax, dword ptr [ecx + 0xa54]
// 006f0de1  8981540a0000         mov dword ptr [ecx + 0xa54], eax
// 006f0de7  8b442404             mov eax, dword ptr [esp + 4]
// 006f0deb  0551dcffff           add eax, 0xffffdc51
// 006f0df0  8981500a0000         mov dword ptr [ecx + 0xa50], eax
// 006f0df6  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnButtonTool@CXTPImageEditorDlg@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
