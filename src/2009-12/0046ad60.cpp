// roc 2009-12 0046ad60  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046ad60
//
// 0046ad60  56                   push esi
// 0046ad61  8b742408             mov esi, dword ptr [esp + 8]
// 0046ad65  57                   push edi
// 0046ad66  8b3e                 mov edi, dword ptr [esi]
// 0046ad68  6a01                 push 1
// 0046ad6a  83c158               add ecx, 0x58
// 0046ad6d  e8feecffff           call 0x469a70
// 0046ad72  50                   push eax
// 0046ad73  8b07                 mov eax, dword ptr [edi]
// 0046ad75  8bce                 mov ecx, esi
// 0046ad77  ffd0                 call eax
// 0046ad79  5f                   pop edi
// 0046ad7a  5e                   pop esi
// 0046ad7b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
