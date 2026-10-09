// roc 2012-06 0049f560  unit: Scintilla::CScintillaView  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049f560
//
// 0049f560  83ec10               sub esp, 0x10
// 0049f563  56                   push esi
// 0049f564  8bf1                 mov esi, ecx
// 0049f566  e873314e00           call 0x9826de
// 0049f56b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0049f56e  8d442404             lea eax, [esp + 4]
// 0049f572  50                   push eax
// 0049f573  51                   push ecx
// 0049f574  ff15d83ab200         call dword ptr [0xb23ad8]
// 0049f57a  8b442408             mov eax, dword ptr [esp + 8]
// 0049f57e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0049f582  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049f586  6a01                 push 1
// 0049f588  2bd0                 sub edx, eax
// 0049f58a  52                   push edx
// 0049f58b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0049f58f  2bd1                 sub edx, ecx
// 0049f591  52                   push edx
// 0049f592  50                   push eax
// 0049f593  51                   push ecx
// 0049f594  8d4e58               lea ecx, [esi + 0x58]
// 0049f597  e83e2f4e00           call 0x9824da
// 0049f59c  5e                   pop esi
// 0049f59d  83c410               add esp, 0x10
// 0049f5a0  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnSize@CScintillaView@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
