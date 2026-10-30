// roc 2012-06 00404220  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00404220
//
// 00404220  55                   push ebp
// 00404221  8bec                 mov ebp, esp
// 00404223  6aff                 push -1
// 00404225  683065cd00           push 0xcd6530
// 0040422a  68da329800           push 0x9832da
// 0040422f  64a100000000         mov eax, dword ptr fs:[0]
// 00404235  50                   push eax
// 00404236  64892500000000       mov dword ptr fs:[0], esp
// 0040423d  83ec0c               sub esp, 0xc
// 00404240  53                   push ebx
// 00404241  56                   push esi
// 00404242  57                   push edi
// 00404243  8965e8               mov dword ptr [ebp - 0x18], esp
// 00404246  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040424d  51                   push ecx
// 0040424e  ff15dc21b200         call dword ptr [0xb221dc]
// 00404254  33c0                 xor eax, eax
// 00404256  eb1c                 jmp 0x404274
// 00404258  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0040425b  8b08                 mov ecx, dword ptr [eax]
// 0040425d  8b01                 mov eax, dword ptr [ecx]
// 0040425f  33d2                 xor edx, edx
// 00404261  3d170000c0           cmp eax, 0xc0000017
// 00404266  0f94c2               sete dl
// 00404269  8bc2                 mov eax, edx
// 0040426b  c3                   ret 
// 0040426c  8b65e8               mov esp, dword ptr [ebp - 0x18]
// 0040426f  b80e000780           mov eax, 0x8007000e
// 00404274  8945e4               mov dword ptr [ebp - 0x1c], eax
// 00404277  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040427e  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00404281  64890d00000000       mov dword ptr fs:[0], ecx
// 00404288  5f                   pop edi
// 00404289  5e                   pop esi
// 0040428a  5b                   pop ebx
// 0040428b  8be5                 mov esp, ebp
// 0040428d  5d                   pop ebp
// 0040428e  c3                   ret 
// copied from an identical function in another client (function ?Init@CComCriticalSection@ATL@@QAEJXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-8.0 atl.cpp