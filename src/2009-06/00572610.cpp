// roc 2009-06 00572610  unit: seg_00570000  size: 985 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00572610
//
// 00572610  55                   push ebp
// 00572611  8bec                 mov ebp, esp
// 00572613  83e4f8               and esp, 0xfffffff8
// 00572616  6aff                 push -1
// 00572618  68b6048600           push 0x8604b6
// 0057261d  64a100000000         mov eax, dword ptr fs:[0]
// 00572623  50                   push eax
// 00572624  64892500000000       mov dword ptr fs:[0], esp
// 0057262b  81ec90010000         sub esp, 0x190
// 00572631  53                   push ebx
// 00572632  56                   push esi
// 00572633  57                   push edi
// 00572634  8d8424e4000000       lea eax, [esp + 0xe4]
// 0057263b  8bd9                 mov ebx, ecx
// 0057263d  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00572640  50                   push eax
// 00572641  e84a270000           call 0x574d90
// 00572646  33f6                 xor esi, esi
// 00572648  8d4c2438             lea ecx, [esp + 0x38]
// 0057264c  89b424a4010000       mov dword ptr [esp + 0x1a4], esi
// 00572653  c644243001           mov byte ptr [esp + 0x30], 1
// 00572658  c644243101           mov byte ptr [esp + 0x31], 1
// 0057265d  c644243201           mov byte ptr [esp + 0x32], 1
// 00572662  c644243300           mov byte ptr [esp + 0x33], 0
// 00572667  c644243400           mov byte ptr [esp + 0x34], 0
// 0057266c  c644243501           mov byte ptr [esp + 0x35], 1
// 00572671  c644243601           mov byte ptr [esp + 0x36], 1
// 00572676  ff15c0e48900         call dword ptr [0x89e4c0]
// 0057267c  89742454             mov dword ptr [esp + 0x54], esi
// 00572680  c644245800           mov byte ptr [esp + 0x58], 0
// 00572685  8d4c2430             lea ecx, [esp + 0x30]
// 00572689  51                   push ecx
// 0057268a  8d9424e8000000       lea edx, [esp + 0xe8]
// 00572691  52                   push edx
// 00572692  56                   push esi
// 00572693  8d8c2484000000       lea ecx, [esp + 0x84]
// 0057269a  c68424b001000001     mov byte ptr [esp + 0x1b0], 1
// 005726a2  c644243d00           mov byte ptr [esp + 0x3d], 0
// 005726a7  c644243f23           mov byte ptr [esp + 0x3f], 0x23
// 005726ac  c644244101           mov byte ptr [esp + 0x41], 1
// 005726b1  c644244200           mov byte ptr [esp + 0x42], 0
// 005726b6  e8c5940000           call 0x57bb80
// 005726bb  8d44245c             lea eax, [esp + 0x5c]
// 005726bf  50                   push eax
// 005726c0  8d4c247c             lea ecx, [esp + 0x7c]
// 005726c4  c68424a801000002     mov byte ptr [esp + 0x1a8], 2
// 005726cc  e86f990000           call 0x57c040
// 005726d1  8d4c2478             lea ecx, [esp + 0x78]
// 005726d5  c68424a401000003     mov byte ptr [esp + 0x1a4], 3
// 005726dd  e81e970000           call 0x57be00
// 005726e2  e8d9771a00           call 0x719ec0
// 005726e7  8d4c2478             lea ecx, [esp + 0x78]
// 005726eb  8bf8                 mov edi, eax
// 005726ed  e80e970000           call 0x57be00
// 005726f2  e8c9771a00           call 0x719ec0
// 005726f7  8d4c245c             lea ecx, [esp + 0x5c]
// 005726fb  68d8b68c00           push 0x8cb6d8
// 00572700  51                   push ecx
// 00572701  8bf0                 mov esi, eax
// 00572703  ff152ce48900         call dword ptr [0x89e42c]
// 00572709  dd05703b8b00         fld qword ptr [0x8b3b70]
// 0057270f  83c408               add esp, 8
// 00572712  84c0                 test al, al
// 00572714  7445                 je 0x57275b
// 00572716  8d4c2478             lea ecx, [esp + 0x78]
// 0057271a  ddd8                 fstp st(0)
// 0057271c  e8df960000           call 0x57be00
// 00572721  dd542418             fst qword ptr [esp + 0x18]
// 00572725  dd05703b8b00         fld qword ptr [0x8b3b70]
// 0057272b  d9c9                 fxch st(1)
// 0057272d  85ff                 test edi, edi
// 0057272f  0f8c57020000         jl 0x57298c
// 00572735  85f6                 test esi, esi
// 00572737  0f8c4f020000         jl 0x57298c
// 0057273d  d9ee                 fldz 
// 0057273f  d8d9                 fcomp st(1)
// 00572741  dfe0                 fnstsw ax
// 00572743  f6c401               test ah, 1
// 00572746  0f8440020000         je 0x57298c
// 0057274c  d8d9                 fcomp st(1)
// 0057274e  dfe0                 fnstsw ax
// 00572750  f6c441               test ah, 0x41
// 00572753  7a0e                 jp 0x572763
// 00572755  dd5c2418             fstp qword ptr [esp + 0x18]
// 00572759  eb0a                 jmp 0x572765
// 0057275b  d9c0                 fld st(0)
// 0057275d  dd542418             fst qword ptr [esp + 0x18]
// 00572761  ebca                 jmp 0x57272d
// 00572763  ddd8                 fstp st(0)
// 00572765  89730c               mov dword ptr [ebx + 0xc], esi
// 00572768  0faff7               imul esi, edi
// 0057276b  8d1476               lea edx, [esi + esi*2]
// 0057276e  52                   push edx
// 0057276f  897b08               mov dword ptr [ebx + 8], edi
// 00572772  c7431003000000       mov dword ptr [ebx + 0x10], 3
// 00572779  e8c289ffff           call 0x56b140
// 0057277e  894304               mov dword ptr [ebx + 4], eax
// 00572781  8b4308               mov eax, dword ptr [ebx + 8]
// 00572784  0faf430c             imul eax, dword ptr [ebx + 0xc]
// 00572788  33ff                 xor edi, edi
// 0057278a  83c404               add esp, 4
// 0057278d  897c2424             mov dword ptr [esp + 0x24], edi
// 00572791  85c0                 test eax, eax
// 00572793  0f868f010000         jbe 0x572928
// 00572799  8da42400000000       lea esp, [esp]
// 005727a0  8b7304               mov esi, dword ptr [ebx + 4]
// 005727a3  8d4c245c             lea ecx, [esp + 0x5c]
// 005727a7  68d4b68c00           push 0x8cb6d4
// 005727ac  51                   push ecx
// 005727ad  ff1574e48900         call dword ptr [0x89e474]
// 005727b3  83c408               add esp, 8
// 005727b6  84c0                 test al, al
// 005727b8  0f84ab000000         je 0x572869
// 005727be  dd05703b8b00         fld qword ptr [0x8b3b70]
// 005727c4  8d4c2478             lea ecx, [esp + 0x78]
// 005727c8  dc742418             fdiv qword ptr [esp + 0x18]
// 005727cc  dd5c2428             fstp qword ptr [esp + 0x28]
// 005727d0  e82b960000           call 0x57be00
// 005727d5  dc4c2428             fmul qword ptr [esp + 0x28]
// 005727d9  d97c2412             fnstcw word ptr [esp + 0x12]
// 005727dd  8d4c2478             lea ecx, [esp + 0x78]
// 005727e1  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 005727e6  0d000c0000           or eax, 0xc00
// 005727eb  89442414             mov dword ptr [esp + 0x14], eax
// 005727ef  d96c2414             fldcw word ptr [esp + 0x14]
// 005727f3  db5c2414             fistp dword ptr [esp + 0x14]
// 005727f7  8a542414             mov dl, byte ptr [esp + 0x14]
// 005727fb  881437               mov byte ptr [edi + esi], dl
// 005727fe  d96c2412             fldcw word ptr [esp + 0x12]
// 00572802  e8f9950000           call 0x57be00
// 00572807  dc4c2428             fmul qword ptr [esp + 0x28]
// 0057280b  d97c2412             fnstcw word ptr [esp + 0x12]
// 0057280f  8d4c2478             lea ecx, [esp + 0x78]
// 00572813  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 00572818  0d000c0000           or eax, 0xc00
// 0057281d  89442414             mov dword ptr [esp + 0x14], eax
// 00572821  d96c2414             fldcw word ptr [esp + 0x14]
// 00572825  db5c2414             fistp dword ptr [esp + 0x14]
// 00572829  8a442414             mov al, byte ptr [esp + 0x14]
// 0057282d  88443701             mov byte ptr [edi + esi + 1], al
// 00572831  d96c2412             fldcw word ptr [esp + 0x12]
// 00572835  e8c6950000           call 0x57be00
// 0057283a  dc4c2428             fmul qword ptr [esp + 0x28]
// 0057283e  d97c2412             fnstcw word ptr [esp + 0x12]
// 00572842  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 00572847  0d000c0000           or eax, 0xc00
// 0057284c  89442414             mov dword ptr [esp + 0x14], eax
// 00572850  d96c2414             fldcw word ptr [esp + 0x14]
// 00572854  db5c2414             fistp dword ptr [esp + 0x14]
// 00572858  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0057285c  884c3702             mov byte ptr [edi + esi + 2], cl
// 00572860  d96c2412             fldcw word ptr [esp + 0x12]
// 00572864  e9a4000000           jmp 0x57290d
// 00572869  8d54245c             lea edx, [esp + 0x5c]
// 0057286d  68d8b68c00           push 0x8cb6d8
// 00572872  52                   push edx
// 00572873  ff1574e48900         call dword ptr [0x89e474]
// 00572879  83c408               add esp, 8
// 0057287c  84c0                 test al, al
// 0057287e  7439                 je 0x5728b9
// 00572880  8d4c2478             lea ecx, [esp + 0x78]
// 00572884  e877950000           call 0x57be00
// 00572889  dd05703b8b00         fld qword ptr [0x8b3b70]
// 0057288f  dc742418             fdiv qword ptr [esp + 0x18]
// 00572893  d97c2412             fnstcw word ptr [esp + 0x12]
// 00572897  dec9                 fmulp st(1)
// 00572899  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 0057289e  0d000c0000           or eax, 0xc00
// 005728a3  89442414             mov dword ptr [esp + 0x14], eax
// 005728a7  d96c2414             fldcw word ptr [esp + 0x14]
// 005728ab  db5c2414             fistp dword ptr [esp + 0x14]
// 005728af  8a442414             mov al, byte ptr [esp + 0x14]
// 005728b3  d96c2412             fldcw word ptr [esp + 0x12]
// 005728b7  eb49                 jmp 0x572902
// 005728b9  8d44245c             lea eax, [esp + 0x5c]
// 005728bd  68d0b68c00           push 0x8cb6d0
// 005728c2  50                   push eax
// 005728c3  ff1574e48900         call dword ptr [0x89e474]
// 005728c9  83c408               add esp, 8
// 005728cc  84c0                 test al, al
// 005728ce  743d                 je 0x57290d
// 005728d0  8d4c2478             lea ecx, [esp + 0x78]
// 005728d4  e827950000           call 0x57be00
// 005728d9  dc4c2418             fmul qword ptr [esp + 0x18]
// 005728dd  d97c2412             fnstcw word ptr [esp + 0x12]
// 005728e1  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 005728e6  0d000c0000           or eax, 0xc00
// 005728eb  89442414             mov dword ptr [esp + 0x14], eax
// 005728ef  d96c2414             fldcw word ptr [esp + 0x14]
// 005728f3  db5c2414             fistp dword ptr [esp + 0x14]
// 005728f7  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 005728fb  0fb6c1               movzx eax, cl
// 005728fe  d96c2412             fldcw word ptr [esp + 0x12]
// 00572902  88443702             mov byte ptr [edi + esi + 2], al
// 00572906  88443701             mov byte ptr [edi + esi + 1], al
// 0057290a  880437               mov byte ptr [edi + esi], al
// 0057290d  8b5308               mov edx, dword ptr [ebx + 8]
// 00572910  0faf530c             imul edx, dword ptr [ebx + 0xc]
// 00572914  8b442424             mov eax, dword ptr [esp + 0x24]
// 00572918  40                   inc eax
// 00572919  83c703               add edi, 3
// 0057291c  89442424             mov dword ptr [esp + 0x24], eax
// 00572920  3bc2                 cmp eax, edx
// 00572922  0f8278feffff         jb 0x5727a0
// 00572928  8d4c245c             lea ecx, [esp + 0x5c]
// 0057292c  c68424a401000002     mov byte ptr [esp + 0x1a4], 2
// 00572934  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057293a  8d4c2478             lea ecx, [esp + 0x78]
// 0057293e  c68424a401000001     mov byte ptr [esp + 0x1a4], 1
// 00572946  e835f1f3ff           call 0x4b1a80
// 0057294b  8d4c2438             lea ecx, [esp + 0x38]
// 0057294f  c68424a401000000     mov byte ptr [esp + 0x1a4], 0
// 00572957  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057295d  8d8c24e4000000       lea ecx, [esp + 0xe4]
// 00572964  c78424a4010000ffffffff mov dword ptr [esp + 0x1a4], 0xffffffff
// 0057296f  ff15c4e48900         call dword ptr [0x89e4c4]
// 00572975  8b8c249c010000       mov ecx, dword ptr [esp + 0x19c]
// 0057297c  5f                   pop edi
// 0057297d  5e                   pop esi
// 0057297e  64890d00000000       mov dword ptr fs:[0], ecx
// 00572985  5b                   pop ebx
// 00572986  8be5                 mov esp, ebp
// 00572988  5d                   pop ebp
// 00572989  c20400               ret 4
// 0057298c  ddd8                 fstp st(0)
// 0057298e  6864b68c00           push 0x8cb664
// 00572993  8d8c2404010000       lea ecx, [esp + 0x104]
// 0057299a  ddd8                 fstp st(0)
// 0057299c  ff15b4e48900         call dword ptr [0x89e4b4]
// 005729a2  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005729a5  8d84241c010000       lea eax, [esp + 0x11c]
// 005729ac  50                   push eax
// 005729ad  c68424a801000004     mov byte ptr [esp + 0x1a8], 4
// 005729b5  e8f6a7ffff           call 0x56d1b0
// 005729ba  50                   push eax
// 005729bb  8d8c2404010000       lea ecx, [esp + 0x104]
// 005729c2  51                   push ecx
// 005729c3  8d8c2440010000       lea ecx, [esp + 0x140]
// 005729ca  c68424ac01000005     mov byte ptr [esp + 0x1ac], 5
// 005729d2  e8c975f2ff           call 0x499fa0
// 005729d7  68308a9800           push 0x988a30
// 005729dc  8d94243c010000       lea edx, [esp + 0x13c]
// 005729e3  52                   push edx
// 005729e4  e861701a00           call 0x719a4a
// library g3d-6.09-rbx2008/G3Dcpp\GImage_ppm.cpp (function ?decodePPMASCII@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_ppm.cpp
