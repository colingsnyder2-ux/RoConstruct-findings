// roc 2009-12 005ece60  unit: G3D::Log  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ece60
//
// 005ece60  6aff                 push -1
// 005ece62  68d8ef9300           push 0x93efd8
// 005ece67  64a100000000         mov eax, dword ptr fs:[0]
// 005ece6d  50                   push eax
// 005ece6e  64892500000000       mov dword ptr fs:[0], esp
// 005ece75  81ec98000000         sub esp, 0x98
// 005ece7b  68d83e9a00           push 0x9a3ed8
// 005ece80  8d4c2420             lea ecx, [esp + 0x20]
// 005ece84  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ece8a  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 005ece91  50                   push eax
// 005ece92  8d4c2404             lea ecx, [esp + 4]
// 005ece96  c78424a400000000000000 mov dword ptr [esp + 0xa4], 0
// 005ecea1  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ecea7  8d4c241c             lea ecx, [esp + 0x1c]
// 005eceab  51                   push ecx
// 005eceac  8d542404             lea edx, [esp + 4]
// 005eceb0  52                   push edx
// 005eceb1  8d4c2440             lea ecx, [esp + 0x40]
// 005eceb5  c68424a800000001     mov byte ptr [esp + 0xa8], 1
// 005ecebd  e87e99edff           call 0x4c6840
// 005ecec2  689014aa00           push 0xaa1490
// 005ecec7  8d44243c             lea eax, [esp + 0x3c]
// 005ececb  50                   push eax
// 005ececc  e8a7792000           call 0x7f4878
// library g3d-6.09-rbx2008/G3Dcpp\GImage_png.cpp (function ?png_error@G3D@@YAXPAUpng_struct_def@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_png.cpp
