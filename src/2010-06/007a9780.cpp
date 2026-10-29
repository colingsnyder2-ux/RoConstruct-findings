// roc 2010-06 007a9780  unit: ActiveDocView  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9780
//
// 007a9780  8bff                 mov edi, edi
// 007a9782  55                   push ebp
// 007a9783  8bec                 mov ebp, esp
// 007a9785  6afe                 push -2
// 007a9787  68d079b400           push 0xb479d0
// 007a978c  6851957a00           push 0x7a9551
// 007a9791  64a100000000         mov eax, dword ptr fs:[0]
// 007a9797  50                   push eax
// 007a9798  83ec08               sub esp, 8
// 007a979b  53                   push ebx
// 007a979c  56                   push esi
// 007a979d  57                   push edi
// 007a979e  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007a97a3  3145f8               xor dword ptr [ebp - 8], eax
// 007a97a6  33c5                 xor eax, ebp
// 007a97a8  50                   push eax
// 007a97a9  8d45f0               lea eax, [ebp - 0x10]
// 007a97ac  64a300000000         mov dword ptr fs:[0], eax
// 007a97b2  8965e8               mov dword ptr [ebp - 0x18], esp
// 007a97b5  c745fc00000000       mov dword ptr [ebp - 4], 0
// 007a97bc  6800004000           push 0x400000
// 007a97c1  e82affffff           call 0x7a96f0
// 007a97c6  83c404               add esp, 4
// 007a97c9  85c0                 test eax, eax
// 007a97cb  7455                 je 0x7a9822
// 007a97cd  8b4508               mov eax, dword ptr [ebp + 8]
// 007a97d0  2d00004000           sub eax, 0x400000
// 007a97d5  50                   push eax
// 007a97d6  6800004000           push 0x400000
// 007a97db  e850ffffff           call 0x7a9730
// 007a97e0  83c408               add esp, 8
// 007a97e3  85c0                 test eax, eax
// 007a97e5  743b                 je 0x7a9822
// 007a97e7  8b4024               mov eax, dword ptr [eax + 0x24]
// 007a97ea  c1e81f               shr eax, 0x1f
// 007a97ed  f7d0                 not eax
// 007a97ef  83e001               and eax, 1
// 007a97f2  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 007a97f9  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 007a97fc  64890d00000000       mov dword ptr fs:[0], ecx
// 007a9803  59                   pop ecx
// 007a9804  5f                   pop edi
// 007a9805  5e                   pop esi
// 007a9806  5b                   pop ebx
// 007a9807  8be5                 mov esp, ebp
// 007a9809  5d                   pop ebp
// 007a980a  c3                   ret 
// 007a980b  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 007a980e  8b08                 mov ecx, dword ptr [eax]
// 007a9810  8b01                 mov eax, dword ptr [ecx]
// 007a9812  33d2                 xor edx, edx
// 007a9814  3d050000c0           cmp eax, 0xc0000005
// 007a9819  0f94c2               sete dl
// 007a981c  8bc2                 mov eax, edx
// 007a981e  c3                   ret 
// 007a981f  8b65e8               mov esp, dword ptr [ebp - 0x18]
// 007a9822  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 007a9829  33c0                 xor eax, eax
// 007a982b  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 007a982e  64890d00000000       mov dword ptr fs:[0], ecx
// 007a9835  59                   pop ecx
// 007a9836  5f                   pop edi
// 007a9837  5e                   pop esi
// 007a9838  5b                   pop ebx
// 007a9839  8be5                 mov esp, ebp
// 007a983b  5d                   pop ebp
// 007a983c  c3                   ret 
// copied from an identical function in another client (function __IsNonwritableInCurrentImage)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-archive: msvc-crt libcmt.lib/f:/dd/vctools/crt_bld/SELF_X86/crt/src/build/INTEL/mt_obj/pesect.obj