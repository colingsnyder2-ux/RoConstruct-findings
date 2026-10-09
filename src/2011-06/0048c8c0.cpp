// roc 2011-06 0048c8c0  unit: Scintilla::CScintillaView  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048c8c0
//
// 0048c8c0  8b442404             mov eax, dword ptr [esp + 4]
// 0048c8c4  83ec10               sub esp, 0x10
// 0048c8c7  56                   push esi
// 0048c8c8  50                   push eax
// 0048c8c9  8bf1                 mov esi, ecx
// 0048c8cb  e8b0e23700           call 0x80ab80
// 0048c8d0  83f8ff               cmp eax, -1
// 0048c8d3  7509                 jne 0x48c8de
// 0048c8d5  0bc0                 or eax, eax
// 0048c8d7  5e                   pop esi
// 0048c8d8  83c410               add esp, 0x10
// 0048c8db  c20400               ret 4
// 0048c8de  6a00                 push 0
// 0048c8e0  6a00                 push 0
// 0048c8e2  6a00                 push 0
// 0048c8e4  56                   push esi
// 0048c8e5  8d4c2414             lea ecx, [esp + 0x14]
// 0048c8e9  51                   push ecx
// 0048c8ea  6800000150           push 0x50010000
// 0048c8ef  8d4e58               lea ecx, [esi + 0x58]
// 0048c8f2  e879e6ffff           call 0x48af70
// 0048c8f7  f7d8                 neg eax
// 0048c8f9  1bc0                 sbb eax, eax
// 0048c8fb  f7d8                 neg eax
// 0048c8fd  48                   dec eax
// 0048c8fe  5e                   pop esi
// 0048c8ff  83c410               add esp, 0x10
// 0048c902  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnCreate@CScintillaView@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
