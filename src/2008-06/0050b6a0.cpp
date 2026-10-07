// roc 2008-06 0050b6a0  unit: G3D::Log  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050b6a0
//
// 0050b6a0  6aff                 push -1
// 0050b6a2  6809e77c00           push 0x7ce709
// 0050b6a7  64a100000000         mov eax, dword ptr fs:[0]
// 0050b6ad  50                   push eax
// 0050b6ae  64892500000000       mov dword ptr fs:[0], esp
// 0050b6b5  83ec1c               sub esp, 0x1c
// 0050b6b8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0050b6bc  50                   push eax
// 0050b6bd  8d4c2404             lea ecx, [esp + 4]
// 0050b6c1  ff1558248000         call dword ptr [0x802458]
// 0050b6c7  8d0c24               lea ecx, [esp]
// 0050b6ca  51                   push ecx
// 0050b6cb  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0050b6d3  e8d8e6ffff           call 0x509db0
// 0050b6d8  8bc8                 mov ecx, eax
// 0050b6da  e811e8ffff           call 0x509ef0
// 0050b6df  8d0c24               lea ecx, [esp]
// 0050b6e2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0050b6ea  ff1568248000         call dword ptr [0x802468]
// 0050b6f0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050b6f4  64890d00000000       mov dword ptr fs:[0], ecx
// 0050b6fb  83c428               add esp, 0x28
// 0050b6fe  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_warning@G3D@@YAXPAUpng_struct_def@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
