// roc 2008-06 00677190  unit: RBX::AdornG3D  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00677190
//
// 00677190  6aff                 push -1
// 00677192  6848c07d00           push 0x7dc048
// 00677197  64a100000000         mov eax, dword ptr fs:[0]
// 0067719d  50                   push eax
// 0067719e  64892500000000       mov dword ptr fs:[0], esp
// 006771a5  83ec14               sub esp, 0x14
// 006771a8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006771ac  d94004               fld dword ptr [eax + 4]
// 006771af  c7042404748200       mov dword ptr [esp], 0x827404
// 006771b6  d84c2430             fmul dword ptr [esp + 0x30]
// 006771ba  d80dac9b8100         fmul dword ptr [0x819bac]
// 006771c0  d9051c389700         fld dword ptr [0x97381c]
// 006771c6  d95c2404             fstp dword ptr [esp + 4]
// 006771ca  d90520389700         fld dword ptr [0x973820]
// 006771d0  d95c2408             fstp dword ptr [esp + 8]
// 006771d4  d90524389700         fld dword ptr [0x973824]
// 006771da  d95c240c             fstp dword ptr [esp + 0xc]
// 006771de  d95c2410             fstp dword ptr [esp + 0x10]
// 006771e2  f60520f0960001       test byte ptr [0x96f020], 1
// 006771e9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006771f1  7515                 jne 0x677208
// 006771f3  8b0dac248000         mov ecx, dword ptr [0x8024ac]
// 006771f9  830d20f0960001       or dword ptr [0x96f020], 1
// 00677200  dd01                 fld qword ptr [ecx]
// 00677202  dd1d18f09600         fstp qword ptr [0x96f018]
// 00677208  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0067720c  68d8f69700           push 0x97f6d8
// 00677211  52                   push edx
// 00677212  8d442408             lea eax, [esp + 8]
// 00677216  50                   push eax
// 00677217  8b442434             mov eax, dword ptr [esp + 0x34]
// 0067721b  8d4810               lea ecx, [eax + 0x10]
// 0067721e  51                   push ecx
// 0067721f  83c004               add eax, 4
// 00677222  50                   push eax
// 00677223  e878431400           call 0x7bb5a0
// 00677228  dc1d18f09600         fcomp qword ptr [0x96f018]
// 0067722e  83c414               add esp, 0x14
// 00677231  dfe0                 fnstsw ax
// 00677233  f6c444               test ah, 0x44
// 00677236  7b11                 jnp 0x677249
// 00677238  b001                 mov al, 1
// 0067723a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067723e  64890d00000000       mov dword ptr fs:[0], ecx
// 00677245  83c420               add esp, 0x20
// 00677248  c3                   ret 
// 00677249  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067724d  32c0                 xor al, al
// 0067724f  64890d00000000       mov dword ptr fs:[0], ecx
// 00677256  83c420               add esp, 0x20
// 00677259  c3                   ret 
// library openrbx-client/Rendering\AppDraw\HitTest.cpp (function ?hitTestBall@HitTest@RBX@@CA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client Rendering/AppDraw/HitTest.cpp
