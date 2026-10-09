// roc 2007-03 006dfe90  unit: seg_006d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dfe90
//
// 006dfe90  8b442404             mov eax, dword ptr [esp + 4]
// 006dfe94  8b10                 mov edx, dword ptr [eax]
// 006dfe96  53                   push ebx
// 006dfe97  56                   push esi
// 006dfe98  8b7004               mov esi, dword ptr [eax + 4]
// 006dfe9b  33db                 xor ebx, ebx
// 006dfe9d  81eeaf230000         sub esi, 0x23af
// 006dfea3  39b1500a0000         cmp dword ptr [ecx + 0xa50], esi
// 006dfea9  8bc8                 mov ecx, eax
// 006dfeab  8b4204               mov eax, dword ptr [edx + 4]
// 006dfeae  0f94c3               sete bl
// 006dfeb1  53                   push ebx
// 006dfeb2  ffd0                 call eax
// 006dfeb4  5e                   pop esi
// 006dfeb5  5b                   pop ebx
// 006dfeb6  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnUpdateButtonTool@CXTPImageEditorDlg@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
