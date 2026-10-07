// roc 2007-08 006f0da0  unit: CXTPImageEditorPicker  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f0da0
//
// 006f0da0  8b442404             mov eax, dword ptr [esp + 4]
// 006f0da4  8b10                 mov edx, dword ptr [eax]
// 006f0da6  53                   push ebx
// 006f0da7  56                   push esi
// 006f0da8  8b7004               mov esi, dword ptr [eax + 4]
// 006f0dab  33db                 xor ebx, ebx
// 006f0dad  81eeaf230000         sub esi, 0x23af
// 006f0db3  39b1500a0000         cmp dword ptr [ecx + 0xa50], esi
// 006f0db9  8bc8                 mov ecx, eax
// 006f0dbb  8b4204               mov eax, dword ptr [edx + 4]
// 006f0dbe  0f94c3               sete bl
// 006f0dc1  53                   push ebx
// 006f0dc2  ffd0                 call eax
// 006f0dc4  5e                   pop esi
// 006f0dc5  5b                   pop ebx
// 006f0dc6  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnUpdateButtonTool@CXTPImageEditorDlg@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
