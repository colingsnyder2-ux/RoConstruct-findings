// roc 2007-08 005db520  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005db520
//
// 005db520  83ec08               sub esp, 8
// 005db523  56                   push esi
// 005db524  8bf1                 mov esi, ecx
// 005db526  8b5604               mov edx, dword ptr [esi + 4]
// 005db529  85d2                 test edx, edx
// 005db52b  57                   push edi
// 005db52c  7504                 jne 0x5db532
// 005db52e  33c9                 xor ecx, ecx
// 005db530  eb08                 jmp 0x5db53a
// 005db532  8b4e08               mov ecx, dword ptr [esi + 8]
// 005db535  2bca                 sub ecx, edx
// 005db537  c1f902               sar ecx, 2
// 005db53a  85d2                 test edx, edx
// 005db53c  743d                 je 0x5db57b
// 005db53e  8b460c               mov eax, dword ptr [esi + 0xc]
// 005db541  2bc2                 sub eax, edx
// 005db543  c1f802               sar eax, 2
// 005db546  3bc8                 cmp ecx, eax
// 005db548  7331                 jae 0x5db57b
// 005db54a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005db54e  8b542414             mov edx, dword ptr [esp + 0x14]
// 005db552  8b7e08               mov edi, dword ptr [esi + 8]
// 005db555  c644240800           mov byte ptr [esp + 8], 0
// 005db55a  8b442408             mov eax, dword ptr [esp + 8]
// 005db55e  50                   push eax
// 005db55f  51                   push ecx
// 005db560  56                   push esi
// 005db561  52                   push edx
// 005db562  6a01                 push 1
// 005db564  57                   push edi
// 005db565  e866e5f9ff           call 0x579ad0
// 005db56a  83c418               add esp, 0x18
// 005db56d  83c704               add edi, 4
// 005db570  897e08               mov dword ptr [esi + 8], edi
// 005db573  5f                   pop edi
// 005db574  5e                   pop esi
// 005db575  83c408               add esp, 8
// 005db578  c20400               ret 4
// 005db57b  8b7e08               mov edi, dword ptr [esi + 8]
// 005db57e  3bd7                 cmp edx, edi
// 005db580  7606                 jbe 0x5db588
// 005db582  ff15d8e67700         call dword ptr [0x77e6d8]
// 005db588  8b442414             mov eax, dword ptr [esp + 0x14]
// 005db58c  50                   push eax
// 005db58d  57                   push edi
// 005db58e  56                   push esi
// 005db58f  8d4c2414             lea ecx, [esp + 0x14]
// 005db593  51                   push ecx
// 005db594  8bce                 mov ecx, esi
// 005db596  e8f5feffff           call 0x5db490
// 005db59b  5f                   pop edi
// 005db59c  5e                   pop esi
// 005db59d  83c408               add esp, 8
// 005db5a0  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?push_back@?$vector@W4CameraType@Camera@RBX@@V?$allocator@W4CameraType@Camera@RBX@@@std@@@std@@QAEXABW4CameraType@Camera@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
