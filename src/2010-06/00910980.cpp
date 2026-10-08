// roc 2010-06 00910980  unit: G3D::GFont  size: 574 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00910980
//
// 00910980  64a100000000         mov eax, dword ptr fs:[0]
// 00910986  6aff                 push -1
// 00910988  6852149c00           push 0x9c1452
// 0091098d  50                   push eax
// 0091098e  64892500000000       mov dword ptr fs:[0], esp
// 00910995  83ec4c               sub esp, 0x4c
// 00910998  56                   push esi
// 00910999  8d442408             lea eax, [esp + 8]
// 0091099d  8bf1                 mov esi, ecx
// 0091099f  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 009109a3  50                   push eax
// 009109a4  e8f708b8ff           call 0x4912a0
// 009109a9  8b06                 mov eax, dword ptr [esi]
// 009109ab  85c0                 test eax, eax
// 009109ad  7438                 je 0x9109e7
// 009109af  f30f2a5064           cvtsi2ss xmm2, dword ptr [eax + 0x64]
// 009109b4  f30f10442410         movss xmm0, dword ptr [esp + 0x10]
// 009109ba  f30f5c442408         subss xmm0, dword ptr [esp + 8]
// 009109c0  f30f2a5868           cvtsi2ss xmm3, dword ptr [eax + 0x68]
// 009109c5  f30f104c2414         movss xmm1, dword ptr [esp + 0x14]
// 009109cb  f30f5c4c240c         subss xmm1, dword ptr [esp + 0xc]
// 009109d1  0f2ec2               ucomiss xmm0, xmm2
// 009109d4  9f                   lahf 
// 009109d5  f6c444               test ah, 0x44
// 009109d8  7a0d                 jp 0x9109e7
// 009109da  0f2ecb               ucomiss xmm1, xmm3
// 009109dd  9f                   lahf 
// 009109de  f6c444               test ah, 0x44
// 009109e1  0f8bc5010000         jnp 0x910bac
// 009109e7  55                   push ebp
// 009109e8  68fcb3a800           push 0xa8b3fc
// 009109ed  8d4c2420             lea ecx, [esp + 0x20]
// 009109f1  ff1510a49e00         call dword ptr [0x9ea410]
// 009109f7  d9e8                 fld1 
// 009109f9  f30f10442418         movss xmm0, dword ptr [esp + 0x18]
// 009109ff  f30f5c442410         subss xmm0, dword ptr [esp + 0x10]
// 00910a05  f30f104c2414         movss xmm1, dword ptr [esp + 0x14]
// 00910a0b  f30f5c4c240c         subss xmm1, dword ptr [esp + 0xc]
// 00910a11  51                   push ecx
// 00910a12  8b0d503cc000         mov ecx, dword ptr [0xc03c50]
// 00910a18  d91c24               fstp dword ptr [esp]
// 00910a1b  6a00                 push 0
// 00910a1d  6a06                 push 6
// 00910a1f  6a02                 push 2
// 00910a21  6a00                 push 0
// 00910a23  51                   push ecx
// 00910a24  8d542434             lea edx, [esp + 0x34]
// 00910a28  52                   push edx
// 00910a29  f30f2cc0             cvttss2si eax, xmm0
// 00910a2d  50                   push eax
// 00910a2e  f30f2cc9             cvttss2si ecx, xmm1
// 00910a32  51                   push ecx
// 00910a33  8d942488000000       lea edx, [esp + 0x88]
// 00910a3a  52                   push edx
// 00910a3b  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 00910a46  e8e551b7ff           call 0x485c30
// 00910a4b  83c428               add esp, 0x28
// 00910a4e  8b00                 mov eax, dword ptr [eax]
// 00910a50  50                   push eax
// 00910a51  8bce                 mov ecx, esi
// 00910a53  c644246001           mov byte ptr [esp + 0x60], 1
// 00910a58  e8c362b7ff           call 0x486d20
// 00910a5d  8b442464             mov eax, dword ptr [esp + 0x64]
// 00910a61  8b2d7ca39e00         mov ebp, dword ptr [0x9ea37c]
// 00910a67  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00910a6c  85c0                 test eax, eax
// 00910a6e  742b                 je 0x910a9b
// 00910a70  83c004               add eax, 4
// 00910a73  50                   push eax
// 00910a74  ffd5                 call ebp
// 00910a76  85c0                 test eax, eax
// 00910a78  7519                 jne 0x910a93
// 00910a7a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00910a7e  e89d30b7ff           call 0x483b20
// 00910a83  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00910a87  85c9                 test ecx, ecx
// 00910a89  7408                 je 0x910a93
// 00910a8b  8b11                 mov edx, dword ptr [ecx]
// 00910a8d  8b02                 mov eax, dword ptr [edx]
// 00910a8f  6a01                 push 1
// 00910a91  ffd0                 call eax
// 00910a93  c744246400000000     mov dword ptr [esp + 0x64], 0
// 00910a9b  8d4c241c             lea ecx, [esp + 0x1c]
// 00910a9f  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00910aa7  ff1500a49e00         call dword ptr [0x9ea400]
// 00910aad  68e4b3a800           push 0xa8b3e4
// 00910ab2  8d4c243c             lea ecx, [esp + 0x3c]
// 00910ab6  ff1510a49e00         call dword ptr [0x9ea410]
// 00910abc  d9e8                 fld1 
// 00910abe  f30f104c2418         movss xmm1, dword ptr [esp + 0x18]
// 00910ac4  f30f5c4c2410         subss xmm1, dword ptr [esp + 0x10]
// 00910aca  f30f10442414         movss xmm0, dword ptr [esp + 0x14]
// 00910ad0  f30f5c44240c         subss xmm0, dword ptr [esp + 0xc]
// 00910ad6  f30f59057c6aa100     mulss xmm0, dword ptr [0xa16a7c]
// 00910ade  51                   push ecx
// 00910adf  8b0d503cc000         mov ecx, dword ptr [0xc03c50]
// 00910ae5  d91c24               fstp dword ptr [esp]
// 00910ae8  6a00                 push 0
// 00910aea  6a06                 push 6
// 00910aec  6a02                 push 2
// 00910aee  6a00                 push 0
// 00910af0  51                   push ecx
// 00910af1  8d542450             lea edx, [esp + 0x50]
// 00910af5  52                   push edx
// 00910af6  f30f2cc1             cvttss2si eax, xmm1
// 00910afa  50                   push eax
// 00910afb  f30f2cc8             cvttss2si ecx, xmm0
// 00910aff  51                   push ecx
// 00910b00  8d54242c             lea edx, [esp + 0x2c]
// 00910b04  52                   push edx
// 00910b05  c784248400000002000000 mov dword ptr [esp + 0x84], 2
// 00910b10  e81b51b7ff           call 0x485c30
// 00910b15  83c428               add esp, 0x28
// 00910b18  8b00                 mov eax, dword ptr [eax]
// 00910b1a  8d4e10               lea ecx, [esi + 0x10]
// 00910b1d  50                   push eax
// 00910b1e  c644246003           mov byte ptr [esp + 0x60], 3
// 00910b23  e8f861b7ff           call 0x486d20
// 00910b28  8b442408             mov eax, dword ptr [esp + 8]
// 00910b2c  c644245c02           mov byte ptr [esp + 0x5c], 2
// 00910b31  85c0                 test eax, eax
// 00910b33  742b                 je 0x910b60
// 00910b35  83c004               add eax, 4
// 00910b38  50                   push eax
// 00910b39  ffd5                 call ebp
// 00910b3b  85c0                 test eax, eax
// 00910b3d  7519                 jne 0x910b58
// 00910b3f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00910b43  e8d82fb7ff           call 0x483b20
// 00910b48  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00910b4c  85c9                 test ecx, ecx
// 00910b4e  7408                 je 0x910b58
// 00910b50  8b11                 mov edx, dword ptr [ecx]
// 00910b52  8b02                 mov eax, dword ptr [edx]
// 00910b54  6a01                 push 1
// 00910b56  ffd0                 call eax
// 00910b58  c744240800000000     mov dword ptr [esp + 8], 0
// 00910b60  8d4c2438             lea ecx, [esp + 0x38]
// 00910b64  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00910b6c  ff1500a49e00         call dword ptr [0x9ea400]
// 00910b72  f30f104c2418         movss xmm1, dword ptr [esp + 0x18]
// 00910b78  f30f5c4c2410         subss xmm1, dword ptr [esp + 0x10]
// 00910b7e  f30f10057c6aa100     movss xmm0, dword ptr [0xa16a7c]
// 00910b86  f30f59c8             mulss xmm1, xmm0
// 00910b8a  f30f2cc9             cvttss2si ecx, xmm1
// 00910b8e  f30f104c2414         movss xmm1, dword ptr [esp + 0x14]
// 00910b94  f30f5c4c240c         subss xmm1, dword ptr [esp + 0xc]
// 00910b9a  51                   push ecx
// 00910b9b  f30f59c8             mulss xmm1, xmm0
// 00910b9f  f30f2cd1             cvttss2si edx, xmm1
// 00910ba3  52                   push edx
// 00910ba4  8bce                 mov ecx, esi
// 00910ba6  e835fcffff           call 0x9107e0
// 00910bab  5d                   pop ebp
// 00910bac  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00910bb0  5e                   pop esi
// 00910bb1  64890d00000000       mov dword ptr fs:[0], ecx
// 00910bb8  83c458               add esp, 0x58
// 00910bbb  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?resizeImages@ToneMap@G3D@@AAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
