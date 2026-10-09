// roc 2010-06 0046e860  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e860
//
// 0046e860  56                   push esi
// 0046e861  8b742408             mov esi, dword ptr [esp + 8]
// 0046e865  57                   push edi
// 0046e866  8b3e                 mov edi, dword ptr [esi]
// 0046e868  6a01                 push 1
// 0046e86a  83c158               add ecx, 0x58
// 0046e86d  e8feecffff           call 0x46d570
// 0046e872  50                   push eax
// 0046e873  8b07                 mov eax, dword ptr [edi]
// 0046e875  8bce                 mov ecx, esi
// 0046e877  ffd0                 call eax
// 0046e879  5f                   pop edi
// 0046e87a  5e                   pop esi
// 0046e87b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
