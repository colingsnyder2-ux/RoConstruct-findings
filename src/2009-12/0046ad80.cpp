// roc 2009-12 0046ad80  unit: Scintilla::CScintillaView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046ad80
//
// 0046ad80  53                   push ebx
// 0046ad81  56                   push esi
// 0046ad82  57                   push edi
// 0046ad83  8d7158               lea esi, [ecx + 0x58]
// 0046ad86  6a01                 push 1
// 0046ad88  8bce                 mov ecx, esi
// 0046ad8a  e811f4ffff           call 0x46a1a0
// 0046ad8f  6a01                 push 1
// 0046ad91  8bce                 mov ecx, esi
// 0046ad93  8bf8                 mov edi, eax
// 0046ad95  e836f4ffff           call 0x46a1d0
// 0046ad9a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046ad9e  8b11                 mov edx, dword ptr [ecx]
// 0046ada0  33db                 xor ebx, ebx
// 0046ada2  3bf8                 cmp edi, eax
// 0046ada4  8b02                 mov eax, dword ptr [edx]
// 0046ada6  0f95c3               setne bl
// 0046ada9  53                   push ebx
// 0046adaa  ffd0                 call eax
// 0046adac  5f                   pop edi
// 0046adad  5e                   pop esi
// 0046adae  5b                   pop ebx
// 0046adaf  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedSel@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
