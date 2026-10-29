// roc 2009-12 007f5640  unit: ActiveDocView  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5640
//
// 007f5640  8bff                 mov edi, edi
// 007f5642  55                   push ebp
// 007f5643  8bec                 mov ebp, esp
// 007f5645  6afe                 push -2
// 007f5647  68e85bad00           push 0xad5be8
// 007f564c  6815547f00           push 0x7f5415
// 007f5651  64a100000000         mov eax, dword ptr fs:[0]
// 007f5657  50                   push eax
// 007f5658  83ec08               sub esp, 8
// 007f565b  53                   push ebx
// 007f565c  56                   push esi
// 007f565d  57                   push edi
// 007f565e  a10052b600           mov eax, dword ptr [0xb65200]
// 007f5663  3145f8               xor dword ptr [ebp - 8], eax
// 007f5666  33c5                 xor eax, ebp
// 007f5668  50                   push eax
// 007f5669  8d45f0               lea eax, [ebp - 0x10]
// 007f566c  64a300000000         mov dword ptr fs:[0], eax
// 007f5672  8965e8               mov dword ptr [ebp - 0x18], esp
// 007f5675  c745fc00000000       mov dword ptr [ebp - 4], 0
// 007f567c  6800004000           push 0x400000
// 007f5681  e82affffff           call 0x7f55b0
// 007f5686  83c404               add esp, 4
// 007f5689  85c0                 test eax, eax
// 007f568b  7455                 je 0x7f56e2
// 007f568d  8b4508               mov eax, dword ptr [ebp + 8]
// 007f5690  2d00004000           sub eax, 0x400000
// 007f5695  50                   push eax
// 007f5696  6800004000           push 0x400000
// 007f569b  e850ffffff           call 0x7f55f0
// 007f56a0  83c408               add esp, 8
// 007f56a3  85c0                 test eax, eax
// 007f56a5  743b                 je 0x7f56e2
// 007f56a7  8b4024               mov eax, dword ptr [eax + 0x24]
// 007f56aa  c1e81f               shr eax, 0x1f
// 007f56ad  f7d0                 not eax
// 007f56af  83e001               and eax, 1
// 007f56b2  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 007f56b9  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 007f56bc  64890d00000000       mov dword ptr fs:[0], ecx
// 007f56c3  59                   pop ecx
// 007f56c4  5f                   pop edi
// 007f56c5  5e                   pop esi
// 007f56c6  5b                   pop ebx
// 007f56c7  8be5                 mov esp, ebp
// 007f56c9  5d                   pop ebp
// 007f56ca  c3                   ret 
// 007f56cb  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 007f56ce  8b08                 mov ecx, dword ptr [eax]
// 007f56d0  8b01                 mov eax, dword ptr [ecx]
// 007f56d2  33d2                 xor edx, edx
// 007f56d4  3d050000c0           cmp eax, 0xc0000005
// 007f56d9  0f94c2               sete dl
// 007f56dc  8bc2                 mov eax, edx
// 007f56de  c3                   ret 
// 007f56df  8b65e8               mov esp, dword ptr [ebp - 0x18]
// 007f56e2  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 007f56e9  33c0                 xor eax, eax
// 007f56eb  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 007f56ee  64890d00000000       mov dword ptr fs:[0], ecx
// 007f56f5  59                   pop ecx
// 007f56f6  5f                   pop edi
// 007f56f7  5e                   pop esi
// 007f56f8  5b                   pop ebx
// 007f56f9  8be5                 mov esp, ebp
// 007f56fb  5d                   pop ebp
// 007f56fc  c3                   ret 
// copied from an identical function in another client (function __IsNonwritableInCurrentImage)

// roc-archive: msvc-crt libcmt.lib/f:/dd/vctools/crt_bld/SELF_X86/crt/src/build/INTEL/mt_obj/pesect.obj