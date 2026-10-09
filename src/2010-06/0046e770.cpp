// roc 2010-06 0046e770  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e770
//
// 0046e770  56                   push esi
// 0046e771  8b742408             mov esi, dword ptr [esp + 8]
// 0046e775  57                   push edi
// 0046e776  8b3e                 mov edi, dword ptr [esi]
// 0046e778  6a01                 push 1
// 0046e77a  83c158               add ecx, 0x58
// 0046e77d  e85ef8ffff           call 0x46dfe0
// 0046e782  50                   push eax
// 0046e783  8b07                 mov eax, dword ptr [edi]
// 0046e785  8bce                 mov ecx, esi
// 0046e787  ffd0                 call eax
// 0046e789  5f                   pop edi
// 0046e78a  5e                   pop esi
// 0046e78b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
