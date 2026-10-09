// roc 2011-06 0048aab0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048aab0
//
// 0048aab0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048aab5  741e                 je 0x48aad5
// 0048aab7  8b442408             mov eax, dword ptr [esp + 8]
// 0048aabb  8b542404             mov edx, dword ptr [esp + 4]
// 0048aabf  50                   push eax
// 0048aac0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048aac3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048aac6  52                   push edx
// 0048aac7  6886080000           push 0x886
// 0048aacc  50                   push eax
// 0048aacd  ffd1                 call ecx
// 0048aacf  83c410               add esp, 0x10
// 0048aad2  c20c00               ret 0xc
// 0048aad5  8b542408             mov edx, dword ptr [esp + 8]
// 0048aad9  8b442404             mov eax, dword ptr [esp + 4]
// 0048aadd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048aae0  52                   push edx
// 0048aae1  50                   push eax
// 0048aae2  6886080000           push 0x886
// 0048aae7  51                   push ecx
// 0048aae8  ff15c019a400         call dword ptr [0xa419c0]
// 0048aaee  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetText@CScintillaCtrl@@QAEHHPADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
