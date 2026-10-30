// roc 2009-06 004638d0  unit: Scintilla::CScintillaView  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004638d0
//
// 004638d0  8b442404             mov eax, dword ptr [esp + 4]
// 004638d4  83ec10               sub esp, 0x10
// 004638d7  56                   push esi
// 004638d8  50                   push eax
// 004638d9  8bf1                 mov esi, ecx
// 004638db  e86e5c2b00           call 0x71954e
// 004638e0  83f8ff               cmp eax, -1
// 004638e3  7509                 jne 0x4638ee
// 004638e5  0bc0                 or eax, eax
// 004638e7  5e                   pop esi
// 004638e8  83c410               add esp, 0x10
// 004638eb  c20400               ret 4
// 004638ee  6a00                 push 0
// 004638f0  6a00                 push 0
// 004638f2  6a00                 push 0
// 004638f4  56                   push esi
// 004638f5  8d4c2414             lea ecx, [esp + 0x14]
// 004638f9  51                   push ecx
// 004638fa  6800000150           push 0x50010000
// 004638ff  8d4e58               lea ecx, [esi + 0x58]
// 00463902  e8b9e6ffff           call 0x461fc0
// 00463907  f7d8                 neg eax
// 00463909  1bc0                 sbb eax, eax
// 0046390b  f7d8                 neg eax
// 0046390d  48                   dec eax
// 0046390e  5e                   pop esi
// 0046390f  83c410               add esp, 0x10
// 00463912  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnCreate@CScintillaView@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
