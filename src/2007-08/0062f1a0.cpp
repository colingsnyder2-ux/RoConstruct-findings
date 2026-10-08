// roc 2007-08 0062f1a0  unit: RBX::AdornG3D  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062f1a0
//
// 0062f1a0  6aff                 push -1
// 0062f1a2  6898c57500           push 0x75c598
// 0062f1a7  64a100000000         mov eax, dword ptr fs:[0]
// 0062f1ad  50                   push eax
// 0062f1ae  64892500000000       mov dword ptr fs:[0], esp
// 0062f1b5  83ec14               sub esp, 0x14
// 0062f1b8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062f1bc  d94004               fld dword ptr [eax + 4]
// 0062f1bf  c704247cf77900       mov dword ptr [esp], 0x79f77c
// 0062f1c6  d84c2430             fmul dword ptr [esp + 0x30]
// 0062f1ca  dc0d485b7900         fmul qword ptr [0x795b48]
// 0062f1d0  d95c2424             fstp dword ptr [esp + 0x24]
// 0062f1d4  d905040c8c00         fld dword ptr [0x8c0c04]
// 0062f1da  d95c2404             fstp dword ptr [esp + 4]
// 0062f1de  d905080c8c00         fld dword ptr [0x8c0c08]
// 0062f1e4  d95c2408             fstp dword ptr [esp + 8]
// 0062f1e8  d9050c0c8c00         fld dword ptr [0x8c0c0c]
// 0062f1ee  d95c240c             fstp dword ptr [esp + 0xc]
// 0062f1f2  d9442424             fld dword ptr [esp + 0x24]
// 0062f1f6  d95c2410             fstp dword ptr [esp + 0x10]
// 0062f1fa  f60508d18b0001       test byte ptr [0x8bd108], 1
// 0062f201  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0062f209  7515                 jne 0x62f220
// 0062f20b  8b0d64e57700         mov ecx, dword ptr [0x77e564]
// 0062f211  830d08d18b0001       or dword ptr [0x8bd108], 1
// 0062f218  dd01                 fld qword ptr [ecx]
// 0062f21a  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 0062f220  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0062f224  68cc9b8c00           push 0x8c9bcc
// 0062f229  52                   push edx
// 0062f22a  8d442408             lea eax, [esp + 8]
// 0062f22e  50                   push eax
// 0062f22f  8b442434             mov eax, dword ptr [esp + 0x34]
// 0062f233  8d4810               lea ecx, [eax + 0x10]
// 0062f236  51                   push ecx
// 0062f237  83c004               add eax, 4
// 0062f23a  50                   push eax
// 0062f23b  e860851000           call 0x7377a0
// 0062f240  dc1d00d18b00         fcomp qword ptr [0x8bd100]
// 0062f246  83c414               add esp, 0x14
// 0062f249  dfe0                 fnstsw ax
// 0062f24b  f6c444               test ah, 0x44
// 0062f24e  7b11                 jnp 0x62f261
// 0062f250  b001                 mov al, 1
// 0062f252  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062f256  64890d00000000       mov dword ptr fs:[0], ecx
// 0062f25d  83c420               add esp, 0x20
// 0062f260  c3                   ret 
// 0062f261  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062f265  32c0                 xor al, al
// 0062f267  64890d00000000       mov dword ptr fs:[0], ecx
// 0062f26e  83c420               add esp, 0x20
// 0062f271  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?hitTestBall@HitTest@RBX@@CA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp
