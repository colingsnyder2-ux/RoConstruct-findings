// roc 2010-06 00497f60  unit: seg_00490000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00497f60
//
// 00497f60  6aff                 push -1
// 00497f62  68e86c9800           push 0x986ce8
// 00497f67  64a100000000         mov eax, dword ptr fs:[0]
// 00497f6d  50                   push eax
// 00497f6e  64892500000000       mov dword ptr fs:[0], esp
// 00497f75  83ec14               sub esp, 0x14
// 00497f78  f30f1081c0030000     movss xmm0, dword ptr [ecx + 0x3c0]
// 00497f80  f30f11442404         movss dword ptr [esp + 4], xmm0
// 00497f86  f30f1081c4030000     movss xmm0, dword ptr [ecx + 0x3c4]
// 00497f8e  f30f11442408         movss dword ptr [esp + 8], xmm0
// 00497f94  f30f1081c8030000     movss xmm0, dword ptr [ecx + 0x3c8]
// 00497f9c  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 00497fa2  f30f1081cc030000     movss xmm0, dword ptr [ecx + 0x3cc]
// 00497faa  33c0                 xor eax, eax
// 00497fac  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 00497fb2  890424               mov dword ptr [esp], eax
// 00497fb5  8944241c             mov dword ptr [esp + 0x1c], eax
// 00497fb9  8d442404             lea eax, [esp + 4]
// 00497fbd  50                   push eax
// 00497fbe  8d542404             lea edx, [esp + 4]
// 00497fc2  52                   push edx
// 00497fc3  e858fdffff           call 0x497d20
// 00497fc8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00497fcc  64890d00000000       mov dword ptr fs:[0], ecx
// 00497fd3  83c420               add esp, 0x20
// 00497fd6  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?push2D@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
