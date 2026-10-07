// roc 2007-08 00615ab0  unit: seg_00610000  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00615ab0
//
// 00615ab0  83ec1c               sub esp, 0x1c
// 00615ab3  53                   push ebx
// 00615ab4  55                   push ebp
// 00615ab5  8b6f30               mov ebp, dword ptr [edi + 0x30]
// 00615ab8  8b4524               mov eax, dword ptr [ebp + 0x24]
// 00615abb  56                   push esi
// 00615abc  6a0b                 push 0xb
// 00615abe  6874357c00           push 0x7c3574
// 00615ac3  57                   push edi
// 00615ac4  89442418             mov dword ptr [esp + 0x18], eax
// 00615ac8  e8131b0000           call 0x6175e0
// 00615acd  8b7730               mov esi, dword ptr [edi + 0x30]
// 00615ad0  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00615ad4  83c101               add ecx, 1
// 00615ad7  83c40c               add esp, 0xc
// 00615ada  81f9c8000000         cmp ecx, 0xc8
// 00615ae0  8bd8                 mov ebx, eax
// 00615ae2  7e0f                 jle 0x615af3
// 00615ae4  b914347c00           mov ecx, 0x7c3414
// 00615ae9  bac8000000           mov edx, 0xc8
// 00615aee  e8dddfffff           call 0x613ad0
// 00615af3  53                   push ebx
// 00615af4  57                   push edi
// 00615af5  e816e1ffff           call 0x613c10
// 00615afa  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00615afe  6a0b                 push 0xb
// 00615b00  6868357c00           push 0x7c3568
// 00615b05  57                   push edi
// 00615b06  66898456ac000000     mov word ptr [esi + edx*2 + 0xac], ax
// 00615b0e  e8cd1a0000           call 0x6175e0
// 00615b13  8b7730               mov esi, dword ptr [edi + 0x30]
// 00615b16  8bd8                 mov ebx, eax
// 00615b18  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 00615b1c  83c002               add eax, 2
// 00615b1f  83c414               add esp, 0x14
// 00615b22  3dc8000000           cmp eax, 0xc8
// 00615b27  7e0f                 jle 0x615b38
// 00615b29  b914347c00           mov ecx, 0x7c3414
// 00615b2e  bac8000000           mov edx, 0xc8
// 00615b33  e898dfffff           call 0x613ad0
// 00615b38  53                   push ebx
// 00615b39  57                   push edi
// 00615b3a  e8d1e0ffff           call 0x613c10
// 00615b3f  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00615b43  6a0a                 push 0xa
// 00615b45  685c357c00           push 0x7c355c
// 00615b4a  57                   push edi
// 00615b4b  6689844eae000000     mov word ptr [esi + ecx*2 + 0xae], ax
// 00615b53  e8881a0000           call 0x6175e0
// 00615b58  8b7730               mov esi, dword ptr [edi + 0x30]
// 00615b5b  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00615b5f  83c203               add edx, 3
// 00615b62  83c414               add esp, 0x14
// 00615b65  81fac8000000         cmp edx, 0xc8
// 00615b6b  8bd8                 mov ebx, eax
// 00615b6d  7e0f                 jle 0x615b7e
// 00615b6f  b914347c00           mov ecx, 0x7c3414
// 00615b74  bac8000000           mov edx, 0xc8
// 00615b79  e852dfffff           call 0x613ad0
// 00615b7e  53                   push ebx
// 00615b7f  57                   push edi
// 00615b80  e88be0ffff           call 0x613c10
// 00615b85  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00615b89  6689844eb0000000     mov word ptr [esi + ecx*2 + 0xb0], ax
// 00615b91  8b7730               mov esi, dword ptr [edi + 0x30]
// 00615b94  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00615b98  83c204               add edx, 4
// 00615b9b  83c408               add esp, 8
// 00615b9e  81fac8000000         cmp edx, 0xc8
// 00615ba4  7e0f                 jle 0x615bb5
// 00615ba6  b914347c00           mov ecx, 0x7c3414
// 00615bab  bac8000000           mov edx, 0xc8
// 00615bb0  e81bdfffff           call 0x613ad0
// 00615bb5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00615bb9  50                   push eax
// 00615bba  57                   push edi
// 00615bbb  e850e0ffff           call 0x613c10
// 00615bc0  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00615bc4  83c408               add esp, 8
// 00615bc7  6689844eb2000000     mov word ptr [esi + ecx*2 + 0xb2], ax
// 00615bcf  837f103d             cmp dword ptr [edi + 0x10], 0x3d
// 00615bd3  7421                 je 0x615bf6
// 00615bd5  6a3d                 push 0x3d
// 00615bd7  57                   push edi
// 00615bd8  e8e3180000           call 0x6174c0
// 00615bdd  8b5734               mov edx, dword ptr [edi + 0x34]
// 00615be0  50                   push eax
// 00615be1  6870337c00           push 0x7c3370
// 00615be6  52                   push edx
// 00615be7  e8a492ffff           call 0x60ee90
// 00615bec  50                   push eax
// 00615bed  57                   push edi
// 00615bee  e8cd190000           call 0x6175c0
// 00615bf3  83c41c               add esp, 0x1c
// 00615bf6  57                   push edi
// 00615bf7  e8f42d0000           call 0x6189f0
// 00615bfc  6a00                 push 0
// 00615bfe  8d442418             lea eax, [esp + 0x18]
// 00615c02  50                   push eax
// 00615c03  57                   push edi
// 00615c04  e817f7ffff           call 0x615320
// 00615c09  8b5730               mov edx, dword ptr [edi + 0x30]
// 00615c0c  8d4c2420             lea ecx, [esp + 0x20]
// 00615c10  51                   push ecx
// 00615c11  52                   push edx
// 00615c12  e879370100           call 0x629390
// 00615c17  be2c000000           mov esi, 0x2c
// 00615c1c  83c418               add esp, 0x18
// 00615c1f  397710               cmp dword ptr [edi + 0x10], esi
// 00615c22  7420                 je 0x615c44
// 00615c24  56                   push esi
// 00615c25  57                   push edi
// 00615c26  e895180000           call 0x6174c0
// 00615c2b  50                   push eax
// 00615c2c  8b4734               mov eax, dword ptr [edi + 0x34]
// 00615c2f  6870337c00           push 0x7c3370
// 00615c34  50                   push eax
// 00615c35  e85692ffff           call 0x60ee90
// 00615c3a  50                   push eax
// 00615c3b  57                   push edi
// 00615c3c  e87f190000           call 0x6175c0
// 00615c41  83c41c               add esp, 0x1c
// 00615c44  57                   push edi
// 00615c45  e8a62d0000           call 0x6189f0
// 00615c4a  6a00                 push 0
// 00615c4c  8d4c2418             lea ecx, [esp + 0x18]
// 00615c50  51                   push ecx
// 00615c51  57                   push edi
// 00615c52  e8c9f6ffff           call 0x615320
// 00615c57  8b4730               mov eax, dword ptr [edi + 0x30]
// 00615c5a  8d542420             lea edx, [esp + 0x20]
// 00615c5e  52                   push edx
// 00615c5f  50                   push eax
// 00615c60  e82b370100           call 0x629390
// 00615c65  83c418               add esp, 0x18
// 00615c68  397710               cmp dword ptr [edi + 0x10], esi
// 00615c6b  7526                 jne 0x615c93
// 00615c6d  57                   push edi
// 00615c6e  e87d2d0000           call 0x6189f0
// 00615c73  6a00                 push 0
// 00615c75  8d4c2418             lea ecx, [esp + 0x18]
// 00615c79  51                   push ecx
// 00615c7a  57                   push edi
// 00615c7b  e8a0f6ffff           call 0x615320
// 00615c80  8b4730               mov eax, dword ptr [edi + 0x30]
// 00615c83  8d542420             lea edx, [esp + 0x20]
// 00615c87  52                   push edx
// 00615c88  50                   push eax
// 00615c89  e802370100           call 0x629390
// 00615c8e  83c418               add esp, 0x18
// 00615c91  eb26                 jmp 0x615cb9
// 00615c93  d9e8                 fld1 
// 00615c95  83ec08               sub esp, 8
// 00615c98  dd1c24               fstp qword ptr [esp]
// 00615c9b  55                   push ebp
// 00615c9c  e87f2d0100           call 0x628a20
// 00615ca1  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 00615ca4  50                   push eax
// 00615ca5  51                   push ecx
// 00615ca6  6a01                 push 1
// 00615ca8  55                   push ebp
// 00615ca9  e802310100           call 0x628db0
// 00615cae  6a01                 push 1
// 00615cb0  55                   push ebp
// 00615cb1  e8fa2b0100           call 0x6288b0
// 00615cb6  83c424               add esp, 0x24
// 00615cb9  8b542430             mov edx, dword ptr [esp + 0x30]
// 00615cbd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00615cc1  6a01                 push 1
// 00615cc3  6a01                 push 1
// 00615cc5  52                   push edx
// 00615cc6  50                   push eax
// 00615cc7  8bc7                 mov eax, edi
// 00615cc9  e852fcffff           call 0x615920
// 00615cce  83c410               add esp, 0x10
// 00615cd1  5e                   pop esi
// 00615cd2  5d                   pop ebp
// 00615cd3  5b                   pop ebx
// 00615cd4  83c41c               add esp, 0x1c
// 00615cd7  c3                   ret 
// library lua-5.1.4/lparser.c (function _fornum)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
