// from server: 100% by auto
// roc 2011-06 00489bc0  unit: Scintilla::CScintillaCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489bc0
//
// 00489bc0  56                   push esi
// 00489bc1  8bf1                 mov esi, ecx
// 00489bc3  e87e0d3800           call 0x80a946
// 00489bc8  33c0                 xor eax, eax
// 00489bca  894654               mov dword ptr [esi + 0x54], eax
// 00489bcd  894658               mov dword ptr [esi + 0x58], eax
// 00489bd0  c706c436a700         mov dword ptr [esi], 0xa736c4
// 00489bd6  8bc6                 mov eax, esi
// 00489bd8  5e                   pop esi
// 00489bd9  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPImageEditor.cpp (function ??0CXTPImageEditorPicker@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPImageEditor.cpp
