// roc 2011-06 0048b030  unit: Scintilla::CScintillaView  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b030
//
// 0048b030  53                   push ebx
// 0048b031  56                   push esi
// 0048b032  57                   push edi
// 0048b033  8bf9                 mov edi, ecx
// 0048b035  8d7758               lea esi, [edi + 0x58]
// 0048b038  6a01                 push 1
// 0048b03a  8bce                 mov ecx, esi
// 0048b03c  e86ff5ffff           call 0x48a5b0
// 0048b041  6a01                 push 1
// 0048b043  8bce                 mov ecx, esi
// 0048b045  8bd8                 mov ebx, eax
// 0048b047  e894f5ffff           call 0x48a5e0
// 0048b04c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048b050  3bd8                 cmp ebx, eax
// 0048b052  7412                 je 0x48b066
// 0048b054  8b01                 mov eax, dword ptr [ecx]
// 0048b056  8b4074               mov eax, dword ptr [eax + 0x74]
// 0048b059  836014fb             and dword ptr [eax + 0x14], 0xfffffffb
// 0048b05d  8b11                 mov edx, dword ptr [ecx]
// 0048b05f  8b4274               mov eax, dword ptr [edx + 0x74]
// 0048b062  83481401             or dword ptr [eax + 0x14], 1
// 0048b066  51                   push ecx
// 0048b067  8bcf                 mov ecx, edi
// 0048b069  e848fe3700           call 0x80aeb6
// 0048b06e  5f                   pop edi
// 0048b06f  5e                   pop esi
// 0048b070  5b                   pop ebx
// 0048b071  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnPreparePrinting@CScintillaView@@MAEHPAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
