// roc 2011-06 0080be70  unit: boost::exception  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080be70
//
// 0080be70  8bff                 mov edi, edi
// 0080be72  55                   push ebp
// 0080be73  8bec                 mov ebp, esp
// 0080be75  6afe                 push -2
// 0080be77  689039bd00           push 0xbd3990
// 0080be7c  6845bc8000           push 0x80bc45
// 0080be81  64a100000000         mov eax, dword ptr fs:[0]
// 0080be87  50                   push eax
// 0080be88  83ec08               sub esp, 8
// 0080be8b  53                   push ebx
// 0080be8c  56                   push esi
// 0080be8d  57                   push edi
// 0080be8e  a12058c900           mov eax, dword ptr [0xc95820]
// 0080be93  3145f8               xor dword ptr [ebp - 8], eax
// 0080be96  33c5                 xor eax, ebp
// 0080be98  50                   push eax
// 0080be99  8d45f0               lea eax, [ebp - 0x10]
// 0080be9c  64a300000000         mov dword ptr fs:[0], eax
// 0080bea2  8965e8               mov dword ptr [ebp - 0x18], esp
// 0080bea5  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0080beac  6800004000           push 0x400000
// 0080beb1  e82affffff           call 0x80bde0
// 0080beb6  83c404               add esp, 4
// 0080beb9  85c0                 test eax, eax
// 0080bebb  7455                 je 0x80bf12
// 0080bebd  8b4508               mov eax, dword ptr [ebp + 8]
// 0080bec0  2d00004000           sub eax, 0x400000
// 0080bec5  50                   push eax
// 0080bec6  6800004000           push 0x400000
// 0080becb  e850ffffff           call 0x80be20
// 0080bed0  83c408               add esp, 8
// 0080bed3  85c0                 test eax, eax
// 0080bed5  743b                 je 0x80bf12
// 0080bed7  8b4024               mov eax, dword ptr [eax + 0x24]
// 0080beda  c1e81f               shr eax, 0x1f
// 0080bedd  f7d0                 not eax
// 0080bedf  83e001               and eax, 1
// 0080bee2  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 0080bee9  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 0080beec  64890d00000000       mov dword ptr fs:[0], ecx
// 0080bef3  59                   pop ecx
// 0080bef4  5f                   pop edi
// 0080bef5  5e                   pop esi
// 0080bef6  5b                   pop ebx
// 0080bef7  8be5                 mov esp, ebp
// 0080bef9  5d                   pop ebp
// 0080befa  c3                   ret 
// 0080befb  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0080befe  8b08                 mov ecx, dword ptr [eax]
// 0080bf00  8b01                 mov eax, dword ptr [ecx]
// 0080bf02  33d2                 xor edx, edx
// 0080bf04  3d050000c0           cmp eax, 0xc0000005
// 0080bf09  0f94c2               sete dl
// 0080bf0c  8bc2                 mov eax, edx
// 0080bf0e  c3                   ret 
// 0080bf0f  8b65e8               mov esp, dword ptr [ebp - 0x18]
// 0080bf12  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 0080bf19  33c0                 xor eax, eax
// 0080bf1b  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 0080bf1e  64890d00000000       mov dword ptr fs:[0], ecx
// 0080bf25  59                   pop ecx
// 0080bf26  5f                   pop edi
// 0080bf27  5e                   pop esi
// 0080bf28  5b                   pop ebx
// 0080bf29  8be5                 mov esp, ebp
// 0080bf2b  5d                   pop ebp
// 0080bf2c  c3                   ret 
// copied from an identical function in another client (function __IsNonwritableInCurrentImage)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-archive: msvc-crt libcmt.lib/f:/dd/vctools/crt_bld/SELF_X86/crt/src/build/INTEL/mt_obj/pesect.obj