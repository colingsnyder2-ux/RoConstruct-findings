// roc 2008-06 00462c60  unit: Scintilla::CScintillaView  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00462c60
//
// 00462c60  8b442404             mov eax, dword ptr [esp + 4]
// 00462c64  83ec10               sub esp, 0x10
// 00462c67  56                   push esi
// 00462c68  50                   push eax
// 00462c69  8bf1                 mov esi, ecx
// 00462c6b  e872e42300           call 0x6a10e2
// 00462c70  83f8ff               cmp eax, -1
// 00462c73  7509                 jne 0x462c7e
// 00462c75  0bc0                 or eax, eax
// 00462c77  5e                   pop esi
// 00462c78  83c410               add esp, 0x10
// 00462c7b  c20400               ret 4
// 00462c7e  6a00                 push 0
// 00462c80  6a00                 push 0
// 00462c82  6a00                 push 0
// 00462c84  56                   push esi
// 00462c85  8d4c2414             lea ecx, [esp + 0x14]
// 00462c89  51                   push ecx
// 00462c8a  6800000150           push 0x50010000
// 00462c8f  8d4e58               lea ecx, [esi + 0x58]
// 00462c92  e8b9e6ffff           call 0x461350
// 00462c97  f7d8                 neg eax
// 00462c99  1bc0                 sbb eax, eax
// 00462c9b  f7d8                 neg eax
// 00462c9d  48                   dec eax
// 00462c9e  5e                   pop esi
// 00462c9f  83c410               add esp, 0x10
// 00462ca2  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnCreate@CScintillaView@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
