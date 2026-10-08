// roc 2010-06 007ae560  unit: CXTPPaintManager  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ae560
//
// 007ae560  53                   push ebx
// 007ae561  55                   push ebp
// 007ae562  56                   push esi
// 007ae563  57                   push edi
// 007ae564  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007ae568  57                   push edi
// 007ae569  8bf1                 mov esi, ecx
// 007ae56b  e8e01b0500           call 0x800150
// 007ae570  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007ae574  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007ae578  8b542420             mov edx, dword ptr [esp + 0x20]
// 007ae57c  83c404               add esp, 4
// 007ae57f  8bd8                 mov ebx, eax
// 007ae581  53                   push ebx
// 007ae582  55                   push ebp
// 007ae583  83ec10               sub esp, 0x10
// 007ae586  8bc4                 mov eax, esp
// 007ae588  8908                 mov dword ptr [eax], ecx
// 007ae58a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007ae58e  895004               mov dword ptr [eax + 4], edx
// 007ae591  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007ae595  894808               mov dword ptr [eax + 8], ecx
// 007ae598  57                   push edi
// 007ae599  8bce                 mov ecx, esi
// 007ae59b  89500c               mov dword ptr [eax + 0xc], edx
// 007ae59e  e82dfdffff           call 0x7ae2d0
// 007ae5a3  837e6000             cmp dword ptr [esi + 0x60], 0
// 007ae5a7  7439                 je 0x7ae5e2
// 007ae5a9  6a01                 push 1
// 007ae5ab  6a00                 push 0
// 007ae5ad  8d442420             lea eax, [esp + 0x20]
// 007ae5b1  50                   push eax
// 007ae5b2  ff1540bc9e00         call dword ptr [0x9ebc40]
// 007ae5b8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ae5bc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007ae5c0  53                   push ebx
// 007ae5c1  55                   push ebp
// 007ae5c2  83ec10               sub esp, 0x10
// 007ae5c5  8bc4                 mov eax, esp
// 007ae5c7  8908                 mov dword ptr [eax], ecx
// 007ae5c9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007ae5cd  895004               mov dword ptr [eax + 4], edx
// 007ae5d0  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007ae5d4  894808               mov dword ptr [eax + 8], ecx
// 007ae5d7  57                   push edi
// 007ae5d8  8bce                 mov ecx, esi
// 007ae5da  89500c               mov dword ptr [eax + 0xc], edx
// 007ae5dd  e8eefcffff           call 0x7ae2d0
// 007ae5e2  5f                   pop edi
// 007ae5e3  5e                   pop esi
// 007ae5e4  5d                   pop ebp
// 007ae5e5  5b                   pop ebx
// 007ae5e6  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawCheckMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
