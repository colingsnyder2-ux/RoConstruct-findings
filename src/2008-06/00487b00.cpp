// roc 2008-06 00487b00  unit: G3D::Shader  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00487b00
//
// 00487b00  6aff                 push -1
// 00487b02  688b587c00           push 0x7c588b
// 00487b07  64a100000000         mov eax, dword ptr fs:[0]
// 00487b0d  50                   push eax
// 00487b0e  64892500000000       mov dword ptr fs:[0], esp
// 00487b15  51                   push ecx
// 00487b16  53                   push ebx
// 00487b17  56                   push esi
// 00487b18  8bf1                 mov esi, ecx
// 00487b1a  89742408             mov dword ptr [esp + 8], esi
// 00487b1e  8d4e40               lea ecx, [esi + 0x40]
// 00487b21  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00487b29  ff1568248000         call dword ptr [0x802468]
// 00487b2f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00487b32  33db                 xor ebx, ebx
// 00487b34  50                   push eax
// 00487b35  885c2418             mov byte ptr [esp + 0x18], bl
// 00487b39  e8e2010800           call 0x507d20
// 00487b3e  83c404               add esp, 4
// 00487b41  895e20               mov dword ptr [esi + 0x20], ebx
// 00487b44  895e24               mov dword ptr [esi + 0x24], ebx
// 00487b47  895e28               mov dword ptr [esi + 0x28], ebx
// 00487b4a  8bce                 mov ecx, esi
// 00487b4c  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00487b54  e8773cfcff           call 0x44b7d0
// 00487b59  8b0e                 mov ecx, dword ptr [esi]
// 00487b5b  51                   push ecx
// 00487b5c  e8198b2100           call 0x6a067a
// 00487b61  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00487b65  83c404               add esp, 4
// 00487b68  5e                   pop esi
// 00487b69  5b                   pop ebx
// 00487b6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00487b71  83c410               add esp, 0x10
// 00487b74  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1TextInput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
