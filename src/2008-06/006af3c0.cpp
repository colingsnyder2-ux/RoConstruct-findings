// roc 2008-06 006af3c0  unit: CXTPPaintManager  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006af3c0
//
// 006af3c0  53                   push ebx
// 006af3c1  55                   push ebp
// 006af3c2  56                   push esi
// 006af3c3  57                   push edi
// 006af3c4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006af3c8  57                   push edi
// 006af3c9  8bf1                 mov esi, ecx
// 006af3cb  e8a0950400           call 0x6f8970
// 006af3d0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 006af3d4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006af3d8  8b542420             mov edx, dword ptr [esp + 0x20]
// 006af3dc  83c404               add esp, 4
// 006af3df  8bd8                 mov ebx, eax
// 006af3e1  53                   push ebx
// 006af3e2  55                   push ebp
// 006af3e3  83ec10               sub esp, 0x10
// 006af3e6  8bc4                 mov eax, esp
// 006af3e8  8908                 mov dword ptr [eax], ecx
// 006af3ea  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006af3ee  895004               mov dword ptr [eax + 4], edx
// 006af3f1  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006af3f5  894808               mov dword ptr [eax + 8], ecx
// 006af3f8  57                   push edi
// 006af3f9  8bce                 mov ecx, esi
// 006af3fb  89500c               mov dword ptr [eax + 0xc], edx
// 006af3fe  e82dfdffff           call 0x6af130
// 006af403  837e6000             cmp dword ptr [esi + 0x60], 0
// 006af407  7439                 je 0x6af442
// 006af409  6a01                 push 1
// 006af40b  6a00                 push 0
// 006af40d  8d442420             lea eax, [esp + 0x20]
// 006af411  50                   push eax
// 006af412  ff15682d8000         call dword ptr [0x802d68]
// 006af418  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006af41c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006af420  53                   push ebx
// 006af421  55                   push ebp
// 006af422  83ec10               sub esp, 0x10
// 006af425  8bc4                 mov eax, esp
// 006af427  8908                 mov dword ptr [eax], ecx
// 006af429  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006af42d  895004               mov dword ptr [eax + 4], edx
// 006af430  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006af434  894808               mov dword ptr [eax + 8], ecx
// 006af437  57                   push edi
// 006af438  8bce                 mov ecx, esi
// 006af43a  89500c               mov dword ptr [eax + 0xc], edx
// 006af43d  e8eefcffff           call 0x6af130
// 006af442  5f                   pop edi
// 006af443  5e                   pop esi
// 006af444  5d                   pop ebp
// 006af445  5b                   pop ebx
// 006af446  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawCheckMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
