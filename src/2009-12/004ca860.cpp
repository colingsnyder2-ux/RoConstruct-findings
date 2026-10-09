// roc 2009-12 004ca860  unit: G3D::VARArea  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ca860
//
// 004ca860  56                   push esi
// 004ca861  8bf1                 mov esi, ecx
// 004ca863  57                   push edi
// 004ca864  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004ca868  b901000000           mov ecx, 1
// 004ca86d  014e78               add dword ptr [esi + 0x78], ecx
// 004ca870  3bbe18040000         cmp edi, dword ptr [esi + 0x418]
// 004ca876  7465                 je 0x4ca8dd
// 004ca878  014e70               add dword ptr [esi + 0x70], ecx
// 004ca87b  8bc7                 mov eax, edi
// 004ca87d  83e800               sub eax, 0
// 004ca880  743f                 je 0x4ca8c1
// 004ca882  2bc1                 sub eax, ecx
// 004ca884  741a                 je 0x4ca8a0
// 004ca886  2bc1                 sub eax, ecx
// 004ca888  754d                 jne 0x4ca8d7
// 004ca88a  68440b0000           push 0xb44
// 004ca88f  ff15dcbb9800         call dword ptr [0x98bbdc]
// 004ca895  89be18040000         mov dword ptr [esi + 0x418], edi
// 004ca89b  5f                   pop edi
// 004ca89c  5e                   pop esi
// 004ca89d  c20400               ret 4
// 004ca8a0  68440b0000           push 0xb44
// 004ca8a5  ff15d0bb9800         call dword ptr [0x98bbd0]
// 004ca8ab  6805040000           push 0x405
// 004ca8b0  ff1580bb9800         call dword ptr [0x98bb80]
// 004ca8b6  89be18040000         mov dword ptr [esi + 0x418], edi
// 004ca8bc  5f                   pop edi
// 004ca8bd  5e                   pop esi
// 004ca8be  c20400               ret 4
// 004ca8c1  68440b0000           push 0xb44
// 004ca8c6  ff15d0bb9800         call dword ptr [0x98bbd0]
// 004ca8cc  6804040000           push 0x404
// 004ca8d1  ff1580bb9800         call dword ptr [0x98bb80]
// 004ca8d7  89be18040000         mov dword ptr [esi + 0x418], edi
// 004ca8dd  5f                   pop edi
// 004ca8de  5e                   pop esi
// 004ca8df  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setCullFace@RenderDevice@G3D@@QAEXW4CullFace@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
