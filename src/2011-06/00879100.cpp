// roc 2011-06 00879100  unit: CXTPPropertyGridItem  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00879100
//
// 00879100  6aff                 push -1
// 00879102  684980a000           push 0xa08049
// 00879107  64a100000000         mov eax, dword ptr fs:[0]
// 0087910d  50                   push eax
// 0087910e  51                   push ecx
// 0087910f  56                   push esi
// 00879110  a12058c900           mov eax, dword ptr [0xc95820]
// 00879115  33c4                 xor eax, esp
// 00879117  50                   push eax
// 00879118  8d44240c             lea eax, [esp + 0xc]
// 0087911c  64a300000000         mov dword ptr fs:[0], eax
// 00879122  8bf1                 mov esi, ecx
// 00879124  8d442408             lea eax, [esp + 8]
// 00879128  50                   push eax
// 00879129  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00879131  e8ba9fbcff           call 0x4430f0
// 00879136  83bef400000000       cmp dword ptr [esi + 0xf4], 0
// 0087913d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00879145  7421                 je 0x879168
// 00879147  8d4c2408             lea ecx, [esp + 8]
// 0087914b  ff15a826a400         call dword ptr [0xa426a8]
// 00879151  0fb68ef0000000       movzx ecx, byte ptr [esi + 0xf0]
// 00879158  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0087915c  50                   push eax
// 0087915d  51                   push ecx
// 0087915e  8bce                 mov ecx, esi
// 00879160  ff152c2aa400         call dword ptr [0xa42a2c]
// 00879166  eb11                 jmp 0x879179
// 00879168  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0087916c  8d542408             lea edx, [esp + 8]
// 00879170  52                   push edx
// 00879171  8bce                 mov ecx, esi
// 00879173  ff15e42da400         call dword ptr [0xa42de4]
// 00879179  8d4c2408             lea ecx, [esp + 8]
// 0087917d  ff15082ea400         call dword ptr [0xa42e08]
// 00879183  8bc6                 mov eax, esi
// 00879185  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00879189  64890d00000000       mov dword ptr fs:[0], ecx
// 00879190  59                   pop ecx
// 00879191  5e                   pop esi
// 00879192  83c410               add esp, 0x10
// 00879195  c20400               ret 4
// copied from an identical function in another client (function ?GetViewValue@CXTPPropertyGridItem@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp