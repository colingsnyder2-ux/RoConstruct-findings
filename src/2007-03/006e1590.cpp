// roc 2007-03 006e1590  unit: seg_006e0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e1590
//
// 006e1590  53                   push ebx
// 006e1591  8bc1                 mov eax, ecx
// 006e1593  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e1597  8b11                 mov edx, dword ptr [ecx]
// 006e1599  33db                 xor ebx, ebx
// 006e159b  3998bc090000         cmp dword ptr [eax + 0x9bc], ebx
// 006e15a1  8b02                 mov eax, dword ptr [edx]
// 006e15a3  0f95c3               setne bl
// 006e15a6  53                   push ebx
// 006e15a7  ffd0                 call eax
// 006e15a9  5b                   pop ebx
// 006e15aa  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnUpdateButtonRedo@CXTPImageEditorDlg@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
