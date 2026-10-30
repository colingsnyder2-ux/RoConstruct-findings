// roc 2012-06 009f4040  unit: CPropertyGridItemBrickColor  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f4040
//
// 009f4040  6aff                 push -1
// 009f4042  68f020ae00           push 0xae20f0
// 009f4047  64a100000000         mov eax, dword ptr fs:[0]
// 009f404d  50                   push eax
// 009f404e  83ec48               sub esp, 0x48
// 009f4051  53                   push ebx
// 009f4052  55                   push ebp
// 009f4053  56                   push esi
// 009f4054  57                   push edi
// 009f4055  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009f405a  33c4                 xor eax, esp
// 009f405c  50                   push eax
// 009f405d  8d44245c             lea eax, [esp + 0x5c]
// 009f4061  64a300000000         mov dword ptr fs:[0], eax
// 009f4067  8bf9                 mov edi, ecx
// 009f4069  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 009f406d  8b4608               mov eax, dword ptr [esi + 8]
// 009f4070  50                   push eax
// 009f4071  ff15ac20b200         call dword ptr [0xb220ac]
// 009f4077  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 009f407b  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 009f407f  8d69fe               lea ebp, [ecx - 2]
// 009f4082  83c112               add ecx, 0x12
// 009f4085  894c242c             mov dword ptr [esp + 0x2c], ecx
// 009f4089  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 009f408d  49                   dec ecx
// 009f408e  894c2430             mov dword ptr [esp + 0x30], ecx
// 009f4092  8b4e04               mov ecx, dword ptr [esi + 4]
// 009f4095  50                   push eax
// 009f4096  51                   push ecx
// 009f4097  8d4c2450             lea ecx, [esp + 0x50]
// 009f409b  43                   inc ebx
// 009f409c  e82f15feff           call 0x9d55d0
// 009f40a1  8b970c010000         mov edx, dword ptr [edi + 0x10c]
// 009f40a7  8b4604               mov eax, dword ptr [esi + 4]
// 009f40aa  52                   push edx
// 009f40ab  50                   push eax
// 009f40ac  8d4c243c             lea ecx, [esp + 0x3c]
// 009f40b0  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 009f40b8  e8d315feff           call 0x9d5690
// 009f40bd  8b442430             mov eax, dword ptr [esp + 0x30]
// 009f40c1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009f40c5  8b5604               mov edx, dword ptr [esi + 4]
// 009f40c8  50                   push eax
// 009f40c9  51                   push ecx
// 009f40ca  53                   push ebx
// 009f40cb  55                   push ebp
// 009f40cc  52                   push edx
// 009f40cd  c644247801           mov byte ptr [esp + 0x78], 1
// 009f40d2  ff157421b200         call dword ptr [0xb22174]
// 009f40d8  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 009f40dc  8b542478             mov edx, dword ptr [esp + 0x78]
// 009f40e0  8b442470             mov eax, dword ptr [esp + 0x70]
// 009f40e4  8b1e                 mov ebx, dword ptr [esi]
// 009f40e6  894c2418             mov dword ptr [esp + 0x18], ecx
// 009f40ea  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 009f40ee  89442414             mov dword ptr [esp + 0x14], eax
// 009f40f2  8954241c             mov dword ptr [esp + 0x1c], edx
// 009f40f6  6a24                 push 0x24
// 009f40f8  8d542418             lea edx, [esp + 0x18]
// 009f40fc  894c2424             mov dword ptr [esp + 0x24], ecx
// 009f4100  83c019               add eax, 0x19
// 009f4103  81c7a4000000         add edi, 0xa4
// 009f4109  52                   push edx
// 009f410a  8bcf                 mov ecx, edi
// 009f410c  8944241c             mov dword ptr [esp + 0x1c], eax
// 009f4110  ff155846b200         call dword ptr [0xb24658]
// 009f4116  50                   push eax
// 009f4117  8bcf                 mov ecx, edi
// 009f4119  ff159847b200         call dword ptr [0xb24798]
// 009f411f  50                   push eax
// 009f4120  8b4370               mov eax, dword ptr [ebx + 0x70]
// 009f4123  8bce                 mov ecx, esi
// 009f4125  ffd0                 call eax
// 009f4127  8d4c2434             lea ecx, [esp + 0x34]
// 009f412b  c644246400           mov byte ptr [esp + 0x64], 0
// 009f4130  e8eb15feff           call 0x9d5720
// 009f4135  8d4c2448             lea ecx, [esp + 0x48]
// 009f4139  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 009f4141  e81a15feff           call 0x9d5660
// 009f4146  b801000000           mov eax, 1
// 009f414b  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 009f414f  64890d00000000       mov dword ptr fs:[0], ecx
// 009f4156  59                   pop ecx
// 009f4157  5f                   pop edi
// 009f4158  5e                   pop esi
// 009f4159  5d                   pop ebp
// 009f415a  5b                   pop ebx
// 009f415b  83c454               add esp, 0x54
// 009f415e  c21400               ret 0x14
// copied from an identical function in another client (function ?OnDrawItemValue@CXTPPropertyGridItemColor@@MAEHAAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItemColor.cpp