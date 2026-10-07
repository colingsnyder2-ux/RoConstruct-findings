// roc 2007-08 006f2470  unit: CXTPImageEditorDlg  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f2470
//
// 006f2470  53                   push ebx
// 006f2471  8bc1                 mov eax, ecx
// 006f2473  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f2477  8b11                 mov edx, dword ptr [ecx]
// 006f2479  33db                 xor ebx, ebx
// 006f247b  3998bc090000         cmp dword ptr [eax + 0x9bc], ebx
// 006f2481  8b02                 mov eax, dword ptr [edx]
// 006f2483  0f95c3               setne bl
// 006f2486  53                   push ebx
// 006f2487  ffd0                 call eax
// 006f2489  5b                   pop ebx
// 006f248a  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnUpdateButtonRedo@CXTPImageEditorDlg@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
