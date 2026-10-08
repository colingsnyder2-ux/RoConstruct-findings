// roc 2009-12 00911260  unit: RBX::RenderNew::RenderScene  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00911260
//
// 00911260  6aff                 push -1
// 00911262  68489a9300           push 0x939a48
// 00911267  64a100000000         mov eax, dword ptr fs:[0]
// 0091126d  50                   push eax
// 0091126e  64892500000000       mov dword ptr fs:[0], esp
// 00911275  83ec1c               sub esp, 0x1c
// 00911278  8b442430             mov eax, dword ptr [esp + 0x30]
// 0091127c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00911280  50                   push eax
// 00911281  51                   push ecx
// 00911282  8d542408             lea edx, [esp + 8]
// 00911286  52                   push edx
// 00911287  e8a460ceff           call 0x5f7330
// 0091128c  d9442448             fld dword ptr [esp + 0x48]
// 00911290  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00911294  d95c2408             fstp dword ptr [esp + 8]
// 00911298  8b542440             mov edx, dword ptr [esp + 0x40]
// 0091129c  83c408               add esp, 8
// 0091129f  51                   push ecx
// 009112a0  52                   push edx
// 009112a1  50                   push eax
// 009112a2  c744243400000000     mov dword ptr [esp + 0x34], 0
// 009112aa  e811f8ffff           call 0x910ac0
// 009112af  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009112b3  64890d00000000       mov dword ptr fs:[0], ecx
// 009112ba  83c438               add esp, 0x38
// 009112bd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?arrow@Draw@G3D@@SAXABVVector3@2@0PAVRenderDevice@2@ABVColor4@2@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
