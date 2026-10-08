// roc 2007-03 00575370  unit: seg_00570000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00575370
//
// 00575370  83ec08               sub esp, 8
// 00575373  56                   push esi
// 00575374  8bf1                 mov esi, ecx
// 00575376  8b5604               mov edx, dword ptr [esi + 4]
// 00575379  85d2                 test edx, edx
// 0057537b  57                   push edi
// 0057537c  7504                 jne 0x575382
// 0057537e  33c9                 xor ecx, ecx
// 00575380  eb08                 jmp 0x57538a
// 00575382  8b4e08               mov ecx, dword ptr [esi + 8]
// 00575385  2bca                 sub ecx, edx
// 00575387  c1f903               sar ecx, 3
// 0057538a  85d2                 test edx, edx
// 0057538c  743d                 je 0x5753cb
// 0057538e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00575391  2bc2                 sub eax, edx
// 00575393  c1f803               sar eax, 3
// 00575396  3bc8                 cmp ecx, eax
// 00575398  7331                 jae 0x5753cb
// 0057539a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057539e  8b542414             mov edx, dword ptr [esp + 0x14]
// 005753a2  8b7e08               mov edi, dword ptr [esi + 8]
// 005753a5  c644240800           mov byte ptr [esp + 8], 0
// 005753aa  8b442408             mov eax, dword ptr [esp + 8]
// 005753ae  50                   push eax
// 005753af  51                   push ecx
// 005753b0  56                   push esi
// 005753b1  52                   push edx
// 005753b2  6a01                 push 1
// 005753b4  57                   push edi
// 005753b5  e8e6f5ffff           call 0x5749a0
// 005753ba  83c418               add esp, 0x18
// 005753bd  83c708               add edi, 8
// 005753c0  897e08               mov dword ptr [esi + 8], edi
// 005753c3  5f                   pop edi
// 005753c4  5e                   pop esi
// 005753c5  83c408               add esp, 8
// 005753c8  c20400               ret 4
// 005753cb  8b7e08               mov edi, dword ptr [esi + 8]
// 005753ce  3bd7                 cmp edx, edi
// 005753d0  7606                 jbe 0x5753d8
// 005753d2  ff1544e97700         call dword ptr [0x77e944]
// 005753d8  8b442414             mov eax, dword ptr [esp + 0x14]
// 005753dc  50                   push eax
// 005753dd  57                   push edi
// 005753de  56                   push esi
// 005753df  8d4c2414             lea ecx, [esp + 0x14]
// 005753e3  51                   push ecx
// 005753e4  8bce                 mov ecx, esi
// 005753e6  e8e5feffff           call 0x5752d0
// 005753eb  5f                   pop edi
// 005753ec  5e                   pop esi
// 005753ed  83c408               add esp, 8
// 005753f0  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?push_back@?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@QAEXABV?$weak_ptr@VPartInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
