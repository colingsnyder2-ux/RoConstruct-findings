// roc 2007-03 0061da20  unit: seg_00610000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061da20
//
// 0061da20  6aff                 push -1
// 0061da22  6888dd7500           push 0x75dd88
// 0061da27  64a100000000         mov eax, dword ptr fs:[0]
// 0061da2d  50                   push eax
// 0061da2e  64892500000000       mov dword ptr fs:[0], esp
// 0061da35  83ec14               sub esp, 0x14
// 0061da38  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061da3c  d94004               fld dword ptr [eax + 4]
// 0061da3f  c70424d4ed7900       mov dword ptr [esp], 0x79edd4
// 0061da46  d84c2430             fmul dword ptr [esp + 0x30]
// 0061da4a  dc0d584f7900         fmul qword ptr [0x794f58]
// 0061da50  d95c2424             fstp dword ptr [esp + 0x24]
// 0061da54  d905d4b08b00         fld dword ptr [0x8bb0d4]
// 0061da5a  d95c2404             fstp dword ptr [esp + 4]
// 0061da5e  d905d8b08b00         fld dword ptr [0x8bb0d8]
// 0061da64  d95c2408             fstp dword ptr [esp + 8]
// 0061da68  d905dcb08b00         fld dword ptr [0x8bb0dc]
// 0061da6e  d95c240c             fstp dword ptr [esp + 0xc]
// 0061da72  d9442424             fld dword ptr [esp + 0x24]
// 0061da76  d95c2410             fstp dword ptr [esp + 0x10]
// 0061da7a  f605d0778b0001       test byte ptr [0x8b77d0], 1
// 0061da81  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0061da89  7515                 jne 0x61daa0
// 0061da8b  8b0d28e67700         mov ecx, dword ptr [0x77e628]
// 0061da91  830dd0778b0001       or dword ptr [0x8b77d0], 1
// 0061da98  dd01                 fld qword ptr [ecx]
// 0061da9a  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 0061daa0  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0061daa4  68842c8c00           push 0x8c2c84
// 0061daa9  52                   push edx
// 0061daaa  8d442408             lea eax, [esp + 8]
// 0061daae  50                   push eax
// 0061daaf  8b442434             mov eax, dword ptr [esp + 0x34]
// 0061dab3  8d4810               lea ecx, [eax + 0x10]
// 0061dab6  51                   push ecx
// 0061dab7  83c004               add eax, 4
// 0061daba  50                   push eax
// 0061dabb  e850c31100           call 0x739e10
// 0061dac0  dc1dc8778b00         fcomp qword ptr [0x8b77c8]
// 0061dac6  83c414               add esp, 0x14
// 0061dac9  dfe0                 fnstsw ax
// 0061dacb  f6c444               test ah, 0x44
// 0061dace  7b11                 jnp 0x61dae1
// 0061dad0  b001                 mov al, 1
// 0061dad2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061dad6  64890d00000000       mov dword ptr fs:[0], ecx
// 0061dadd  83c420               add esp, 0x20
// 0061dae0  c3                   ret 
// 0061dae1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061dae5  32c0                 xor al, al
// 0061dae7  64890d00000000       mov dword ptr fs:[0], ecx
// 0061daee  83c420               add esp, 0x20
// 0061daf1  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?hitTestBall@HitTest@RBX@@CA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp
