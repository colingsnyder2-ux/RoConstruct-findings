// roc 2007-03 00528e20  unit: seg_00520000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00528e20
//
// 00528e20  53                   push ebx
// 00528e21  56                   push esi
// 00528e22  57                   push edi
// 00528e23  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00528e27  8b4704               mov eax, dword ptr [edi + 4]
// 00528e2a  8b08                 mov ecx, dword ptr [eax]
// 00528e2c  6a30                 push 0x30
// 00528e2e  6a01                 push 1
// 00528e30  57                   push edi
// 00528e31  ffd1                 call ecx
// 00528e33  8bf0                 mov esi, eax
// 00528e35  89b758010000         mov dword ptr [edi + 0x158], esi
// 00528e3b  c706907f5200         mov dword ptr [esi], 0x527f90
// 00528e41  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 00528e47  33db                 xor ebx, ebx
// 00528e49  83c40c               add esp, 0xc
// 00528e4c  2bc3                 sub eax, ebx
// 00528e4e  7438                 je 0x528e88
// 00528e50  83e801               sub eax, 1
// 00528e53  742a                 je 0x528e7f
// 00528e55  83e801               sub eax, 1
// 00528e58  7415                 je 0x528e6f
// 00528e5a  8b17                 mov edx, dword ptr [edi]
// 00528e5c  c7421430000000       mov dword ptr [edx + 0x14], 0x30
// 00528e63  8b07                 mov eax, dword ptr [edi]
// 00528e65  8b08                 mov ecx, dword ptr [eax]
// 00528e67  57                   push edi
// 00528e68  ffd1                 call ecx
// 00528e6a  83c404               add esp, 4
// 00528e6d  eb27                 jmp 0x528e96
// 00528e6f  c74604a0865200       mov dword ptr [esi + 4], 0x5286a0
// 00528e76  c7461cd0d25200       mov dword ptr [esi + 0x1c], 0x52d2d0
// 00528e7d  eb17                 jmp 0x528e96
// 00528e7f  c7460800cc5200       mov dword ptr [esi + 8], 0x52cc00
// 00528e86  eb07                 jmp 0x528e8f
// 00528e88  c74608e0c85200       mov dword ptr [esi + 8], 0x52c8e0
// 00528e8f  c7460490825200       mov dword ptr [esi + 4], 0x528290
// 00528e96  5f                   pop edi
// 00528e97  895e0c               mov dword ptr [esi + 0xc], ebx
// 00528e9a  895e20               mov dword ptr [esi + 0x20], ebx
// 00528e9d  895e10               mov dword ptr [esi + 0x10], ebx
// 00528ea0  895e24               mov dword ptr [esi + 0x24], ebx
// 00528ea3  895e14               mov dword ptr [esi + 0x14], ebx
// 00528ea6  895e28               mov dword ptr [esi + 0x28], ebx
// 00528ea9  895e18               mov dword ptr [esi + 0x18], ebx
// 00528eac  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00528eaf  5e                   pop esi
// 00528eb0  5b                   pop ebx
// 00528eb1  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _jinit_forward_dct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
