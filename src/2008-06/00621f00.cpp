// roc 2008-06 00621f00  unit: lua_exception  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00621f00
//
// 00621f00  53                   push ebx
// 00621f01  56                   push esi
// 00621f02  57                   push edi
// 00621f03  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00621f07  8b07                 mov eax, dword ptr [edi]
// 00621f09  50                   push eax
// 00621f0a  e861d90300           call 0x65f870
// 00621f0f  8b742414             mov esi, dword ptr [esp + 0x14]
// 00621f13  8bd8                 mov ebx, eax
// 00621f15  8b4610               mov eax, dword ptr [esi + 0x10]
// 00621f18  8b4844               mov ecx, dword ptr [eax + 0x44]
// 00621f1b  83c404               add esp, 4
// 00621f1e  3b4840               cmp ecx, dword ptr [eax + 0x40]
// 00621f21  7209                 jb 0x621f2c
// 00621f23  56                   push esi
// 00621f24  e867a40300           call 0x65c390
// 00621f29  83c404               add esp, 4
// 00621f2c  b8e03f6600           mov eax, 0x663fe0
// 00621f31  83fb1b               cmp ebx, 0x1b
// 00621f34  7405                 je 0x621f3b
// 00621f36  b860356600           mov eax, 0x663560
// 00621f3b  8b5710               mov edx, dword ptr [edi + 0x10]
// 00621f3e  52                   push edx
// 00621f3f  8b17                 mov edx, dword ptr [edi]
// 00621f41  8d4f04               lea ecx, [edi + 4]
// 00621f44  51                   push ecx
// 00621f45  52                   push edx
// 00621f46  56                   push esi
// 00621f47  ffd0                 call eax
// 00621f49  8bf8                 mov edi, eax
// 00621f4b  8b4648               mov eax, dword ptr [esi + 0x48]
// 00621f4e  0fb64f48             movzx ecx, byte ptr [edi + 0x48]
// 00621f52  50                   push eax
// 00621f53  51                   push ecx
// 00621f54  56                   push esi
// 00621f55  e836d50300           call 0x65f490
// 00621f5a  33db                 xor ebx, ebx
// 00621f5c  83c41c               add esp, 0x1c
// 00621f5f  897810               mov dword ptr [eax + 0x10], edi
// 00621f62  89442414             mov dword ptr [esp + 0x14], eax
// 00621f66  385f48               cmp byte ptr [edi + 0x48], bl
// 00621f69  7622                 jbe 0x621f8d
// 00621f6b  55                   push ebp
// 00621f6c  8d6814               lea ebp, [eax + 0x14]
// 00621f6f  90                   nop 
// 00621f70  56                   push esi
// 00621f71  e87ad50300           call 0x65f4f0
// 00621f76  894500               mov dword ptr [ebp], eax
// 00621f79  0fb65748             movzx edx, byte ptr [edi + 0x48]
// 00621f7d  43                   inc ebx
// 00621f7e  83c404               add esp, 4
// 00621f81  83c504               add ebp, 4
// 00621f84  3bda                 cmp ebx, edx
// 00621f86  7ce8                 jl 0x621f70
// 00621f88  8b442418             mov eax, dword ptr [esp + 0x18]
// 00621f8c  5d                   pop ebp
// 00621f8d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00621f90  8901                 mov dword ptr [ecx], eax
// 00621f92  c7410806000000       mov dword ptr [ecx + 8], 6
// 00621f99  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00621f9c  2b4608               sub eax, dword ptr [esi + 8]
// 00621f9f  bf10000000           mov edi, 0x10
// 00621fa4  3bc7                 cmp eax, edi
// 00621fa6  7f27                 jg 0x621fcf
// 00621fa8  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00621fab  83f801               cmp eax, 1
// 00621fae  7c14                 jl 0x621fc4
// 00621fb0  8d0c00               lea ecx, [eax + eax]
// 00621fb3  51                   push ecx
// 00621fb4  56                   push esi
// 00621fb5  e8b6faffff           call 0x621a70
// 00621fba  83c408               add esp, 8
// 00621fbd  017e08               add dword ptr [esi + 8], edi
// 00621fc0  5f                   pop edi
// 00621fc1  5e                   pop esi
// 00621fc2  5b                   pop ebx
// 00621fc3  c3                   ret 
// 00621fc4  40                   inc eax
// 00621fc5  50                   push eax
// 00621fc6  56                   push esi
// 00621fc7  e8a4faffff           call 0x621a70
// 00621fcc  83c408               add esp, 8
// 00621fcf  017e08               add dword ptr [esi + 8], edi
// 00621fd2  5f                   pop edi
// 00621fd3  5e                   pop esi
// 00621fd4  5b                   pop ebx
// 00621fd5  c3                   ret 
// library lua-5.1.4/ldo.c (function _f_parser)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
