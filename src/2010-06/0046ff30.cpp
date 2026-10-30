// roc 2010-06 0046ff30  unit: Scintilla::CScintillaView  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046ff30
//
// 0046ff30  83ec10               sub esp, 0x10
// 0046ff33  56                   push esi
// 0046ff34  8bf1                 mov esi, ecx
// 0046ff36  e835803300           call 0x7a7f70
// 0046ff3b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0046ff3e  8d442404             lea eax, [esp + 4]
// 0046ff42  50                   push eax
// 0046ff43  51                   push ecx
// 0046ff44  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 0046ff4a  8b442408             mov eax, dword ptr [esp + 8]
// 0046ff4e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046ff52  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046ff56  6a01                 push 1
// 0046ff58  2bd0                 sub edx, eax
// 0046ff5a  52                   push edx
// 0046ff5b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0046ff5f  2bd1                 sub edx, ecx
// 0046ff61  52                   push edx
// 0046ff62  50                   push eax
// 0046ff63  51                   push ecx
// 0046ff64  8d4e58               lea ecx, [esi + 0x58]
// 0046ff67  e8067e3300           call 0x7a7d72
// 0046ff6c  5e                   pop esi
// 0046ff6d  83c410               add esp, 0x10
// 0046ff70  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnSize@CScintillaView@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
