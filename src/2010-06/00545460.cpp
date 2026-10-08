// roc 2010-06 00545460  unit: G3D::Lighting  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00545460
//
// 00545460  6aff                 push -1
// 00545462  684b1d9a00           push 0x9a1d4b
// 00545467  64a100000000         mov eax, dword ptr fs:[0]
// 0054546d  50                   push eax
// 0054546e  64892500000000       mov dword ptr fs:[0], esp
// 00545475  51                   push ecx
// 00545476  6a58                 push 0x58
// 00545478  c744240400000000     mov dword ptr [esp + 4], 0
// 00545480  e81b252600           call 0x7a79a0
// 00545485  83c404               add esp, 4
// 00545488  890424               mov dword ptr [esp], eax
// 0054548b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00545493  85c0                 test eax, eax
// 00545495  7409                 je 0x5454a0
// 00545497  8bc8                 mov ecx, eax
// 00545499  e882feffff           call 0x545320
// 0054549e  eb02                 jmp 0x5454a2
// 005454a0  33c0                 xor eax, eax
// 005454a2  56                   push esi
// 005454a3  8b742418             mov esi, dword ptr [esp + 0x18]
// 005454a7  50                   push eax
// 005454a8  8bce                 mov ecx, esi
// 005454aa  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005454b2  c70600000000         mov dword ptr [esi], 0
// 005454b8  e86318f4ff           call 0x486d20
// 005454bd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005454c1  8bc6                 mov eax, esi
// 005454c3  5e                   pop esi
// 005454c4  64890d00000000       mov dword ptr fs:[0], ecx
// 005454cb  83c410               add esp, 0x10
// 005454ce  c3                   ret 
// library rbxgs-render/RenderScene.cpp (function ?create@Lighting@G3D@@SA?AV?$ReferenceCountedPointer@VLighting@G3D@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
