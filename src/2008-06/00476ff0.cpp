// roc 2008-06 00476ff0  unit: G3D::VARArea  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476ff0
//
// 00476ff0  56                   push esi
// 00476ff1  57                   push edi
// 00476ff2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00476ff6  8bf1                 mov esi, ecx
// 00476ff8  ff4678               inc dword ptr [esi + 0x78]
// 00476ffb  83ff08               cmp edi, 8
// 00476ffe  0f8484000000         je 0x477088
// 00477004  39be1c040000         cmp dword ptr [esi + 0x41c], edi
// 0047700a  747c                 je 0x477088
// 0047700c  68900b0000           push 0xb90
// 00477011  ff1550298000         call dword ptr [0x802950]
// 00477017  83ff06               cmp edi, 6
// 0047701a  7557                 jne 0x477073
// 0047701c  b802000000           mov eax, 2
// 00477021  398628040000         cmp dword ptr [esi + 0x428], eax
// 00477027  7559                 jne 0x477082
// 00477029  39862c040000         cmp dword ptr [esi + 0x42c], eax
// 0047702f  7551                 jne 0x477082
// 00477031  398630040000         cmp dword ptr [esi + 0x430], eax
// 00477037  7549                 jne 0x477082
// 00477039  803d83ee960000       cmp byte ptr [0x96ee83], 0
// 00477040  7418                 je 0x47705a
// 00477042  398634040000         cmp dword ptr [esi + 0x434], eax
// 00477048  7538                 jne 0x477082
// 0047704a  398638040000         cmp dword ptr [esi + 0x438], eax
// 00477050  7530                 jne 0x477082
// 00477052  39863c040000         cmp dword ptr [esi + 0x43c], eax
// 00477058  7528                 jne 0x477082
// 0047705a  ff4670               inc dword ptr [esi + 0x70]
// 0047705d  68900b0000           push 0xb90
// 00477062  ff1558298000         call dword ptr [0x802958]
// 00477068  89be1c040000         mov dword ptr [esi + 0x41c], edi
// 0047706e  5f                   pop edi
// 0047706f  5e                   pop esi
// 00477070  c20400               ret 4
// 00477073  8b8620040000         mov eax, dword ptr [esi + 0x420]
// 00477079  50                   push eax
// 0047707a  57                   push edi
// 0047707b  8bce                 mov ecx, esi
// 0047707d  e8aefeffff           call 0x476f30
// 00477082  89be1c040000         mov dword ptr [esi + 0x41c], edi
// 00477088  5f                   pop edi
// 00477089  5e                   pop esi
// 0047708a  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilTest@RenderDevice@G3D@@QAEXW4StencilTest@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
