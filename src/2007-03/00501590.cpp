// roc 2007-03 00501590  unit: seg_00500000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00501590
//
// 00501590  6aff                 push -1
// 00501592  68bc5d7400           push 0x745dbc
// 00501597  64a100000000         mov eax, dword ptr fs:[0]
// 0050159d  50                   push eax
// 0050159e  51                   push ecx
// 0050159f  56                   push esi
// 005015a0  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 005015a5  33c4                 xor eax, esp
// 005015a7  50                   push eax
// 005015a8  8d44240c             lea eax, [esp + 0xc]
// 005015ac  64a300000000         mov dword ptr fs:[0], eax
// 005015b2  8bf1                 mov esi, ecx
// 005015b4  89742408             mov dword ptr [esp + 8], esi
// 005015b8  c70648047a00         mov dword ptr [esi], 0x7a0448
// 005015be  807e4800             cmp byte ptr [esi + 0x48], 0
// 005015c2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005015ca  740c                 je 0x5015d8
// 005015cc  8b4640               mov eax, dword ptr [esi + 0x40]
// 005015cf  50                   push eax
// 005015d0  e88b1dffff           call 0x4f3360
// 005015d5  83c404               add esp, 4
// 005015d8  8d4e08               lea ecx, [esi + 8]
// 005015db  c7464000000000       mov dword ptr [esi + 0x40], 0
// 005015e2  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005015ea  ff158ce77700         call dword ptr [0x77e78c]
// 005015f0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005015f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005015fb  59                   pop ecx
// 005015fc  5e                   pop esi
// 005015fd  83c410               add esp, 0x10
// 00501600  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??1BinaryInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
