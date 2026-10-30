// roc 2009-06 00462190  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462190
//
// 00462190  56                   push esi
// 00462191  8b742408             mov esi, dword ptr [esp + 8]
// 00462195  57                   push edi
// 00462196  8b3e                 mov edi, dword ptr [esi]
// 00462198  6a01                 push 1
// 0046219a  83c158               add ecx, 0x58
// 0046219d  e8cef7ffff           call 0x461970
// 004621a2  50                   push eax
// 004621a3  8b07                 mov eax, dword ptr [edi]
// 004621a5  8bce                 mov ecx, esi
// 004621a7  ffd0                 call eax
// 004621a9  5f                   pop edi
// 004621aa  5e                   pop esi
// 004621ab  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
