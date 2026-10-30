// roc 2007-03 006e1570  unit: seg_006e0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e1570
//
// 006e1570  53                   push ebx
// 006e1571  8bc1                 mov eax, ecx
// 006e1573  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e1577  8b11                 mov edx, dword ptr [ecx]
// 006e1579  33db                 xor ebx, ebx
// 006e157b  3998a0090000         cmp dword ptr [eax + 0x9a0], ebx
// 006e1581  8b02                 mov eax, dword ptr [edx]
// 006e1583  0f95c3               setne bl
// 006e1586  53                   push ebx
// 006e1587  ffd0                 call eax
// 006e1589  5b                   pop ebx
// 006e158a  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnUpdateButtonUndo@CXTPImageEditorDlg@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
