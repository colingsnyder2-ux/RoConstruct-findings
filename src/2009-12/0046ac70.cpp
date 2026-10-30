// roc 2009-12 0046ac70  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046ac70
//
// 0046ac70  56                   push esi
// 0046ac71  8b742408             mov esi, dword ptr [esp + 8]
// 0046ac75  57                   push edi
// 0046ac76  8b3e                 mov edi, dword ptr [esi]
// 0046ac78  6a01                 push 1
// 0046ac7a  83c158               add ecx, 0x58
// 0046ac7d  e85ef8ffff           call 0x46a4e0
// 0046ac82  50                   push eax
// 0046ac83  8b07                 mov eax, dword ptr [edi]
// 0046ac85  8bce                 mov ecx, esi
// 0046ac87  ffd0                 call eax
// 0046ac89  5f                   pop edi
// 0046ac8a  5e                   pop esi
// 0046ac8b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
