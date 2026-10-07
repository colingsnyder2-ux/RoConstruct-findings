// roc 2007-08 00616100  unit: seg_00610000  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00616100
//
// 00616100  51                   push ecx
// 00616101  53                   push ebx
// 00616102  56                   push esi
// 00616103  8bf0                 mov esi, eax
// 00616105  57                   push edi
// 00616106  8b7e30               mov edi, dword ptr [esi + 0x30]
// 00616109  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00616111  e86affffff           call 0x616080
// 00616116  817e1005010000       cmp dword ptr [esi + 0x10], 0x105
// 0061611d  8bd8                 mov ebx, eax
// 0061611f  752c                 jne 0x61614d
// 00616121  57                   push edi
// 00616122  e8e92d0100           call 0x628f10
// 00616127  50                   push eax
// 00616128  8d442414             lea eax, [esp + 0x14]
// 0061612c  50                   push eax
// 0061612d  57                   push edi
// 0061612e  e8ed260100           call 0x628820
// 00616133  53                   push ebx
// 00616134  57                   push edi
// 00616135  e8a62e0100           call 0x628fe0
// 0061613a  83c418               add esp, 0x18
// 0061613d  e83effffff           call 0x616080
// 00616142  817e1005010000       cmp dword ptr [esi + 0x10], 0x105
// 00616149  8bd8                 mov ebx, eax
// 0061614b  74d4                 je 0x616121
// 0061614d  817e1004010000       cmp dword ptr [esi + 0x10], 0x104
// 00616154  752b                 jne 0x616181
// 00616156  57                   push edi
// 00616157  e8b42d0100           call 0x628f10
// 0061615c  50                   push eax
// 0061615d  8d4c2414             lea ecx, [esp + 0x14]
// 00616161  51                   push ecx
// 00616162  57                   push edi
// 00616163  e8b8260100           call 0x628820
// 00616168  53                   push ebx
// 00616169  57                   push edi
// 0061616a  e8712e0100           call 0x628fe0
// 0061616f  56                   push esi
// 00616170  e87b280000           call 0x6189f0
// 00616175  83c41c               add esp, 0x1c
// 00616178  8bc6                 mov eax, esi
// 0061617a  e8b1f2ffff           call 0x615430
// 0061617f  eb0f                 jmp 0x616190
// 00616181  53                   push ebx
// 00616182  8d542410             lea edx, [esp + 0x10]
// 00616186  52                   push edx
// 00616187  57                   push edi
// 00616188  e893260100           call 0x628820
// 0061618d  83c40c               add esp, 0xc
// 00616190  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00616194  50                   push eax
// 00616195  57                   push edi
// 00616196  e8452e0100           call 0x628fe0
// 0061619b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061619f  680a010000           push 0x10a
// 006161a4  bf06010000           mov edi, 0x106
// 006161a9  e872d9ffff           call 0x613b20
// 006161ae  83c40c               add esp, 0xc
// 006161b1  5f                   pop edi
// 006161b2  5e                   pop esi
// 006161b3  5b                   pop ebx
// 006161b4  59                   pop ecx
// 006161b5  c3                   ret 
// library lua-5.1.4/lparser.c (function _ifstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
