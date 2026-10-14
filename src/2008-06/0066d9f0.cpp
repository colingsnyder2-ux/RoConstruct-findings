// roc 2008-06 0066d9f0  unit: RBX::GroupDragTool  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066d9f0
//
// 0066d9f0  6aff                 push -1
// 0066d9f2  68b8c57d00           push 0x7dc5b8
// 0066d9f7  64a100000000         mov eax, dword ptr fs:[0]
// 0066d9fd  50                   push eax
// 0066d9fe  64892500000000       mov dword ptr fs:[0], esp
// 0066da05  83ec2c               sub esp, 0x2c
// 0066da08  56                   push esi
// 0066da09  57                   push edi
// 0066da0a  33ff                 xor edi, edi
// 0066da0c  8bf1                 mov esi, ecx
// 0066da0e  897c240c             mov dword ptr [esp + 0xc], edi
// 0066da12  897c2410             mov dword ptr [esp + 0x10], edi
// 0066da16  897c2408             mov dword ptr [esp + 8], edi
// 0066da1a  57                   push edi
// 0066da1b  8d44240c             lea eax, [esp + 0xc]
// 0066da1f  50                   push eax
// 0066da20  8d4c241c             lea ecx, [esp + 0x1c]
// 0066da24  51                   push ecx
// 0066da25  8bce                 mov ecx, esi
// 0066da27  897c2448             mov dword ptr [esp + 0x48], edi
// 0066da2b  e8a0f6ffff           call 0x66d0d0
// 0066da30  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066da34  3bc7                 cmp eax, edi
// 0066da36  0f8481000000         je 0x66dabd
// 0066da3c  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0066da3f  747c                 je 0x66dabd
// 0066da41  d944241c             fld dword ptr [esp + 0x1c]
// 0066da45  d86648               fsub dword ptr [esi + 0x48]
// 0066da48  d9442420             fld dword ptr [esp + 0x20]
// 0066da4c  d8664c               fsub dword ptr [esi + 0x4c]
// 0066da4f  d9442424             fld dword ptr [esp + 0x24]
// 0066da53  d86650               fsub dword ptr [esi + 0x50]
// 0066da56  d9c2                 fld st(2)
// 0066da58  decb                 fmulp st(3)
// 0066da5a  d9c1                 fld st(1)
// 0066da5c  deca                 fmulp st(2)
// 0066da5e  d9ca                 fxch st(2)
// 0066da60  dec1                 faddp st(1)
// 0066da62  d9c1                 fld st(1)
// 0066da64  deca                 fmulp st(2)
// 0066da66  dec1                 faddp st(1)
// 0066da68  d9fa                 fsqrt 
// 0066da6a  d9462c               fld dword ptr [esi + 0x2c]
// 0066da6d  d86648               fsub dword ptr [esi + 0x48]
// 0066da70  d94630               fld dword ptr [esi + 0x30]
// 0066da73  d8664c               fsub dword ptr [esi + 0x4c]
// 0066da76  d94634               fld dword ptr [esi + 0x34]
// 0066da79  d86650               fsub dword ptr [esi + 0x50]
// 0066da7c  d9c2                 fld st(2)
// 0066da7e  decb                 fmulp st(3)
// 0066da80  d9c1                 fld st(1)
// 0066da82  deca                 fmulp st(2)
// 0066da84  d9ca                 fxch st(2)
// 0066da86  dec1                 faddp st(1)
// 0066da88  d9c1                 fld st(1)
// 0066da8a  deca                 fmulp st(2)
// 0066da8c  dec1                 faddp st(1)
// 0066da8e  d9fa                 fsqrt 
// 0066da90  ded9                 fcompp 
// 0066da92  dfe0                 fnstsw ax
// 0066da94  f6c441               test ah, 0x41
// 0066da97  7524                 jne 0x66dabd
// 0066da99  57                   push edi
// 0066da9a  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0066daa2  e879a2e9ff           call 0x507d20
// 0066daa7  83c404               add esp, 4
// 0066daaa  5f                   pop edi
// 0066daab  b001                 mov al, 1
// 0066daad  5e                   pop esi
// 0066daae  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0066dab2  64890d00000000       mov dword ptr fs:[0], ecx
// 0066dab9  83c438               add esp, 0x38
// 0066dabc  c3                   ret 
// 0066dabd  57                   push edi
// 0066dabe  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0066dac6  e855a2e9ff           call 0x507d20
// 0066dacb  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0066dacf  83c404               add esp, 4
// 0066dad2  5f                   pop edi
// 0066dad3  32c0                 xor al, al
// 0066dad5  5e                   pop esi
// 0066dad6  64890d00000000       mov dword ptr fs:[0], ecx
// 0066dadd  83c438               add esp, 0x38
// 0066dae0  c3                   ret 
// library rbxgs-dll/tool\RunDragger.cpp (function ?rayHitsCloserPart@RunDragger@RBX@@AAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll tool/RunDragger.cpp
