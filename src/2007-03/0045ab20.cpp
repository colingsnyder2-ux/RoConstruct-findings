// roc 2007-03 0045ab20  unit: seg_00450000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045ab20
//
// 0045ab20  56                   push esi
// 0045ab21  8b742408             mov esi, dword ptr [esp + 8]
// 0045ab25  57                   push edi
// 0045ab26  8b3e                 mov edi, dword ptr [esi]
// 0045ab28  6a01                 push 1
// 0045ab2a  83c158               add ecx, 0x58
// 0045ab2d  e8feecffff           call 0x459830
// 0045ab32  50                   push eax
// 0045ab33  8b07                 mov eax, dword ptr [edi]
// 0045ab35  8bce                 mov ecx, esi
// 0045ab37  ffd0                 call eax
// 0045ab39  5f                   pop edi
// 0045ab3a  5e                   pop esi
// 0045ab3b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
