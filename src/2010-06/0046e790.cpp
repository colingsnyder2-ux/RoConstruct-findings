// roc 2010-06 0046e790  unit: Scintilla::CScintillaView  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e790
//
// 0046e790  56                   push esi
// 0046e791  8b742408             mov esi, dword ptr [esp + 8]
// 0046e795  57                   push edi
// 0046e796  8b3e                 mov edi, dword ptr [esi]
// 0046e798  6a01                 push 1
// 0046e79a  83c158               add ecx, 0x58
// 0046e79d  e84efaffff           call 0x46e1f0
// 0046e7a2  f7d8                 neg eax
// 0046e7a4  1bc0                 sbb eax, eax
// 0046e7a6  f7d8                 neg eax
// 0046e7a8  50                   push eax
// 0046e7a9  8b07                 mov eax, dword ptr [edi]
// 0046e7ab  8bce                 mov ecx, esi
// 0046e7ad  ffd0                 call eax
// 0046e7af  5f                   pop edi
// 0046e7b0  5e                   pop esi
// 0046e7b1  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedText@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
