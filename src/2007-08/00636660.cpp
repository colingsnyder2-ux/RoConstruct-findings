// from server: 100% by auto
// roc 2007-08 00636660  unit: CXTPControlComboBoxList  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636660
//
// 00636660  56                   push esi
// 00636661  8bf1                 mov esi, ecx
// 00636663  e8729fffff           call 0x6305da
// 00636668  33c0                 xor eax, eax
// 0063666a  894654               mov dword ptr [esi + 0x54], eax
// 0063666d  894658               mov dword ptr [esi + 0x58], eax
// 00636670  c7065c5d7c00         mov dword ptr [esi], 0x7c5d5c
// 00636676  8bc6                 mov eax, esi
// 00636678  5e                   pop esi
// 00636679  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ??0CXTPImageEditorPicker@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
