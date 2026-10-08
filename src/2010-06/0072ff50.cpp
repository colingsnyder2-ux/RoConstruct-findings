// from server: 100% by auto
// roc 2010-06 0072ff50  unit: lua_exception  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072ff50
//
// 0072ff50  53                   push ebx
// 0072ff51  56                   push esi
// 0072ff52  57                   push edi
// 0072ff53  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0072ff57  8b07                 mov eax, dword ptr [edi]
// 0072ff59  50                   push eax
// 0072ff5a  e801e40400           call 0x77e360
// 0072ff5f  8b742414             mov esi, dword ptr [esp + 0x14]
// 0072ff63  8bd8                 mov ebx, eax
// 0072ff65  8b4610               mov eax, dword ptr [esi + 0x10]
// 0072ff68  8b4844               mov ecx, dword ptr [eax + 0x44]
// 0072ff6b  83c404               add esp, 4
// 0072ff6e  3b4840               cmp ecx, dword ptr [eax + 0x40]
// 0072ff71  7209                 jb 0x72ff7c
// 0072ff73  56                   push esi
// 0072ff74  e8e7ae0400           call 0x77ae60
// 0072ff79  83c404               add esp, 4
// 0072ff7c  b860237800           mov eax, 0x782360
// 0072ff81  83fb1b               cmp ebx, 0x1b
// 0072ff84  7405                 je 0x72ff8b
// 0072ff86  b8a0187800           mov eax, 0x7818a0
// 0072ff8b  8b5710               mov edx, dword ptr [edi + 0x10]
// 0072ff8e  52                   push edx
// 0072ff8f  8b17                 mov edx, dword ptr [edi]
// 0072ff91  8d4f04               lea ecx, [edi + 4]
// 0072ff94  51                   push ecx
// 0072ff95  52                   push edx
// 0072ff96  56                   push esi
// 0072ff97  ffd0                 call eax
// 0072ff99  8bf8                 mov edi, eax
// 0072ff9b  8b4648               mov eax, dword ptr [esi + 0x48]
// 0072ff9e  0fb64f48             movzx ecx, byte ptr [edi + 0x48]
// 0072ffa2  50                   push eax
// 0072ffa3  51                   push ecx
// 0072ffa4  56                   push esi
// 0072ffa5  e8c6df0400           call 0x77df70
// 0072ffaa  33db                 xor ebx, ebx
// 0072ffac  83c41c               add esp, 0x1c
// 0072ffaf  897810               mov dword ptr [eax + 0x10], edi
// 0072ffb2  89442414             mov dword ptr [esp + 0x14], eax
// 0072ffb6  385f48               cmp byte ptr [edi + 0x48], bl
// 0072ffb9  7622                 jbe 0x72ffdd
// 0072ffbb  55                   push ebp
// 0072ffbc  8d6814               lea ebp, [eax + 0x14]
// 0072ffbf  90                   nop 
// 0072ffc0  56                   push esi
// 0072ffc1  e80ae00400           call 0x77dfd0
// 0072ffc6  894500               mov dword ptr [ebp], eax
// 0072ffc9  0fb65748             movzx edx, byte ptr [edi + 0x48]
// 0072ffcd  43                   inc ebx
// 0072ffce  83c404               add esp, 4
// 0072ffd1  83c504               add ebp, 4
// 0072ffd4  3bda                 cmp ebx, edx
// 0072ffd6  7ce8                 jl 0x72ffc0
// 0072ffd8  8b442418             mov eax, dword ptr [esp + 0x18]
// 0072ffdc  5d                   pop ebp
// 0072ffdd  8b4e08               mov ecx, dword ptr [esi + 8]
// 0072ffe0  8901                 mov dword ptr [ecx], eax
// 0072ffe2  c7410806000000       mov dword ptr [ecx + 8], 6
// 0072ffe9  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0072ffec  2b4608               sub eax, dword ptr [esi + 8]
// 0072ffef  bf10000000           mov edi, 0x10
// 0072fff4  3bc7                 cmp eax, edi
// 0072fff6  7f27                 jg 0x73001f
// 0072fff8  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0072fffb  83f801               cmp eax, 1
// 0072fffe  7c14                 jl 0x730014
// 00730000  8d0c00               lea ecx, [eax + eax]
// 00730003  51                   push ecx
// 00730004  56                   push esi
// 00730005  e8a6faffff           call 0x72fab0
// 0073000a  83c408               add esp, 8
// 0073000d  017e08               add dword ptr [esi + 8], edi
// 00730010  5f                   pop edi
// 00730011  5e                   pop esi
// 00730012  5b                   pop ebx
// 00730013  c3                   ret 
// 00730014  40                   inc eax
// 00730015  50                   push eax
// 00730016  56                   push esi
// 00730017  e894faffff           call 0x72fab0
// 0073001c  83c408               add esp, 8
// 0073001f  017e08               add dword ptr [esi + 8], edi
// 00730022  5f                   pop edi
// 00730023  5e                   pop esi
// 00730024  5b                   pop ebx
// 00730025  c3                   ret 
// library lua-5.1.4/ldo.c (function _f_parser)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
