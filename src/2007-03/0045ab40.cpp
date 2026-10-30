// roc 2007-03 0045ab40  unit: seg_00450000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045ab40
//
// 0045ab40  53                   push ebx
// 0045ab41  56                   push esi
// 0045ab42  57                   push edi
// 0045ab43  8d7158               lea esi, [ecx + 0x58]
// 0045ab46  6a01                 push 1
// 0045ab48  8bce                 mov ecx, esi
// 0045ab4a  e811f4ffff           call 0x459f60
// 0045ab4f  6a01                 push 1
// 0045ab51  8bce                 mov ecx, esi
// 0045ab53  8bf8                 mov edi, eax
// 0045ab55  e836f4ffff           call 0x459f90
// 0045ab5a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045ab5e  8b11                 mov edx, dword ptr [ecx]
// 0045ab60  33db                 xor ebx, ebx
// 0045ab62  3bf8                 cmp edi, eax
// 0045ab64  8b02                 mov eax, dword ptr [edx]
// 0045ab66  0f95c3               setne bl
// 0045ab69  53                   push ebx
// 0045ab6a  ffd0                 call eax
// 0045ab6c  5f                   pop edi
// 0045ab6d  5e                   pop esi
// 0045ab6e  5b                   pop ebx
// 0045ab6f  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedSel@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
