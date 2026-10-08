// roc 2007-08 00473780  unit: G3D::VARArea  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473780
//
// 00473780  56                   push esi
// 00473781  8bf1                 mov esi, ecx
// 00473783  57                   push edi
// 00473784  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00473788  b901000000           mov ecx, 1
// 0047378d  014e78               add dword ptr [esi + 0x78], ecx
// 00473790  3bbe18040000         cmp edi, dword ptr [esi + 0x418]
// 00473796  7465                 je 0x4737fd
// 00473798  014e70               add dword ptr [esi + 0x70], ecx
// 0047379b  8bc7                 mov eax, edi
// 0047379d  83e800               sub eax, 0
// 004737a0  743f                 je 0x4737e1
// 004737a2  2bc1                 sub eax, ecx
// 004737a4  741a                 je 0x4737c0
// 004737a6  2bc1                 sub eax, ecx
// 004737a8  754d                 jne 0x4737f7
// 004737aa  68440b0000           push 0xb44
// 004737af  ff154ceb7700         call dword ptr [0x77eb4c]
// 004737b5  89be18040000         mov dword ptr [esi + 0x418], edi
// 004737bb  5f                   pop edi
// 004737bc  5e                   pop esi
// 004737bd  c20400               ret 4
// 004737c0  68440b0000           push 0xb44
// 004737c5  ff1554eb7700         call dword ptr [0x77eb54]
// 004737cb  6805040000           push 0x405
// 004737d0  ff15e8ea7700         call dword ptr [0x77eae8]
// 004737d6  89be18040000         mov dword ptr [esi + 0x418], edi
// 004737dc  5f                   pop edi
// 004737dd  5e                   pop esi
// 004737de  c20400               ret 4
// 004737e1  68440b0000           push 0xb44
// 004737e6  ff1554eb7700         call dword ptr [0x77eb54]
// 004737ec  6804040000           push 0x404
// 004737f1  ff15e8ea7700         call dword ptr [0x77eae8]
// 004737f7  89be18040000         mov dword ptr [esi + 0x418], edi
// 004737fd  5f                   pop edi
// 004737fe  5e                   pop esi
// 004737ff  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setCullFace@RenderDevice@G3D@@QAEXW4CullFace@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
