// roc 2008-06 005bed50  unit: RBX::Soundscape::SoundService  size: 834 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bed50
//
// 005bed50  64a100000000         mov eax, dword ptr fs:[0]
// 005bed56  6aff                 push -1
// 005bed58  68d93f7d00           push 0x7d3fd9
// 005bed5d  50                   push eax
// 005bed5e  64892500000000       mov dword ptr fs:[0], esp
// 005bed65  83ec38               sub esp, 0x38
// 005bed68  53                   push ebx
// 005bed69  55                   push ebp
// 005bed6a  56                   push esi
// 005bed6b  8b742454             mov esi, dword ptr [esp + 0x54]
// 005bed6f  bd10000000           mov ebp, 0x10
// 005bed74  57                   push edi
// 005bed75  396e18               cmp dword ptr [esi + 0x18], ebp
// 005bed78  7205                 jb 0x5bed7f
// 005bed7a  8b4604               mov eax, dword ptr [esi + 4]
// 005bed7d  eb03                 jmp 0x5bed82
// 005bed7f  8d4604               lea eax, [esi + 4]
// 005bed82  803823               cmp byte ptr [eax], 0x23
// 005bed85  0f85e9000000         jne 0x5bee74
// 005bed8b  837e1407             cmp dword ptr [esi + 0x14], 7
// 005bed8f  7415                 je 0x5beda6
// 005bed91  5f                   pop edi
// 005bed92  5e                   pop esi
// 005bed93  5d                   pop ebp
// 005bed94  32c0                 xor al, al
// 005bed96  5b                   pop ebx
// 005bed97  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005bed9b  64890d00000000       mov dword ptr fs:[0], ecx
// 005beda2  83c444               add esp, 0x44
// 005beda5  c3                   ret 
// 005beda6  6a02                 push 2
// 005beda8  6a01                 push 1
// 005bedaa  8d442418             lea eax, [esp + 0x18]
// 005bedae  50                   push eax
// 005bedaf  8bce                 mov ecx, esi
// 005bedb1  ff15e0238000         call dword ptr [0x8023e0]
// 005bedb7  396818               cmp dword ptr [eax + 0x18], ebp
// 005bedba  7205                 jb 0x5bedc1
// 005bedbc  8b4004               mov eax, dword ptr [eax + 4]
// 005bedbf  eb03                 jmp 0x5bedc4
// 005bedc1  83c004               add eax, 4
// 005bedc4  8b3d30278000         mov edi, dword ptr [0x802730]
// 005bedca  55                   push ebp
// 005bedcb  6a00                 push 0
// 005bedcd  50                   push eax
// 005bedce  ffd7                 call edi
// 005bedd0  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 005bedd4  89442464             mov dword ptr [esp + 0x64], eax
// 005bedd8  db442464             fild dword ptr [esp + 0x64]
// 005beddc  83c40c               add esp, 0xc
// 005beddf  8d4c2410             lea ecx, [esp + 0x10]
// 005bede3  d80dd4358100         fmul dword ptr [0x8135d4]
// 005bede9  d91b                 fstp dword ptr [ebx]
// 005bedeb  ff1568248000         call dword ptr [0x802468]
// 005bedf1  6a02                 push 2
// 005bedf3  6a03                 push 3
// 005bedf5  8d4c2418             lea ecx, [esp + 0x18]
// 005bedf9  51                   push ecx
// 005bedfa  8bce                 mov ecx, esi
// 005bedfc  ff15e0238000         call dword ptr [0x8023e0]
// 005bee02  396818               cmp dword ptr [eax + 0x18], ebp
// 005bee05  7205                 jb 0x5bee0c
// 005bee07  8b4004               mov eax, dword ptr [eax + 4]
// 005bee0a  eb03                 jmp 0x5bee0f
// 005bee0c  83c004               add eax, 4
// 005bee0f  55                   push ebp
// 005bee10  6a00                 push 0
// 005bee12  50                   push eax
// 005bee13  ffd7                 call edi
// 005bee15  89442464             mov dword ptr [esp + 0x64], eax
// 005bee19  db442464             fild dword ptr [esp + 0x64]
// 005bee1d  83c40c               add esp, 0xc
// 005bee20  8d4c2410             lea ecx, [esp + 0x10]
// 005bee24  d80dd4358100         fmul dword ptr [0x8135d4]
// 005bee2a  d95b04               fstp dword ptr [ebx + 4]
// 005bee2d  ff1568248000         call dword ptr [0x802468]
// 005bee33  6a02                 push 2
// 005bee35  6a05                 push 5
// 005bee37  8d542418             lea edx, [esp + 0x18]
// 005bee3b  52                   push edx
// 005bee3c  8bce                 mov ecx, esi
// 005bee3e  ff15e0238000         call dword ptr [0x8023e0]
// 005bee44  396818               cmp dword ptr [eax + 0x18], ebp
// 005bee47  7205                 jb 0x5bee4e
// 005bee49  8b4004               mov eax, dword ptr [eax + 4]
// 005bee4c  eb03                 jmp 0x5bee51
// 005bee4e  83c004               add eax, 4
// 005bee51  55                   push ebp
// 005bee52  6a00                 push 0
// 005bee54  50                   push eax
// 005bee55  ffd7                 call edi
// 005bee57  89442464             mov dword ptr [esp + 0x64], eax
// 005bee5b  db442464             fild dword ptr [esp + 0x64]
// 005bee5f  83c40c               add esp, 0xc
// 005bee62  8d4c2410             lea ecx, [esp + 0x10]
// 005bee66  d80dd4358100         fmul dword ptr [0x8135d4]
// 005bee6c  d95b08               fstp dword ptr [ebx + 8]
// 005bee6f  e903020000           jmp 0x5bf077
// 005bee74  6a02                 push 2
// 005bee76  6a00                 push 0
// 005bee78  8d442418             lea eax, [esp + 0x18]
// 005bee7c  50                   push eax
// 005bee7d  8bce                 mov ecx, esi
// 005bee7f  ff15e0238000         call dword ptr [0x8023e0]
// 005bee85  68308b8200           push 0x828b30
// 005bee8a  50                   push eax
// 005bee8b  c744245800000000     mov dword ptr [esp + 0x58], 0
// 005bee93  ff156c238000         call dword ptr [0x80236c]
// 005bee99  83c408               add esp, 8
// 005bee9c  8d4c2410             lea ecx, [esp + 0x10]
// 005beea0  8ad8                 mov bl, al
// 005beea2  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 005beeaa  ff1568248000         call dword ptr [0x802468]
// 005beeb0  84db                 test bl, bl
// 005beeb2  0f84d8000000         je 0x5bef90
// 005beeb8  837e1408             cmp dword ptr [esi + 0x14], 8
// 005beebc  0f85cffeffff         jne 0x5bed91
// 005beec2  6a02                 push 2
// 005beec4  6a02                 push 2
// 005beec6  8d4c2418             lea ecx, [esp + 0x18]
// 005beeca  51                   push ecx
// 005beecb  8bce                 mov ecx, esi
// 005beecd  ff15e0238000         call dword ptr [0x8023e0]
// 005beed3  396818               cmp dword ptr [eax + 0x18], ebp
// 005beed6  7205                 jb 0x5beedd
// 005beed8  8b4004               mov eax, dword ptr [eax + 4]
// 005beedb  eb03                 jmp 0x5beee0
// 005beedd  83c004               add eax, 4
// 005beee0  8b3d30278000         mov edi, dword ptr [0x802730]
// 005beee6  55                   push ebp
// 005beee7  6a00                 push 0
// 005beee9  50                   push eax
// 005beeea  ffd7                 call edi
// 005beeec  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 005beef0  89442464             mov dword ptr [esp + 0x64], eax
// 005beef4  db442464             fild dword ptr [esp + 0x64]
// 005beef8  83c40c               add esp, 0xc
// 005beefb  8d4c2410             lea ecx, [esp + 0x10]
// 005beeff  d80dd4358100         fmul dword ptr [0x8135d4]
// 005bef05  d91b                 fstp dword ptr [ebx]
// 005bef07  ff1568248000         call dword ptr [0x802468]
// 005bef0d  6a02                 push 2
// 005bef0f  6a04                 push 4
// 005bef11  8d542418             lea edx, [esp + 0x18]
// 005bef15  52                   push edx
// 005bef16  8bce                 mov ecx, esi
// 005bef18  ff15e0238000         call dword ptr [0x8023e0]
// 005bef1e  396818               cmp dword ptr [eax + 0x18], ebp
// 005bef21  7205                 jb 0x5bef28
// 005bef23  8b4004               mov eax, dword ptr [eax + 4]
// 005bef26  eb03                 jmp 0x5bef2b
// 005bef28  83c004               add eax, 4
// 005bef2b  55                   push ebp
// 005bef2c  6a00                 push 0
// 005bef2e  50                   push eax
// 005bef2f  ffd7                 call edi
// 005bef31  89442464             mov dword ptr [esp + 0x64], eax
// 005bef35  db442464             fild dword ptr [esp + 0x64]
// 005bef39  83c40c               add esp, 0xc
// 005bef3c  8d4c2410             lea ecx, [esp + 0x10]
// 005bef40  d80dd4358100         fmul dword ptr [0x8135d4]
// 005bef46  d95b04               fstp dword ptr [ebx + 4]
// 005bef49  ff1568248000         call dword ptr [0x802468]
// 005bef4f  6a02                 push 2
// 005bef51  6a06                 push 6
// 005bef53  8d442418             lea eax, [esp + 0x18]
// 005bef57  50                   push eax
// 005bef58  8bce                 mov ecx, esi
// 005bef5a  ff15e0238000         call dword ptr [0x8023e0]
// 005bef60  396818               cmp dword ptr [eax + 0x18], ebp
// 005bef63  7205                 jb 0x5bef6a
// 005bef65  8b4004               mov eax, dword ptr [eax + 4]
// 005bef68  eb03                 jmp 0x5bef6d
// 005bef6a  83c004               add eax, 4
// 005bef6d  55                   push ebp
// 005bef6e  6a00                 push 0
// 005bef70  50                   push eax
// 005bef71  ffd7                 call edi
// 005bef73  89442464             mov dword ptr [esp + 0x64], eax
// 005bef77  db442464             fild dword ptr [esp + 0x64]
// 005bef7b  83c40c               add esp, 0xc
// 005bef7e  8d4c2410             lea ecx, [esp + 0x10]
// 005bef82  d80dd4358100         fmul dword ptr [0x8135d4]
// 005bef88  d95b08               fstp dword ptr [ebx + 8]
// 005bef8b  e9e7000000           jmp 0x5bf077
// 005bef90  6a02                 push 2
// 005bef92  6a00                 push 0
// 005bef94  6860848300           push 0x838460
// 005bef99  8bce                 mov ecx, esi
// 005bef9b  ff15c4248000         call dword ptr [0x8024c4]
// 005befa1  8bf8                 mov edi, eax
// 005befa3  85ff                 test edi, edi
// 005befa5  0f8ce6fdffff         jl 0x5bed91
// 005befab  57                   push edi
// 005befac  6a00                 push 0
// 005befae  8d4c2418             lea ecx, [esp + 0x18]
// 005befb2  51                   push ecx
// 005befb3  8bce                 mov ecx, esi
// 005befb5  ff15e0238000         call dword ptr [0x8023e0]
// 005befbb  396818               cmp dword ptr [eax + 0x18], ebp
// 005befbe  7205                 jb 0x5befc5
// 005befc0  8b4004               mov eax, dword ptr [eax + 4]
// 005befc3  eb03                 jmp 0x5befc8
// 005befc5  83c004               add eax, 4
// 005befc8  50                   push eax
// 005befc9  ff15fc278000         call dword ptr [0x8027fc]
// 005befcf  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 005befd3  83c404               add esp, 4
// 005befd6  d95d00               fstp dword ptr [ebp]
// 005befd9  8d4c2410             lea ecx, [esp + 0x10]
// 005befdd  ff1568248000         call dword ptr [0x802468]
// 005befe3  6a02                 push 2
// 005befe5  47                   inc edi
// 005befe6  57                   push edi
// 005befe7  6860848300           push 0x838460
// 005befec  8bce                 mov ecx, esi
// 005befee  ff15c4248000         call dword ptr [0x8024c4]
// 005beff4  8bd8                 mov ebx, eax
// 005beff6  3bdf                 cmp ebx, edi
// 005beff8  0f8c93fdffff         jl 0x5bed91
// 005beffe  8bd3                 mov edx, ebx
// 005bf000  2bd7                 sub edx, edi
// 005bf002  52                   push edx
// 005bf003  57                   push edi
// 005bf004  8d442418             lea eax, [esp + 0x18]
// 005bf008  50                   push eax
// 005bf009  8bce                 mov ecx, esi
// 005bf00b  ff15e0238000         call dword ptr [0x8023e0]
// 005bf011  bf10000000           mov edi, 0x10
// 005bf016  397818               cmp dword ptr [eax + 0x18], edi
// 005bf019  7205                 jb 0x5bf020
// 005bf01b  8b4004               mov eax, dword ptr [eax + 4]
// 005bf01e  eb03                 jmp 0x5bf023
// 005bf020  83c004               add eax, 4
// 005bf023  50                   push eax
// 005bf024  ff15fc278000         call dword ptr [0x8027fc]
// 005bf02a  d95d04               fstp dword ptr [ebp + 4]
// 005bf02d  83c404               add esp, 4
// 005bf030  8d4c2410             lea ecx, [esp + 0x10]
// 005bf034  ff1568248000         call dword ptr [0x802468]
// 005bf03a  8b4614               mov eax, dword ptr [esi + 0x14]
// 005bf03d  8d4b01               lea ecx, [ebx + 1]
// 005bf040  3bc1                 cmp eax, ecx
// 005bf042  0f8c49fdffff         jl 0x5bed91
// 005bf048  2bc1                 sub eax, ecx
// 005bf04a  50                   push eax
// 005bf04b  51                   push ecx
// 005bf04c  8d4c2434             lea ecx, [esp + 0x34]
// 005bf050  51                   push ecx
// 005bf051  8bce                 mov ecx, esi
// 005bf053  ff15e0238000         call dword ptr [0x8023e0]
// 005bf059  397818               cmp dword ptr [eax + 0x18], edi
// 005bf05c  7205                 jb 0x5bf063
// 005bf05e  8b4004               mov eax, dword ptr [eax + 4]
// 005bf061  eb03                 jmp 0x5bf066
// 005bf063  83c004               add eax, 4
// 005bf066  50                   push eax
// 005bf067  ff15fc278000         call dword ptr [0x8027fc]
// 005bf06d  d95d08               fstp dword ptr [ebp + 8]
// 005bf070  83c404               add esp, 4
// 005bf073  8d4c242c             lea ecx, [esp + 0x2c]
// 005bf077  ff1568248000         call dword ptr [0x802468]
// 005bf07d  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005bf081  5f                   pop edi
// 005bf082  5e                   pop esi
// 005bf083  5d                   pop ebp
// 005bf084  b001                 mov al, 1
// 005bf086  5b                   pop ebx
// 005bf087  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf08e  83c444               add esp, 0x44
// 005bf091  c3                   ret 
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?convertToValue@?$StringConverter@VColor3@G3D@@@RBX@@SA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
