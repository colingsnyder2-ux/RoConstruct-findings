// roc 2009-12 0046ac90  unit: Scintilla::CScintillaView  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046ac90
//
// 0046ac90  56                   push esi
// 0046ac91  8b742408             mov esi, dword ptr [esp + 8]
// 0046ac95  57                   push edi
// 0046ac96  8b3e                 mov edi, dword ptr [esi]
// 0046ac98  6a01                 push 1
// 0046ac9a  83c158               add ecx, 0x58
// 0046ac9d  e84efaffff           call 0x46a6f0
// 0046aca2  f7d8                 neg eax
// 0046aca4  1bc0                 sbb eax, eax
// 0046aca6  f7d8                 neg eax
// 0046aca8  50                   push eax
// 0046aca9  8b07                 mov eax, dword ptr [edi]
// 0046acab  8bce                 mov ecx, esi
// 0046acad  ffd0                 call eax
// 0046acaf  5f                   pop edi
// 0046acb0  5e                   pop esi
// 0046acb1  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedText@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
