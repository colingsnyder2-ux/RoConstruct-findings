// roc 2009-12 007fd8e0  unit: CXTPPaintManager  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fd8e0
//
// 007fd8e0  6aff                 push -1
// 007fd8e2  6844909500           push 0x959044
// 007fd8e7  64a100000000         mov eax, dword ptr fs:[0]
// 007fd8ed  50                   push eax
// 007fd8ee  51                   push ecx
// 007fd8ef  53                   push ebx
// 007fd8f0  55                   push ebp
// 007fd8f1  56                   push esi
// 007fd8f2  57                   push edi
// 007fd8f3  a10052b600           mov eax, dword ptr [0xb65200]
// 007fd8f8  33c4                 xor eax, esp
// 007fd8fa  50                   push eax
// 007fd8fb  8d442418             lea eax, [esp + 0x18]
// 007fd8ff  64a300000000         mov dword ptr fs:[0], eax
// 007fd905  8b742428             mov esi, dword ptr [esp + 0x28]
// 007fd909  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007fd90d  56                   push esi
// 007fd90e  ff1538d59800         call dword ptr [0x98d538]
// 007fd914  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fd918  ff1590d69800         call dword ptr [0x98d690]
// 007fd91e  6a00                 push 0
// 007fd920  6a20                 push 0x20
// 007fd922  8bce                 mov ecx, esi
// 007fd924  ff1580d69800         call dword ptr [0x98d680]
// 007fd92a  83f801               cmp eax, 1
// 007fd92d  0f8c0d010000         jl 0x7fda40
// 007fd933  8bce                 mov ecx, esi
// 007fd935  ff15b4dd9800         call dword ptr [0x98ddb4]
// 007fd93b  99                   cdq 
// 007fd93c  2bc2                 sub eax, edx
// 007fd93e  8bd8                 mov ebx, eax
// 007fd940  d1fb                 sar ebx, 1
// 007fd942  8d43ff               lea eax, [ebx - 1]
// 007fd945  33ff                 xor edi, edi
// 007fd947  85c0                 test eax, eax
// 007fd949  0f8ef1000000         jle 0x7fda40
// 007fd94f  8beb                 mov ebp, ebx
// 007fd951  55                   push ebp
// 007fd952  8bce                 mov ecx, esi
// 007fd954  ff1510d59800         call dword ptr [0x98d510]
// 007fd95a  3c20                 cmp al, 0x20
// 007fd95c  741f                 je 0x7fd97d
// 007fd95e  8d441f01             lea eax, [edi + ebx + 1]
// 007fd962  50                   push eax
// 007fd963  8bce                 mov ecx, esi
// 007fd965  ff1510d59800         call dword ptr [0x98d510]
// 007fd96b  3c20                 cmp al, 0x20
// 007fd96d  746b                 je 0x7fd9da
// 007fd96f  47                   inc edi
// 007fd970  8d43ff               lea eax, [ebx - 1]
// 007fd973  4d                   dec ebp
// 007fd974  3bf8                 cmp edi, eax
// 007fd976  7cd9                 jl 0x7fd951
// 007fd978  e9c3000000           jmp 0x7fda40
// 007fd97d  2bdf                 sub ebx, edi
// 007fd97f  53                   push ebx
// 007fd980  8d4c242c             lea ecx, [esp + 0x2c]
// 007fd984  51                   push ecx
// 007fd985  8bce                 mov ecx, esi
// 007fd987  ff1544cf9800         call dword ptr [0x98cf44]
// 007fd98d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007fd991  50                   push eax
// 007fd992  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007fd99a  ff1538d59800         call dword ptr [0x98d538]
// 007fd9a0  8d4c2428             lea ecx, [esp + 0x28]
// 007fd9a4  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007fd9ac  ff15c0de9800         call dword ptr [0x98dec0]
// 007fd9b2  43                   inc ebx
// 007fd9b3  53                   push ebx
// 007fd9b4  8d542430             lea edx, [esp + 0x30]
// 007fd9b8  52                   push edx
// 007fd9b9  8bce                 mov ecx, esi
// 007fd9bb  ff157cd69800         call dword ptr [0x98d67c]
// 007fd9c1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fd9c5  50                   push eax
// 007fd9c6  c744242401000000     mov dword ptr [esp + 0x24], 1
// 007fd9ce  ff1538d59800         call dword ptr [0x98d538]
// 007fd9d4  8d4c242c             lea ecx, [esp + 0x2c]
// 007fd9d8  eb60                 jmp 0x7fda3a
// 007fd9da  8d441f01             lea eax, [edi + ebx + 1]
// 007fd9de  50                   push eax
// 007fd9df  8d4c242c             lea ecx, [esp + 0x2c]
// 007fd9e3  51                   push ecx
// 007fd9e4  8bce                 mov ecx, esi
// 007fd9e6  ff1544cf9800         call dword ptr [0x98cf44]
// 007fd9ec  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007fd9f0  50                   push eax
// 007fd9f1  c744242402000000     mov dword ptr [esp + 0x24], 2
// 007fd9f9  ff1538d59800         call dword ptr [0x98d538]
// 007fd9ff  8d4c2428             lea ecx, [esp + 0x28]
// 007fda03  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007fda0b  ff15c0de9800         call dword ptr [0x98dec0]
// 007fda11  8d541f02             lea edx, [edi + ebx + 2]
// 007fda15  52                   push edx
// 007fda16  8d442418             lea eax, [esp + 0x18]
// 007fda1a  50                   push eax
// 007fda1b  8bce                 mov ecx, esi
// 007fda1d  ff157cd69800         call dword ptr [0x98d67c]
// 007fda23  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fda27  50                   push eax
// 007fda28  c744242403000000     mov dword ptr [esp + 0x24], 3
// 007fda30  ff1538d59800         call dword ptr [0x98d538]
// 007fda36  8d4c2414             lea ecx, [esp + 0x14]
// 007fda3a  ff15c0de9800         call dword ptr [0x98dec0]
// 007fda40  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fda44  64890d00000000       mov dword ptr fs:[0], ecx
// 007fda4b  59                   pop ecx
// 007fda4c  5f                   pop edi
// 007fda4d  5e                   pop esi
// 007fda4e  5d                   pop ebp
// 007fda4f  5b                   pop ebx
// 007fda50  83c410               add esp, 0x10
// 007fda53  c20c00               ret 0xc
// copied from an identical function in another client (function ?SplitString@CXTPPaintManager@@IAEXABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@AAV23@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp