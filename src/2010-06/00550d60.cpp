// roc 2010-06 00550d60  unit: G3D::Log  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00550d60
//
// 00550d60  6aff                 push -1
// 00550d62  68380e9900           push 0x990e38
// 00550d67  64a100000000         mov eax, dword ptr fs:[0]
// 00550d6d  50                   push eax
// 00550d6e  64892500000000       mov dword ptr fs:[0], esp
// 00550d75  81ec98000000         sub esp, 0x98
// 00550d7b  68204ca000           push 0xa04c20
// 00550d80  8d4c2420             lea ecx, [esp + 0x20]
// 00550d84  ff1510a49e00         call dword ptr [0x9ea410]
// 00550d8a  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 00550d91  50                   push eax
// 00550d92  8d4c2404             lea ecx, [esp + 4]
// 00550d96  c78424a400000000000000 mov dword ptr [esp + 0xa4], 0
// 00550da1  ff1510a49e00         call dword ptr [0x9ea410]
// 00550da7  8d4c241c             lea ecx, [esp + 0x1c]
// 00550dab  51                   push ecx
// 00550dac  8d542404             lea edx, [esp + 4]
// 00550db0  52                   push edx
// 00550db1  8d4c2440             lea ecx, [esp + 0x40]
// 00550db5  c68424a800000001     mov byte ptr [esp + 0xa8], 1
// 00550dbd  e83e2cf3ff           call 0x483a00
// 00550dc2  6894edb000           push 0xb0ed94
// 00550dc7  8d44243c             lea eax, [esp + 0x3c]
// 00550dcb  50                   push eax
// 00550dcc  e8e17b2500           call 0x7a89b2
// library g3d-6.09-rbx2008/G3Dcpp\GImage_png.cpp (function ?png_error@G3D@@YAXPAUpng_struct_def@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_png.cpp
