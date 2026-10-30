// roc 2009-06 00402f20  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00402f20
//
// 00402f20  55                   push ebp
// 00402f21  8bec                 mov ebp, esp
// 00402f23  6aff                 push -1
// 00402f25  6858949700           push 0x979458
// 00402f2a  68da9b7100           push 0x719bda
// 00402f2f  64a100000000         mov eax, dword ptr fs:[0]
// 00402f35  50                   push eax
// 00402f36  64892500000000       mov dword ptr fs:[0], esp
// 00402f3d  83ec0c               sub esp, 0xc
// 00402f40  53                   push ebx
// 00402f41  56                   push esi
// 00402f42  57                   push edi
// 00402f43  8965e8               mov dword ptr [ebp - 0x18], esp
// 00402f46  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00402f4d  51                   push ecx
// 00402f4e  ff1548e38900         call dword ptr [0x89e348]
// 00402f54  33c0                 xor eax, eax
// 00402f56  eb1c                 jmp 0x402f74
// 00402f58  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00402f5b  8b08                 mov ecx, dword ptr [eax]
// 00402f5d  8b01                 mov eax, dword ptr [ecx]
// 00402f5f  33d2                 xor edx, edx
// 00402f61  3d170000c0           cmp eax, 0xc0000017
// 00402f66  0f94c2               sete dl
// 00402f69  8bc2                 mov eax, edx
// 00402f6b  c3                   ret 
// 00402f6c  8b65e8               mov esp, dword ptr [ebp - 0x18]
// 00402f6f  b80e000780           mov eax, 0x8007000e
// 00402f74  8945e4               mov dword ptr [ebp - 0x1c], eax
// 00402f77  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00402f7e  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00402f81  64890d00000000       mov dword ptr fs:[0], ecx
// 00402f88  5f                   pop edi
// 00402f89  5e                   pop esi
// 00402f8a  5b                   pop ebx
// 00402f8b  8be5                 mov esp, ebp
// 00402f8d  5d                   pop ebp
// 00402f8e  c3                   ret 
// copied from an identical function in another client (function ?Init@CComCriticalSection@ATL@@QAEJXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GF /Gy /GS- /MD
// roc-lib: atl-9.0-dll regobj.cpp