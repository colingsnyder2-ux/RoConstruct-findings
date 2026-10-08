// roc 2007-08 004735a0  unit: G3D::VARArea  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004735a0
//
// 004735a0  53                   push ebx
// 004735a1  56                   push esi
// 004735a2  8bf1                 mov esi, ecx
// 004735a4  bb01000000           mov ebx, 1
// 004735a9  015e78               add dword ptr [esi + 0x78], ebx
// 004735ac  80bea803000000       cmp byte ptr [esi + 0x3a8], 0
// 004735b3  751b                 jne 0x4735d0
// 004735b5  53                   push ebx
// 004735b6  68520b0000           push 0xb52
// 004735bb  ff15f8ea7700         call dword ptr [0x77eaf8]
// 004735c1  015e70               add dword ptr [esi + 0x70], ebx
// 004735c4  889ea8030000         mov byte ptr [esi + 0x3a8], bl
// 004735ca  889ebd030000         mov byte ptr [esi + 0x3bd], bl
// 004735d0  5e                   pop esi
// 004735d1  5b                   pop ebx
// 004735d2  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?enableTwoSidedLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
