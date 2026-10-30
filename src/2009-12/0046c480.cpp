// roc 2009-12 0046c480  unit: Scintilla::CScintillaView  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046c480
//
// 0046c480  8b442404             mov eax, dword ptr [esp + 4]
// 0046c484  83ec10               sub esp, 0x10
// 0046c487  56                   push esi
// 0046c488  50                   push eax
// 0046c489  8bf1                 mov esi, ecx
// 0046c48b  e8ec7e3800           call 0x7f437c
// 0046c490  83f8ff               cmp eax, -1
// 0046c493  7509                 jne 0x46c49e
// 0046c495  0bc0                 or eax, eax
// 0046c497  5e                   pop esi
// 0046c498  83c410               add esp, 0x10
// 0046c49b  c20400               ret 4
// 0046c49e  6a00                 push 0
// 0046c4a0  6a00                 push 0
// 0046c4a2  6a00                 push 0
// 0046c4a4  56                   push esi
// 0046c4a5  8d4c2414             lea ecx, [esp + 0x14]
// 0046c4a9  51                   push ecx
// 0046c4aa  6800000150           push 0x50010000
// 0046c4af  8d4e58               lea ecx, [esi + 0x58]
// 0046c4b2  e8a9e6ffff           call 0x46ab60
// 0046c4b7  f7d8                 neg eax
// 0046c4b9  1bc0                 sbb eax, eax
// 0046c4bb  f7d8                 neg eax
// 0046c4bd  48                   dec eax
// 0046c4be  5e                   pop esi
// 0046c4bf  83c410               add esp, 0x10
// 0046c4c2  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnCreate@CScintillaView@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
