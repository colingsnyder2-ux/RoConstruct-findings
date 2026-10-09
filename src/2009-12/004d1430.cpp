// roc 2009-12 004d1430  unit: G3D::PBVTextureFormat::?$Table  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d1430
//
// 004d1430  6aff                 push -1
// 004d1432  6858339300           push 0x933358
// 004d1437  64a100000000         mov eax, dword ptr fs:[0]
// 004d143d  50                   push eax
// 004d143e  64892500000000       mov dword ptr fs:[0], esp
// 004d1445  83ec14               sub esp, 0x14
// 004d1448  f30f1081c0030000     movss xmm0, dword ptr [ecx + 0x3c0]
// 004d1450  f30f11442404         movss dword ptr [esp + 4], xmm0
// 004d1456  f30f1081c4030000     movss xmm0, dword ptr [ecx + 0x3c4]
// 004d145e  f30f11442408         movss dword ptr [esp + 8], xmm0
// 004d1464  f30f1081c8030000     movss xmm0, dword ptr [ecx + 0x3c8]
// 004d146c  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 004d1472  f30f1081cc030000     movss xmm0, dword ptr [ecx + 0x3cc]
// 004d147a  33c0                 xor eax, eax
// 004d147c  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 004d1482  890424               mov dword ptr [esp], eax
// 004d1485  8944241c             mov dword ptr [esp + 0x1c], eax
// 004d1489  8d442404             lea eax, [esp + 4]
// 004d148d  50                   push eax
// 004d148e  8d542404             lea edx, [esp + 4]
// 004d1492  52                   push edx
// 004d1493  e858fdffff           call 0x4d11f0
// 004d1498  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d149c  64890d00000000       mov dword ptr fs:[0], ecx
// 004d14a3  83c420               add esp, 0x20
// 004d14a6  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?push2D@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
