// roc 2008-06 00462c10  unit: Scintilla::CScintillaView  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00462c10
//
// 00462c10  83ec10               sub esp, 0x10
// 00462c13  56                   push esi
// 00462c14  8bf1                 mov esi, ecx
// 00462c16  e84de02300           call 0x6a0c68
// 00462c1b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00462c1e  8d442404             lea eax, [esp + 4]
// 00462c22  50                   push eax
// 00462c23  51                   push ecx
// 00462c24  ff15842d8000         call dword ptr [0x802d84]
// 00462c2a  8b442408             mov eax, dword ptr [esp + 8]
// 00462c2e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00462c32  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00462c36  6a01                 push 1
// 00462c38  2bd0                 sub edx, eax
// 00462c3a  52                   push edx
// 00462c3b  8b542414             mov edx, dword ptr [esp + 0x14]
// 00462c3f  2bd1                 sub edx, ecx
// 00462c41  52                   push edx
// 00462c42  50                   push eax
// 00462c43  51                   push ecx
// 00462c44  8d4e58               lea ecx, [esi + 0x58]
// 00462c47  e800de2300           call 0x6a0a4c
// 00462c4c  5e                   pop esi
// 00462c4d  83c410               add esp, 0x10
// 00462c50  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnSize@CScintillaView@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
