// from server: 100% by auto
// roc 2010-06 00587e00  unit: seg_00580000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00587e00
//
// 00587e00  53                   push ebx
// 00587e01  56                   push esi
// 00587e02  57                   push edi
// 00587e03  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00587e07  8b4704               mov eax, dword ptr [edi + 4]
// 00587e0a  8b08                 mov ecx, dword ptr [eax]
// 00587e0c  6a30                 push 0x30
// 00587e0e  6a01                 push 1
// 00587e10  57                   push edi
// 00587e11  ffd1                 call ecx
// 00587e13  8bf0                 mov esi, eax
// 00587e15  89b758010000         mov dword ptr [edi + 0x158], esi
// 00587e1b  c706d0715800         mov dword ptr [esi], 0x5871d0
// 00587e21  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 00587e27  33db                 xor ebx, ebx
// 00587e29  83c40c               add esp, 0xc
// 00587e2c  2bc3                 sub eax, ebx
// 00587e2e  7438                 je 0x587e68
// 00587e30  83e801               sub eax, 1
// 00587e33  742a                 je 0x587e5f
// 00587e35  83e801               sub eax, 1
// 00587e38  7415                 je 0x587e4f
// 00587e3a  8b17                 mov edx, dword ptr [edi]
// 00587e3c  c7421430000000       mov dword ptr [edx + 0x14], 0x30
// 00587e43  8b07                 mov eax, dword ptr [edi]
// 00587e45  8b08                 mov ecx, dword ptr [eax]
// 00587e47  57                   push edi
// 00587e48  ffd1                 call ecx
// 00587e4a  83c404               add esp, 4
// 00587e4d  eb27                 jmp 0x587e76
// 00587e4f  c7460430785800       mov dword ptr [esi + 4], 0x587830
// 00587e56  c7461c80bf5800       mov dword ptr [esi + 0x1c], 0x58bf80
// 00587e5d  eb17                 jmp 0x587e76
// 00587e5f  c74608b0b85800       mov dword ptr [esi + 8], 0x58b8b0
// 00587e66  eb07                 jmp 0x587e6f
// 00587e68  c7460890b55800       mov dword ptr [esi + 8], 0x58b590
// 00587e6f  c74604b0745800       mov dword ptr [esi + 4], 0x5874b0
// 00587e76  5f                   pop edi
// 00587e77  895e0c               mov dword ptr [esi + 0xc], ebx
// 00587e7a  895e20               mov dword ptr [esi + 0x20], ebx
// 00587e7d  895e10               mov dword ptr [esi + 0x10], ebx
// 00587e80  895e24               mov dword ptr [esi + 0x24], ebx
// 00587e83  895e14               mov dword ptr [esi + 0x14], ebx
// 00587e86  895e28               mov dword ptr [esi + 0x28], ebx
// 00587e89  895e18               mov dword ptr [esi + 0x18], ebx
// 00587e8c  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00587e8f  5e                   pop esi
// 00587e90  5b                   pop ebx
// 00587e91  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _jinit_forward_dct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
