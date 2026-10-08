// from server: 100% by auto
// roc 2010-06 00581850  unit: seg_00580000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00581850
//
// 00581850  56                   push esi
// 00581851  8b742408             mov esi, dword ptr [esp + 8]
// 00581855  8b4604               mov eax, dword ptr [esi + 4]
// 00581858  8b08                 mov ecx, dword ptr [eax]
// 0058185a  57                   push edi
// 0058185b  6a54                 push 0x54
// 0058185d  6a01                 push 1
// 0058185f  56                   push esi
// 00581860  ffd1                 call ecx
// 00581862  89869c010000         mov dword ptr [esi + 0x19c], eax
// 00581868  c70030155800         mov dword ptr [eax], 0x581530
// 0058186e  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00581874  33ff                 xor edi, edi
// 00581876  83c40c               add esp, 0xc
// 00581879  397e24               cmp dword ptr [esi + 0x24], edi
// 0058187c  7e3e                 jle 0x5818bc
// 0058187e  53                   push ebx
// 0058187f  55                   push ebp
// 00581880  8d6950               lea ebp, [ecx + 0x50]
// 00581883  8d582c               lea ebx, [eax + 0x2c]
// 00581886  8b5604               mov edx, dword ptr [esi + 4]
// 00581889  8b02                 mov eax, dword ptr [edx]
// 0058188b  6800010000           push 0x100
// 00581890  6a01                 push 1
// 00581892  56                   push esi
// 00581893  ffd0                 call eax
// 00581895  6800010000           push 0x100
// 0058189a  6a00                 push 0
// 0058189c  50                   push eax
// 0058189d  894500               mov dword ptr [ebp], eax
// 005818a0  e83f732200           call 0x7a8be4
// 005818a5  c703ffffffff         mov dword ptr [ebx], 0xffffffff
// 005818ab  47                   inc edi
// 005818ac  83c418               add esp, 0x18
// 005818af  83c304               add ebx, 4
// 005818b2  83c554               add ebp, 0x54
// 005818b5  3b7e24               cmp edi, dword ptr [esi + 0x24]
// 005818b8  7ccc                 jl 0x581886
// 005818ba  5d                   pop ebp
// 005818bb  5b                   pop ebx
// 005818bc  5f                   pop edi
// 005818bd  5e                   pop esi
// 005818be  c3                   ret 
// library jpeg-6b/jddctmgr.c (function _jinit_inverse_dct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jddctmgr.c
