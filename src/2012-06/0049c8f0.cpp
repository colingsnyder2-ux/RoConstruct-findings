// roc 2012-06 0049c8f0  unit: Scintilla::CScintillaCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049c8f0
//
// 0049c8f0  56                   push esi
// 0049c8f1  8bf1                 mov esi, ecx
// 0049c8f3  e8ce604e00           call 0x9829c6
// 0049c8f8  33c0                 xor eax, eax
// 0049c8fa  894654               mov dword ptr [esi + 0x54], eax
// 0049c8fd  894658               mov dword ptr [esi + 0x58], eax
// 0049c900  c70684fcb500         mov dword ptr [esi], 0xb5fc84
// 0049c906  8bc6                 mov eax, esi
// 0049c908  5e                   pop esi
// 0049c909  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPImageEditor.cpp (function ??0CXTPImageEditorPicker@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPImageEditor.cpp
