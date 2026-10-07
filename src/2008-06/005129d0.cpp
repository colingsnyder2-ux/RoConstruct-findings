// roc 2008-06 005129d0  unit: G3D::GCamera  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005129d0
//
// 005129d0  6aff                 push -1
// 005129d2  68e3c47c00           push 0x7cc4e3
// 005129d7  64a100000000         mov eax, dword ptr fs:[0]
// 005129dd  50                   push eax
// 005129de  64892500000000       mov dword ptr fs:[0], esp
// 005129e5  51                   push ecx
// 005129e6  53                   push ebx
// 005129e7  56                   push esi
// 005129e8  8bf1                 mov esi, ecx
// 005129ea  57                   push edi
// 005129eb  8d7e0c               lea edi, [esi + 0xc]
// 005129ee  8bcf                 mov ecx, edi
// 005129f0  8974240c             mov dword ptr [esp + 0xc], esi
// 005129f4  ff1560248000         call dword ptr [0x802460]
// 005129fa  33db                 xor ebx, ebx
// 005129fc  895c2418             mov dword ptr [esp + 0x18], ebx
// 00512a00  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00512a03  895e30               mov dword ptr [esi + 0x30], ebx
// 00512a06  895e28               mov dword ptr [esi + 0x28], ebx
// 00512a09  8d4e54               lea ecx, [esi + 0x54]
// 00512a0c  c644241801           mov byte ptr [esp + 0x18], 1
// 00512a11  c7463401000000       mov dword ptr [esi + 0x34], 1
// 00512a18  885e38               mov byte ptr [esi + 0x38], bl
// 00512a1b  c7463c50000000       mov dword ptr [esi + 0x3c], 0x50
// 00512a22  c7464004000000       mov dword ptr [esi + 0x40], 4
// 00512a29  c6464801             mov byte ptr [esi + 0x48], 1
// 00512a2d  895e44               mov dword ptr [esi + 0x44], ebx
// 00512a30  ff1560248000         call dword ptr [0x802460]
// 00512a36  8b442420             mov eax, dword ptr [esp + 0x20]
// 00512a3a  50                   push eax
// 00512a3b  8bce                 mov ecx, esi
// 00512a3d  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00512a42  e819f9ffff           call 0x512360
// 00512a47  6816b78000           push 0x80b716
// 00512a4c  8bcf                 mov ecx, edi
// 00512a4e  ff154c248000         call dword ptr [0x80244c]
// 00512a54  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00512a58  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00512a5b  895e50               mov dword ptr [esi + 0x50], ebx
// 00512a5e  895e04               mov dword ptr [esi + 4], ebx
// 00512a61  885e08               mov byte ptr [esi + 8], bl
// 00512a64  5f                   pop edi
// 00512a65  c60601               mov byte ptr [esi], 1
// 00512a68  8bc6                 mov eax, esi
// 00512a6a  5e                   pop esi
// 00512a6b  5b                   pop ebx
// 00512a6c  64890d00000000       mov dword ptr fs:[0], ecx
// 00512a73  83c410               add esp, 0x10
// 00512a76  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ??0TextOutput@G3D@@QAE@ABVOptions@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
