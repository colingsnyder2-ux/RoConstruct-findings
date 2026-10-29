// roc 2009-06 0071a820  unit: ActiveDocView  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071a820
//
// 0071a820  8bff                 mov edi, edi
// 0071a822  55                   push ebp
// 0071a823  8bec                 mov ebp, esp
// 0071a825  6afe                 push -2
// 0071a827  68a0269b00           push 0x9b26a0
// 0071a82c  68fda57100           push 0x71a5fd
// 0071a831  64a100000000         mov eax, dword ptr fs:[0]
// 0071a837  50                   push eax
// 0071a838  83ec08               sub esp, 8
// 0071a83b  53                   push ebx
// 0071a83c  56                   push esi
// 0071a83d  57                   push edi
// 0071a83e  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0071a843  3145f8               xor dword ptr [ebp - 8], eax
// 0071a846  33c5                 xor eax, ebp
// 0071a848  50                   push eax
// 0071a849  8d45f0               lea eax, [ebp - 0x10]
// 0071a84c  64a300000000         mov dword ptr fs:[0], eax
// 0071a852  8965e8               mov dword ptr [ebp - 0x18], esp
// 0071a855  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0071a85c  6800004000           push 0x400000
// 0071a861  e82affffff           call 0x71a790
// 0071a866  83c404               add esp, 4
// 0071a869  85c0                 test eax, eax
// 0071a86b  7455                 je 0x71a8c2
// 0071a86d  8b4508               mov eax, dword ptr [ebp + 8]
// 0071a870  2d00004000           sub eax, 0x400000
// 0071a875  50                   push eax
// 0071a876  6800004000           push 0x400000
// 0071a87b  e850ffffff           call 0x71a7d0
// 0071a880  83c408               add esp, 8
// 0071a883  85c0                 test eax, eax
// 0071a885  743b                 je 0x71a8c2
// 0071a887  8b4024               mov eax, dword ptr [eax + 0x24]
// 0071a88a  c1e81f               shr eax, 0x1f
// 0071a88d  f7d0                 not eax
// 0071a88f  83e001               and eax, 1
// 0071a892  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 0071a899  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 0071a89c  64890d00000000       mov dword ptr fs:[0], ecx
// 0071a8a3  59                   pop ecx
// 0071a8a4  5f                   pop edi
// 0071a8a5  5e                   pop esi
// 0071a8a6  5b                   pop ebx
// 0071a8a7  8be5                 mov esp, ebp
// 0071a8a9  5d                   pop ebp
// 0071a8aa  c3                   ret 
// 0071a8ab  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0071a8ae  8b08                 mov ecx, dword ptr [eax]
// 0071a8b0  8b01                 mov eax, dword ptr [ecx]
// 0071a8b2  33d2                 xor edx, edx
// 0071a8b4  3d050000c0           cmp eax, 0xc0000005
// 0071a8b9  0f94c2               sete dl
// 0071a8bc  8bc2                 mov eax, edx
// 0071a8be  c3                   ret 
// 0071a8bf  8b65e8               mov esp, dword ptr [ebp - 0x18]
// 0071a8c2  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 0071a8c9  33c0                 xor eax, eax
// 0071a8cb  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 0071a8ce  64890d00000000       mov dword ptr fs:[0], ecx
// 0071a8d5  59                   pop ecx
// 0071a8d6  5f                   pop edi
// 0071a8d7  5e                   pop esi
// 0071a8d8  5b                   pop ebx
// 0071a8d9  8be5                 mov esp, ebp
// 0071a8db  5d                   pop ebp
// 0071a8dc  c3                   ret 
// copied from an identical function in another client (function __IsNonwritableInCurrentImage)

// roc-archive: msvc-crt libcmt.lib/f:/dd/vctools/crt_bld/SELF_X86/crt/src/build/INTEL/mt_obj/pesect.obj