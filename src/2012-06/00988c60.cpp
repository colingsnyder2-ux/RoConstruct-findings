// roc 2012-06 00988c60  unit: CXTPPaintManager  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00988c60
//
// 00988c60  53                   push ebx
// 00988c61  55                   push ebp
// 00988c62  56                   push esi
// 00988c63  57                   push edi
// 00988c64  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00988c68  57                   push edi
// 00988c69  8bf1                 mov esi, ecx
// 00988c6b  e870d30400           call 0x9d5fe0
// 00988c70  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00988c74  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00988c78  8b542420             mov edx, dword ptr [esp + 0x20]
// 00988c7c  83c404               add esp, 4
// 00988c7f  8bd8                 mov ebx, eax
// 00988c81  53                   push ebx
// 00988c82  55                   push ebp
// 00988c83  83ec10               sub esp, 0x10
// 00988c86  8bc4                 mov eax, esp
// 00988c88  8908                 mov dword ptr [eax], ecx
// 00988c8a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00988c8e  895004               mov dword ptr [eax + 4], edx
// 00988c91  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00988c95  894808               mov dword ptr [eax + 8], ecx
// 00988c98  57                   push edi
// 00988c99  8bce                 mov ecx, esi
// 00988c9b  89500c               mov dword ptr [eax + 0xc], edx
// 00988c9e  e82dfdffff           call 0x9889d0
// 00988ca3  837e6000             cmp dword ptr [esi + 0x60], 0
// 00988ca7  7439                 je 0x988ce2
// 00988ca9  6a01                 push 1
// 00988cab  6a00                 push 0
// 00988cad  8d442420             lea eax, [esp + 0x20]
// 00988cb1  50                   push eax
// 00988cb2  ff15f43ab200         call dword ptr [0xb23af4]
// 00988cb8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00988cbc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00988cc0  53                   push ebx
// 00988cc1  55                   push ebp
// 00988cc2  83ec10               sub esp, 0x10
// 00988cc5  8bc4                 mov eax, esp
// 00988cc7  8908                 mov dword ptr [eax], ecx
// 00988cc9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00988ccd  895004               mov dword ptr [eax + 4], edx
// 00988cd0  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00988cd4  894808               mov dword ptr [eax + 8], ecx
// 00988cd7  57                   push edi
// 00988cd8  8bce                 mov ecx, esi
// 00988cda  89500c               mov dword ptr [eax + 0xc], edx
// 00988cdd  e8eefcffff           call 0x9889d0
// 00988ce2  5f                   pop edi
// 00988ce3  5e                   pop esi
// 00988ce4  5d                   pop ebp
// 00988ce5  5b                   pop ebx
// 00988ce6  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawCheckMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
