// roc 2010-06 0046e720  unit: Scintilla::CScintillaView  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e720
//
// 0046e720  53                   push ebx
// 0046e721  56                   push esi
// 0046e722  57                   push edi
// 0046e723  8bf9                 mov edi, ecx
// 0046e725  8d7758               lea esi, [edi + 0x58]
// 0046e728  6a01                 push 1
// 0046e72a  8bce                 mov ecx, esi
// 0046e72c  e86ff5ffff           call 0x46dca0
// 0046e731  6a01                 push 1
// 0046e733  8bce                 mov ecx, esi
// 0046e735  8bd8                 mov ebx, eax
// 0046e737  e894f5ffff           call 0x46dcd0
// 0046e73c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046e740  3bd8                 cmp ebx, eax
// 0046e742  7412                 je 0x46e756
// 0046e744  8b01                 mov eax, dword ptr [ecx]
// 0046e746  8b4074               mov eax, dword ptr [eax + 0x74]
// 0046e749  836014fb             and dword ptr [eax + 0x14], 0xfffffffb
// 0046e74d  8b11                 mov edx, dword ptr [ecx]
// 0046e74f  8b4274               mov eax, dword ptr [edx + 0x74]
// 0046e752  83481401             or dword ptr [eax + 0x14], 1
// 0046e756  51                   push ecx
// 0046e757  8bcf                 mov ecx, edi
// 0046e759  e864a03300           call 0x7a87c2
// 0046e75e  5f                   pop edi
// 0046e75f  5e                   pop esi
// 0046e760  5b                   pop ebx
// 0046e761  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnPreparePrinting@CScintillaView@@MAEHPAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
