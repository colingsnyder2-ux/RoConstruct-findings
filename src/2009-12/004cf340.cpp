// roc 2009-12 004cf340  unit: G3D::PBVTextureFormat::?$Table  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cf340
//
// 004cf340  56                   push esi
// 004cf341  8bf1                 mov esi, ecx
// 004cf343  e8c8fbffff           call 0x4cef10
// 004cf348  8b8e84040000         mov ecx, dword ptr [esi + 0x484]
// 004cf34e  85c9                 test ecx, ecx
// 004cf350  7408                 je 0x4cf35a
// 004cf352  8b01                 mov eax, dword ptr [ecx]
// 004cf354  8b5004               mov edx, dword ptr [eax + 4]
// 004cf357  56                   push esi
// 004cf358  ffd2                 call edx
// 004cf35a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004cf35e  83e801               sub eax, 1
// 004cf361  741c                 je 0x4cf37f
// 004cf363  83e801               sub eax, 1
// 004cf366  7410                 je 0x4cf378
// 004cf368  83e802               sub eax, 2
// 004cf36b  7404                 je 0x4cf371
// 004cf36d  33c0                 xor eax, eax
// 004cf36f  eb13                 jmp 0x4cf384
// 004cf371  b805140000           mov eax, 0x1405
// 004cf376  eb0c                 jmp 0x4cf384
// 004cf378  b803140000           mov eax, 0x1403
// 004cf37d  eb05                 jmp 0x4cf384
// 004cf37f  b801140000           mov eax, 0x1401
// 004cf384  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004cf388  8b542410             mov edx, dword ptr [esp + 0x10]
// 004cf38c  51                   push ecx
// 004cf38d  50                   push eax
// 004cf38e  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cf392  52                   push edx
// 004cf393  e848b1ffff           call 0x4ca4e0
// 004cf398  50                   push eax
// 004cf399  ff1504bb9800         call dword ptr [0x98bb04]
// 004cf39f  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 004cf3a5  85c9                 test ecx, ecx
// 004cf3a7  7416                 je 0x4cf3bf
// 004cf3a9  c6861101000001       mov byte ptr [esi + 0x111], 1
// 004cf3b0  8b01                 mov eax, dword ptr [ecx]
// 004cf3b2  8b5014               mov edx, dword ptr [eax + 0x14]
// 004cf3b5  56                   push esi
// 004cf3b6  ffd2                 call edx
// 004cf3b8  c6861101000000       mov byte ptr [esi + 0x111], 0
// 004cf3bf  5e                   pop esi
// 004cf3c0  c21000               ret 0x10
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?internalSendIndices@RenderDevice@G3D@@AAEXW4Primitive@12@IHPBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
