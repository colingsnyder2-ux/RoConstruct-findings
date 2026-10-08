// roc 2008-06 00477770  unit: G3D::VARArea  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477770
//
// 00477770  53                   push ebx
// 00477771  56                   push esi
// 00477772  8bf1                 mov esi, ecx
// 00477774  bb01000000           mov ebx, 1
// 00477779  015e78               add dword ptr [esi + 0x78], ebx
// 0047777c  80bebc03000000       cmp byte ptr [esi + 0x3bc], 0
// 00477783  751a                 jne 0x47779f
// 00477785  68500b0000           push 0xb50
// 0047778a  ff1550298000         call dword ptr [0x802950]
// 00477790  015e70               add dword ptr [esi + 0x70], ebx
// 00477793  889ebc030000         mov byte ptr [esi + 0x3bc], bl
// 00477799  889ebd030000         mov byte ptr [esi + 0x3bd], bl
// 0047779f  5e                   pop esi
// 004777a0  5b                   pop ebx
// 004777a1  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?enableLighting@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
