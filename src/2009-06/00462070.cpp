// roc 2009-06 00462070  unit: Scintilla::CScintillaView  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462070
//
// 00462070  53                   push ebx
// 00462071  56                   push esi
// 00462072  57                   push edi
// 00462073  8bf9                 mov edi, ecx
// 00462075  8d7758               lea esi, [edi + 0x58]
// 00462078  6a01                 push 1
// 0046207a  8bce                 mov ecx, esi
// 0046207c  e87ff5ffff           call 0x461600
// 00462081  6a01                 push 1
// 00462083  8bce                 mov ecx, esi
// 00462085  8bd8                 mov ebx, eax
// 00462087  e8a4f5ffff           call 0x461630
// 0046208c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00462090  3bd8                 cmp ebx, eax
// 00462092  7412                 je 0x4620a6
// 00462094  8b01                 mov eax, dword ptr [ecx]
// 00462096  8b4074               mov eax, dword ptr [eax + 0x74]
// 00462099  836014fb             and dword ptr [eax + 0x14], 0xfffffffb
// 0046209d  8b11                 mov edx, dword ptr [ecx]
// 0046209f  8b4274               mov eax, dword ptr [edx + 0x74]
// 004620a2  83481401             or dword ptr [eax + 0x14], 1
// 004620a6  51                   push ecx
// 004620a7  8bcf                 mov ecx, edi
// 004620a9  e8a0772b00           call 0x71984e
// 004620ae  5f                   pop edi
// 004620af  5e                   pop esi
// 004620b0  5b                   pop ebx
// 004620b1  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnPreparePrinting@CScintillaView@@MAEHPAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
