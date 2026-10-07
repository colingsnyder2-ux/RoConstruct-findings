// roc 2007-08 005c5ed0  unit: lua_exception  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c5ed0
//
// 005c5ed0  53                   push ebx
// 005c5ed1  56                   push esi
// 005c5ed2  57                   push edi
// 005c5ed3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005c5ed7  8b07                 mov eax, dword ptr [edi]
// 005c5ed9  50                   push eax
// 005c5eda  e851d40400           call 0x613330
// 005c5edf  8b742414             mov esi, dword ptr [esp + 0x14]
// 005c5ee3  8bd8                 mov ebx, eax
// 005c5ee5  8b4610               mov eax, dword ptr [esi + 0x10]
// 005c5ee8  8b4844               mov ecx, dword ptr [eax + 0x44]
// 005c5eeb  83c404               add esp, 4
// 005c5eee  3b4840               cmp ecx, dword ptr [eax + 0x40]
// 005c5ef1  7209                 jb 0x5c5efc
// 005c5ef3  56                   push esi
// 005c5ef4  e8079f0400           call 0x60fe00
// 005c5ef9  83c404               add esp, 4
// 005c5efc  83fb1b               cmp ebx, 0x1b
// 005c5eff  b890736100           mov eax, 0x617390
// 005c5f04  7405                 je 0x5c5f0b
// 005c5f06  b8a0686100           mov eax, 0x6168a0
// 005c5f0b  8b5710               mov edx, dword ptr [edi + 0x10]
// 005c5f0e  52                   push edx
// 005c5f0f  8b17                 mov edx, dword ptr [edi]
// 005c5f11  8d4f04               lea ecx, [edi + 4]
// 005c5f14  51                   push ecx
// 005c5f15  52                   push edx
// 005c5f16  56                   push esi
// 005c5f17  ffd0                 call eax
// 005c5f19  8bf8                 mov edi, eax
// 005c5f1b  8b4648               mov eax, dword ptr [esi + 0x48]
// 005c5f1e  0fb64f48             movzx ecx, byte ptr [edi + 0x48]
// 005c5f22  50                   push eax
// 005c5f23  51                   push ecx
// 005c5f24  56                   push esi
// 005c5f25  e826d00400           call 0x612f50
// 005c5f2a  33db                 xor ebx, ebx
// 005c5f2c  83c41c               add esp, 0x1c
// 005c5f2f  897810               mov dword ptr [eax + 0x10], edi
// 005c5f32  385f48               cmp byte ptr [edi + 0x48], bl
// 005c5f35  89442414             mov dword ptr [esp + 0x14], eax
// 005c5f39  7624                 jbe 0x5c5f5f
// 005c5f3b  55                   push ebp
// 005c5f3c  8d6814               lea ebp, [eax + 0x14]
// 005c5f3f  90                   nop 
// 005c5f40  56                   push esi
// 005c5f41  e86ad00400           call 0x612fb0
// 005c5f46  894500               mov dword ptr [ebp], eax
// 005c5f49  0fb65748             movzx edx, byte ptr [edi + 0x48]
// 005c5f4d  83c301               add ebx, 1
// 005c5f50  83c404               add esp, 4
// 005c5f53  83c504               add ebp, 4
// 005c5f56  3bda                 cmp ebx, edx
// 005c5f58  7ce6                 jl 0x5c5f40
// 005c5f5a  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c5f5e  5d                   pop ebp
// 005c5f5f  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c5f62  8901                 mov dword ptr [ecx], eax
// 005c5f64  c7410806000000       mov dword ptr [ecx + 8], 6
// 005c5f6b  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005c5f6e  2b4608               sub eax, dword ptr [esi + 8]
// 005c5f71  bf10000000           mov edi, 0x10
// 005c5f76  3bc7                 cmp eax, edi
// 005c5f78  7f29                 jg 0x5c5fa3
// 005c5f7a  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005c5f7d  83f801               cmp eax, 1
// 005c5f80  7c14                 jl 0x5c5f96
// 005c5f82  8d0c00               lea ecx, [eax + eax]
// 005c5f85  51                   push ecx
// 005c5f86  56                   push esi
// 005c5f87  e8a4faffff           call 0x5c5a30
// 005c5f8c  83c408               add esp, 8
// 005c5f8f  017e08               add dword ptr [esi + 8], edi
// 005c5f92  5f                   pop edi
// 005c5f93  5e                   pop esi
// 005c5f94  5b                   pop ebx
// 005c5f95  c3                   ret 
// 005c5f96  83c001               add eax, 1
// 005c5f99  50                   push eax
// 005c5f9a  56                   push esi
// 005c5f9b  e890faffff           call 0x5c5a30
// 005c5fa0  83c408               add esp, 8
// 005c5fa3  017e08               add dword ptr [esi + 8], edi
// 005c5fa6  5f                   pop edi
// 005c5fa7  5e                   pop esi
// 005c5fa8  5b                   pop ebx
// 005c5fa9  c3                   ret 
// library lua-5.1.4/ldo.c (function _f_parser)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
