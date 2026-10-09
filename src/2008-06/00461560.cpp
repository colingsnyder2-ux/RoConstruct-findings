// roc 2008-06 00461560  unit: Scintilla::CScintillaView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461560
//
// 00461560  53                   push ebx
// 00461561  56                   push esi
// 00461562  57                   push edi
// 00461563  8d7158               lea esi, [ecx + 0x58]
// 00461566  6a01                 push 1
// 00461568  8bce                 mov ecx, esi
// 0046156a  e821f4ffff           call 0x460990
// 0046156f  6a01                 push 1
// 00461571  8bce                 mov ecx, esi
// 00461573  8bf8                 mov edi, eax
// 00461575  e846f4ffff           call 0x4609c0
// 0046157a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046157e  8b11                 mov edx, dword ptr [ecx]
// 00461580  33db                 xor ebx, ebx
// 00461582  3bf8                 cmp edi, eax
// 00461584  8b02                 mov eax, dword ptr [edx]
// 00461586  0f95c3               setne bl
// 00461589  53                   push ebx
// 0046158a  ffd0                 call eax
// 0046158c  5f                   pop edi
// 0046158d  5e                   pop esi
// 0046158e  5b                   pop ebx
// 0046158f  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedSel@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
