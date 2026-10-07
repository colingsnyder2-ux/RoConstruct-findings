// roc 2012-06 0063c6d0  unit: G3D::_internal::DialogTemplate  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063c6d0
//
// 0063c6d0  6aff                 push -1
// 0063c6d2  684961ab00           push 0xab6149
// 0063c6d7  64a100000000         mov eax, dword ptr fs:[0]
// 0063c6dd  50                   push eax
// 0063c6de  64892500000000       mov dword ptr fs:[0], esp
// 0063c6e5  83ec1c               sub esp, 0x1c
// 0063c6e8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0063c6ec  50                   push eax
// 0063c6ed  8d4c2404             lea ecx, [esp + 4]
// 0063c6f1  ff154826b200         call dword ptr [0xb22648]
// 0063c6f7  8d0c24               lea ecx, [esp]
// 0063c6fa  51                   push ecx
// 0063c6fb  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0063c703  e8c8adfeff           call 0x6274d0
// 0063c708  8bc8                 mov ecx, eax
// 0063c70a  e801affeff           call 0x627610
// 0063c70f  8d0c24               lea ecx, [esp]
// 0063c712  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0063c71a  ff153c26b200         call dword ptr [0xb2263c]
// 0063c720  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0063c724  64890d00000000       mov dword ptr fs:[0], ecx
// 0063c72b  83c428               add esp, 0x28
// 0063c72e  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_warning@G3D@@YAXPAUpng_struct_def@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
