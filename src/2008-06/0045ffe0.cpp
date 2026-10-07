// roc 2008-06 0045ffe0  unit: Scintilla::CScintillaCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ffe0
//
// 0045ffe0  56                   push esi
// 0045ffe1  8bf1                 mov esi, ecx
// 0045ffe3  e8a80e2400           call 0x6a0e90
// 0045ffe8  33c0                 xor eax, eax
// 0045ffea  894654               mov dword ptr [esi + 0x54], eax
// 0045ffed  894658               mov dword ptr [esi + 0x58], eax
// 0045fff0  c70654a78100         mov dword ptr [esi], 0x81a754
// 0045fff6  8bc6                 mov eax, esi
// 0045fff8  5e                   pop esi
// 0045fff9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ??0CXTPImageEditorPicker@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
