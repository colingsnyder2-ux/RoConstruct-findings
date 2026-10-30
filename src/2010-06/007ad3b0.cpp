// roc 2010-06 007ad3b0  unit: CXTPPaintManager  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ad3b0
//
// 007ad3b0  6aff                 push -1
// 007ad3b2  6884e99a00           push 0x9ae984
// 007ad3b7  64a100000000         mov eax, dword ptr fs:[0]
// 007ad3bd  50                   push eax
// 007ad3be  51                   push ecx
// 007ad3bf  53                   push ebx
// 007ad3c0  55                   push ebp
// 007ad3c1  56                   push esi
// 007ad3c2  57                   push edi
// 007ad3c3  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007ad3c8  33c4                 xor eax, esp
// 007ad3ca  50                   push eax
// 007ad3cb  8d442418             lea eax, [esp + 0x18]
// 007ad3cf  64a300000000         mov dword ptr fs:[0], eax
// 007ad3d5  8b742428             mov esi, dword ptr [esp + 0x28]
// 007ad3d9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007ad3dd  56                   push esi
// 007ad3de  ff1580c59e00         call dword ptr [0x9ec580]
// 007ad3e4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007ad3e8  ff1588c69e00         call dword ptr [0x9ec688]
// 007ad3ee  6a00                 push 0
// 007ad3f0  6a20                 push 0x20
// 007ad3f2  8bce                 mov ecx, esi
// 007ad3f4  ff1578c69e00         call dword ptr [0x9ec678]
// 007ad3fa  83f801               cmp eax, 1
// 007ad3fd  0f8c0d010000         jl 0x7ad510
// 007ad403  8bce                 mov ecx, esi
// 007ad405  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007ad40b  99                   cdq 
// 007ad40c  2bc2                 sub eax, edx
// 007ad40e  8bd8                 mov ebx, eax
// 007ad410  d1fb                 sar ebx, 1
// 007ad412  8d43ff               lea eax, [ebx - 1]
// 007ad415  33ff                 xor edi, edi
// 007ad417  85c0                 test eax, eax
// 007ad419  0f8ef1000000         jle 0x7ad510
// 007ad41f  8beb                 mov ebp, ebx
// 007ad421  55                   push ebp
// 007ad422  8bce                 mov ecx, esi
// 007ad424  ff1558c59e00         call dword ptr [0x9ec558]
// 007ad42a  3c20                 cmp al, 0x20
// 007ad42c  741f                 je 0x7ad44d
// 007ad42e  8d441f01             lea eax, [edi + ebx + 1]
// 007ad432  50                   push eax
// 007ad433  8bce                 mov ecx, esi
// 007ad435  ff1558c59e00         call dword ptr [0x9ec558]
// 007ad43b  3c20                 cmp al, 0x20
// 007ad43d  746b                 je 0x7ad4aa
// 007ad43f  47                   inc edi
// 007ad440  8d43ff               lea eax, [ebx - 1]
// 007ad443  4d                   dec ebp
// 007ad444  3bf8                 cmp edi, eax
// 007ad446  7cd9                 jl 0x7ad421
// 007ad448  e9c3000000           jmp 0x7ad510
// 007ad44d  2bdf                 sub ebx, edi
// 007ad44f  53                   push ebx
// 007ad450  8d4c242c             lea ecx, [esp + 0x2c]
// 007ad454  51                   push ecx
// 007ad455  8bce                 mov ecx, esi
// 007ad457  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 007ad45d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007ad461  50                   push eax
// 007ad462  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007ad46a  ff1580c59e00         call dword ptr [0x9ec580]
// 007ad470  8d4c2428             lea ecx, [esp + 0x28]
// 007ad474  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007ad47c  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007ad482  43                   inc ebx
// 007ad483  53                   push ebx
// 007ad484  8d542430             lea edx, [esp + 0x30]
// 007ad488  52                   push edx
// 007ad489  8bce                 mov ecx, esi
// 007ad48b  ff1574c69e00         call dword ptr [0x9ec674]
// 007ad491  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007ad495  50                   push eax
// 007ad496  c744242401000000     mov dword ptr [esp + 0x24], 1
// 007ad49e  ff1580c59e00         call dword ptr [0x9ec580]
// 007ad4a4  8d4c242c             lea ecx, [esp + 0x2c]
// 007ad4a8  eb60                 jmp 0x7ad50a
// 007ad4aa  8d441f01             lea eax, [edi + ebx + 1]
// 007ad4ae  50                   push eax
// 007ad4af  8d4c242c             lea ecx, [esp + 0x2c]
// 007ad4b3  51                   push ecx
// 007ad4b4  8bce                 mov ecx, esi
// 007ad4b6  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 007ad4bc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007ad4c0  50                   push eax
// 007ad4c1  c744242402000000     mov dword ptr [esp + 0x24], 2
// 007ad4c9  ff1580c59e00         call dword ptr [0x9ec580]
// 007ad4cf  8d4c2428             lea ecx, [esp + 0x28]
// 007ad4d3  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007ad4db  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007ad4e1  8d541f02             lea edx, [edi + ebx + 2]
// 007ad4e5  52                   push edx
// 007ad4e6  8d442418             lea eax, [esp + 0x18]
// 007ad4ea  50                   push eax
// 007ad4eb  8bce                 mov ecx, esi
// 007ad4ed  ff1574c69e00         call dword ptr [0x9ec674]
// 007ad4f3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007ad4f7  50                   push eax
// 007ad4f8  c744242403000000     mov dword ptr [esp + 0x24], 3
// 007ad500  ff1580c59e00         call dword ptr [0x9ec580]
// 007ad506  8d4c2414             lea ecx, [esp + 0x14]
// 007ad50a  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007ad510  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ad514  64890d00000000       mov dword ptr fs:[0], ecx
// 007ad51b  59                   pop ecx
// 007ad51c  5f                   pop edi
// 007ad51d  5e                   pop esi
// 007ad51e  5d                   pop ebp
// 007ad51f  5b                   pop ebx
// 007ad520  83c410               add esp, 0x10
// 007ad523  c20c00               ret 0xc
// copied from an identical function in another client (function ?SplitString@CXTPPaintManager@@IAEXABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@AAV23@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp