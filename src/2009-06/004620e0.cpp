// roc 2009-06 004620e0  unit: Scintilla::CScintillaView  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004620e0
//
// 004620e0  56                   push esi
// 004620e1  8b742408             mov esi, dword ptr [esp + 8]
// 004620e5  57                   push edi
// 004620e6  8b3e                 mov edi, dword ptr [esi]
// 004620e8  6a01                 push 1
// 004620ea  83c158               add ecx, 0x58
// 004620ed  e85efaffff           call 0x461b50
// 004620f2  f7d8                 neg eax
// 004620f4  1bc0                 sbb eax, eax
// 004620f6  f7d8                 neg eax
// 004620f8  50                   push eax
// 004620f9  8b07                 mov eax, dword ptr [edi]
// 004620fb  8bce                 mov ecx, esi
// 004620fd  ffd0                 call eax
// 004620ff  5f                   pop edi
// 00462100  5e                   pop esi
// 00462101  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedText@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
