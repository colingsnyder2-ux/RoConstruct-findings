// roc 2012-06 00983ef0  unit: boost::exception  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00983ef0
//
// 00983ef0  8bff                 mov edi, edi
// 00983ef2  55                   push ebp
// 00983ef3  8bec                 mov ebp, esp
// 00983ef5  6afe                 push -2
// 00983ef7  683046d300           push 0xd34630
// 00983efc  68c93c9800           push 0x983cc9
// 00983f01  64a100000000         mov eax, dword ptr fs:[0]
// 00983f07  50                   push eax
// 00983f08  83ec08               sub esp, 8
// 00983f0b  53                   push ebx
// 00983f0c  56                   push esi
// 00983f0d  57                   push edi
// 00983f0e  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00983f13  3145f8               xor dword ptr [ebp - 8], eax
// 00983f16  33c5                 xor eax, ebp
// 00983f18  50                   push eax
// 00983f19  8d45f0               lea eax, [ebp - 0x10]
// 00983f1c  64a300000000         mov dword ptr fs:[0], eax
// 00983f22  8965e8               mov dword ptr [ebp - 0x18], esp
// 00983f25  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00983f2c  6800004000           push 0x400000
// 00983f31  e82affffff           call 0x983e60
// 00983f36  83c404               add esp, 4
// 00983f39  85c0                 test eax, eax
// 00983f3b  7455                 je 0x983f92
// 00983f3d  8b4508               mov eax, dword ptr [ebp + 8]
// 00983f40  2d00004000           sub eax, 0x400000
// 00983f45  50                   push eax
// 00983f46  6800004000           push 0x400000
// 00983f4b  e850ffffff           call 0x983ea0
// 00983f50  83c408               add esp, 8
// 00983f53  85c0                 test eax, eax
// 00983f55  743b                 je 0x983f92
// 00983f57  8b4024               mov eax, dword ptr [eax + 0x24]
// 00983f5a  c1e81f               shr eax, 0x1f
// 00983f5d  f7d0                 not eax
// 00983f5f  83e001               and eax, 1
// 00983f62  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 00983f69  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00983f6c  64890d00000000       mov dword ptr fs:[0], ecx
// 00983f73  59                   pop ecx
// 00983f74  5f                   pop edi
// 00983f75  5e                   pop esi
// 00983f76  5b                   pop ebx
// 00983f77  8be5                 mov esp, ebp
// 00983f79  5d                   pop ebp
// 00983f7a  c3                   ret 
// 00983f7b  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00983f7e  8b08                 mov ecx, dword ptr [eax]
// 00983f80  8b01                 mov eax, dword ptr [ecx]
// 00983f82  33d2                 xor edx, edx
// 00983f84  3d050000c0           cmp eax, 0xc0000005
// 00983f89  0f94c2               sete dl
// 00983f8c  8bc2                 mov eax, edx
// 00983f8e  c3                   ret 
// 00983f8f  8b65e8               mov esp, dword ptr [ebp - 0x18]
// 00983f92  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 00983f99  33c0                 xor eax, eax
// 00983f9b  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00983f9e  64890d00000000       mov dword ptr fs:[0], ecx
// 00983fa5  59                   pop ecx
// 00983fa6  5f                   pop edi
// 00983fa7  5e                   pop esi
// 00983fa8  5b                   pop ebx
// 00983fa9  8be5                 mov esp, ebp
// 00983fab  5d                   pop ebp
// 00983fac  c3                   ret 
// copied from an identical function in another client (function __IsNonwritableInCurrentImage)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-archive: msvc-crt libcmt.lib/f:/dd/vctools/crt_bld/SELF_X86/crt/src/build/INTEL/mt_obj/pesect.obj