// from server: 100% by auto
// roc 2008-06 00554b90  unit: RBX::RunService  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554b90
//
// 00554b90  64a100000000         mov eax, dword ptr fs:[0]
// 00554b96  6aff                 push -1
// 00554b98  6818dd7c00           push 0x7cdd18
// 00554b9d  50                   push eax
// 00554b9e  64892500000000       mov dword ptr fs:[0], esp
// 00554ba5  83ec20               sub esp, 0x20
// 00554ba8  56                   push esi
// 00554ba9  57                   push edi
// 00554baa  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00554bae  8bf1                 mov esi, ecx
// 00554bb0  3bfe                 cmp edi, esi
// 00554bb2  7465                 je 0x554c19
// 00554bb4  8b06                 mov eax, dword ptr [esi]
// 00554bb6  c744240800000000     mov dword ptr [esp + 8], 0
// 00554bbe  85c0                 test eax, eax
// 00554bc0  7416                 je 0x554bd8
// 00554bc2  6a00                 push 0
// 00554bc4  8d4c2414             lea ecx, [esp + 0x14]
// 00554bc8  51                   push ecx
// 00554bc9  8d5608               lea edx, [esi + 8]
// 00554bcc  89442410             mov dword ptr [esp + 0x10], eax
// 00554bd0  8b00                 mov eax, dword ptr [eax]
// 00554bd2  52                   push edx
// 00554bd3  ffd0                 call eax
// 00554bd5  83c40c               add esp, 0xc
// 00554bd8  57                   push edi
// 00554bd9  8bce                 mov ecx, esi
// 00554bdb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00554be3  e888f8ffff           call 0x554470
// 00554be8  8d4c2408             lea ecx, [esp + 8]
// 00554bec  51                   push ecx
// 00554bed  8bcf                 mov ecx, edi
// 00554bef  e87cf8ffff           call 0x554470
// 00554bf4  8b442408             mov eax, dword ptr [esp + 8]
// 00554bf8  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00554c00  85c0                 test eax, eax
// 00554c02  7415                 je 0x554c19
// 00554c04  8b00                 mov eax, dword ptr [eax]
// 00554c06  85c0                 test eax, eax
// 00554c08  740f                 je 0x554c19
// 00554c0a  8d542410             lea edx, [esp + 0x10]
// 00554c0e  6a01                 push 1
// 00554c10  52                   push edx
// 00554c11  8bca                 mov ecx, edx
// 00554c13  51                   push ecx
// 00554c14  ffd0                 call eax
// 00554c16  83c40c               add esp, 0xc
// 00554c19  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00554c1d  5f                   pop edi
// 00554c1e  5e                   pop esi
// 00554c1f  64890d00000000       mov dword ptr fs:[0], ecx
// 00554c26  83c42c               add esp, 0x2c
// 00554c29  c20400               ret 4
// library templates-boost-1_34_1/function_b.cpp (function ?swap@?$function1@X_NV?$allocator@X@std@@@boost@@QAEXAAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 function_b.cpp
