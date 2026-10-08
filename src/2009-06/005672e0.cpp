// roc 2009-06 005672e0  unit: G3D::Lighting  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005672e0
//
// 005672e0  6aff                 push -1
// 005672e2  687b9c8600           push 0x869c7b
// 005672e7  64a100000000         mov eax, dword ptr fs:[0]
// 005672ed  50                   push eax
// 005672ee  64892500000000       mov dword ptr fs:[0], esp
// 005672f5  51                   push ecx
// 005672f6  6a58                 push 0x58
// 005672f8  c744240400000000     mov dword ptr [esp + 4], 0
// 00567300  e833171b00           call 0x718a38
// 00567305  83c404               add esp, 4
// 00567308  890424               mov dword ptr [esp], eax
// 0056730b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00567313  85c0                 test eax, eax
// 00567315  7409                 je 0x567320
// 00567317  8bc8                 mov ecx, eax
// 00567319  e882feffff           call 0x5671a0
// 0056731e  eb02                 jmp 0x567322
// 00567320  33c0                 xor eax, eax
// 00567322  56                   push esi
// 00567323  8b742418             mov esi, dword ptr [esp + 0x18]
// 00567327  50                   push eax
// 00567328  8bce                 mov ecx, esi
// 0056732a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00567332  c70600000000         mov dword ptr [esi], 0
// 00567338  e82385f3ff           call 0x49f860
// 0056733d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00567341  8bc6                 mov eax, esi
// 00567343  5e                   pop esi
// 00567344  64890d00000000       mov dword ptr fs:[0], ecx
// 0056734b  83c410               add esp, 0x10
// 0056734e  c3                   ret 
// library rbxgs-render/RenderScene.cpp (function ?create@Lighting@G3D@@SA?AV?$ReferenceCountedPointer@VLighting@G3D@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
