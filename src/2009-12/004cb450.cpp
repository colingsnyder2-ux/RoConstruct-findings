// roc 2009-12 004cb450  unit: G3D::VARArea  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cb450
//
// 004cb450  53                   push ebx
// 004cb451  56                   push esi
// 004cb452  8bf1                 mov esi, ecx
// 004cb454  bb01000000           mov ebx, 1
// 004cb459  015e78               add dword ptr [esi + 0x78], ebx
// 004cb45c  80bebc03000000       cmp byte ptr [esi + 0x3bc], 0
// 004cb463  751a                 jne 0x4cb47f
// 004cb465  68500b0000           push 0xb50
// 004cb46a  ff15d0bb9800         call dword ptr [0x98bbd0]
// 004cb470  015e70               add dword ptr [esi + 0x70], ebx
// 004cb473  889ebc030000         mov byte ptr [esi + 0x3bc], bl
// 004cb479  889ebd030000         mov byte ptr [esi + 0x3bd], bl
// 004cb47f  5e                   pop esi
// 004cb480  5b                   pop ebx
// 004cb481  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?enableLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
