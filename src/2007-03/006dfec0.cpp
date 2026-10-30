// roc 2007-03 006dfec0  unit: seg_006d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dfec0
//
// 006dfec0  8b81500a0000         mov eax, dword ptr [ecx + 0xa50]
// 006dfec6  83f802               cmp eax, 2
// 006dfec9  7506                 jne 0x6dfed1
// 006dfecb  8b81540a0000         mov eax, dword ptr [ecx + 0xa54]
// 006dfed1  8981540a0000         mov dword ptr [ecx + 0xa54], eax
// 006dfed7  8b442404             mov eax, dword ptr [esp + 4]
// 006dfedb  0551dcffff           add eax, 0xffffdc51
// 006dfee0  8981500a0000         mov dword ptr [ecx + 0xa50], eax
// 006dfee6  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnButtonTool@CXTPImageEditorDlg@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
