// roc 2007-03 004f8e80  unit: seg_004f0000  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f8e80
//
// 004f8e80  6aff                 push -1
// 004f8e82  68c9047500           push 0x7504c9
// 004f8e87  64a100000000         mov eax, dword ptr fs:[0]
// 004f8e8d  50                   push eax
// 004f8e8e  83ec28               sub esp, 0x28
// 004f8e91  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f8e96  33c4                 xor eax, esp
// 004f8e98  89442424             mov dword ptr [esp + 0x24], eax
// 004f8e9c  56                   push esi
// 004f8e9d  57                   push edi
// 004f8e9e  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f8ea3  33c4                 xor eax, esp
// 004f8ea5  50                   push eax
// 004f8ea6  8d442434             lea eax, [esp + 0x34]
// 004f8eaa  64a300000000         mov dword ptr fs:[0], eax
// 004f8eb0  8bf1                 mov esi, ecx
// 004f8eb2  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f8eb5  8d4801               lea ecx, [eax + 1]
// 004f8eb8  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 004f8ebb  7e0f                 jle 0x4f8ecc
// 004f8ebd  8b5634               mov edx, dword ptr [esi + 0x34]
// 004f8ec0  6a01                 push 1
// 004f8ec2  03d0                 add edx, eax
// 004f8ec4  52                   push edx
// 004f8ec5  8bce                 mov ecx, esi
// 004f8ec7  e8a4840000           call 0x501370
// 004f8ecc  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f8ecf  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004f8ed2  8a0c08               mov cl, byte ptr [eax + ecx]
// 004f8ed5  8b3d9ce97700         mov edi, dword ptr [0x77e99c]
// 004f8edb  0fbed1               movsx edx, cl
// 004f8ede  83c001               add eax, 1
// 004f8ee1  52                   push edx
// 004f8ee2  884c2410             mov byte ptr [esp + 0x10], cl
// 004f8ee6  894644               mov dword ptr [esi + 0x44], eax
// 004f8ee9  ffd7                 call edi
// 004f8eeb  83c404               add esp, 4
// 004f8eee  85c0                 test eax, eax
// 004f8ef0  743a                 je 0x4f8f2c
// 004f8ef2  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f8ef5  8d4801               lea ecx, [eax + 1]
// 004f8ef8  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 004f8efb  7e0f                 jle 0x4f8f0c
// 004f8efd  8b5634               mov edx, dword ptr [esi + 0x34]
// 004f8f00  6a01                 push 1
// 004f8f02  03d0                 add edx, eax
// 004f8f04  52                   push edx
// 004f8f05  8bce                 mov ecx, esi
// 004f8f07  e864840000           call 0x501370
// 004f8f0c  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f8f0f  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004f8f12  8a0c08               mov cl, byte ptr [eax + ecx]
// 004f8f15  0fbed1               movsx edx, cl
// 004f8f18  83c001               add eax, 1
// 004f8f1b  52                   push edx
// 004f8f1c  884c2410             mov byte ptr [esp + 0x10], cl
// 004f8f20  894644               mov dword ptr [esi + 0x44], eax
// 004f8f23  ffd7                 call edi
// 004f8f25  83c404               add esp, 4
// 004f8f28  85c0                 test eax, eax
// 004f8f2a  75c6                 jne 0x4f8ef2
// 004f8f2c  8d4c2414             lea ecx, [esp + 0x14]
// 004f8f30  ff1584e77700         call dword ptr [0x77e784]
// 004f8f36  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f8f3a  50                   push eax
// 004f8f3b  8d4c2418             lea ecx, [esp + 0x18]
// 004f8f3f  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004f8f47  ff1520e67700         call dword ptr [0x77e620]
// 004f8f4d  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f8f50  8d4801               lea ecx, [eax + 1]
// 004f8f53  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 004f8f56  7e0f                 jle 0x4f8f67
// 004f8f58  8b5634               mov edx, dword ptr [esi + 0x34]
// 004f8f5b  6a01                 push 1
// 004f8f5d  03d0                 add edx, eax
// 004f8f5f  52                   push edx
// 004f8f60  8bce                 mov ecx, esi
// 004f8f62  e809840000           call 0x501370
// 004f8f67  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f8f6a  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004f8f6d  8a0c08               mov cl, byte ptr [eax + ecx]
// 004f8f70  0fbed1               movsx edx, cl
// 004f8f73  83c001               add eax, 1
// 004f8f76  52                   push edx
// 004f8f77  884c2410             mov byte ptr [esp + 0x10], cl
// 004f8f7b  894644               mov dword ptr [esi + 0x44], eax
// 004f8f7e  ffd7                 call edi
// 004f8f80  83c404               add esp, 4
// 004f8f83  85c0                 test eax, eax
// 004f8f85  7549                 jne 0x4f8fd0
// 004f8f87  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f8f8b  50                   push eax
// 004f8f8c  8d4c2418             lea ecx, [esp + 0x18]
// 004f8f90  ff1520e67700         call dword ptr [0x77e620]
// 004f8f96  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f8f99  8d4801               lea ecx, [eax + 1]
// 004f8f9c  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 004f8f9f  7e0f                 jle 0x4f8fb0
// 004f8fa1  8b5634               mov edx, dword ptr [esi + 0x34]
// 004f8fa4  6a01                 push 1
// 004f8fa6  03d0                 add edx, eax
// 004f8fa8  52                   push edx
// 004f8fa9  8bce                 mov ecx, esi
// 004f8fab  e8c0830000           call 0x501370
// 004f8fb0  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f8fb3  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004f8fb6  8a0c08               mov cl, byte ptr [eax + ecx]
// 004f8fb9  0fbed1               movsx edx, cl
// 004f8fbc  83c001               add eax, 1
// 004f8fbf  52                   push edx
// 004f8fc0  884c2410             mov byte ptr [esp + 0x10], cl
// 004f8fc4  894644               mov dword ptr [esi + 0x44], eax
// 004f8fc7  ffd7                 call edi
// 004f8fc9  83c404               add esp, 4
// 004f8fcc  85c0                 test eax, eax
// 004f8fce  74b7                 je 0x4f8f87
// 004f8fd0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f8fd3  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f8fd6  8d4401ff             lea eax, [ecx + eax - 1]
// 004f8fda  2bc1                 sub eax, ecx
// 004f8fdc  894644               mov dword ptr [esi + 0x44], eax
// 004f8fdf  7805                 js 0x4f8fe6
// 004f8fe1  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 004f8fe4  7e0c                 jle 0x4f8ff2
// 004f8fe6  03c1                 add eax, ecx
// 004f8fe8  6a00                 push 0
// 004f8fea  50                   push eax
// 004f8feb  8bce                 mov ecx, esi
// 004f8fed  e87e830000           call 0x501370
// 004f8ff2  837c242c10           cmp dword ptr [esp + 0x2c], 0x10
// 004f8ff7  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f8ffb  7304                 jae 0x4f9001
// 004f8ffd  8d442418             lea eax, [esp + 0x18]
// 004f9001  8d4c2410             lea ecx, [esp + 0x10]
// 004f9005  51                   push ecx
// 004f9006  6808c47800           push 0x78c408
// 004f900b  50                   push eax
// 004f900c  ff15dce87700         call dword ptr [0x77e8dc]
// 004f9012  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004f9016  83c40c               add esp, 0xc
// 004f9019  8d4c2414             lea ecx, [esp + 0x14]
// 004f901d  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 004f9025  ff158ce77700         call dword ptr [0x77e78c]
// 004f902b  8bc6                 mov eax, esi
// 004f902d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004f9031  64890d00000000       mov dword ptr fs:[0], ecx
// 004f9038  59                   pop ecx
// 004f9039  5f                   pop edi
// 004f903a  5e                   pop esi
// 004f903b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004f903f  33cc                 xor ecx, esp
// 004f9041  e8605e1200           call 0x61eea6
// 004f9046  83c434               add esp, 0x34
// 004f9049  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?scanUInt@G3D@@YAHAAVBinaryInput@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
