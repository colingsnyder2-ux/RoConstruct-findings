// roc 2007-08 006f1b10  unit: CXTPImageEditorDlg::CDlgToolBar  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f1b10
//
// 006f1b10  56                   push esi
// 006f1b11  8bf1                 mov esi, ecx
// 006f1b13  e8c2eaf3ff           call 0x6305da
// 006f1b18  33c0                 xor eax, eax
// 006f1b1a  894654               mov dword ptr [esi + 0x54], eax
// 006f1b1d  894658               mov dword ptr [esi + 0x58], eax
// 006f1b20  c7060cb47d00         mov dword ptr [esi], 0x7db40c
// 006f1b26  8bc6                 mov eax, esi
// 006f1b28  5e                   pop esi
// 006f1b29  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ??0CXTPImageEditorPicker@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
