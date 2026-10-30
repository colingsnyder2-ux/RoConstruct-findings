// roc 2011-06 00403610  unit: RBX::VRenderHooksService::?$FactoryProduct::Creator  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00403610
//
// 00403610  55                   push ebp
// 00403611  8bec                 mov ebp, esp
// 00403613  6aff                 push -1
// 00403615  68c876b800           push 0xb876c8
// 0040361a  683cb28000           push 0x80b23c
// 0040361f  64a100000000         mov eax, dword ptr fs:[0]
// 00403625  50                   push eax
// 00403626  64892500000000       mov dword ptr fs:[0], esp
// 0040362d  83ec0c               sub esp, 0xc
// 00403630  53                   push ebx
// 00403631  56                   push esi
// 00403632  57                   push edi
// 00403633  8965e8               mov dword ptr [ebp - 0x18], esp
// 00403636  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040363d  51                   push ecx
// 0040363e  ff15a003a400         call dword ptr [0xa403a0]
// 00403644  33c0                 xor eax, eax
// 00403646  eb1c                 jmp 0x403664
// 00403648  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0040364b  8b08                 mov ecx, dword ptr [eax]
// 0040364d  8b01                 mov eax, dword ptr [ecx]
// 0040364f  33d2                 xor edx, edx
// 00403651  3d170000c0           cmp eax, 0xc0000017
// 00403656  0f94c2               sete dl
// 00403659  8bc2                 mov eax, edx
// 0040365b  c3                   ret 
// 0040365c  8b65e8               mov esp, dword ptr [ebp - 0x18]
// 0040365f  b80e000780           mov eax, 0x8007000e
// 00403664  8945e4               mov dword ptr [ebp - 0x1c], eax
// 00403667  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040366e  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00403671  64890d00000000       mov dword ptr fs:[0], ecx
// 00403678  5f                   pop edi
// 00403679  5e                   pop esi
// 0040367a  5b                   pop ebx
// 0040367b  8be5                 mov esp, ebp
// 0040367d  5d                   pop ebp
// 0040367e  c3                   ret 
// copied from an identical function in another client (function ?Init@CComCriticalSection@ATL@@QAEJXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-8.0 atl.cpp