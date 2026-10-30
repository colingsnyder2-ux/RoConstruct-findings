// roc 2009-12 00402bf0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00402bf0
//
// 00402bf0  55                   push ebp
// 00402bf1  8bec                 mov ebp, esp
// 00402bf3  6aff                 push -1
// 00402bf5  6808f2a800           push 0xa8f208
// 00402bfa  68084a7f00           push 0x7f4a08
// 00402bff  64a100000000         mov eax, dword ptr fs:[0]
// 00402c05  50                   push eax
// 00402c06  64892500000000       mov dword ptr fs:[0], esp
// 00402c0d  83ec0c               sub esp, 0xc
// 00402c10  53                   push ebx
// 00402c11  56                   push esi
// 00402c12  57                   push edi
// 00402c13  8965e8               mov dword ptr [ebp - 0x18], esp
// 00402c16  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00402c1d  51                   push ecx
// 00402c1e  ff1550b29800         call dword ptr [0x98b250]
// 00402c24  33c0                 xor eax, eax
// 00402c26  eb1c                 jmp 0x402c44
// 00402c28  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00402c2b  8b08                 mov ecx, dword ptr [eax]
// 00402c2d  8b01                 mov eax, dword ptr [ecx]
// 00402c2f  33d2                 xor edx, edx
// 00402c31  3d170000c0           cmp eax, 0xc0000017
// 00402c36  0f94c2               sete dl
// 00402c39  8bc2                 mov eax, edx
// 00402c3b  c3                   ret 
// 00402c3c  8b65e8               mov esp, dword ptr [ebp - 0x18]
// 00402c3f  b80e000780           mov eax, 0x8007000e
// 00402c44  8945e4               mov dword ptr [ebp - 0x1c], eax
// 00402c47  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00402c4e  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00402c51  64890d00000000       mov dword ptr fs:[0], ecx
// 00402c58  5f                   pop edi
// 00402c59  5e                   pop esi
// 00402c5a  5b                   pop ebx
// 00402c5b  8be5                 mov esp, ebp
// 00402c5d  5d                   pop ebp
// 00402c5e  c3                   ret 
// copied from an identical function in another client (function ?Init@CComCriticalSection@ATL@@QAEJXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GF /Gy /GS- /MD
// roc-lib: atl-9.0-dll regobj.cpp