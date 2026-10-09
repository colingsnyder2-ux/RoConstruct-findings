// roc 2008-06 00461400  unit: Scintilla::CScintillaView  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461400
//
// 00461400  53                   push ebx
// 00461401  56                   push esi
// 00461402  57                   push edi
// 00461403  8bf9                 mov edi, ecx
// 00461405  8d7758               lea esi, [edi + 0x58]
// 00461408  6a01                 push 1
// 0046140a  8bce                 mov ecx, esi
// 0046140c  e87ff5ffff           call 0x460990
// 00461411  6a01                 push 1
// 00461413  8bce                 mov ecx, esi
// 00461415  8bd8                 mov ebx, eax
// 00461417  e8a4f5ffff           call 0x4609c0
// 0046141c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00461420  3bd8                 cmp ebx, eax
// 00461422  7412                 je 0x461436
// 00461424  8b01                 mov eax, dword ptr [ecx]
// 00461426  8b4074               mov eax, dword ptr [eax + 0x74]
// 00461429  836014fb             and dword ptr [eax + 0x14], 0xfffffffb
// 0046142d  8b11                 mov edx, dword ptr [ecx]
// 0046142f  8b4274               mov eax, dword ptr [edx + 0x74]
// 00461432  83481401             or dword ptr [eax + 0x14], 1
// 00461436  51                   push ecx
// 00461437  8bcf                 mov ecx, edi
// 00461439  e880ff2300           call 0x6a13be
// 0046143e  5f                   pop edi
// 0046143f  5e                   pop esi
// 00461440  5b                   pop ebx
// 00461441  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnPreparePrinting@CScintillaView@@MAEHPAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
