// from server: 100% by auto
// roc 2007-08 0045be10  unit: Scintilla::CScintillaCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045be10
//
// 0045be10  56                   push esi
// 0045be11  8bf1                 mov esi, ecx
// 0045be13  e8c2471d00           call 0x6305da
// 0045be18  33c0                 xor eax, eax
// 0045be1a  894654               mov dword ptr [esi + 0x54], eax
// 0045be1d  894658               mov dword ptr [esi + 0x58], eax
// 0045be20  c70634407900         mov dword ptr [esi], 0x794034
// 0045be26  8bc6                 mov eax, esi
// 0045be28  5e                   pop esi
// 0045be29  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ??0CXTPImageEditorPicker@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
