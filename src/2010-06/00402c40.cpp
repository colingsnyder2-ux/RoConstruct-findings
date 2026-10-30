// roc 2010-06 00402c40  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00402c40
//
// 00402c40  55                   push ebp
// 00402c41  8bec                 mov ebp, esp
// 00402c43  6aff                 push -1
// 00402c45  68b81db000           push 0xb01db8
// 00402c4a  68428b7a00           push 0x7a8b42
// 00402c4f  64a100000000         mov eax, dword ptr fs:[0]
// 00402c55  50                   push eax
// 00402c56  64892500000000       mov dword ptr fs:[0], esp
// 00402c5d  83ec0c               sub esp, 0xc
// 00402c60  53                   push ebx
// 00402c61  56                   push esi
// 00402c62  57                   push edi
// 00402c63  8965e8               mov dword ptr [ebp - 0x18], esp
// 00402c66  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00402c6d  51                   push ecx
// 00402c6e  ff15c0a39e00         call dword ptr [0x9ea3c0]
// 00402c74  33c0                 xor eax, eax
// 00402c76  eb1c                 jmp 0x402c94
// 00402c78  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00402c7b  8b08                 mov ecx, dword ptr [eax]
// 00402c7d  8b01                 mov eax, dword ptr [ecx]
// 00402c7f  33d2                 xor edx, edx
// 00402c81  3d170000c0           cmp eax, 0xc0000017
// 00402c86  0f94c2               sete dl
// 00402c89  8bc2                 mov eax, edx
// 00402c8b  c3                   ret 
// 00402c8c  8b65e8               mov esp, dword ptr [ebp - 0x18]
// 00402c8f  b80e000780           mov eax, 0x8007000e
// 00402c94  8945e4               mov dword ptr [ebp - 0x1c], eax
// 00402c97  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00402c9e  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00402ca1  64890d00000000       mov dword ptr fs:[0], ecx
// 00402ca8  5f                   pop edi
// 00402ca9  5e                   pop esi
// 00402caa  5b                   pop ebx
// 00402cab  8be5                 mov esp, ebp
// 00402cad  5d                   pop ebp
// 00402cae  c3                   ret 
// copied from an identical function in another client (function ?Init@CComCriticalSection@ATL@@QAEJXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-8.0 atl.cpp