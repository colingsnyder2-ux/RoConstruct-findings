// roc 2012-06 0049dd40  unit: Scintilla::CScintillaView  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049dd40
//
// 0049dd40  53                   push ebx
// 0049dd41  56                   push esi
// 0049dd42  57                   push edi
// 0049dd43  8bf9                 mov edi, ecx
// 0049dd45  8d7758               lea esi, [edi + 0x58]
// 0049dd48  6a01                 push 1
// 0049dd4a  8bce                 mov ecx, esi
// 0049dd4c  e88ff5ffff           call 0x49d2e0
// 0049dd51  6a01                 push 1
// 0049dd53  8bce                 mov ecx, esi
// 0049dd55  8bd8                 mov ebx, eax
// 0049dd57  e8b4f5ffff           call 0x49d310
// 0049dd5c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049dd60  3bd8                 cmp ebx, eax
// 0049dd62  7412                 je 0x49dd76
// 0049dd64  8b01                 mov eax, dword ptr [ecx]
// 0049dd66  8b4074               mov eax, dword ptr [eax + 0x74]
// 0049dd69  836014fb             and dword ptr [eax + 0x14], 0xfffffffb
// 0049dd6d  8b11                 mov edx, dword ptr [ecx]
// 0049dd6f  8b4274               mov eax, dword ptr [edx + 0x74]
// 0049dd72  83481401             or dword ptr [eax + 0x14], 1
// 0049dd76  51                   push ecx
// 0049dd77  8bcf                 mov ecx, edi
// 0049dd79  e8a6514e00           call 0x982f24
// 0049dd7e  5f                   pop edi
// 0049dd7f  5e                   pop esi
// 0049dd80  5b                   pop ebx
// 0049dd81  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnPreparePrinting@CScintillaView@@MAEHPAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
