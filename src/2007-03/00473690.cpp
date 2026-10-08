// roc 2007-03 00473690  unit: seg_00470000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473690
//
// 00473690  53                   push ebx
// 00473691  56                   push esi
// 00473692  8bf1                 mov esi, ecx
// 00473694  bb01000000           mov ebx, 1
// 00473699  015e78               add dword ptr [esi + 0x78], ebx
// 0047369c  80bea803000000       cmp byte ptr [esi + 0x3a8], 0
// 004736a3  751b                 jne 0x4736c0
// 004736a5  53                   push ebx
// 004736a6  68520b0000           push 0xb52
// 004736ab  ff15c4eb7700         call dword ptr [0x77ebc4]
// 004736b1  015e70               add dword ptr [esi + 0x70], ebx
// 004736b4  889ea8030000         mov byte ptr [esi + 0x3a8], bl
// 004736ba  889ebd030000         mov byte ptr [esi + 0x3bd], bl
// 004736c0  5e                   pop esi
// 004736c1  5b                   pop ebx
// 004736c2  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?enableTwoSidedLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
