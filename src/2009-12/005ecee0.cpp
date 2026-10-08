// roc 2009-12 005ecee0  unit: G3D::Log  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ecee0
//
// 005ecee0  6aff                 push -1
// 005ecee2  68a9e59200           push 0x92e5a9
// 005ecee7  64a100000000         mov eax, dword ptr fs:[0]
// 005eceed  50                   push eax
// 005eceee  64892500000000       mov dword ptr fs:[0], esp
// 005ecef5  83ec1c               sub esp, 0x1c
// 005ecef8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005ecefc  50                   push eax
// 005ecefd  8d4c2404             lea ecx, [esp + 4]
// 005ecf01  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ecf07  8d0c24               lea ecx, [esp]
// 005ecf0a  51                   push ecx
// 005ecf0b  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005ecf13  e898efffff           call 0x5ebeb0
// 005ecf18  8bc8                 mov ecx, eax
// 005ecf1a  e8d1f0ffff           call 0x5ebff0
// 005ecf1f  8d0c24               lea ecx, [esp]
// 005ecf22  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005ecf2a  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ecf30  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ecf34  64890d00000000       mov dword ptr fs:[0], ecx
// 005ecf3b  83c428               add esp, 0x28
// 005ecf3e  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_warning@G3D@@YAXPAUpng_struct_def@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
