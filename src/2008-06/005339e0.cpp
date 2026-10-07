// roc 2008-06 005339e0  unit: seg_00530000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005339e0
//
// 005339e0  56                   push esi
// 005339e1  8b742408             mov esi, dword ptr [esp + 8]
// 005339e5  8b4604               mov eax, dword ptr [esi + 4]
// 005339e8  8b08                 mov ecx, dword ptr [eax]
// 005339ea  57                   push edi
// 005339eb  6a54                 push 0x54
// 005339ed  6a01                 push 1
// 005339ef  56                   push esi
// 005339f0  ffd1                 call ecx
// 005339f2  89869c010000         mov dword ptr [esi + 0x19c], eax
// 005339f8  c700c0365300         mov dword ptr [eax], 0x5336c0
// 005339fe  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00533a04  33ff                 xor edi, edi
// 00533a06  83c40c               add esp, 0xc
// 00533a09  397e24               cmp dword ptr [esi + 0x24], edi
// 00533a0c  7e3e                 jle 0x533a4c
// 00533a0e  53                   push ebx
// 00533a0f  55                   push ebp
// 00533a10  8d6950               lea ebp, [ecx + 0x50]
// 00533a13  8d582c               lea ebx, [eax + 0x2c]
// 00533a16  8b5604               mov edx, dword ptr [esi + 4]
// 00533a19  8b02                 mov eax, dword ptr [edx]
// 00533a1b  6800010000           push 0x100
// 00533a20  6a01                 push 1
// 00533a22  56                   push esi
// 00533a23  ffd0                 call eax
// 00533a25  6800010000           push 0x100
// 00533a2a  6a00                 push 0
// 00533a2c  50                   push eax
// 00533a2d  894500               mov dword ptr [ebp], eax
// 00533a30  e8cfdc1600           call 0x6a1704
// 00533a35  c703ffffffff         mov dword ptr [ebx], 0xffffffff
// 00533a3b  47                   inc edi
// 00533a3c  83c418               add esp, 0x18
// 00533a3f  83c304               add ebx, 4
// 00533a42  83c554               add ebp, 0x54
// 00533a45  3b7e24               cmp edi, dword ptr [esi + 0x24]
// 00533a48  7ccc                 jl 0x533a16
// 00533a4a  5d                   pop ebp
// 00533a4b  5b                   pop ebx
// 00533a4c  5f                   pop edi
// 00533a4d  5e                   pop esi
// 00533a4e  c3                   ret 
// library jpeg-6b/jddctmgr.c (function _jinit_inverse_dct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jddctmgr.c
