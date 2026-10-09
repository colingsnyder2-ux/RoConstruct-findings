// roc 2009-12 005e1c60  unit: G3D::Lighting  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e1c60
//
// 005e1c60  6aff                 push -1
// 005e1c62  68eba59400           push 0x94a5eb
// 005e1c67  64a100000000         mov eax, dword ptr fs:[0]
// 005e1c6d  50                   push eax
// 005e1c6e  64892500000000       mov dword ptr fs:[0], esp
// 005e1c75  51                   push ecx
// 005e1c76  6a58                 push 0x58
// 005e1c78  c744240400000000     mov dword ptr [esp + 4], 0
// 005e1c80  e8db1b2100           call 0x7f3860
// 005e1c85  83c404               add esp, 4
// 005e1c88  890424               mov dword ptr [esp], eax
// 005e1c8b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e1c93  85c0                 test eax, eax
// 005e1c95  7409                 je 0x5e1ca0
// 005e1c97  8bc8                 mov ecx, eax
// 005e1c99  e882feffff           call 0x5e1b20
// 005e1c9e  eb02                 jmp 0x5e1ca2
// 005e1ca0  33c0                 xor eax, eax
// 005e1ca2  56                   push esi
// 005e1ca3  8b742418             mov esi, dword ptr [esp + 0x18]
// 005e1ca7  50                   push eax
// 005e1ca8  8bce                 mov ecx, esi
// 005e1caa  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e1cb2  c70600000000         mov dword ptr [esi], 0
// 005e1cb8  e8b39ee6ff           call 0x44bb70
// 005e1cbd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e1cc1  8bc6                 mov eax, esi
// 005e1cc3  5e                   pop esi
// 005e1cc4  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1ccb  83c410               add esp, 0x10
// 005e1cce  c3                   ret 
// library rbxgs-render/RenderScene.cpp (function ?create@Lighting@G3D@@SA?AV?$ReferenceCountedPointer@VLighting@G3D@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
