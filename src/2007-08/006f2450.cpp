// from server: 100% by auto
// roc 2007-08 006f2450  unit: CXTPImageEditorDlg  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f2450
//
// 006f2450  53                   push ebx
// 006f2451  8bc1                 mov eax, ecx
// 006f2453  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f2457  8b11                 mov edx, dword ptr [ecx]
// 006f2459  33db                 xor ebx, ebx
// 006f245b  3998a0090000         cmp dword ptr [eax + 0x9a0], ebx
// 006f2461  8b02                 mov eax, dword ptr [edx]
// 006f2463  0f95c3               setne bl
// 006f2466  53                   push ebx
// 006f2467  ffd0                 call eax
// 006f2469  5b                   pop ebx
// 006f246a  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnUpdateButtonUndo@CXTPImageEditorDlg@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
