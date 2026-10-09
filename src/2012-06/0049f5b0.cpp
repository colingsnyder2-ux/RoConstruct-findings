// roc 2012-06 0049f5b0  unit: Scintilla::CScintillaView  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049f5b0
//
// 0049f5b0  8b442404             mov eax, dword ptr [esp + 4]
// 0049f5b4  83ec10               sub esp, 0x10
// 0049f5b7  56                   push esi
// 0049f5b8  50                   push eax
// 0049f5b9  8bf1                 mov esi, ecx
// 0049f5bb  e846364e00           call 0x982c06
// 0049f5c0  83f8ff               cmp eax, -1
// 0049f5c3  7509                 jne 0x49f5ce
// 0049f5c5  0bc0                 or eax, eax
// 0049f5c7  5e                   pop esi
// 0049f5c8  83c410               add esp, 0x10
// 0049f5cb  c20400               ret 4
// 0049f5ce  6a00                 push 0
// 0049f5d0  6a00                 push 0
// 0049f5d2  6a00                 push 0
// 0049f5d4  56                   push esi
// 0049f5d5  8d4c2414             lea ecx, [esp + 0x14]
// 0049f5d9  51                   push ecx
// 0049f5da  6800000150           push 0x50010000
// 0049f5df  8d4e58               lea ecx, [esi + 0x58]
// 0049f5e2  e8b9e6ffff           call 0x49dca0
// 0049f5e7  f7d8                 neg eax
// 0049f5e9  1bc0                 sbb eax, eax
// 0049f5eb  f7d8                 neg eax
// 0049f5ed  48                   dec eax
// 0049f5ee  5e                   pop esi
// 0049f5ef  83c410               add esp, 0x10
// 0049f5f2  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnCreate@CScintillaView@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
