// from server: 100% by auto
// roc 2008-06 0076e130  unit: CXTPImageEditorPicker  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076e130
//
// 0076e130  8b442404             mov eax, dword ptr [esp + 4]
// 0076e134  8b10                 mov edx, dword ptr [eax]
// 0076e136  53                   push ebx
// 0076e137  56                   push esi
// 0076e138  8b7004               mov esi, dword ptr [eax + 4]
// 0076e13b  33db                 xor ebx, ebx
// 0076e13d  81eeaf230000         sub esi, 0x23af
// 0076e143  39b1580a0000         cmp dword ptr [ecx + 0xa58], esi
// 0076e149  8bc8                 mov ecx, eax
// 0076e14b  8b4204               mov eax, dword ptr [edx + 4]
// 0076e14e  0f94c3               sete bl
// 0076e151  53                   push ebx
// 0076e152  ffd0                 call eax
// 0076e154  5e                   pop esi
// 0076e155  5b                   pop ebx
// 0076e156  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?OnUpdateButtonTool@CXTPImageEditorDlg@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
