// roc 2010-06 0046e880  unit: Scintilla::CScintillaView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e880
//
// 0046e880  53                   push ebx
// 0046e881  56                   push esi
// 0046e882  57                   push edi
// 0046e883  8d7158               lea esi, [ecx + 0x58]
// 0046e886  6a01                 push 1
// 0046e888  8bce                 mov ecx, esi
// 0046e88a  e811f4ffff           call 0x46dca0
// 0046e88f  6a01                 push 1
// 0046e891  8bce                 mov ecx, esi
// 0046e893  8bf8                 mov edi, eax
// 0046e895  e836f4ffff           call 0x46dcd0
// 0046e89a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046e89e  8b11                 mov edx, dword ptr [ecx]
// 0046e8a0  33db                 xor ebx, ebx
// 0046e8a2  3bf8                 cmp edi, eax
// 0046e8a4  8b02                 mov eax, dword ptr [edx]
// 0046e8a6  0f95c3               setne bl
// 0046e8a9  53                   push ebx
// 0046e8aa  ffd0                 call eax
// 0046e8ac  5f                   pop edi
// 0046e8ad  5e                   pop esi
// 0046e8ae  5b                   pop ebx
// 0046e8af  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedSel@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
