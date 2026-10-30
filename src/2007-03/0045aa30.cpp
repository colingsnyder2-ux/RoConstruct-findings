// roc 2007-03 0045aa30  unit: seg_00450000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045aa30
//
// 0045aa30  56                   push esi
// 0045aa31  8b742408             mov esi, dword ptr [esp + 8]
// 0045aa35  57                   push edi
// 0045aa36  8b3e                 mov edi, dword ptr [esi]
// 0045aa38  6a01                 push 1
// 0045aa3a  83c158               add ecx, 0x58
// 0045aa3d  e85ef8ffff           call 0x45a2a0
// 0045aa42  50                   push eax
// 0045aa43  8b07                 mov eax, dword ptr [edi]
// 0045aa45  8bce                 mov ecx, esi
// 0045aa47  ffd0                 call eax
// 0045aa49  5f                   pop edi
// 0045aa4a  5e                   pop esi
// 0045aa4b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
