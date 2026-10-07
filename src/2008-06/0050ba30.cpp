// roc 2008-06 0050ba30  unit: G3D::Log  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050ba30
//
// 0050ba30  6aff                 push -1
// 0050ba32  6809e77c00           push 0x7ce709
// 0050ba37  64a100000000         mov eax, dword ptr fs:[0]
// 0050ba3d  50                   push eax
// 0050ba3e  64892500000000       mov dword ptr fs:[0], esp
// 0050ba45  83ec1c               sub esp, 0x1c
// 0050ba48  53                   push ebx
// 0050ba49  55                   push ebp
// 0050ba4a  56                   push esi
// 0050ba4b  57                   push edi
// 0050ba4c  8bf9                 mov edi, ecx
// 0050ba4e  8b470c               mov eax, dword ptr [edi + 0xc]
// 0050ba51  8b4f08               mov ecx, dword ptr [edi + 8]
// 0050ba54  50                   push eax
// 0050ba55  51                   push ecx
// 0050ba56  8d542418             lea edx, [esp + 0x18]
// 0050ba5a  68187f8200           push 0x827f18
// 0050ba5f  52                   push edx
// 0050ba60  e8abe0ffff           call 0x509b10
// 0050ba65  83c410               add esp, 0x10
// 0050ba68  837c242810           cmp dword ptr [esp + 0x28], 0x10
// 0050ba6d  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0050ba71  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0050ba75  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0050ba7d  7304                 jae 0x50ba83
// 0050ba7f  8d6c2414             lea ebp, [esp + 0x14]
// 0050ba83  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0050ba87  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0050ba8a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050ba8d  03c3                 add eax, ebx
// 0050ba8f  3bc8                 cmp ecx, eax
// 0050ba91  7c02                 jl 0x50ba95
// 0050ba93  8bc1                 mov eax, ecx
// 0050ba95  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0050ba98  894634               mov dword ptr [esi + 0x34], eax
// 0050ba9b  7e09                 jle 0x50baa6
// 0050ba9d  51                   push ecx
// 0050ba9e  53                   push ebx
// 0050ba9f  8bce                 mov ecx, esi
// 0050baa1  e88add0000           call 0x519830
// 0050baa6  8b4630               mov eax, dword ptr [esi + 0x30]
// 0050baa9  03463c               add eax, dword ptr [esi + 0x3c]
// 0050baac  53                   push ebx
// 0050baad  55                   push ebp
// 0050baae  50                   push eax
// 0050baaf  e82ccfffff           call 0x5089e0
// 0050bab4  015e3c               add dword ptr [esi + 0x3c], ebx
// 0050bab7  8b4708               mov eax, dword ptr [edi + 8]
// 0050baba  0faf470c             imul eax, dword ptr [edi + 0xc]
// 0050babe  8b5f04               mov ebx, dword ptr [edi + 4]
// 0050bac1  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050bac4  8d3c40               lea edi, [eax + eax*2]
// 0050bac7  8b4634               mov eax, dword ptr [esi + 0x34]
// 0050baca  03cf                 add ecx, edi
// 0050bacc  83c40c               add esp, 0xc
// 0050bacf  3bc1                 cmp eax, ecx
// 0050bad1  7c02                 jl 0x50bad5
// 0050bad3  8bc8                 mov ecx, eax
// 0050bad5  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0050bad8  894e34               mov dword ptr [esi + 0x34], ecx
// 0050badb  7e09                 jle 0x50bae6
// 0050badd  50                   push eax
// 0050bade  57                   push edi
// 0050badf  8bce                 mov ecx, esi
// 0050bae1  e84add0000           call 0x519830
// 0050bae6  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0050bae9  034e3c               add ecx, dword ptr [esi + 0x3c]
// 0050baec  57                   push edi
// 0050baed  53                   push ebx
// 0050baee  51                   push ecx
// 0050baef  e8ecceffff           call 0x5089e0
// 0050baf4  017e3c               add dword ptr [esi + 0x3c], edi
// 0050baf7  83c40c               add esp, 0xc
// 0050bafa  8d4c2410             lea ecx, [esp + 0x10]
// 0050bafe  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0050bb06  ff1568248000         call dword ptr [0x802468]
// 0050bb0c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0050bb10  5f                   pop edi
// 0050bb11  5e                   pop esi
// 0050bb12  5d                   pop ebp
// 0050bb13  5b                   pop ebx
// 0050bb14  64890d00000000       mov dword ptr fs:[0], ecx
// 0050bb1b  83c428               add esp, 0x28
// 0050bb1e  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?encodePPM@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
