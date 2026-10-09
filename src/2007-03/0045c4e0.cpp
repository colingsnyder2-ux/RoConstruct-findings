// roc 2007-03 0045c4e0  unit: seg_00450000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045c4e0
//
// 0045c4e0  83ec10               sub esp, 0x10
// 0045c4e3  56                   push esi
// 0045c4e4  8bf1                 mov esi, ecx
// 0045c4e6  e8e7211c00           call 0x61e6d2
// 0045c4eb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0045c4ee  8d442404             lea eax, [esp + 4]
// 0045c4f2  50                   push eax
// 0045c4f3  51                   push ecx
// 0045c4f4  ff153ced7700         call dword ptr [0x77ed3c]
// 0045c4fa  8b442408             mov eax, dword ptr [esp + 8]
// 0045c4fe  8b542410             mov edx, dword ptr [esp + 0x10]
// 0045c502  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045c506  6a01                 push 1
// 0045c508  2bd0                 sub edx, eax
// 0045c50a  52                   push edx
// 0045c50b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0045c50f  2bd1                 sub edx, ecx
// 0045c511  52                   push edx
// 0045c512  50                   push eax
// 0045c513  51                   push ecx
// 0045c514  8d4e58               lea ecx, [esi + 0x58]
// 0045c517  e8a01f1c00           call 0x61e4bc
// 0045c51c  5e                   pop esi
// 0045c51d  83c410               add esp, 0x10
// 0045c520  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnSize@CScintillaView@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
