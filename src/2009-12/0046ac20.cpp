// roc 2009-12 0046ac20  unit: Scintilla::CScintillaView  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046ac20
//
// 0046ac20  53                   push ebx
// 0046ac21  56                   push esi
// 0046ac22  57                   push edi
// 0046ac23  8bf9                 mov edi, ecx
// 0046ac25  8d7758               lea esi, [edi + 0x58]
// 0046ac28  6a01                 push 1
// 0046ac2a  8bce                 mov ecx, esi
// 0046ac2c  e86ff5ffff           call 0x46a1a0
// 0046ac31  6a01                 push 1
// 0046ac33  8bce                 mov ecx, esi
// 0046ac35  8bd8                 mov ebx, eax
// 0046ac37  e894f5ffff           call 0x46a1d0
// 0046ac3c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046ac40  3bd8                 cmp ebx, eax
// 0046ac42  7412                 je 0x46ac56
// 0046ac44  8b01                 mov eax, dword ptr [ecx]
// 0046ac46  8b4074               mov eax, dword ptr [eax + 0x74]
// 0046ac49  836014fb             and dword ptr [eax + 0x14], 0xfffffffb
// 0046ac4d  8b11                 mov edx, dword ptr [ecx]
// 0046ac4f  8b4274               mov eax, dword ptr [edx + 0x74]
// 0046ac52  83481401             or dword ptr [eax + 0x14], 1
// 0046ac56  51                   push ecx
// 0046ac57  8bcf                 mov ecx, edi
// 0046ac59  e8249a3800           call 0x7f4682
// 0046ac5e  5f                   pop edi
// 0046ac5f  5e                   pop esi
// 0046ac60  5b                   pop ebx
// 0046ac61  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnPreparePrinting@CScintillaView@@MAEHPAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
