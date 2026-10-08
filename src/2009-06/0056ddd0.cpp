// from server: 100% by auto
// roc 2009-06 0056ddd0  unit: G3D::Log  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056ddd0
//
// 0056ddd0  6aff                 push -1
// 0056ddd2  68d9b88500           push 0x85b8d9
// 0056ddd7  64a100000000         mov eax, dword ptr fs:[0]
// 0056dddd  50                   push eax
// 0056ddde  64892500000000       mov dword ptr fs:[0], esp
// 0056dde5  83ec1c               sub esp, 0x1c
// 0056dde8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0056ddec  50                   push eax
// 0056dded  8d4c2404             lea ecx, [esp + 4]
// 0056ddf1  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056ddf7  8d0c24               lea ecx, [esp]
// 0056ddfa  51                   push ecx
// 0056ddfb  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0056de03  e898efffff           call 0x56cda0
// 0056de08  8bc8                 mov ecx, eax
// 0056de0a  e8d1f0ffff           call 0x56cee0
// 0056de0f  8d0c24               lea ecx, [esp]
// 0056de12  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0056de1a  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056de20  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056de24  64890d00000000       mov dword ptr fs:[0], ecx
// 0056de2b  83c428               add esp, 0x28
// 0056de2e  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_warning@G3D@@YAXPAUpng_struct_def@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
