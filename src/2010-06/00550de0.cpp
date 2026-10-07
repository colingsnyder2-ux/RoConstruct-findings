// roc 2010-06 00550de0  unit: G3D::Log  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00550de0
//
// 00550de0  6aff                 push -1
// 00550de2  68095b9800           push 0x985b09
// 00550de7  64a100000000         mov eax, dword ptr fs:[0]
// 00550ded  50                   push eax
// 00550dee  64892500000000       mov dword ptr fs:[0], esp
// 00550df5  83ec1c               sub esp, 0x1c
// 00550df8  8b442430             mov eax, dword ptr [esp + 0x30]
// 00550dfc  50                   push eax
// 00550dfd  8d4c2404             lea ecx, [esp + 4]
// 00550e01  ff1510a49e00         call dword ptr [0x9ea410]
// 00550e07  8d0c24               lea ecx, [esp]
// 00550e0a  51                   push ecx
// 00550e0b  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00550e13  e8d8e6ffff           call 0x54f4f0
// 00550e18  8bc8                 mov ecx, eax
// 00550e1a  e811e8ffff           call 0x54f630
// 00550e1f  8d0c24               lea ecx, [esp]
// 00550e22  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00550e2a  ff1500a49e00         call dword ptr [0x9ea400]
// 00550e30  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00550e34  64890d00000000       mov dword ptr fs:[0], ecx
// 00550e3b  83c428               add esp, 0x28
// 00550e3e  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_warning@G3D@@YAXPAUpng_struct_def@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
