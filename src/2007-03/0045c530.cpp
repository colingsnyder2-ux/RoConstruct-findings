// roc 2007-03 0045c530  unit: seg_00450000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045c530
//
// 0045c530  8b442404             mov eax, dword ptr [esp + 4]
// 0045c534  83ec10               sub esp, 0x10
// 0045c537  56                   push esi
// 0045c538  50                   push eax
// 0045c539  8bf1                 mov esi, ecx
// 0045c53b  e894251c00           call 0x61ead4
// 0045c540  83f8ff               cmp eax, -1
// 0045c543  7509                 jne 0x45c54e
// 0045c545  0bc0                 or eax, eax
// 0045c547  5e                   pop esi
// 0045c548  83c410               add esp, 0x10
// 0045c54b  c20400               ret 4
// 0045c54e  6a00                 push 0
// 0045c550  6a00                 push 0
// 0045c552  6a00                 push 0
// 0045c554  56                   push esi
// 0045c555  8d4c2414             lea ecx, [esp + 0x14]
// 0045c559  51                   push ecx
// 0045c55a  6800000150           push 0x50010000
// 0045c55f  8d4e58               lea ecx, [esi + 0x58]
// 0045c562  e8c9e3ffff           call 0x45a930
// 0045c567  f7d8                 neg eax
// 0045c569  1bc0                 sbb eax, eax
// 0045c56b  f7d8                 neg eax
// 0045c56d  83e801               sub eax, 1
// 0045c570  5e                   pop esi
// 0045c571  83c410               add esp, 0x10
// 0045c574  c20400               ret 4
// library scintilla-mfc-1.20-vc8/ScintillaDocView.cpp (function ?OnCreate@CScintillaView@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20-vc8 ScintillaDocView.cpp
