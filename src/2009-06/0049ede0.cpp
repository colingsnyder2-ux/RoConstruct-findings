// roc 2009-06 0049ede0  unit: G3D::VARArea  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049ede0
//
// 0049ede0  53                   push ebx
// 0049ede1  56                   push esi
// 0049ede2  8bf1                 mov esi, ecx
// 0049ede4  bb01000000           mov ebx, 1
// 0049ede9  015e78               add dword ptr [esi + 0x78], ebx
// 0049edec  80bebc03000000       cmp byte ptr [esi + 0x3bc], 0
// 0049edf3  751a                 jne 0x49ee0f
// 0049edf5  68500b0000           push 0xb50
// 0049edfa  ff15aceb8900         call dword ptr [0x89ebac]
// 0049ee00  015e70               add dword ptr [esi + 0x70], ebx
// 0049ee03  889ebc030000         mov byte ptr [esi + 0x3bc], bl
// 0049ee09  889ebd030000         mov byte ptr [esi + 0x3bd], bl
// 0049ee0f  5e                   pop esi
// 0049ee10  5b                   pop ebx
// 0049ee11  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?enableLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
