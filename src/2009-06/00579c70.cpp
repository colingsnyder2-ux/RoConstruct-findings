// from server: 100% by auto
// roc 2009-06 00579c70  unit: G3D::LineSegment  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579c70
//
// 00579c70  6aff                 push -1
// 00579c72  6833098600           push 0x860933
// 00579c77  64a100000000         mov eax, dword ptr fs:[0]
// 00579c7d  50                   push eax
// 00579c7e  64892500000000       mov dword ptr fs:[0], esp
// 00579c85  51                   push ecx
// 00579c86  53                   push ebx
// 00579c87  56                   push esi
// 00579c88  8bf1                 mov esi, ecx
// 00579c8a  57                   push edi
// 00579c8b  8d7e0c               lea edi, [esi + 0xc]
// 00579c8e  8bcf                 mov ecx, edi
// 00579c90  8974240c             mov dword ptr [esp + 0xc], esi
// 00579c94  ff15c0e48900         call dword ptr [0x89e4c0]
// 00579c9a  33db                 xor ebx, ebx
// 00579c9c  895c2418             mov dword ptr [esp + 0x18], ebx
// 00579ca0  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00579ca3  895e30               mov dword ptr [esi + 0x30], ebx
// 00579ca6  895e28               mov dword ptr [esi + 0x28], ebx
// 00579ca9  8d4e54               lea ecx, [esi + 0x54]
// 00579cac  c644241801           mov byte ptr [esp + 0x18], 1
// 00579cb1  c7463401000000       mov dword ptr [esi + 0x34], 1
// 00579cb8  885e38               mov byte ptr [esi + 0x38], bl
// 00579cbb  c7463c50000000       mov dword ptr [esi + 0x3c], 0x50
// 00579cc2  c7464004000000       mov dword ptr [esi + 0x40], 4
// 00579cc9  c6464801             mov byte ptr [esi + 0x48], 1
// 00579ccd  895e44               mov dword ptr [esi + 0x44], ebx
// 00579cd0  ff15c0e48900         call dword ptr [0x89e4c0]
// 00579cd6  8b442420             mov eax, dword ptr [esp + 0x20]
// 00579cda  50                   push eax
// 00579cdb  8bce                 mov ecx, esi
// 00579cdd  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00579ce2  e8c9f8ffff           call 0x5795b0
// 00579ce7  6816d28a00           push 0x8ad216
// 00579cec  8bcf                 mov ecx, edi
// 00579cee  ff15a8e48900         call dword ptr [0x89e4a8]
// 00579cf4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00579cf8  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00579cfb  895e50               mov dword ptr [esi + 0x50], ebx
// 00579cfe  895e04               mov dword ptr [esi + 4], ebx
// 00579d01  885e08               mov byte ptr [esi + 8], bl
// 00579d04  5f                   pop edi
// 00579d05  c60601               mov byte ptr [esi], 1
// 00579d08  8bc6                 mov eax, esi
// 00579d0a  5e                   pop esi
// 00579d0b  5b                   pop ebx
// 00579d0c  64890d00000000       mov dword ptr fs:[0], ecx
// 00579d13  83c410               add esp, 0x10
// 00579d16  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ??0TextOutput@G3D@@QAE@ABVOptions@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
