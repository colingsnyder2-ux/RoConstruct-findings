// roc 2009-06 004620c0  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004620c0
//
// 004620c0  56                   push esi
// 004620c1  8b742408             mov esi, dword ptr [esp + 8]
// 004620c5  57                   push edi
// 004620c6  8b3e                 mov edi, dword ptr [esi]
// 004620c8  6a01                 push 1
// 004620ca  83c158               add ecx, 0x58
// 004620cd  e86ef8ffff           call 0x461940
// 004620d2  50                   push eax
// 004620d3  8b07                 mov eax, dword ptr [edi]
// 004620d5  8bce                 mov ecx, esi
// 004620d7  ffd0                 call eax
// 004620d9  5f                   pop edi
// 004620da  5e                   pop esi
// 004620db  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
