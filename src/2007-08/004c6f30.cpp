// from server: 100% by auto
// roc 2007-08 004c6f30  unit: RakPeer  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c6f30
//
// 004c6f30  6aff                 push -1
// 004c6f32  6818bd7400           push 0x74bd18
// 004c6f37  64a100000000         mov eax, dword ptr fs:[0]
// 004c6f3d  50                   push eax
// 004c6f3e  83ec14               sub esp, 0x14
// 004c6f41  53                   push ebx
// 004c6f42  55                   push ebp
// 004c6f43  56                   push esi
// 004c6f44  57                   push edi
// 004c6f45  a188518b00           mov eax, dword ptr [0x8b5188]
// 004c6f4a  33c4                 xor eax, esp
// 004c6f4c  50                   push eax
// 004c6f4d  8d442428             lea eax, [esp + 0x28]
// 004c6f51  64a300000000         mov dword ptr fs:[0], eax
// 004c6f57  8bf1                 mov esi, ecx
// 004c6f59  89742414             mov dword ptr [esp + 0x14], esi
// 004c6f5d  33c9                 xor ecx, ecx
// 004c6f5f  b810000000           mov eax, 0x10
// 004c6f64  89442424             mov dword ptr [esp + 0x24], eax
// 004c6f68  ba04000000           mov edx, 4
// 004c6f6d  f7e2                 mul edx
// 004c6f6f  0f90c1               seto cl
// 004c6f72  f7d9                 neg ecx
// 004c6f74  0bc8                 or ecx, eax
// 004c6f76  51                   push ecx
// 004c6f77  e87a8f1600           call 0x62fef6
// 004c6f7c  8944241c             mov dword ptr [esp + 0x1c], eax
// 004c6f80  33c0                 xor eax, eax
// 004c6f82  83c404               add esp, 4
// 004c6f85  8944241c             mov dword ptr [esp + 0x1c], eax
// 004c6f89  89442420             mov dword ptr [esp + 0x20], eax
// 004c6f8d  83c614               add esi, 0x14
// 004c6f90  56                   push esi
// 004c6f91  8d4c241c             lea ecx, [esp + 0x1c]
// 004c6f95  89442434             mov dword ptr [esp + 0x34], eax
// 004c6f99  e812ddffff           call 0x4c4cb0
// 004c6f9e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004c6fa2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004c6fa6  8b442420             mov eax, dword ptr [esp + 0x20]
// 004c6faa  3be8                 cmp ebp, eax
// 004c6fac  7704                 ja 0x4c6fb2
// 004c6fae  2bc5                 sub eax, ebp
// 004c6fb0  eb04                 jmp 0x4c6fb6
// 004c6fb2  2bc5                 sub eax, ebp
// 004c6fb4  03c3                 add eax, ebx
// 004c6fb6  85c0                 test eax, eax
// 004c6fb8  7479                 je 0x4c7033
// 004c6fba  83c501               add ebp, 1
// 004c6fbd  3beb                 cmp ebp, ebx
// 004c6fbf  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004c6fc3  7510                 jne 0x4c6fd5
// 004c6fc5  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c6fc9  8b7498fc             mov esi, dword ptr [eax + ebx*4 - 4]
// 004c6fcd  33ed                 xor ebp, ebp
// 004c6fcf  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004c6fd3  eb16                 jmp 0x4c6feb
// 004c6fd5  85ed                 test ebp, ebp
// 004c6fd7  750a                 jne 0x4c6fe3
// 004c6fd9  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c6fdd  8b7498fc             mov esi, dword ptr [eax + ebx*4 - 4]
// 004c6fe1  eb08                 jmp 0x4c6feb
// 004c6fe3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c6fe7  8b74a9fc             mov esi, dword ptr [ecx + ebp*4 - 4]
// 004c6feb  803e00               cmp byte ptr [esi], 0
// 004c6fee  7534                 jne 0x4c7024
// 004c6ff0  8b5604               mov edx, dword ptr [esi + 4]
// 004c6ff3  83c201               add edx, 1
// 004c6ff6  33ff                 xor edi, edi
// 004c6ff8  85d2                 test edx, edx
// 004c6ffa  7e28                 jle 0x4c7024
// 004c6ffc  8dae10010000         lea ebp, [esi + 0x110]
// 004c7002  55                   push ebp
// 004c7003  8d4c241c             lea ecx, [esp + 0x1c]
// 004c7007  e8a4dcffff           call 0x4c4cb0
// 004c700c  8b4604               mov eax, dword ptr [esi + 4]
// 004c700f  83c701               add edi, 1
// 004c7012  83c001               add eax, 1
// 004c7015  83c504               add ebp, 4
// 004c7018  3bf8                 cmp edi, eax
// 004c701a  7ce6                 jl 0x4c7002
// 004c701c  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004c7020  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004c7024  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c7028  56                   push esi
// 004c7029  e802ecffff           call 0x4c5c30
// 004c702e  e973ffffff           jmp 0x4c6fa6
// 004c7033  85db                 test ebx, ebx
// 004c7035  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 004c703d  760d                 jbe 0x4c704c
// 004c703f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c7043  51                   push ecx
// 004c7044  e8198c1600           call 0x62fc62
// 004c7049  83c404               add esp, 4
// 004c704c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004c7050  64890d00000000       mov dword ptr fs:[0], ecx
// 004c7057  59                   pop ecx
// 004c7058  5f                   pop edi
// 004c7059  5e                   pop esi
// 004c705a  5d                   pop ebp
// 004c705b  5b                   pop ebx
// 004c705c  83c420               add esp, 0x20
// 004c705f  c3                   ret 

// from server: 76% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_Table.cpp