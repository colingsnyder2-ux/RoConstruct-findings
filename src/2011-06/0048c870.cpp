// roc 2011-06 0048c870  unit: Scintilla::CScintillaView  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048c870
//
// 0048c870  83ec10               sub esp, 0x10
// 0048c873  56                   push esi
// 0048c874  8bf1                 mov esi, ecx
// 0048c876  e8b3dd3700           call 0x80a62e
// 0048c87b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0048c87e  8d442404             lea eax, [esp + 4]
// 0048c882  50                   push eax
// 0048c883  51                   push ecx
// 0048c884  ff157c1ca400         call dword ptr [0xa41c7c]
// 0048c88a  8b442408             mov eax, dword ptr [esp + 8]
// 0048c88e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048c892  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048c896  6a01                 push 1
// 0048c898  2bd0                 sub edx, eax
// 0048c89a  52                   push edx
// 0048c89b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0048c89f  2bd1                 sub edx, ecx
// 0048c8a1  52                   push edx
// 0048c8a2  50                   push eax
// 0048c8a3  51                   push ecx
// 0048c8a4  8d4e58               lea ecx, [esi + 0x58]
// 0048c8a7  e884db3700           call 0x80a430
// 0048c8ac  5e                   pop esi
// 0048c8ad  83c410               add esp, 0x10
// 0048c8b0  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnSize@CScintillaView@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
