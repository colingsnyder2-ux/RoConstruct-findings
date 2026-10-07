// roc 2008-06 0076e160  unit: CXTPImageEditorPicker  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076e160
//
// 0076e160  8b81580a0000         mov eax, dword ptr [ecx + 0xa58]
// 0076e166  83f802               cmp eax, 2
// 0076e169  7506                 jne 0x76e171
// 0076e16b  8b815c0a0000         mov eax, dword ptr [ecx + 0xa5c]
// 0076e171  89815c0a0000         mov dword ptr [ecx + 0xa5c], eax
// 0076e177  8b442404             mov eax, dword ptr [esp + 4]
// 0076e17b  0551dcffff           add eax, 0xffffdc51
// 0076e180  8981580a0000         mov dword ptr [ecx + 0xa58], eax
// 0076e186  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?OnButtonTool@CXTPImageEditorDlg@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
