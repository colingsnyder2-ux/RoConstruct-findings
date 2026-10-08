// roc 2007-03 005224d0  unit: seg_00520000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005224d0
//
// 005224d0  56                   push esi
// 005224d1  8b742408             mov esi, dword ptr [esp + 8]
// 005224d5  8b4604               mov eax, dword ptr [esi + 4]
// 005224d8  8b08                 mov ecx, dword ptr [eax]
// 005224da  57                   push edi
// 005224db  6a54                 push 0x54
// 005224dd  6a01                 push 1
// 005224df  56                   push esi
// 005224e0  ffd1                 call ecx
// 005224e2  89869c010000         mov dword ptr [esi + 0x19c], eax
// 005224e8  c700b0215200         mov dword ptr [eax], 0x5221b0
// 005224ee  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 005224f4  33ff                 xor edi, edi
// 005224f6  83c40c               add esp, 0xc
// 005224f9  397e24               cmp dword ptr [esi + 0x24], edi
// 005224fc  7e40                 jle 0x52253e
// 005224fe  53                   push ebx
// 005224ff  55                   push ebp
// 00522500  8d6950               lea ebp, [ecx + 0x50]
// 00522503  8d582c               lea ebx, [eax + 0x2c]
// 00522506  8b5604               mov edx, dword ptr [esi + 4]
// 00522509  8b02                 mov eax, dword ptr [edx]
// 0052250b  6800010000           push 0x100
// 00522510  6a01                 push 1
// 00522512  56                   push esi
// 00522513  ffd0                 call eax
// 00522515  6800010000           push 0x100
// 0052251a  6a00                 push 0
// 0052251c  50                   push eax
// 0052251d  894500               mov dword ptr [ebp], eax
// 00522520  e8f7ca0f00           call 0x61f01c
// 00522525  c703ffffffff         mov dword ptr [ebx], 0xffffffff
// 0052252b  83c701               add edi, 1
// 0052252e  83c418               add esp, 0x18
// 00522531  83c304               add ebx, 4
// 00522534  83c554               add ebp, 0x54
// 00522537  3b7e24               cmp edi, dword ptr [esi + 0x24]
// 0052253a  7cca                 jl 0x522506
// 0052253c  5d                   pop ebp
// 0052253d  5b                   pop ebx
// 0052253e  5f                   pop edi
// 0052253f  5e                   pop esi
// 00522540  c3                   ret 
// library jpeg-6b/jddctmgr.c (function _jinit_inverse_dct)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jddctmgr.c
