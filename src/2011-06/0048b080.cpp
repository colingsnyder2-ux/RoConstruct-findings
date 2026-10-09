// roc 2011-06 0048b080  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b080
//
// 0048b080  56                   push esi
// 0048b081  8b742408             mov esi, dword ptr [esp + 8]
// 0048b085  57                   push edi
// 0048b086  8b3e                 mov edi, dword ptr [esi]
// 0048b088  6a01                 push 1
// 0048b08a  83c158               add ecx, 0x58
// 0048b08d  e85ef8ffff           call 0x48a8f0
// 0048b092  50                   push eax
// 0048b093  8b07                 mov eax, dword ptr [edi]
// 0048b095  8bce                 mov ecx, esi
// 0048b097  ffd0                 call eax
// 0048b099  5f                   pop edi
// 0048b09a  5e                   pop esi
// 0048b09b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
