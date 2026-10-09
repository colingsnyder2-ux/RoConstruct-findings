// roc 2008-06 00461520  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461520
//
// 00461520  56                   push esi
// 00461521  8b742408             mov esi, dword ptr [esp + 8]
// 00461525  57                   push edi
// 00461526  8b3e                 mov edi, dword ptr [esi]
// 00461528  6a01                 push 1
// 0046152a  83c158               add ecx, 0x58
// 0046152d  e8cef7ffff           call 0x460d00
// 00461532  50                   push eax
// 00461533  8b07                 mov eax, dword ptr [edi]
// 00461535  8bce                 mov ecx, esi
// 00461537  ffd0                 call eax
// 00461539  5f                   pop edi
// 0046153a  5e                   pop esi
// 0046153b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
