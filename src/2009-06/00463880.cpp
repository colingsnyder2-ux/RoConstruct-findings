// roc 2009-06 00463880  unit: Scintilla::CScintillaView  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00463880
//
// 00463880  83ec10               sub esp, 0x10
// 00463883  56                   push esi
// 00463884  8bf1                 mov esi, ecx
// 00463886  e87d572b00           call 0x719008
// 0046388b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0046388e  8d442404             lea eax, [esp + 4]
// 00463892  50                   push eax
// 00463893  51                   push ecx
// 00463894  ff1514ee8900         call dword ptr [0x89ee14]
// 0046389a  8b442408             mov eax, dword ptr [esp + 8]
// 0046389e  8b542410             mov edx, dword ptr [esp + 0x10]
// 004638a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004638a6  6a01                 push 1
// 004638a8  2bd0                 sub edx, eax
// 004638aa  52                   push edx
// 004638ab  8b542414             mov edx, dword ptr [esp + 0x14]
// 004638af  2bd1                 sub edx, ecx
// 004638b1  52                   push edx
// 004638b2  50                   push eax
// 004638b3  51                   push ecx
// 004638b4  8d4e58               lea ecx, [esi + 0x58]
// 004638b7  e84e552b00           call 0x718e0a
// 004638bc  5e                   pop esi
// 004638bd  83c410               add esp, 0x10
// 004638c0  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnSize@CScintillaView@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
