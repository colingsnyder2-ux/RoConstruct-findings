// roc 2011-06 0080f850  unit: CXTPPaintManager  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080f850
//
// 0080f850  6aff                 push -1
// 0080f852  680423a000           push 0xa02304
// 0080f857  64a100000000         mov eax, dword ptr fs:[0]
// 0080f85d  50                   push eax
// 0080f85e  51                   push ecx
// 0080f85f  53                   push ebx
// 0080f860  55                   push ebp
// 0080f861  56                   push esi
// 0080f862  57                   push edi
// 0080f863  a12058c900           mov eax, dword ptr [0xc95820]
// 0080f868  33c4                 xor eax, esp
// 0080f86a  50                   push eax
// 0080f86b  8d442418             lea eax, [esp + 0x18]
// 0080f86f  64a300000000         mov dword ptr fs:[0], eax
// 0080f875  8b742428             mov esi, dword ptr [esp + 0x28]
// 0080f879  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080f87d  56                   push esi
// 0080f87e  ff156425a400         call dword ptr [0xa42564]
// 0080f884  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080f888  ff155c27a400         call dword ptr [0xa4275c]
// 0080f88e  6a00                 push 0
// 0080f890  6a20                 push 0x20
// 0080f892  8bce                 mov ecx, esi
// 0080f894  ff154c27a400         call dword ptr [0xa4274c]
// 0080f89a  83f801               cmp eax, 1
// 0080f89d  0f8c0d010000         jl 0x80f9b0
// 0080f8a3  8bce                 mov ecx, esi
// 0080f8a5  ff15a826a400         call dword ptr [0xa426a8]
// 0080f8ab  99                   cdq 
// 0080f8ac  2bc2                 sub eax, edx
// 0080f8ae  8bd8                 mov ebx, eax
// 0080f8b0  d1fb                 sar ebx, 1
// 0080f8b2  8d43ff               lea eax, [ebx - 1]
// 0080f8b5  33ff                 xor edi, edi
// 0080f8b7  85c0                 test eax, eax
// 0080f8b9  0f8ef1000000         jle 0x80f9b0
// 0080f8bf  8beb                 mov ebp, ebx
// 0080f8c1  55                   push ebp
// 0080f8c2  8bce                 mov ecx, esi
// 0080f8c4  ff153c25a400         call dword ptr [0xa4253c]
// 0080f8ca  3c20                 cmp al, 0x20
// 0080f8cc  741f                 je 0x80f8ed
// 0080f8ce  8d441f01             lea eax, [edi + ebx + 1]
// 0080f8d2  50                   push eax
// 0080f8d3  8bce                 mov ecx, esi
// 0080f8d5  ff153c25a400         call dword ptr [0xa4253c]
// 0080f8db  3c20                 cmp al, 0x20
// 0080f8dd  746b                 je 0x80f94a
// 0080f8df  47                   inc edi
// 0080f8e0  8d43ff               lea eax, [ebx - 1]
// 0080f8e3  4d                   dec ebp
// 0080f8e4  3bf8                 cmp edi, eax
// 0080f8e6  7cd9                 jl 0x80f8c1
// 0080f8e8  e9c3000000           jmp 0x80f9b0
// 0080f8ed  2bdf                 sub ebx, edi
// 0080f8ef  53                   push ebx
// 0080f8f0  8d4c242c             lea ecx, [esp + 0x2c]
// 0080f8f4  51                   push ecx
// 0080f8f5  8bce                 mov ecx, esi
// 0080f8f7  ff15601fa400         call dword ptr [0xa41f60]
// 0080f8fd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080f901  50                   push eax
// 0080f902  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0080f90a  ff156425a400         call dword ptr [0xa42564]
// 0080f910  8d4c2428             lea ecx, [esp + 0x28]
// 0080f914  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0080f91c  ff15082ea400         call dword ptr [0xa42e08]
// 0080f922  43                   inc ebx
// 0080f923  53                   push ebx
// 0080f924  8d542430             lea edx, [esp + 0x30]
// 0080f928  52                   push edx
// 0080f929  8bce                 mov ecx, esi
// 0080f92b  ff154827a400         call dword ptr [0xa42748]
// 0080f931  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080f935  50                   push eax
// 0080f936  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0080f93e  ff156425a400         call dword ptr [0xa42564]
// 0080f944  8d4c242c             lea ecx, [esp + 0x2c]
// 0080f948  eb60                 jmp 0x80f9aa
// 0080f94a  8d441f01             lea eax, [edi + ebx + 1]
// 0080f94e  50                   push eax
// 0080f94f  8d4c242c             lea ecx, [esp + 0x2c]
// 0080f953  51                   push ecx
// 0080f954  8bce                 mov ecx, esi
// 0080f956  ff15601fa400         call dword ptr [0xa41f60]
// 0080f95c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080f960  50                   push eax
// 0080f961  c744242402000000     mov dword ptr [esp + 0x24], 2
// 0080f969  ff156425a400         call dword ptr [0xa42564]
// 0080f96f  8d4c2428             lea ecx, [esp + 0x28]
// 0080f973  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0080f97b  ff15082ea400         call dword ptr [0xa42e08]
// 0080f981  8d541f02             lea edx, [edi + ebx + 2]
// 0080f985  52                   push edx
// 0080f986  8d442418             lea eax, [esp + 0x18]
// 0080f98a  50                   push eax
// 0080f98b  8bce                 mov ecx, esi
// 0080f98d  ff154827a400         call dword ptr [0xa42748]
// 0080f993  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080f997  50                   push eax
// 0080f998  c744242403000000     mov dword ptr [esp + 0x24], 3
// 0080f9a0  ff156425a400         call dword ptr [0xa42564]
// 0080f9a6  8d4c2414             lea ecx, [esp + 0x14]
// 0080f9aa  ff15082ea400         call dword ptr [0xa42e08]
// 0080f9b0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080f9b4  64890d00000000       mov dword ptr fs:[0], ecx
// 0080f9bb  59                   pop ecx
// 0080f9bc  5f                   pop edi
// 0080f9bd  5e                   pop esi
// 0080f9be  5d                   pop ebp
// 0080f9bf  5b                   pop ebx
// 0080f9c0  83c410               add esp, 0x10
// 0080f9c3  c20c00               ret 0xc
// copied from an identical function in another client (function ?SplitString@CXTPPaintManager@@IAEXABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@AAV23@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp