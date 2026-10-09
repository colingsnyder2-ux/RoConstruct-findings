// roc 2009-12 0056fe50  unit: RakPeer  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0056fe50
//
// 0056fe50  53                   push ebx
// 0056fe51  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0056fe55  56                   push esi
// 0056fe56  8bf1                 mov esi, ecx
// 0056fe58  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056fe5b  8bc1                 mov eax, ecx
// 0056fe5d  c1e803               shr eax, 3
// 0056fe60  8d0cd9               lea ecx, [ecx + ebx*8]
// 0056fe63  8d14dd00000000       lea edx, [ebx*8]
// 0056fe6a  83e03f               and eax, 0x3f
// 0056fe6d  57                   push edi
// 0056fe6e  894e18               mov dword ptr [esi + 0x18], ecx
// 0056fe71  3bca                 cmp ecx, edx
// 0056fe73  7303                 jae 0x56fe78
// 0056fe75  ff461c               inc dword ptr [esi + 0x1c]
// 0056fe78  8bcb                 mov ecx, ebx
// 0056fe7a  c1e91d               shr ecx, 0x1d
// 0056fe7d  014e1c               add dword ptr [esi + 0x1c], ecx
// 0056fe80  8d1418               lea edx, [eax + ebx]
// 0056fe83  83fa3f               cmp edx, 0x3f
// 0056fe86  765b                 jbe 0x56fee3
// 0056fe88  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056fe8c  55                   push ebp
// 0056fe8d  bf40000000           mov edi, 0x40
// 0056fe92  2bf8                 sub edi, eax
// 0056fe94  57                   push edi
// 0056fe95  51                   push ecx
// 0056fe96  8d543020             lea edx, [eax + esi + 0x20]
// 0056fe9a  52                   push edx
// 0056fe9b  e8464e2800           call 0x7f4ce6
// 0056fea0  83c40c               add esp, 0xc
// 0056fea3  8d4e20               lea ecx, [esi + 0x20]
// 0056fea6  51                   push ecx
// 0056fea7  8d4604               lea eax, [esi + 4]
// 0056feaa  50                   push eax
// 0056feab  8bce                 mov ecx, esi
// 0056fead  e86eeeffff           call 0x56ed20
// 0056feb2  8d6f3f               lea ebp, [edi + 0x3f]
// 0056feb5  3beb                 cmp ebp, ebx
// 0056feb7  7325                 jae 0x56fede
// 0056feb9  8da42400000000       lea esp, [esp]
// 0056fec0  8b542414             mov edx, dword ptr [esp + 0x14]
// 0056fec4  8d442ac1             lea eax, [edx + ebp - 0x3f]
// 0056fec8  50                   push eax
// 0056fec9  8d4604               lea eax, [esi + 4]
// 0056fecc  50                   push eax
// 0056fecd  8bce                 mov ecx, esi
// 0056fecf  e84ceeffff           call 0x56ed20
// 0056fed4  83c540               add ebp, 0x40
// 0056fed7  83c740               add edi, 0x40
// 0056feda  3beb                 cmp ebp, ebx
// 0056fedc  72e2                 jb 0x56fec0
// 0056fede  33c0                 xor eax, eax
// 0056fee0  5d                   pop ebp
// 0056fee1  eb02                 jmp 0x56fee5
// 0056fee3  33ff                 xor edi, edi
// 0056fee5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056fee9  2bdf                 sub ebx, edi
// 0056feeb  53                   push ebx
// 0056feec  03f9                 add edi, ecx
// 0056feee  8d543020             lea edx, [eax + esi + 0x20]
// 0056fef2  57                   push edi
// 0056fef3  52                   push edx
// 0056fef4  e8ed4d2800           call 0x7f4ce6
// 0056fef9  83c40c               add esp, 0xc
// 0056fefc  5f                   pop edi
// 0056fefd  5e                   pop esi
// 0056fefe  5b                   pop ebx
// 0056feff  c20800               ret 8
// library rbxgs-raknet/SHA1.cpp (function ?Update@CSHA1@@QAEXPAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
