// roc 2009-06 00722a20  unit: CXTPPaintManager  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00722a20
//
// 00722a20  6aff                 push -1
// 00722a22  68544d8700           push 0x874d54
// 00722a27  64a100000000         mov eax, dword ptr fs:[0]
// 00722a2d  50                   push eax
// 00722a2e  51                   push ecx
// 00722a2f  53                   push ebx
// 00722a30  55                   push ebp
// 00722a31  56                   push esi
// 00722a32  57                   push edi
// 00722a33  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00722a38  33c4                 xor eax, esp
// 00722a3a  50                   push eax
// 00722a3b  8d442418             lea eax, [esp + 0x18]
// 00722a3f  64a300000000         mov dword ptr fs:[0], eax
// 00722a45  8b742428             mov esi, dword ptr [esp + 0x28]
// 00722a49  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00722a4d  56                   push esi
// 00722a4e  ff1508fa8900         call dword ptr [0x89fa08]
// 00722a54  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00722a58  ff15f4ff8900         call dword ptr [0x89fff4]
// 00722a5e  6a00                 push 0
// 00722a60  6a20                 push 0x20
// 00722a62  8bce                 mov ecx, esi
// 00722a64  ff1500008a00         call dword ptr [0x8a0000]
// 00722a6a  83f801               cmp eax, 1
// 00722a6d  0f8c0d010000         jl 0x722b80
// 00722a73  8bce                 mov ecx, esi
// 00722a75  ff1554fb8900         call dword ptr [0x89fb54]
// 00722a7b  99                   cdq 
// 00722a7c  2bc2                 sub eax, edx
// 00722a7e  8bd8                 mov ebx, eax
// 00722a80  d1fb                 sar ebx, 1
// 00722a82  8d43ff               lea eax, [ebx - 1]
// 00722a85  33ff                 xor edi, edi
// 00722a87  85c0                 test eax, eax
// 00722a89  0f8ef1000000         jle 0x722b80
// 00722a8f  8beb                 mov ebp, ebx
// 00722a91  55                   push ebp
// 00722a92  8bce                 mov ecx, esi
// 00722a94  ff15e0f98900         call dword ptr [0x89f9e0]
// 00722a9a  3c20                 cmp al, 0x20
// 00722a9c  741f                 je 0x722abd
// 00722a9e  8d441f01             lea eax, [edi + ebx + 1]
// 00722aa2  50                   push eax
// 00722aa3  8bce                 mov ecx, esi
// 00722aa5  ff15e0f98900         call dword ptr [0x89f9e0]
// 00722aab  3c20                 cmp al, 0x20
// 00722aad  746b                 je 0x722b1a
// 00722aaf  47                   inc edi
// 00722ab0  8d43ff               lea eax, [ebx - 1]
// 00722ab3  4d                   dec ebp
// 00722ab4  3bf8                 cmp edi, eax
// 00722ab6  7cd9                 jl 0x722a91
// 00722ab8  e9c3000000           jmp 0x722b80
// 00722abd  2bdf                 sub ebx, edi
// 00722abf  53                   push ebx
// 00722ac0  8d4c242c             lea ecx, [esp + 0x2c]
// 00722ac4  51                   push ecx
// 00722ac5  8bce                 mov ecx, esi
// 00722ac7  ff1510f48900         call dword ptr [0x89f410]
// 00722acd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00722ad1  50                   push eax
// 00722ad2  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00722ada  ff1508fa8900         call dword ptr [0x89fa08]
// 00722ae0  8d4c2428             lea ecx, [esp + 0x28]
// 00722ae4  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00722aec  ff1510fd8900         call dword ptr [0x89fd10]
// 00722af2  43                   inc ebx
// 00722af3  53                   push ebx
// 00722af4  8d542430             lea edx, [esp + 0x30]
// 00722af8  52                   push edx
// 00722af9  8bce                 mov ecx, esi
// 00722afb  ff1504008a00         call dword ptr [0x8a0004]
// 00722b01  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00722b05  50                   push eax
// 00722b06  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00722b0e  ff1508fa8900         call dword ptr [0x89fa08]
// 00722b14  8d4c242c             lea ecx, [esp + 0x2c]
// 00722b18  eb60                 jmp 0x722b7a
// 00722b1a  8d441f01             lea eax, [edi + ebx + 1]
// 00722b1e  50                   push eax
// 00722b1f  8d4c242c             lea ecx, [esp + 0x2c]
// 00722b23  51                   push ecx
// 00722b24  8bce                 mov ecx, esi
// 00722b26  ff1510f48900         call dword ptr [0x89f410]
// 00722b2c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00722b30  50                   push eax
// 00722b31  c744242402000000     mov dword ptr [esp + 0x24], 2
// 00722b39  ff1508fa8900         call dword ptr [0x89fa08]
// 00722b3f  8d4c2428             lea ecx, [esp + 0x28]
// 00722b43  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00722b4b  ff1510fd8900         call dword ptr [0x89fd10]
// 00722b51  8d541f02             lea edx, [edi + ebx + 2]
// 00722b55  52                   push edx
// 00722b56  8d442418             lea eax, [esp + 0x18]
// 00722b5a  50                   push eax
// 00722b5b  8bce                 mov ecx, esi
// 00722b5d  ff1504008a00         call dword ptr [0x8a0004]
// 00722b63  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00722b67  50                   push eax
// 00722b68  c744242403000000     mov dword ptr [esp + 0x24], 3
// 00722b70  ff1508fa8900         call dword ptr [0x89fa08]
// 00722b76  8d4c2414             lea ecx, [esp + 0x14]
// 00722b7a  ff1510fd8900         call dword ptr [0x89fd10]
// 00722b80  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00722b84  64890d00000000       mov dword ptr fs:[0], ecx
// 00722b8b  59                   pop ecx
// 00722b8c  5f                   pop edi
// 00722b8d  5e                   pop esi
// 00722b8e  5d                   pop ebp
// 00722b8f  5b                   pop ebx
// 00722b90  83c410               add esp, 0x10
// 00722b93  c20c00               ret 0xc
// copied from an identical function in another client (function ?SplitString@CXTPPaintManager@@IAEXABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@AAV23@1@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp