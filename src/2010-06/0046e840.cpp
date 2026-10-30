// roc 2010-06 0046e840  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e840
//
// 0046e840  56                   push esi
// 0046e841  8b742408             mov esi, dword ptr [esp + 8]
// 0046e845  57                   push edi
// 0046e846  8b3e                 mov edi, dword ptr [esi]
// 0046e848  6a01                 push 1
// 0046e84a  83c158               add ecx, 0x58
// 0046e84d  e8bef7ffff           call 0x46e010
// 0046e852  50                   push eax
// 0046e853  8b07                 mov eax, dword ptr [edi]
// 0046e855  8bce                 mov ecx, esi
// 0046e857  ffd0                 call eax
// 0046e859  5f                   pop edi
// 0046e85a  5e                   pop esi
// 0046e85b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
