// roc 2010-06 00491cf0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491cf0
//
// 00491cf0  53                   push ebx
// 00491cf1  56                   push esi
// 00491cf2  8bf1                 mov esi, ecx
// 00491cf4  bb01000000           mov ebx, 1
// 00491cf9  015e78               add dword ptr [esi + 0x78], ebx
// 00491cfc  80bebc03000000       cmp byte ptr [esi + 0x3bc], 0
// 00491d03  751a                 jne 0x491d1f
// 00491d05  68500b0000           push 0xb50
// 00491d0a  ff15ecaa9e00         call dword ptr [0x9eaaec]
// 00491d10  015e70               add dword ptr [esi + 0x70], ebx
// 00491d13  889ebc030000         mov byte ptr [esi + 0x3bc], bl
// 00491d19  889ebd030000         mov byte ptr [esi + 0x3bd], bl
// 00491d1f  5e                   pop esi
// 00491d20  5b                   pop ebx
// 00491d21  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?enableLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
