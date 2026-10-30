// from server: 100% by auto
// roc 2008-06 0076f6f0  unit: CXTPImageEditorDlg  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076f6f0
//
// 0076f6f0  53                   push ebx
// 0076f6f1  8bc1                 mov eax, ecx
// 0076f6f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0076f6f7  8b11                 mov edx, dword ptr [ecx]
// 0076f6f9  33db                 xor ebx, ebx
// 0076f6fb  3998c4090000         cmp dword ptr [eax + 0x9c4], ebx
// 0076f701  8b02                 mov eax, dword ptr [edx]
// 0076f703  0f95c3               setne bl
// 0076f706  53                   push ebx
// 0076f707  ffd0                 call eax
// 0076f709  5b                   pop ebx
// 0076f70a  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?OnUpdateButtonRedo@CXTPImageEditorDlg@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
