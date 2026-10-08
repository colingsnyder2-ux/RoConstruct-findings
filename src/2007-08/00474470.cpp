// roc 2007-08 00474470  unit: G3D::VARArea  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474470
//
// 00474470  53                   push ebx
// 00474471  56                   push esi
// 00474472  8bf1                 mov esi, ecx
// 00474474  bb01000000           mov ebx, 1
// 00474479  015e78               add dword ptr [esi + 0x78], ebx
// 0047447c  80bebc03000000       cmp byte ptr [esi + 0x3bc], 0
// 00474483  751a                 jne 0x47449f
// 00474485  68500b0000           push 0xb50
// 0047448a  ff1554eb7700         call dword ptr [0x77eb54]
// 00474490  015e70               add dword ptr [esi + 0x70], ebx
// 00474493  889ebc030000         mov byte ptr [esi + 0x3bc], bl
// 00474499  889ebd030000         mov byte ptr [esi + 0x3bd], bl
// 0047449f  5e                   pop esi
// 004744a0  5b                   pop ebx
// 004744a1  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?enableLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
