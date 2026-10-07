// roc 2008-06 004704a0  unit: RBX::LDraw2Lua::LuaWriter  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004704a0
//
// 004704a0  6aff                 push -1
// 004704a2  6809e77c00           push 0x7ce709
// 004704a7  64a100000000         mov eax, dword ptr fs:[0]
// 004704ad  50                   push eax
// 004704ae  64892500000000       mov dword ptr fs:[0], esp
// 004704b5  83ec20               sub esp, 0x20
// 004704b8  68031f0000           push 0x1f03
// 004704bd  ff1594298000         call dword ptr [0x802994]
// 004704c3  50                   push eax
// 004704c4  8d4c2408             lea ecx, [esp + 8]
// 004704c8  ff1558248000         call dword ptr [0x802458]
// 004704ce  6a17                 push 0x17
// 004704d0  6a00                 push 0
// 004704d2  6800ce8100           push 0x81ce00
// 004704d7  8d4c2410             lea ecx, [esp + 0x10]
// 004704db  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004704e3  ff1598248000         call dword ptr [0x802498]
// 004704e9  8b0de8238000         mov ecx, dword ptr [0x8023e8]
// 004704ef  3b01                 cmp eax, dword ptr [ecx]
// 004704f1  8d4c2404             lea ecx, [esp + 4]
// 004704f5  0f95c2               setne dl
// 004704f8  881591ee9600         mov byte ptr [0x96ee91], dl
// 004704fe  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00470506  ff1568248000         call dword ptr [0x802468]
// 0047050c  68ffff0f00           push 0xfffff
// 00470511  ff1564298000         call dword ptr [0x802964]
// 00470517  8d0424               lea eax, [esp]
// 0047051a  50                   push eax
// 0047051b  6a01                 push 1
// 0047051d  ff1568298000         call dword ptr [0x802968]
// 00470523  8b0c24               mov ecx, dword ptr [esp]
// 00470526  51                   push ecx
// 00470527  68e10d0000           push 0xde1
// 0047052c  ff15d8298000         call dword ptr [0x8029d8]
// 00470532  803d91ee960000       cmp byte ptr [0x96ee91], 0
// 00470539  7412                 je 0x47054d
// 0047053b  6a01                 push 1
// 0047053d  6891810000           push 0x8191
// 00470542  68e10d0000           push 0xde1
// 00470547  ff1578298000         call dword ptr [0x802978]
// 0047054d  56                   push esi
// 0047054e  6a30                 push 0x30
// 00470550  e801042300           call 0x6a0956
// 00470555  6a30                 push 0x30
// 00470557  8bf0                 mov esi, eax
// 00470559  6a00                 push 0
// 0047055b  56                   push esi
// 0047055c  e8a3112300           call 0x6a1704
// 00470561  83c410               add esp, 0x10
// 00470564  33c0                 xor eax, eax
// 00470566  c60430ff             mov byte ptr [eax + esi], 0xff
// 0047056a  83c003               add eax, 3
// 0047056d  83f830               cmp eax, 0x30
// 00470570  7cf4                 jl 0x470566
// 00470572  56                   push esi
// 00470573  6801140000           push 0x1401
// 00470578  6807190000           push 0x1907
// 0047057d  6a00                 push 0
// 0047057f  6a04                 push 4
// 00470581  6a04                 push 4
// 00470583  6851800000           push 0x8051
// 00470588  6a00                 push 0
// 0047058a  68e10d0000           push 0xde1
// 0047058f  ff1554298000         call dword ptr [0x802954]
// 00470595  56                   push esi
// 00470596  6801140000           push 0x1401
// 0047059b  6807190000           push 0x1907
// 004705a0  6a00                 push 0
// 004705a2  68e10d0000           push 0xde1
// 004705a7  ff15b02a8000         call dword ptr [0x802ab0]
// 004705ad  803eff               cmp byte ptr [esi], 0xff
// 004705b0  7513                 jne 0x4705c5
// 004705b2  807e0100             cmp byte ptr [esi + 1], 0
// 004705b6  750d                 jne 0x4705c5
// 004705b8  807e0200             cmp byte ptr [esi + 2], 0
// 004705bc  c60575ee960000       mov byte ptr [0x96ee75], 0
// 004705c3  7407                 je 0x4705cc
// 004705c5  c60575ee960001       mov byte ptr [0x96ee75], 1
// 004705cc  56                   push esi
// 004705cd  e878032300           call 0x6a094a
// 004705d2  83c404               add esp, 4
// 004705d5  8d542404             lea edx, [esp + 4]
// 004705d9  52                   push edx
// 004705da  6a01                 push 1
// 004705dc  ff15b0298000         call dword ptr [0x8029b0]
// 004705e2  ff15b4298000         call dword ptr [0x8029b4]
// 004705e8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004705ec  5e                   pop esi
// 004705ed  64890d00000000       mov dword ptr fs:[0], ecx
// 004705f4  83c42c               add esp, 0x2c
// 004705f7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?checkBug_redBlueMipmapSwap@GLCaps@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
