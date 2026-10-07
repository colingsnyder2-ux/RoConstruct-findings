// roc 2008-06 0076f6d0  unit: CXTPImageEditorDlg  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076f6d0
//
// 0076f6d0  53                   push ebx
// 0076f6d1  8bc1                 mov eax, ecx
// 0076f6d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0076f6d7  8b11                 mov edx, dword ptr [ecx]
// 0076f6d9  33db                 xor ebx, ebx
// 0076f6db  3998a8090000         cmp dword ptr [eax + 0x9a8], ebx
// 0076f6e1  8b02                 mov eax, dword ptr [edx]
// 0076f6e3  0f95c3               setne bl
// 0076f6e6  53                   push ebx
// 0076f6e7  ffd0                 call eax
// 0076f6e9  5b                   pop ebx
// 0076f6ea  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?OnUpdateButtonUndo@CXTPImageEditorDlg@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
