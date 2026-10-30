// roc 2009-12 008b8a70  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b8a70
//
// 008b8a70  6aff                 push -1
// 008b8a72  6810359600           push 0x963510
// 008b8a77  64a100000000         mov eax, dword ptr fs:[0]
// 008b8a7d  50                   push eax
// 008b8a7e  83ec30               sub esp, 0x30
// 008b8a81  53                   push ebx
// 008b8a82  55                   push ebp
// 008b8a83  56                   push esi
// 008b8a84  57                   push edi
// 008b8a85  a10052b600           mov eax, dword ptr [0xb65200]
// 008b8a8a  33c4                 xor eax, esp
// 008b8a8c  50                   push eax
// 008b8a8d  8d442444             lea eax, [esp + 0x44]
// 008b8a91  64a300000000         mov dword ptr fs:[0], eax
// 008b8a97  8bf9                 mov edi, ecx
// 008b8a99  8b742458             mov esi, dword ptr [esp + 0x58]
// 008b8a9d  8bce                 mov ecx, esi
// 008b8a9f  33db                 xor ebx, ebx
// 008b8aa1  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008b8aa7  84c0                 test al, al
// 008b8aa9  7407                 je 0x8b8ab2
// 008b8aab  33c0                 xor eax, eax
// 008b8aad  e9f6000000           jmp 0x8b8ba8
// 008b8ab2  395c246c             cmp dword ptr [esp + 0x6c], ebx
// 008b8ab6  7471                 je 0x8b8b29
// 008b8ab8  81c78c000000         add edi, 0x8c
// 008b8abe  57                   push edi
// 008b8abf  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 008b8ac3  57                   push edi
// 008b8ac4  8d4c242c             lea ecx, [esp + 0x2c]
// 008b8ac8  e8932bf9ff           call 0x84b660
// 008b8acd  56                   push esi
// 008b8ace  8d442418             lea eax, [esp + 0x18]
// 008b8ad2  50                   push eax
// 008b8ad3  8bcf                 mov ecx, edi
// 008b8ad5  895c2454             mov dword ptr [esp + 0x54], ebx
// 008b8ad9  e8d228bbff           call 0x46b3b0
// 008b8ade  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008b8ae2  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 008b8ae6  3bdd                 cmp ebx, ebp
// 008b8ae8  7e35                 jle 0x8b8b1f
// 008b8aea  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008b8aee  8bc1                 mov eax, ecx
// 008b8af0  2b44245c             sub eax, dword ptr [esp + 0x5c]
// 008b8af4  6820890000           push 0x8920
// 008b8af9  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 008b8afd  99                   cdq 
// 008b8afe  2bc2                 sub eax, edx
// 008b8b00  d1f8                 sar eax, 1
// 008b8b02  2bc8                 sub ecx, eax
// 008b8b04  8bc1                 mov eax, ecx
// 008b8b06  89442460             mov dword ptr [esp + 0x60], eax
// 008b8b0a  8d4c2460             lea ecx, [esp + 0x60]
// 008b8b0e  2bc5                 sub eax, ebp
// 008b8b10  51                   push ecx
// 008b8b11  03c3                 add eax, ebx
// 008b8b13  56                   push esi
// 008b8b14  8bcf                 mov ecx, edi
// 008b8b16  89442470             mov dword ptr [esp + 0x70], eax
// 008b8b1a  e80110f4ff           call 0x7f9b20
// 008b8b1f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008b8b23  8d4c2424             lea ecx, [esp + 0x24]
// 008b8b27  eb70                 jmp 0x8b8b99
// 008b8b29  81c784000000         add edi, 0x84
// 008b8b2f  57                   push edi
// 008b8b30  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 008b8b34  57                   push edi
// 008b8b35  8d4c243c             lea ecx, [esp + 0x3c]
// 008b8b39  e8222bf9ff           call 0x84b660
// 008b8b3e  8b2f                 mov ebp, dword ptr [edi]
// 008b8b40  6824880000           push 0x8824
// 008b8b45  8d542460             lea edx, [esp + 0x60]
// 008b8b49  52                   push edx
// 008b8b4a  8bce                 mov ecx, esi
// 008b8b4c  c744245401000000     mov dword ptr [esp + 0x54], 1
// 008b8b54  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008b8b5a  50                   push eax
// 008b8b5b  8bce                 mov ecx, esi
// 008b8b5d  ff1580de9800         call dword ptr [0x98de80]
// 008b8b63  50                   push eax
// 008b8b64  8b4570               mov eax, dword ptr [ebp + 0x70]
// 008b8b67  8bcf                 mov ecx, edi
// 008b8b69  ffd0                 call eax
// 008b8b6b  837c247000           cmp dword ptr [esp + 0x70], 0
// 008b8b70  7423                 je 0x8b8b95
// 008b8b72  8d4c2414             lea ecx, [esp + 0x14]
// 008b8b76  e8b526f9ff           call 0x84b230
// 008b8b7b  68200c0000           push 0xc20
// 008b8b80  8d4c2418             lea ecx, [esp + 0x18]
// 008b8b84  51                   push ecx
// 008b8b85  56                   push esi
// 008b8b86  8bcf                 mov ecx, edi
// 008b8b88  e8930ff4ff           call 0x7f9b20
// 008b8b8d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008b8b91  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 008b8b95  8d4c2434             lea ecx, [esp + 0x34]
// 008b8b99  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 008b8ba1  e83a2bf9ff           call 0x84b6e0
// 008b8ba6  8bc3                 mov eax, ebx
// 008b8ba8  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008b8bac  64890d00000000       mov dword ptr fs:[0], ecx
// 008b8bb3  59                   pop ecx
// 008b8bb4  5f                   pop edi
// 008b8bb5  5e                   pop esi
// 008b8bb6  5d                   pop ebp
// 008b8bb7  5b                   pop ebx
// 008b8bb8  83c43c               add esp, 0x3c
// 008b8bbb  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawCaptionText@CXTPDockingPanePaintManager@@QAEHAAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPanePaintManager.cpp