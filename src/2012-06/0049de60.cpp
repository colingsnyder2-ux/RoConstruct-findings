// roc 2012-06 0049de60  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049de60
//
// 0049de60  56                   push esi
// 0049de61  8b742408             mov esi, dword ptr [esp + 8]
// 0049de65  57                   push edi
// 0049de66  8b3e                 mov edi, dword ptr [esi]
// 0049de68  6a01                 push 1
// 0049de6a  83c158               add ecx, 0x58
// 0049de6d  e8def7ffff           call 0x49d650
// 0049de72  50                   push eax
// 0049de73  8b07                 mov eax, dword ptr [edi]
// 0049de75  8bce                 mov ecx, esi
// 0049de77  ffd0                 call eax
// 0049de79  5f                   pop edi
// 0049de7a  5e                   pop esi
// 0049de7b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
