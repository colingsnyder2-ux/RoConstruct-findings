// roc 2008-06 00484ea0  unit: G3D::Win32Window  size: 659 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00484ea0
//
// 00484ea0  55                   push ebp
// 00484ea1  8d6c249c             lea ebp, [esp - 0x64]
// 00484ea5  83ec64               sub esp, 0x64
// 00484ea8  6aff                 push -1
// 00484eaa  6801557c00           push 0x7c5501
// 00484eaf  64a100000000         mov eax, dword ptr fs:[0]
// 00484eb5  50                   push eax
// 00484eb6  64892500000000       mov dword ptr fs:[0], esp
// 00484ebd  81ec0c010000         sub esp, 0x10c
// 00484ec3  53                   push ebx
// 00484ec4  56                   push esi
// 00484ec5  8bf1                 mov esi, ecx
// 00484ec7  57                   push edi
// 00484ec8  8b7d6c               mov edi, dword ptr [ebp + 0x6c]
// 00484ecb  33c0                 xor eax, eax
// 00484ecd  8965f0               mov dword ptr [ebp - 0x10], esp
// 00484ed0  50                   push eax
// 00484ed1  8906                 mov dword ptr [esi], eax
// 00484ed3  8b0d38fa9600         mov ecx, dword ptr [0x96fa38]
// 00484ed9  bb01000000           mov ebx, 1
// 00484ede  53                   push ebx
// 00484edf  894e04               mov dword ptr [esi + 4], ecx
// 00484ee2  57                   push edi
// 00484ee3  8d4d00               lea ecx, [ebp]
// 00484ee6  897560               mov dword ptr [ebp + 0x60], esi
// 00484ee9  894608               mov dword ptr [esi + 8], eax
// 00484eec  89460c               mov dword ptr [esi + 0xc], eax
// 00484eef  894610               mov dword ptr [esi + 0x10], eax
// 00484ef2  8945fc               mov dword ptr [ebp - 4], eax
// 00484ef5  e8060b0900           call 0x515a00
// 00484efa  6a04                 push 4
// 00484efc  8d55d4               lea edx, [ebp - 0x2c]
// 00484eff  52                   push edx
// 00484f00  8d4d00               lea ecx, [ebp]
// 00484f03  885dfc               mov byte ptr [ebp - 4], bl
// 00484f06  e8450e0900           call 0x515d50
// 00484f0b  8d45d4               lea eax, [ebp - 0x2c]
// 00484f0e  684c0d8200           push 0x820d4c
// 00484f13  50                   push eax
// 00484f14  c645fc02             mov byte ptr [ebp - 4], 2
// 00484f18  ff15cc238000         call dword ptr [0x8023cc]
// 00484f1e  83c408               add esp, 8
// 00484f21  84c0                 test al, al
// 00484f23  7434                 je 0x484f59
// 00484f25  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 00484f29  7205                 jb 0x484f30
// 00484f2b  8b7f04               mov edi, dword ptr [edi + 4]
// 00484f2e  eb03                 jmp 0x484f33
// 00484f30  83c704               add edi, 4
// 00484f33  57                   push edi
// 00484f34  8d8d3cffffff         lea ecx, [ebp - 0xc4]
// 00484f3a  68240d8200           push 0x820d24
// 00484f3f  51                   push ecx
// 00484f40  e8cb4b0800           call 0x509b10
// 00484f45  83c40c               add esp, 0xc
// 00484f48  6830d48d00           push 0x8dd430
// 00484f4d  8d953cffffff         lea edx, [ebp - 0xc4]
// 00484f53  52                   push edx
// 00484f54  e833c62100           call 0x6a158c
// 00484f59  8d8558ffffff         lea eax, [ebp - 0xa8]
// 00484f5f  50                   push eax
// 00484f60  6a7c                 push 0x7c
// 00484f62  8d4d00               lea ecx, [ebp]
// 00484f65  e8a60d0900           call 0x515d10
// 00484f6a  8b4dc4               mov ecx, dword ptr [ebp - 0x3c]
// 00484f6d  8a45a4               mov al, byte ptr [ebp - 0x5c]
// 00484f70  81e100020000         and ecx, 0x200
// 00484f76  f7d9                 neg ecx
// 00484f78  1bc9                 sbb ecx, ecx
// 00484f7a  83e105               and ecx, 5
// 00484f7d  03cb                 add ecx, ebx
// 00484f7f  894e14               mov dword ptr [esi + 0x14], ecx
// 00484f82  a804                 test al, 4
// 00484f84  7469                 je 0x484fef
// 00484f86  8b45a8               mov eax, dword ptr [ebp - 0x58]
// 00484f89  3d44585431           cmp eax, 0x31545844
// 00484f8e  7455                 je 0x484fe5
// 00484f90  3d44585433           cmp eax, 0x33545844
// 00484f95  7443                 je 0x484fda
// 00484f97  3d44585435           cmp eax, 0x35545844
// 00484f9c  7434                 je 0x484fd2
// 00484f9e  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 00484fa2  7205                 jb 0x484fa9
// 00484fa4  8b7f04               mov edi, dword ptr [edi + 4]
// 00484fa7  eb03                 jmp 0x484fac
// 00484fa9  83c704               add edi, 4
// 00484fac  57                   push edi
// 00484fad  8d9520ffffff         lea edx, [ebp - 0xe0]
// 00484fb3  68ec0c8200           push 0x820cec
// 00484fb8  52                   push edx
// 00484fb9  e8524b0800           call 0x509b10
// 00484fbe  83c40c               add esp, 0xc
// 00484fc1  6830d48d00           push 0x8dd430
// 00484fc6  8d8520ffffff         lea eax, [ebp - 0xe0]
// 00484fcc  50                   push eax
// 00484fcd  e8bac52100           call 0x6a158c
// 00484fd2  8b0dbcfa9600         mov ecx, dword ptr [0x96fabc]
// 00484fd8  eb4d                 jmp 0x485027
// 00484fda  8b1560fa9600         mov edx, dword ptr [0x96fa60]
// 00484fe0  895604               mov dword ptr [esi + 4], edx
// 00484fe3  eb45                 jmp 0x48502a
// 00484fe5  a178fa9600           mov eax, dword ptr [0x96fa78]
// 00484fea  894604               mov dword ptr [esi + 4], eax
// 00484fed  eb3b                 jmp 0x48502a
// 00484fef  a840                 test al, 0x40
// 00484ff1  0f8408010000         je 0x4850ff
// 00484ff7  b808000000           mov eax, 8
// 00484ffc  3945b0               cmp dword ptr [ebp - 0x50], eax
// 00484fff  0f85c6000000         jne 0x4850cb
// 00485005  3945b4               cmp dword ptr [ebp - 0x4c], eax
// 00485008  0f85bd000000         jne 0x4850cb
// 0048500e  3945b8               cmp dword ptr [ebp - 0x48], eax
// 00485011  0f85b4000000         jne 0x4850cb
// 00485017  837dbc00             cmp dword ptr [ebp - 0x44], 0
// 0048501b  0f85aa000000         jne 0x4850cb
// 00485021  8b0db0fa9600         mov ecx, dword ptr [0x96fab0]
// 00485027  894e04               mov dword ptr [esi + 4], ecx
// 0048502a  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0048502d  85c0                 test eax, eax
// 0048502f  7622                 jbe 0x485053
// 00485031  8d555c               lea edx, [ebp + 0x5c]
// 00485034  52                   push edx
// 00485035  8d4d4c               lea ecx, [ebp + 0x4c]
// 00485038  c7455c680c8200       mov dword ptr [ebp + 0x5c], 0x820c68
// 0048503f  ff15a4288000         call dword ptr [0x8028a4]
// 00485045  687c998d00           push 0x8d997c
// 0048504a  8d454c               lea eax, [ebp + 0x4c]
// 0048504d  50                   push eax
// 0048504e  e839c52100           call 0x6a158c
// 00485053  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 00485056  8b5538               mov edx, dword ptr [ebp + 0x38]
// 00485059  8b7d40               mov edi, dword ptr [ebp + 0x40]
// 0048505c  03c1                 add eax, ecx
// 0048505e  2bd0                 sub edx, eax
// 00485060  52                   push edx
// 00485061  83ef80               sub edi, -0x80
// 00485064  e8edb82100           call 0x6a0956
// 00485069  8b4d38               mov ecx, dword ptr [ebp + 0x38]
// 0048506c  2b4d44               sub ecx, dword ptr [ebp + 0x44]
// 0048506f  83c404               add esp, 4
// 00485072  2b4d34               sub ecx, dword ptr [ebp + 0x34]
// 00485075  8906                 mov dword ptr [esi], eax
// 00485077  51                   push ecx
// 00485078  57                   push edi
// 00485079  50                   push eax
// 0048507a  e861c72100           call 0x6a17e0
// 0048507f  83c40c               add esp, 0xc
// 00485082  f7855cffffff00000200 test dword ptr [ebp - 0xa4], 0x20000
// 0048508c  740b                 je 0x485099
// 0048508e  8b9570ffffff         mov edx, dword ptr [ebp - 0x90]
// 00485094  895610               mov dword ptr [esi + 0x10], edx
// 00485097  eb03                 jmp 0x48509c
// 00485099  895e10               mov dword ptr [esi + 0x10], ebx
// 0048509c  8b8d60ffffff         mov ecx, dword ptr [ebp - 0xa0]
// 004850a2  8b8564ffffff         mov eax, dword ptr [ebp - 0x9c]
// 004850a8  894e0c               mov dword ptr [esi + 0xc], ecx
// 004850ab  8d4dd4               lea ecx, [ebp - 0x2c]
// 004850ae  894608               mov dword ptr [esi + 8], eax
// 004850b1  885dfc               mov byte ptr [ebp - 4], bl
// 004850b4  ff1568248000         call dword ptr [0x802468]
// 004850ba  8d4d00               lea ecx, [ebp]
// 004850bd  c645fc00             mov byte ptr [ebp - 4], 0
// 004850c1  e85a0b0900           call 0x515c20
// 004850c6  e9ab000000           jmp 0x485176
// 004850cb  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 004850cf  7205                 jb 0x4850d6
// 004850d1  8b7f04               mov edi, dword ptr [edi + 4]
// 004850d4  eb03                 jmp 0x4850d9
// 004850d6  83c704               add edi, 4
// 004850d9  57                   push edi
// 004850da  8d95e8feffff         lea edx, [ebp - 0x118]
// 004850e0  68b80c8200           push 0x820cb8
// 004850e5  52                   push edx
// 004850e6  e8254a0800           call 0x509b10
// 004850eb  83c40c               add esp, 0xc
// 004850ee  6830d48d00           push 0x8dd430
// 004850f3  8d85e8feffff         lea eax, [ebp - 0x118]
// 004850f9  50                   push eax
// 004850fa  e88dc42100           call 0x6a158c
// 004850ff  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 00485103  7205                 jb 0x48510a
// 00485105  8b7f04               mov edi, dword ptr [edi + 4]
// 00485108  eb03                 jmp 0x48510d
// 0048510a  83c704               add edi, 4
// 0048510d  57                   push edi
// 0048510e  8d8d04ffffff         lea ecx, [ebp - 0xfc]
// 00485114  688c0c8200           push 0x820c8c
// 00485119  51                   push ecx
// 0048511a  e8f1490800           call 0x509b10
// 0048511f  83c40c               add esp, 0xc
// 00485122  6830d48d00           push 0x8dd430
// 00485127  8d9504ffffff         lea edx, [ebp - 0xfc]
// 0048512d  52                   push edx
// 0048512e  e859c42100           call 0x6a158c
// library g3d-6.09-rbx2008/GLG3Dcpp\DDSTexture.cpp (function ??0DDSTexture@Texture@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/DDSTexture.cpp
