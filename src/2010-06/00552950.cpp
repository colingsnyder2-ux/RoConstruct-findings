// roc 2010-06 00552950  unit: G3D::Log  size: 422 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00552950
//
// 00552950  64a100000000         mov eax, dword ptr fs:[0]
// 00552956  6aff                 push -1
// 00552958  68095b9800           push 0x985b09
// 0055295d  50                   push eax
// 0055295e  64892500000000       mov dword ptr fs:[0], esp
// 00552965  83ec24               sub esp, 0x24
// 00552968  56                   push esi
// 00552969  8bf1                 mov esi, ecx
// 0055296b  8b4644               mov eax, dword ptr [esi + 0x44]
// 0055296e  8d4801               lea ecx, [eax + 1]
// 00552971  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00552974  7e0f                 jle 0x552985
// 00552976  8b5634               mov edx, dword ptr [esi + 0x34]
// 00552979  6a01                 push 1
// 0055297b  03d0                 add edx, eax
// 0055297d  52                   push edx
// 0055297e  8bce                 mov ecx, esi
// 00552980  e8cb5e0000           call 0x558850
// 00552985  8b4644               mov eax, dword ptr [esi + 0x44]
// 00552988  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0055298b  8a0c08               mov cl, byte ptr [eax + ecx]
// 0055298e  0fbed1               movsx edx, cl
// 00552991  57                   push edi
// 00552992  8b3d40a79e00         mov edi, dword ptr [0x9ea740]
// 00552998  40                   inc eax
// 00552999  52                   push edx
// 0055299a  884c240c             mov byte ptr [esp + 0xc], cl
// 0055299e  894644               mov dword ptr [esi + 0x44], eax
// 005529a1  ffd7                 call edi
// 005529a3  83c404               add esp, 4
// 005529a6  85c0                 test eax, eax
// 005529a8  743e                 je 0x5529e8
// 005529aa  8d9b00000000         lea ebx, [ebx]
// 005529b0  8b4644               mov eax, dword ptr [esi + 0x44]
// 005529b3  8d4801               lea ecx, [eax + 1]
// 005529b6  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005529b9  7e0f                 jle 0x5529ca
// 005529bb  8b5634               mov edx, dword ptr [esi + 0x34]
// 005529be  6a01                 push 1
// 005529c0  03d0                 add edx, eax
// 005529c2  52                   push edx
// 005529c3  8bce                 mov ecx, esi
// 005529c5  e8865e0000           call 0x558850
// 005529ca  8b4644               mov eax, dword ptr [esi + 0x44]
// 005529cd  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005529d0  8a0c08               mov cl, byte ptr [eax + ecx]
// 005529d3  0fbed1               movsx edx, cl
// 005529d6  40                   inc eax
// 005529d7  52                   push edx
// 005529d8  884c240c             mov byte ptr [esp + 0xc], cl
// 005529dc  894644               mov dword ptr [esi + 0x44], eax
// 005529df  ffd7                 call edi
// 005529e1  83c404               add esp, 4
// 005529e4  85c0                 test eax, eax
// 005529e6  75c8                 jne 0x5529b0
// 005529e8  8d4c2410             lea ecx, [esp + 0x10]
// 005529ec  ff1504a49e00         call dword ptr [0x9ea404]
// 005529f2  8b442408             mov eax, dword ptr [esp + 8]
// 005529f6  50                   push eax
// 005529f7  8d4c2414             lea ecx, [esp + 0x14]
// 005529fb  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00552a03  ff15eca69e00         call dword ptr [0x9ea6ec]
// 00552a09  8b4644               mov eax, dword ptr [esi + 0x44]
// 00552a0c  8d4801               lea ecx, [eax + 1]
// 00552a0f  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00552a12  7e0f                 jle 0x552a23
// 00552a14  8b5634               mov edx, dword ptr [esi + 0x34]
// 00552a17  6a01                 push 1
// 00552a19  03d0                 add edx, eax
// 00552a1b  52                   push edx
// 00552a1c  8bce                 mov ecx, esi
// 00552a1e  e82d5e0000           call 0x558850
// 00552a23  8b4644               mov eax, dword ptr [esi + 0x44]
// 00552a26  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00552a29  8a0c08               mov cl, byte ptr [eax + ecx]
// 00552a2c  0fbed1               movsx edx, cl
// 00552a2f  40                   inc eax
// 00552a30  52                   push edx
// 00552a31  884c240c             mov byte ptr [esp + 0xc], cl
// 00552a35  894644               mov dword ptr [esi + 0x44], eax
// 00552a38  ffd7                 call edi
// 00552a3a  83c404               add esp, 4
// 00552a3d  85c0                 test eax, eax
// 00552a3f  7547                 jne 0x552a88
// 00552a41  8b442408             mov eax, dword ptr [esp + 8]
// 00552a45  50                   push eax
// 00552a46  8d4c2414             lea ecx, [esp + 0x14]
// 00552a4a  ff15eca69e00         call dword ptr [0x9ea6ec]
// 00552a50  8b4644               mov eax, dword ptr [esi + 0x44]
// 00552a53  8d4801               lea ecx, [eax + 1]
// 00552a56  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00552a59  7e0f                 jle 0x552a6a
// 00552a5b  8b5634               mov edx, dword ptr [esi + 0x34]
// 00552a5e  6a01                 push 1
// 00552a60  03d0                 add edx, eax
// 00552a62  52                   push edx
// 00552a63  8bce                 mov ecx, esi
// 00552a65  e8e65d0000           call 0x558850
// 00552a6a  8b4644               mov eax, dword ptr [esi + 0x44]
// 00552a6d  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00552a70  8a0c08               mov cl, byte ptr [eax + ecx]
// 00552a73  0fbed1               movsx edx, cl
// 00552a76  40                   inc eax
// 00552a77  52                   push edx
// 00552a78  884c240c             mov byte ptr [esp + 0xc], cl
// 00552a7c  894644               mov dword ptr [esi + 0x44], eax
// 00552a7f  ffd7                 call edi
// 00552a81  83c404               add esp, 4
// 00552a84  85c0                 test eax, eax
// 00552a86  74b9                 je 0x552a41
// 00552a88  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00552a8b  8b4644               mov eax, dword ptr [esi + 0x44]
// 00552a8e  8d4401ff             lea eax, [ecx + eax - 1]
// 00552a92  2bc1                 sub eax, ecx
// 00552a94  894644               mov dword ptr [esi + 0x44], eax
// 00552a97  5f                   pop edi
// 00552a98  7805                 js 0x552a9f
// 00552a9a  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00552a9d  7e0c                 jle 0x552aab
// 00552a9f  03c1                 add eax, ecx
// 00552aa1  6a00                 push 0
// 00552aa3  50                   push eax
// 00552aa4  8bce                 mov ecx, esi
// 00552aa6  e8a55d0000           call 0x558850
// 00552aab  837c242410           cmp dword ptr [esp + 0x24], 0x10
// 00552ab0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00552ab4  7304                 jae 0x552aba
// 00552ab6  8d442410             lea eax, [esp + 0x10]
// 00552aba  8d4c2408             lea ecx, [esp + 8]
// 00552abe  51                   push ecx
// 00552abf  687476a000           push 0xa07674
// 00552ac4  50                   push eax
// 00552ac5  ff1518a79e00         call dword ptr [0x9ea718]
// 00552acb  8b742414             mov esi, dword ptr [esp + 0x14]
// 00552acf  83c40c               add esp, 0xc
// 00552ad2  8d4c240c             lea ecx, [esp + 0xc]
// 00552ad6  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00552ade  ff1500a49e00         call dword ptr [0x9ea400]
// 00552ae4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00552ae8  8bc6                 mov eax, esi
// 00552aea  5e                   pop esi
// 00552aeb  64890d00000000       mov dword ptr fs:[0], ecx
// 00552af2  83c430               add esp, 0x30
// 00552af5  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?scanUInt@G3D@@YAHAAVBinaryInput@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
