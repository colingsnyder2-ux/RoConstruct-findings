// roc 2008-06 0050fef0  unit: seg_00500000  size: 985 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050fef0
//
// 0050fef0  55                   push ebp
// 0050fef1  8bec                 mov ebp, esp
// 0050fef3  83e4f8               and esp, 0xfffffff8
// 0050fef6  6aff                 push -1
// 0050fef8  6816c37c00           push 0x7cc316
// 0050fefd  64a100000000         mov eax, dword ptr fs:[0]
// 0050ff03  50                   push eax
// 0050ff04  64892500000000       mov dword ptr fs:[0], esp
// 0050ff0b  81ec90010000         sub esp, 0x190
// 0050ff11  53                   push ebx
// 0050ff12  56                   push esi
// 0050ff13  57                   push edi
// 0050ff14  8d8424e4000000       lea eax, [esp + 0xe4]
// 0050ff1b  8bd9                 mov ebx, ecx
// 0050ff1d  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0050ff20  50                   push eax
// 0050ff21  e8da5e0000           call 0x515e00
// 0050ff26  33f6                 xor esi, esi
// 0050ff28  8d4c2438             lea ecx, [esp + 0x38]
// 0050ff2c  89b424a4010000       mov dword ptr [esp + 0x1a4], esi
// 0050ff33  c644243001           mov byte ptr [esp + 0x30], 1
// 0050ff38  c644243101           mov byte ptr [esp + 0x31], 1
// 0050ff3d  c644243201           mov byte ptr [esp + 0x32], 1
// 0050ff42  c644243300           mov byte ptr [esp + 0x33], 0
// 0050ff47  c644243400           mov byte ptr [esp + 0x34], 0
// 0050ff4c  c644243501           mov byte ptr [esp + 0x35], 1
// 0050ff51  c644243601           mov byte ptr [esp + 0x36], 1
// 0050ff56  ff1560248000         call dword ptr [0x802460]
// 0050ff5c  89742454             mov dword ptr [esp + 0x54], esi
// 0050ff60  c644245800           mov byte ptr [esp + 0x58], 0
// 0050ff65  8d4c2430             lea ecx, [esp + 0x30]
// 0050ff69  51                   push ecx
// 0050ff6a  8d9424e8000000       lea edx, [esp + 0xe8]
// 0050ff71  52                   push edx
// 0050ff72  56                   push esi
// 0050ff73  8d8c2484000000       lea ecx, [esp + 0x84]
// 0050ff7a  c68424b001000001     mov byte ptr [esp + 0x1b0], 1
// 0050ff82  c644243d00           mov byte ptr [esp + 0x3d], 0
// 0050ff87  c644243f23           mov byte ptr [esp + 0x3f], 0x23
// 0050ff8c  c644244101           mov byte ptr [esp + 0x41], 1
// 0050ff91  c644244200           mov byte ptr [esp + 0x42], 0
// 0050ff96  e8b57c0000           call 0x517c50
// 0050ff9b  8d44245c             lea eax, [esp + 0x5c]
// 0050ff9f  50                   push eax
// 0050ffa0  8d4c247c             lea ecx, [esp + 0x7c]
// 0050ffa4  c68424a801000002     mov byte ptr [esp + 0x1a8], 2
// 0050ffac  e85f810000           call 0x518110
// 0050ffb1  8d4c2478             lea ecx, [esp + 0x78]
// 0050ffb5  c68424a401000003     mov byte ptr [esp + 0x1a4], 3
// 0050ffbd  e80e7f0000           call 0x517ed0
// 0050ffc2  e829181900           call 0x6a17f0
// 0050ffc7  8d4c2478             lea ecx, [esp + 0x78]
// 0050ffcb  8bf8                 mov edi, eax
// 0050ffcd  e8fe7e0000           call 0x517ed0
// 0050ffd2  e819181900           call 0x6a17f0
// 0050ffd7  8d4c245c             lea ecx, [esp + 0x5c]
// 0050ffdb  6880828200           push 0x828280
// 0050ffe0  51                   push ecx
// 0050ffe1  8bf0                 mov esi, eax
// 0050ffe3  ff15cc238000         call dword ptr [0x8023cc]
// 0050ffe9  dd05d8358100         fld qword ptr [0x8135d8]
// 0050ffef  83c408               add esp, 8
// 0050fff2  84c0                 test al, al
// 0050fff4  7445                 je 0x51003b
// 0050fff6  8d4c2478             lea ecx, [esp + 0x78]
// 0050fffa  ddd8                 fstp st(0)
// 0050fffc  e8cf7e0000           call 0x517ed0
// 00510001  dd542418             fst qword ptr [esp + 0x18]
// 00510005  dd05d8358100         fld qword ptr [0x8135d8]
// 0051000b  d9c9                 fxch st(1)
// 0051000d  85ff                 test edi, edi
// 0051000f  0f8c57020000         jl 0x51026c
// 00510015  85f6                 test esi, esi
// 00510017  0f8c4f020000         jl 0x51026c
// 0051001d  d9ee                 fldz 
// 0051001f  d8d9                 fcomp st(1)
// 00510021  dfe0                 fnstsw ax
// 00510023  f6c401               test ah, 1
// 00510026  0f8440020000         je 0x51026c
// 0051002c  d8d9                 fcomp st(1)
// 0051002e  dfe0                 fnstsw ax
// 00510030  f6c441               test ah, 0x41
// 00510033  7a0e                 jp 0x510043
// 00510035  dd5c2418             fstp qword ptr [esp + 0x18]
// 00510039  eb0a                 jmp 0x510045
// 0051003b  d9c0                 fld st(0)
// 0051003d  dd542418             fst qword ptr [esp + 0x18]
// 00510041  ebca                 jmp 0x51000d
// 00510043  ddd8                 fstp st(0)
// 00510045  89730c               mov dword ptr [ebx + 0xc], esi
// 00510048  0faff7               imul esi, edi
// 0051004b  8d1476               lea edx, [esi + esi*2]
// 0051004e  52                   push edx
// 0051004f  897b08               mov dword ptr [ebx + 8], edi
// 00510052  c7431003000000       mov dword ptr [ebx + 0x10], 3
// 00510059  e8d284ffff           call 0x508530
// 0051005e  894304               mov dword ptr [ebx + 4], eax
// 00510061  8b4308               mov eax, dword ptr [ebx + 8]
// 00510064  0faf430c             imul eax, dword ptr [ebx + 0xc]
// 00510068  33ff                 xor edi, edi
// 0051006a  83c404               add esp, 4
// 0051006d  897c2424             mov dword ptr [esp + 0x24], edi
// 00510071  85c0                 test eax, eax
// 00510073  0f868f010000         jbe 0x510208
// 00510079  8da42400000000       lea esp, [esp]
// 00510080  8b7304               mov esi, dword ptr [ebx + 4]
// 00510083  8d4c245c             lea ecx, [esp + 0x5c]
// 00510087  687c828200           push 0x82827c
// 0051008c  51                   push ecx
// 0051008d  ff156c238000         call dword ptr [0x80236c]
// 00510093  83c408               add esp, 8
// 00510096  84c0                 test al, al
// 00510098  0f84ab000000         je 0x510149
// 0051009e  dd05d8358100         fld qword ptr [0x8135d8]
// 005100a4  8d4c2478             lea ecx, [esp + 0x78]
// 005100a8  dc742418             fdiv qword ptr [esp + 0x18]
// 005100ac  dd5c2428             fstp qword ptr [esp + 0x28]
// 005100b0  e81b7e0000           call 0x517ed0
// 005100b5  dc4c2428             fmul qword ptr [esp + 0x28]
// 005100b9  d97c2412             fnstcw word ptr [esp + 0x12]
// 005100bd  8d4c2478             lea ecx, [esp + 0x78]
// 005100c1  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 005100c6  0d000c0000           or eax, 0xc00
// 005100cb  89442414             mov dword ptr [esp + 0x14], eax
// 005100cf  d96c2414             fldcw word ptr [esp + 0x14]
// 005100d3  db5c2414             fistp dword ptr [esp + 0x14]
// 005100d7  8a542414             mov dl, byte ptr [esp + 0x14]
// 005100db  881437               mov byte ptr [edi + esi], dl
// 005100de  d96c2412             fldcw word ptr [esp + 0x12]
// 005100e2  e8e97d0000           call 0x517ed0
// 005100e7  dc4c2428             fmul qword ptr [esp + 0x28]
// 005100eb  d97c2412             fnstcw word ptr [esp + 0x12]
// 005100ef  8d4c2478             lea ecx, [esp + 0x78]
// 005100f3  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 005100f8  0d000c0000           or eax, 0xc00
// 005100fd  89442414             mov dword ptr [esp + 0x14], eax
// 00510101  d96c2414             fldcw word ptr [esp + 0x14]
// 00510105  db5c2414             fistp dword ptr [esp + 0x14]
// 00510109  8a442414             mov al, byte ptr [esp + 0x14]
// 0051010d  88443701             mov byte ptr [edi + esi + 1], al
// 00510111  d96c2412             fldcw word ptr [esp + 0x12]
// 00510115  e8b67d0000           call 0x517ed0
// 0051011a  dc4c2428             fmul qword ptr [esp + 0x28]
// 0051011e  d97c2412             fnstcw word ptr [esp + 0x12]
// 00510122  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 00510127  0d000c0000           or eax, 0xc00
// 0051012c  89442414             mov dword ptr [esp + 0x14], eax
// 00510130  d96c2414             fldcw word ptr [esp + 0x14]
// 00510134  db5c2414             fistp dword ptr [esp + 0x14]
// 00510138  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0051013c  884c3702             mov byte ptr [edi + esi + 2], cl
// 00510140  d96c2412             fldcw word ptr [esp + 0x12]
// 00510144  e9a4000000           jmp 0x5101ed
// 00510149  8d54245c             lea edx, [esp + 0x5c]
// 0051014d  6880828200           push 0x828280
// 00510152  52                   push edx
// 00510153  ff156c238000         call dword ptr [0x80236c]
// 00510159  83c408               add esp, 8
// 0051015c  84c0                 test al, al
// 0051015e  7439                 je 0x510199
// 00510160  8d4c2478             lea ecx, [esp + 0x78]
// 00510164  e8677d0000           call 0x517ed0
// 00510169  dd05d8358100         fld qword ptr [0x8135d8]
// 0051016f  dc742418             fdiv qword ptr [esp + 0x18]
// 00510173  d97c2412             fnstcw word ptr [esp + 0x12]
// 00510177  dec9                 fmulp st(1)
// 00510179  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 0051017e  0d000c0000           or eax, 0xc00
// 00510183  89442414             mov dword ptr [esp + 0x14], eax
// 00510187  d96c2414             fldcw word ptr [esp + 0x14]
// 0051018b  db5c2414             fistp dword ptr [esp + 0x14]
// 0051018f  8a442414             mov al, byte ptr [esp + 0x14]
// 00510193  d96c2412             fldcw word ptr [esp + 0x12]
// 00510197  eb49                 jmp 0x5101e2
// 00510199  8d44245c             lea eax, [esp + 0x5c]
// 0051019d  6878828200           push 0x828278
// 005101a2  50                   push eax
// 005101a3  ff156c238000         call dword ptr [0x80236c]
// 005101a9  83c408               add esp, 8
// 005101ac  84c0                 test al, al
// 005101ae  743d                 je 0x5101ed
// 005101b0  8d4c2478             lea ecx, [esp + 0x78]
// 005101b4  e8177d0000           call 0x517ed0
// 005101b9  dc4c2418             fmul qword ptr [esp + 0x18]
// 005101bd  d97c2412             fnstcw word ptr [esp + 0x12]
// 005101c1  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 005101c6  0d000c0000           or eax, 0xc00
// 005101cb  89442414             mov dword ptr [esp + 0x14], eax
// 005101cf  d96c2414             fldcw word ptr [esp + 0x14]
// 005101d3  db5c2414             fistp dword ptr [esp + 0x14]
// 005101d7  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 005101db  0fb6c1               movzx eax, cl
// 005101de  d96c2412             fldcw word ptr [esp + 0x12]
// 005101e2  88443702             mov byte ptr [edi + esi + 2], al
// 005101e6  88443701             mov byte ptr [edi + esi + 1], al
// 005101ea  880437               mov byte ptr [edi + esi], al
// 005101ed  8b5308               mov edx, dword ptr [ebx + 8]
// 005101f0  0faf530c             imul edx, dword ptr [ebx + 0xc]
// 005101f4  8b442424             mov eax, dword ptr [esp + 0x24]
// 005101f8  40                   inc eax
// 005101f9  83c703               add edi, 3
// 005101fc  89442424             mov dword ptr [esp + 0x24], eax
// 00510200  3bc2                 cmp eax, edx
// 00510202  0f8278feffff         jb 0x510080
// 00510208  8d4c245c             lea ecx, [esp + 0x5c]
// 0051020c  c68424a401000002     mov byte ptr [esp + 0x1a4], 2
// 00510214  ff1568248000         call dword ptr [0x802468]
// 0051021a  8d4c2478             lea ecx, [esp + 0x78]
// 0051021e  c68424a401000001     mov byte ptr [esp + 0x1a4], 1
// 00510226  e8d578f7ff           call 0x487b00
// 0051022b  8d4c2438             lea ecx, [esp + 0x38]
// 0051022f  c68424a401000000     mov byte ptr [esp + 0x1a4], 0
// 00510237  ff1568248000         call dword ptr [0x802468]
// 0051023d  8d8c24e4000000       lea ecx, [esp + 0xe4]
// 00510244  c78424a4010000ffffffff mov dword ptr [esp + 0x1a4], 0xffffffff
// 0051024f  ff1568248000         call dword ptr [0x802468]
// 00510255  8b8c249c010000       mov ecx, dword ptr [esp + 0x19c]
// 0051025c  5f                   pop edi
// 0051025d  5e                   pop esi
// 0051025e  64890d00000000       mov dword ptr fs:[0], ecx
// 00510265  5b                   pop ebx
// 00510266  8be5                 mov esp, ebp
// 00510268  5d                   pop ebp
// 00510269  c20400               ret 4
// 0051026c  ddd8                 fstp st(0)
// 0051026e  680c828200           push 0x82820c
// 00510273  8d8c2404010000       lea ecx, [esp + 0x104]
// 0051027a  ddd8                 fstp st(0)
// 0051027c  ff1558248000         call dword ptr [0x802458]
// 00510282  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00510285  8d84241c010000       lea eax, [esp + 0x11c]
// 0051028c  50                   push eax
// 0051028d  c68424a801000004     mov byte ptr [esp + 0x1a8], 4
// 00510295  e896a7ffff           call 0x50aa30
// 0051029a  50                   push eax
// 0051029b  8d8c2404010000       lea ecx, [esp + 0x104]
// 005102a2  51                   push ecx
// 005102a3  8d8c2440010000       lea ecx, [esp + 0x140]
// 005102aa  c68424ac01000005     mov byte ptr [esp + 0x1ac], 5
// 005102b2  e8f925f6ff           call 0x4728b0
// 005102b7  6878c48d00           push 0x8dc478
// 005102bc  8d94243c010000       lea edx, [esp + 0x13c]
// 005102c3  52                   push edx
// 005102c4  e8c3121900           call 0x6a158c
// library g3d-6.09-rbx2008/G3Dcpp\GImage_ppm.cpp (function ?decodePPMASCII@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_ppm.cpp
