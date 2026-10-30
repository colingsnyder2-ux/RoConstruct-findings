// roc 2010-06 0046ff80  unit: Scintilla::CScintillaView  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046ff80
//
// 0046ff80  8b442404             mov eax, dword ptr [esp + 4]
// 0046ff84  83ec10               sub esp, 0x10
// 0046ff87  56                   push esi
// 0046ff88  50                   push eax
// 0046ff89  8bf1                 mov esi, ecx
// 0046ff8b  e82c853300           call 0x7a84bc
// 0046ff90  83f8ff               cmp eax, -1
// 0046ff93  7509                 jne 0x46ff9e
// 0046ff95  0bc0                 or eax, eax
// 0046ff97  5e                   pop esi
// 0046ff98  83c410               add esp, 0x10
// 0046ff9b  c20400               ret 4
// 0046ff9e  6a00                 push 0
// 0046ffa0  6a00                 push 0
// 0046ffa2  6a00                 push 0
// 0046ffa4  56                   push esi
// 0046ffa5  8d4c2414             lea ecx, [esp + 0x14]
// 0046ffa9  51                   push ecx
// 0046ffaa  6800000150           push 0x50010000
// 0046ffaf  8d4e58               lea ecx, [esi + 0x58]
// 0046ffb2  e8a9e6ffff           call 0x46e660
// 0046ffb7  f7d8                 neg eax
// 0046ffb9  1bc0                 sbb eax, eax
// 0046ffbb  f7d8                 neg eax
// 0046ffbd  48                   dec eax
// 0046ffbe  5e                   pop esi
// 0046ffbf  83c410               add esp, 0x10
// 0046ffc2  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnCreate@CScintillaView@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
