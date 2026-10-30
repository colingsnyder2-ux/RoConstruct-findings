// roc 2011-06 0048b0a0  unit: Scintilla::CScintillaView  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b0a0
//
// 0048b0a0  56                   push esi
// 0048b0a1  8b742408             mov esi, dword ptr [esp + 8]
// 0048b0a5  57                   push edi
// 0048b0a6  8b3e                 mov edi, dword ptr [esi]
// 0048b0a8  6a01                 push 1
// 0048b0aa  83c158               add ecx, 0x58
// 0048b0ad  e84efaffff           call 0x48ab00
// 0048b0b2  f7d8                 neg eax
// 0048b0b4  1bc0                 sbb eax, eax
// 0048b0b6  f7d8                 neg eax
// 0048b0b8  50                   push eax
// 0048b0b9  8b07                 mov eax, dword ptr [edi]
// 0048b0bb  8bce                 mov ecx, esi
// 0048b0bd  ffd0                 call eax
// 0048b0bf  5f                   pop edi
// 0048b0c0  5e                   pop esi
// 0048b0c1  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedText@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
