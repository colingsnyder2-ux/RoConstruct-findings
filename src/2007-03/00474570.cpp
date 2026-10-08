// roc 2007-03 00474570  unit: seg_00470000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474570
//
// 00474570  53                   push ebx
// 00474571  56                   push esi
// 00474572  8bf1                 mov esi, ecx
// 00474574  bb01000000           mov ebx, 1
// 00474579  015e78               add dword ptr [esi + 0x78], ebx
// 0047457c  80bebc03000000       cmp byte ptr [esi + 0x3bc], 0
// 00474583  751a                 jne 0x47459f
// 00474585  68500b0000           push 0xb50
// 0047458a  ff156ceb7700         call dword ptr [0x77eb6c]
// 00474590  015e70               add dword ptr [esi + 0x70], ebx
// 00474593  889ebc030000         mov byte ptr [esi + 0x3bc], bl
// 00474599  889ebd030000         mov byte ptr [esi + 0x3bd], bl
// 0047459f  5e                   pop esi
// 004745a0  5b                   pop ebx
// 004745a1  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?enableLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
