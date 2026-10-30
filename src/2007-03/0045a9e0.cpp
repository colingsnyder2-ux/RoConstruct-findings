// roc 2007-03 0045a9e0  unit: seg_00450000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a9e0
//
// 0045a9e0  53                   push ebx
// 0045a9e1  56                   push esi
// 0045a9e2  57                   push edi
// 0045a9e3  8bf9                 mov edi, ecx
// 0045a9e5  8d7758               lea esi, [edi + 0x58]
// 0045a9e8  6a01                 push 1
// 0045a9ea  8bce                 mov ecx, esi
// 0045a9ec  e86ff5ffff           call 0x459f60
// 0045a9f1  6a01                 push 1
// 0045a9f3  8bce                 mov ecx, esi
// 0045a9f5  8bd8                 mov ebx, eax
// 0045a9f7  e894f5ffff           call 0x459f90
// 0045a9fc  3bd8                 cmp ebx, eax
// 0045a9fe  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045aa02  7412                 je 0x45aa16
// 0045aa04  8b01                 mov eax, dword ptr [ecx]
// 0045aa06  8b4074               mov eax, dword ptr [eax + 0x74]
// 0045aa09  836014fb             and dword ptr [eax + 0x14], 0xfffffffb
// 0045aa0d  8b11                 mov edx, dword ptr [ecx]
// 0045aa0f  8b4274               mov eax, dword ptr [edx + 0x74]
// 0045aa12  83481401             or dword ptr [eax + 0x14], 1
// 0045aa16  51                   push ecx
// 0045aa17  8bcf                 mov ecx, edi
// 0045aa19  e862431c00           call 0x61ed80
// 0045aa1e  5f                   pop edi
// 0045aa1f  5e                   pop esi
// 0045aa20  5b                   pop ebx
// 0045aa21  c20400               ret 4
// library scintilla-mfc-1.20-vc8/ScintillaDocView.cpp (function ?OnPreparePrinting@CScintillaView@@MAEHPAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20-vc8 ScintillaDocView.cpp
