// roc 2007-08 00502ca0  unit: G3D::Log  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00502ca0
//
// 00502ca0  6aff                 push -1
// 00502ca2  6869f37400           push 0x74f369
// 00502ca7  64a100000000         mov eax, dword ptr fs:[0]
// 00502cad  50                   push eax
// 00502cae  83ec1c               sub esp, 0x1c
// 00502cb1  a188518b00           mov eax, dword ptr [0x8b5188]
// 00502cb6  33c4                 xor eax, esp
// 00502cb8  50                   push eax
// 00502cb9  8d442420             lea eax, [esp + 0x20]
// 00502cbd  64a300000000         mov dword ptr fs:[0], eax
// 00502cc3  8b442434             mov eax, dword ptr [esp + 0x34]
// 00502cc7  50                   push eax
// 00502cc8  8d4c2408             lea ecx, [esp + 8]
// 00502ccc  ff1598e67700         call dword ptr [0x77e698]
// 00502cd2  8d4c2404             lea ecx, [esp + 4]
// 00502cd6  51                   push ecx
// 00502cd7  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00502cdf  e84cf2ffff           call 0x501f30
// 00502ce4  8bc8                 mov ecx, eax
// 00502ce6  e855ebffff           call 0x501840
// 00502ceb  8d4c2404             lea ecx, [esp + 4]
// 00502cef  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00502cf7  ff15ace67700         call dword ptr [0x77e6ac]
// 00502cfd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00502d01  64890d00000000       mov dword ptr fs:[0], ecx
// 00502d08  59                   pop ecx
// 00502d09  83c428               add esp, 0x28
// 00502d0c  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_warning@G3D@@YAXPAUpng_struct_def@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
