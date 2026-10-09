// roc 2012-06 0049ddb0  unit: Scintilla::CScintillaView  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049ddb0
//
// 0049ddb0  56                   push esi
// 0049ddb1  8b742408             mov esi, dword ptr [esp + 8]
// 0049ddb5  57                   push edi
// 0049ddb6  8b3e                 mov edi, dword ptr [esi]
// 0049ddb8  6a01                 push 1
// 0049ddba  83c158               add ecx, 0x58
// 0049ddbd  e86efaffff           call 0x49d830
// 0049ddc2  f7d8                 neg eax
// 0049ddc4  1bc0                 sbb eax, eax
// 0049ddc6  f7d8                 neg eax
// 0049ddc8  50                   push eax
// 0049ddc9  8b07                 mov eax, dword ptr [edi]
// 0049ddcb  8bce                 mov ecx, esi
// 0049ddcd  ffd0                 call eax
// 0049ddcf  5f                   pop edi
// 0049ddd0  5e                   pop esi
// 0049ddd1  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedText@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
