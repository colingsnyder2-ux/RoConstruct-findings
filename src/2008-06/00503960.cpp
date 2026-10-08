// roc 2008-06 00503960  unit: G3D::Lighting  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00503960
//
// 00503960  6aff                 push -1
// 00503962  683bf47b00           push 0x7bf43b
// 00503967  64a100000000         mov eax, dword ptr fs:[0]
// 0050396d  50                   push eax
// 0050396e  64892500000000       mov dword ptr fs:[0], esp
// 00503975  51                   push ecx
// 00503976  6a58                 push 0x58
// 00503978  c744240400000000     mov dword ptr [esp + 4], 0
// 00503980  e89bcf1900           call 0x6a0920
// 00503985  83c404               add esp, 4
// 00503988  890424               mov dword ptr [esp], eax
// 0050398b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00503993  85c0                 test eax, eax
// 00503995  7409                 je 0x5039a0
// 00503997  8bc8                 mov ecx, eax
// 00503999  e882feffff           call 0x503820
// 0050399e  eb02                 jmp 0x5039a2
// 005039a0  33c0                 xor eax, eax
// 005039a2  56                   push esi
// 005039a3  8b742418             mov esi, dword ptr [esp + 0x18]
// 005039a7  50                   push eax
// 005039a8  8bce                 mov ecx, esi
// 005039aa  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005039b2  c70600000000         mov dword ptr [esi], 0
// 005039b8  e8e3550900           call 0x598fa0
// 005039bd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005039c1  8bc6                 mov eax, esi
// 005039c3  5e                   pop esi
// 005039c4  64890d00000000       mov dword ptr fs:[0], ecx
// 005039cb  83c410               add esp, 0x10
// 005039ce  c3                   ret 
// library rbxgs-render/RenderScene.cpp (function ?create@Lighting@G3D@@SA?AV?$ReferenceCountedPointer@VLighting@G3D@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
