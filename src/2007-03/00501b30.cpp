// roc 2007-03 00501b30  unit: seg_00500000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00501b30
//
// 00501b30  6aff                 push -1
// 00501b32  68dc647400           push 0x7464dc
// 00501b37  64a100000000         mov eax, dword ptr fs:[0]
// 00501b3d  50                   push eax
// 00501b3e  51                   push ecx
// 00501b3f  56                   push esi
// 00501b40  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00501b45  33c4                 xor eax, esp
// 00501b47  50                   push eax
// 00501b48  8d44240c             lea eax, [esp + 0xc]
// 00501b4c  64a300000000         mov dword ptr fs:[0], eax
// 00501b52  8bf1                 mov esi, ecx
// 00501b54  89742408             mov dword ptr [esp + 8], esi
// 00501b58  c70600057a00         mov dword ptr [esi], 0x7a0500
// 00501b5e  8d4e28               lea ecx, [esi + 0x28]
// 00501b61  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00501b69  ff158ce77700         call dword ptr [0x77e78c]
// 00501b6f  8d4e04               lea ecx, [esi + 4]
// 00501b72  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00501b7a  ff158ce77700         call dword ptr [0x77e78c]
// 00501b80  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00501b84  64890d00000000       mov dword ptr fs:[0], ecx
// 00501b8b  59                   pop ecx
// 00501b8c  5e                   pop esi
// 00501b8d  83c410               add esp, 0x10
// 00501b90  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??1TokenException@TextInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
