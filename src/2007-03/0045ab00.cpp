// roc 2007-03 0045ab00  unit: seg_00450000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045ab00
//
// 0045ab00  56                   push esi
// 0045ab01  8b742408             mov esi, dword ptr [esp + 8]
// 0045ab05  57                   push edi
// 0045ab06  8b3e                 mov edi, dword ptr [esi]
// 0045ab08  6a01                 push 1
// 0045ab0a  83c158               add ecx, 0x58
// 0045ab0d  e8bef7ffff           call 0x45a2d0
// 0045ab12  50                   push eax
// 0045ab13  8b07                 mov eax, dword ptr [edi]
// 0045ab15  8bce                 mov ecx, esi
// 0045ab17  ffd0                 call eax
// 0045ab19  5f                   pop edi
// 0045ab1a  5e                   pop esi
// 0045ab1b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
