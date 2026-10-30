// roc 2007-03 0045aa50  unit: seg_00450000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045aa50
//
// 0045aa50  56                   push esi
// 0045aa51  8b742408             mov esi, dword ptr [esp + 8]
// 0045aa55  57                   push edi
// 0045aa56  8b3e                 mov edi, dword ptr [esi]
// 0045aa58  6a01                 push 1
// 0045aa5a  83c158               add ecx, 0x58
// 0045aa5d  e84efaffff           call 0x45a4b0
// 0045aa62  f7d8                 neg eax
// 0045aa64  1bc0                 sbb eax, eax
// 0045aa66  f7d8                 neg eax
// 0045aa68  50                   push eax
// 0045aa69  8b07                 mov eax, dword ptr [edi]
// 0045aa6b  8bce                 mov ecx, esi
// 0045aa6d  ffd0                 call eax
// 0045aa6f  5f                   pop edi
// 0045aa70  5e                   pop esi
// 0045aa71  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedText@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
