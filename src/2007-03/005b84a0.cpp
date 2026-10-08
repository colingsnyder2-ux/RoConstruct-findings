// roc 2007-03 005b84a0  unit: seg_005b0000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b84a0
//
// 005b84a0  83ec08               sub esp, 8
// 005b84a3  56                   push esi
// 005b84a4  8bf1                 mov esi, ecx
// 005b84a6  8b5604               mov edx, dword ptr [esi + 4]
// 005b84a9  85d2                 test edx, edx
// 005b84ab  57                   push edi
// 005b84ac  7504                 jne 0x5b84b2
// 005b84ae  33c9                 xor ecx, ecx
// 005b84b0  eb08                 jmp 0x5b84ba
// 005b84b2  8b4e08               mov ecx, dword ptr [esi + 8]
// 005b84b5  2bca                 sub ecx, edx
// 005b84b7  c1f902               sar ecx, 2
// 005b84ba  85d2                 test edx, edx
// 005b84bc  743d                 je 0x5b84fb
// 005b84be  8b460c               mov eax, dword ptr [esi + 0xc]
// 005b84c1  2bc2                 sub eax, edx
// 005b84c3  c1f802               sar eax, 2
// 005b84c6  3bc8                 cmp ecx, eax
// 005b84c8  7331                 jae 0x5b84fb
// 005b84ca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b84ce  8b542414             mov edx, dword ptr [esp + 0x14]
// 005b84d2  8b7e08               mov edi, dword ptr [esi + 8]
// 005b84d5  c644240800           mov byte ptr [esp + 8], 0
// 005b84da  8b442408             mov eax, dword ptr [esp + 8]
// 005b84de  50                   push eax
// 005b84df  51                   push ecx
// 005b84e0  56                   push esi
// 005b84e1  52                   push edx
// 005b84e2  6a01                 push 1
// 005b84e4  57                   push edi
// 005b84e5  e826fefbff           call 0x578310
// 005b84ea  83c418               add esp, 0x18
// 005b84ed  83c704               add edi, 4
// 005b84f0  897e08               mov dword ptr [esi + 8], edi
// 005b84f3  5f                   pop edi
// 005b84f4  5e                   pop esi
// 005b84f5  83c408               add esp, 8
// 005b84f8  c20400               ret 4
// 005b84fb  8b7e08               mov edi, dword ptr [esi + 8]
// 005b84fe  3bd7                 cmp edx, edi
// 005b8500  7606                 jbe 0x5b8508
// 005b8502  ff1544e97700         call dword ptr [0x77e944]
// 005b8508  8b442414             mov eax, dword ptr [esp + 0x14]
// 005b850c  50                   push eax
// 005b850d  57                   push edi
// 005b850e  56                   push esi
// 005b850f  8d4c2414             lea ecx, [esp + 0x14]
// 005b8513  51                   push ecx
// 005b8514  8bce                 mov ecx, esi
// 005b8516  e8f5feffff           call 0x5b8410
// 005b851b  5f                   pop edi
// 005b851c  5e                   pop esi
// 005b851d  83c408               add esp, 8
// 005b8520  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?push_back@?$vector@W4CameraType@Camera@RBX@@V?$allocator@W4CameraType@Camera@RBX@@@std@@@std@@QAEXABW4CameraType@Camera@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
