// roc 2009-12 005e1ba0  unit: RBX::RbxG3D::RenderScene  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e1ba0
//
// 005e1ba0  6aff                 push -1
// 005e1ba2  680ee19300           push 0x93e10e
// 005e1ba7  64a100000000         mov eax, dword ptr fs:[0]
// 005e1bad  50                   push eax
// 005e1bae  64892500000000       mov dword ptr fs:[0], esp
// 005e1bb5  51                   push ecx
// 005e1bb6  53                   push ebx
// 005e1bb7  56                   push esi
// 005e1bb8  8bf1                 mov esi, ecx
// 005e1bba  89742408             mov dword ptr [esp + 8], esi
// 005e1bbe  8b464c               mov eax, dword ptr [esi + 0x4c]
// 005e1bc1  50                   push eax
// 005e1bc2  c744241802000000     mov dword ptr [esp + 0x18], 2
// 005e1bca  e811880000           call 0x5ea3e0
// 005e1bcf  33db                 xor ebx, ebx
// 005e1bd1  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005e1bd4  895e50               mov dword ptr [esi + 0x50], ebx
// 005e1bd7  895e54               mov dword ptr [esi + 0x54], ebx
// 005e1bda  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005e1bdd  51                   push ecx
// 005e1bde  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005e1be3  e8f8870000           call 0x5ea3e0
// 005e1be8  895e40               mov dword ptr [esi + 0x40], ebx
// 005e1beb  895e44               mov dword ptr [esi + 0x44], ebx
// 005e1bee  895e48               mov dword ptr [esi + 0x48], ebx
// 005e1bf1  8b4630               mov eax, dword ptr [esi + 0x30]
// 005e1bf4  83c408               add esp, 8
// 005e1bf7  885c2414             mov byte ptr [esp + 0x14], bl
// 005e1bfb  3bc3                 cmp eax, ebx
// 005e1bfd  7428                 je 0x5e1c27
// 005e1bff  83c004               add eax, 4
// 005e1c02  50                   push eax
// 005e1c03  ff1508b29800         call dword ptr [0x98b208]
// 005e1c09  85c0                 test eax, eax
// 005e1c0b  7517                 jne 0x5e1c24
// 005e1c0d  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005e1c10  e80b94e6ff           call 0x44b020
// 005e1c15  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005e1c18  3bcb                 cmp ecx, ebx
// 005e1c1a  7408                 je 0x5e1c24
// 005e1c1c  8b11                 mov edx, dword ptr [ecx]
// 005e1c1e  8b02                 mov eax, dword ptr [edx]
// 005e1c20  6a01                 push 1
// 005e1c22  ffd0                 call eax
// 005e1c24  895e30               mov dword ptr [esi + 0x30], ebx
// 005e1c27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e1c2b  c706a0559b00         mov dword ptr [esi], 0x9b55a0
// 005e1c31  5e                   pop esi
// 005e1c32  5b                   pop ebx
// 005e1c33  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1c3a  83c410               add esp, 0x10
// 005e1c3d  c3                   ret 
// library rbxgs-render/RenderScene.cpp (function ??1Lighting@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
