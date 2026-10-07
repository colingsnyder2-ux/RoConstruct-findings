// roc 2009-06 004a32a0  unit: G3D::PBVTextureFormat::?$Table  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a32a0
//
// 004a32a0  6aff                 push -1
// 004a32a2  6893728500           push 0x857293
// 004a32a7  64a100000000         mov eax, dword ptr fs:[0]
// 004a32ad  50                   push eax
// 004a32ae  64892500000000       mov dword ptr fs:[0], esp
// 004a32b5  81ec68070000         sub esp, 0x768
// 004a32bb  56                   push esi
// 004a32bc  8bf1                 mov esi, ecx
// 004a32be  8b4604               mov eax, dword ptr [esi + 4]
// 004a32c1  3b4608               cmp eax, dword ptr [esi + 8]
// 004a32c4  89742408             mov dword ptr [esp + 8], esi
// 004a32c8  7d43                 jge 0x4a330d
// 004a32ca  69c060070000         imul eax, eax, 0x760
// 004a32d0  0306                 add eax, dword ptr [esi]
// 004a32d2  89442404             mov dword ptr [esp + 4], eax
// 004a32d6  c784247407000000000000 mov dword ptr [esp + 0x774], 0
// 004a32e1  740f                 je 0x4a32f2
// 004a32e3  8b8c247c070000       mov ecx, dword ptr [esp + 0x77c]
// 004a32ea  51                   push ecx
// 004a32eb  8bc8                 mov ecx, eax
// 004a32ed  e8eef2ffff           call 0x4a25e0
// 004a32f2  ff4604               inc dword ptr [esi + 4]
// 004a32f5  5e                   pop esi
// 004a32f6  8b8c2468070000       mov ecx, dword ptr [esp + 0x768]
// 004a32fd  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3304  81c474070000         add esp, 0x774
// 004a330a  c20400               ret 4
// 004a330d  8b0e                 mov ecx, dword ptr [esi]
// 004a330f  57                   push edi
// 004a3310  8bbc2480070000       mov edi, dword ptr [esp + 0x780]
// 004a3317  3bf9                 cmp edi, ecx
// 004a3319  7245                 jb 0x4a3360
// 004a331b  8bd0                 mov edx, eax
// 004a331d  69d260070000         imul edx, edx, 0x760
// 004a3323  03d1                 add edx, ecx
// 004a3325  3bfa                 cmp edi, edx
// 004a3327  7337                 jae 0x4a3360
// 004a3329  57                   push edi
// 004a332a  8d4c2414             lea ecx, [esp + 0x14]
// 004a332e  e8adf2ffff           call 0x4a25e0
// 004a3333  8d442410             lea eax, [esp + 0x10]
// 004a3337  50                   push eax
// 004a3338  8bce                 mov ecx, esi
// 004a333a  c784247c07000001000000 mov dword ptr [esp + 0x77c], 1
// 004a3345  e856ffffff           call 0x4a32a0
// 004a334a  8d4c2410             lea ecx, [esp + 0x10]
// 004a334e  c7842478070000ffffffff mov dword ptr [esp + 0x778], 0xffffffff
// 004a3359  e822dcffff           call 0x4a0f80
// 004a335e  eb23                 jmp 0x4a3383
// 004a3360  6a00                 push 0
// 004a3362  40                   inc eax
// 004a3363  50                   push eax
// 004a3364  8bce                 mov ecx, esi
// 004a3366  e8b5fdffff           call 0x4a3120
// 004a336b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a336e  8b16                 mov edx, dword ptr [esi]
// 004a3370  69c960070000         imul ecx, ecx, 0x760
// 004a3376  57                   push edi
// 004a3377  8d8c11a0f8ffff       lea ecx, [ecx + edx - 0x760]
// 004a337e  e88de3ffff           call 0x4a1710
// 004a3383  8b8c2470070000       mov ecx, dword ptr [esp + 0x770]
// 004a338a  5f                   pop edi
// 004a338b  5e                   pop esi
// 004a338c  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3393  81c474070000         add esp, 0x774
// 004a3399  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?append@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAEXABVRenderState@RenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
