// roc 2009-06 0056dd50  unit: G3D::Log  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056dd50
//
// 0056dd50  6aff                 push -1
// 0056dd52  6898008600           push 0x860098
// 0056dd57  64a100000000         mov eax, dword ptr fs:[0]
// 0056dd5d  50                   push eax
// 0056dd5e  64892500000000       mov dword ptr fs:[0], esp
// 0056dd65  81ec98000000         sub esp, 0x98
// 0056dd6b  68f8118b00           push 0x8b11f8
// 0056dd70  8d4c2420             lea ecx, [esp + 0x20]
// 0056dd74  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056dd7a  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 0056dd81  50                   push eax
// 0056dd82  8d4c2404             lea ecx, [esp + 4]
// 0056dd86  c78424a400000000000000 mov dword ptr [esp + 0xa4], 0
// 0056dd91  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056dd97  8d4c241c             lea ecx, [esp + 0x1c]
// 0056dd9b  51                   push ecx
// 0056dd9c  8d542404             lea edx, [esp + 4]
// 0056dda0  52                   push edx
// 0056dda1  8d4c2440             lea ecx, [esp + 0x40]
// 0056dda5  c68424a800000001     mov byte ptr [esp + 0xa8], 1
// 0056ddad  e8eec1f2ff           call 0x499fa0
// 0056ddb2  68308a9800           push 0x988a30
// 0056ddb7  8d44243c             lea eax, [esp + 0x3c]
// 0056ddbb  50                   push eax
// 0056ddbc  e889bc1a00           call 0x719a4a
// library g3d-6.09-rbx2008/G3Dcpp\GImage_png.cpp (function ?png_error@G3D@@YAXPAUpng_struct_def@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_png.cpp
