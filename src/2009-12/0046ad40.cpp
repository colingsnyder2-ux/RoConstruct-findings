// roc 2009-12 0046ad40  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046ad40
//
// 0046ad40  56                   push esi
// 0046ad41  8b742408             mov esi, dword ptr [esp + 8]
// 0046ad45  57                   push edi
// 0046ad46  8b3e                 mov edi, dword ptr [esi]
// 0046ad48  6a01                 push 1
// 0046ad4a  83c158               add ecx, 0x58
// 0046ad4d  e8bef7ffff           call 0x46a510
// 0046ad52  50                   push eax
// 0046ad53  8b07                 mov eax, dword ptr [edi]
// 0046ad55  8bce                 mov ecx, esi
// 0046ad57  ffd0                 call eax
// 0046ad59  5f                   pop edi
// 0046ad5a  5e                   pop esi
// 0046ad5b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
