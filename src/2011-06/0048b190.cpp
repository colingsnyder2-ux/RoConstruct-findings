// roc 2011-06 0048b190  unit: Scintilla::CScintillaView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b190
//
// 0048b190  53                   push ebx
// 0048b191  56                   push esi
// 0048b192  57                   push edi
// 0048b193  8d7158               lea esi, [ecx + 0x58]
// 0048b196  6a01                 push 1
// 0048b198  8bce                 mov ecx, esi
// 0048b19a  e811f4ffff           call 0x48a5b0
// 0048b19f  6a01                 push 1
// 0048b1a1  8bce                 mov ecx, esi
// 0048b1a3  8bf8                 mov edi, eax
// 0048b1a5  e836f4ffff           call 0x48a5e0
// 0048b1aa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048b1ae  8b11                 mov edx, dword ptr [ecx]
// 0048b1b0  33db                 xor ebx, ebx
// 0048b1b2  3bf8                 cmp edi, eax
// 0048b1b4  8b02                 mov eax, dword ptr [edx]
// 0048b1b6  0f95c3               setne bl
// 0048b1b9  53                   push ebx
// 0048b1ba  ffd0                 call eax
// 0048b1bc  5f                   pop edi
// 0048b1bd  5e                   pop esi
// 0048b1be  5b                   pop ebx
// 0048b1bf  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedSel@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
