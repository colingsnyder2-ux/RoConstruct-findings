// roc 2007-03 00738af0  unit: seg_00730000  size: 787 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00738af0
//
// 00738af0  6aff                 push -1
// 00738af2  68ded67600           push 0x76d6de
// 00738af7  64a100000000         mov eax, dword ptr fs:[0]
// 00738afd  50                   push eax
// 00738afe  83ec10               sub esp, 0x10
// 00738b01  53                   push ebx
// 00738b02  55                   push ebp
// 00738b03  56                   push esi
// 00738b04  57                   push edi
// 00738b05  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00738b0a  33c4                 xor eax, esp
// 00738b0c  50                   push eax
// 00738b0d  8d442424             lea eax, [esp + 0x24]
// 00738b11  64a300000000         mov dword ptr fs:[0], eax
// 00738b17  8bf9                 mov edi, ecx
// 00738b19  897c2420             mov dword ptr [esp + 0x20], edi
// 00738b1d  33c0                 xor eax, eax
// 00738b1f  c707946d7900         mov dword ptr [edi], 0x796d94
// 00738b25  894704               mov dword ptr [edi + 4], eax
// 00738b28  894708               mov dword ptr [edi + 8], eax
// 00738b2b  c7073caa7e00         mov dword ptr [edi], 0x7eaa3c
// 00738b31  8944242c             mov dword ptr [esp + 0x2c], eax
// 00738b35  898718020000         mov dword ptr [edi + 0x218], eax
// 00738b3b  8b442434             mov eax, dword ptr [esp + 0x34]
// 00738b3f  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00738b43  8bce                 mov ecx, esi
// 00738b45  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00738b4a  89871c020000         mov dword ptr [edi + 0x21c], eax
// 00738b50  e82bc5dbff           call 0x4f5080
// 00738b55  8d6f0c               lea ebp, [edi + 0xc]
// 00738b58  bb80000000           mov ebx, 0x80
// 00738b5d  8d4900               lea ecx, [ecx]
// 00738b60  8b4644               mov eax, dword ptr [esi + 0x44]
// 00738b63  8d4802               lea ecx, [eax + 2]
// 00738b66  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00738b69  7e0f                 jle 0x738b7a
// 00738b6b  8b5634               mov edx, dword ptr [esi + 0x34]
// 00738b6e  6a02                 push 2
// 00738b70  03d0                 add edx, eax
// 00738b72  52                   push edx
// 00738b73  8bce                 mov ecx, esi
// 00738b75  e8f687dcff           call 0x501370
// 00738b7a  83464402             add dword ptr [esi + 0x44], 2
// 00738b7e  807e2400             cmp byte ptr [esi + 0x24], 0
// 00738b82  8b4644               mov eax, dword ptr [esi + 0x44]
// 00738b85  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00738b88  7418                 je 0x738ba2
// 00738b8a  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 00738b8e  03c1                 add eax, ecx
// 00738b90  8a40fe               mov al, byte ptr [eax - 2]
// 00738b93  88542434             mov byte ptr [esp + 0x34], dl
// 00738b97  88442435             mov byte ptr [esp + 0x35], al
// 00738b9b  0fb7442434           movzx eax, word ptr [esp + 0x34]
// 00738ba0  eb05                 jmp 0x738ba7
// 00738ba2  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 00738ba7  0fb7d0               movzx edx, ax
// 00738baa  895500               mov dword ptr [ebp], edx
// 00738bad  83c504               add ebp, 4
// 00738bb0  83eb01               sub ebx, 1
// 00738bb3  75ab                 jne 0x738b60
// 00738bb5  8b4644               mov eax, dword ptr [esi + 0x44]
// 00738bb8  8d4802               lea ecx, [eax + 2]
// 00738bbb  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00738bbe  7e0f                 jle 0x738bcf
// 00738bc0  8b5634               mov edx, dword ptr [esi + 0x34]
// 00738bc3  6a02                 push 2
// 00738bc5  03d0                 add edx, eax
// 00738bc7  52                   push edx
// 00738bc8  8bce                 mov ecx, esi
// 00738bca  e8a187dcff           call 0x501370
// 00738bcf  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00738bd2  bb02000000           mov ebx, 2
// 00738bd7  015e44               add dword ptr [esi + 0x44], ebx
// 00738bda  807e2400             cmp byte ptr [esi + 0x24], 0
// 00738bde  8b4644               mov eax, dword ptr [esi + 0x44]
// 00738be1  7418                 je 0x738bfb
// 00738be3  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 00738be7  03c1                 add eax, ecx
// 00738be9  8a40fe               mov al, byte ptr [eax - 2]
// 00738bec  88542434             mov byte ptr [esp + 0x34], dl
// 00738bf0  88442435             mov byte ptr [esp + 0x35], al
// 00738bf4  0fb7442434           movzx eax, word ptr [esp + 0x34]
// 00738bf9  eb05                 jmp 0x738c00
// 00738bfb  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 00738c00  0fb7d0               movzx edx, ax
// 00738c03  899714020000         mov dword ptr [edi + 0x214], edx
// 00738c09  8b4644               mov eax, dword ptr [esi + 0x44]
// 00738c0c  8d4802               lea ecx, [eax + 2]
// 00738c0f  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00738c12  7e0e                 jle 0x738c22
// 00738c14  8b5634               mov edx, dword ptr [esi + 0x34]
// 00738c17  53                   push ebx
// 00738c18  03d0                 add edx, eax
// 00738c1a  52                   push edx
// 00738c1b  8bce                 mov ecx, esi
// 00738c1d  e84e87dcff           call 0x501370
// 00738c22  015e44               add dword ptr [esi + 0x44], ebx
// 00738c25  807e2400             cmp byte ptr [esi + 0x24], 0
// 00738c29  8b4644               mov eax, dword ptr [esi + 0x44]
// 00738c2c  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00738c2f  7418                 je 0x738c49
// 00738c31  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 00738c35  03c1                 add eax, ecx
// 00738c37  8a40fe               mov al, byte ptr [eax - 2]
// 00738c3a  88542434             mov byte ptr [esp + 0x34], dl
// 00738c3e  88442435             mov byte ptr [esp + 0x35], al
// 00738c42  0fb7442434           movzx eax, word ptr [esp + 0x34]
// 00738c47  eb05                 jmp 0x738c4e
// 00738c49  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 00738c4e  0fb7c0               movzx eax, ax
// 00738c51  99                   cdq 
// 00738c52  83e20f               and edx, 0xf
// 00738c55  03c2                 add eax, edx
// 00738c57  c1f804               sar eax, 4
// 00738c5a  8bc8                 mov ecx, eax
// 00738c5c  c1e104               shl ecx, 4
// 00738c5f  83e901               sub ecx, 1
// 00738c62  8bd1                 mov edx, ecx
// 00738c64  c1ea10               shr edx, 0x10
// 00738c67  0bca                 or ecx, edx
// 00738c69  8bd1                 mov edx, ecx
// 00738c6b  c1ea08               shr edx, 8
// 00738c6e  0bca                 or ecx, edx
// 00738c70  8bd1                 mov edx, ecx
// 00738c72  c1ea04               shr edx, 4
// 00738c75  0bca                 or ecx, edx
// 00738c77  8bd1                 mov edx, ecx
// 00738c79  c1ea02               shr edx, 2
// 00738c7c  0bca                 or ecx, edx
// 00738c7e  8bd1                 mov edx, ecx
// 00738c80  89870c020000         mov dword ptr [edi + 0x20c], eax
// 00738c86  898710020000         mov dword ptr [edi + 0x210], eax
// 00738c8c  8d04c5ffffffff       lea eax, [eax*8 - 1]
// 00738c93  d1ea                 shr edx, 1
// 00738c95  0bca                 or ecx, edx
// 00738c97  8d5101               lea edx, [ecx + 1]
// 00738c9a  8bc8                 mov ecx, eax
// 00738c9c  c1e910               shr ecx, 0x10
// 00738c9f  0bc1                 or eax, ecx
// 00738ca1  8bc8                 mov ecx, eax
// 00738ca3  c1e908               shr ecx, 8
// 00738ca6  0bc1                 or eax, ecx
// 00738ca8  8bc8                 mov ecx, eax
// 00738caa  c1e904               shr ecx, 4
// 00738cad  0bc1                 or eax, ecx
// 00738caf  8bc8                 mov ecx, eax
// 00738cb1  c1e902               shr ecx, 2
// 00738cb4  0bc1                 or eax, ecx
// 00738cb6  8bc8                 mov ecx, eax
// 00738cb8  d1e9                 shr ecx, 1
// 00738cba  0bc1                 or eax, ecx
// 00738cbc  8d6801               lea ebp, [eax + 1]
// 00738cbf  8b4634               mov eax, dword ptr [esi + 0x34]
// 00738cc2  85c0                 test eax, eax
// 00738cc4  7617                 jbe 0x738cdd
// 00738cc6  6840bf8400           push 0x84bf40
// 00738ccb  8d54241c             lea edx, [esp + 0x1c]
// 00738ccf  52                   push edx
// 00738cd0  c744242098967900     mov dword ptr [esp + 0x20], 0x799698
// 00738cd8  e85163eeff           call 0x61f02e
// 00738cdd  d9e8                 fld1 
// 00738cdf  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00738ce2  8b7644               mov esi, dword ptr [esi + 0x44]
// 00738ce5  83ec08               sub esp, 8
// 00738ce8  d9542404             fst dword ptr [esp + 4]
// 00738cec  03f0                 add esi, eax
// 00738cee  a15c828b00           mov eax, dword ptr [0x8b825c]
// 00738cf3  d91c24               fstp dword ptr [esp]
// 00738cf6  6a00                 push 0
// 00738cf8  53                   push ebx
// 00738cf9  6a03                 push 3
// 00738cfb  6a00                 push 0
// 00738cfd  50                   push eax
// 00738cfe  6a01                 push 1
// 00738d00  55                   push ebp
// 00738d01  52                   push edx
// 00738d02  50                   push eax
// 00738d03  03f1                 add esi, ecx
// 00738d05  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00738d09  8d442448             lea eax, [esp + 0x48]
// 00738d0d  50                   push eax
// 00738d0e  51                   push ecx
// 00738d0f  8d542448             lea edx, [esp + 0x48]
// 00738d13  52                   push edx
// 00738d14  89742454             mov dword ptr [esp + 0x54], esi
// 00738d18  e88385d3ff           call 0x4712a0
// 00738d1d  83c438               add esp, 0x38
// 00738d20  8b28                 mov ebp, dword ptr [eax]
// 00738d22  8b8718020000         mov eax, dword ptr [edi + 0x218]
// 00738d28  3be8                 cmp ebp, eax
// 00738d2a  8b1da8d27700         mov ebx, dword ptr [0x77d2a8]
// 00738d30  c644242c02           mov byte ptr [esp + 0x2c], 2
// 00738d35  7466                 je 0x738d9d
// 00738d37  85c0                 test eax, eax
// 00738d39  744e                 je 0x738d89
// 00738d3b  83c004               add eax, 4
// 00738d3e  50                   push eax
// 00738d3f  ffd3                 call ebx
// 00738d41  85c0                 test eax, eax
// 00738d43  753a                 jne 0x738d7f
// 00738d45  8b8718020000         mov eax, dword ptr [edi + 0x218]
// 00738d4b  8b7008               mov esi, dword ptr [eax + 8]
// 00738d4e  85f6                 test esi, esi
// 00738d50  741b                 je 0x738d6d
// 00738d52  8b0e                 mov ecx, dword ptr [esi]
// 00738d54  8b01                 mov eax, dword ptr [ecx]
// 00738d56  8b5004               mov edx, dword ptr [eax + 4]
// 00738d59  ffd2                 call edx
// 00738d5b  8bc6                 mov eax, esi
// 00738d5d  8b7604               mov esi, dword ptr [esi + 4]
// 00738d60  50                   push eax
// 00738d61  e88a53eeff           call 0x61e0f0
// 00738d66  83c404               add esp, 4
// 00738d69  85f6                 test esi, esi
// 00738d6b  75e5                 jne 0x738d52
// 00738d6d  8b8f18020000         mov ecx, dword ptr [edi + 0x218]
// 00738d73  85c9                 test ecx, ecx
// 00738d75  7408                 je 0x738d7f
// 00738d77  8b01                 mov eax, dword ptr [ecx]
// 00738d79  8b10                 mov edx, dword ptr [eax]
// 00738d7b  6a01                 push 1
// 00738d7d  ffd2                 call edx
// 00738d7f  c7871802000000000000 mov dword ptr [edi + 0x218], 0
// 00738d89  85ed                 test ebp, ebp
// 00738d8b  7410                 je 0x738d9d
// 00738d8d  8d4504               lea eax, [ebp + 4]
// 00738d90  50                   push eax
// 00738d91  89af18020000         mov dword ptr [edi + 0x218], ebp
// 00738d97  ff15acd27700         call dword ptr [0x77d2ac]
// 00738d9d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00738da1  85c0                 test eax, eax
// 00738da3  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00738da8  7441                 je 0x738deb
// 00738daa  83c004               add eax, 4
// 00738dad  50                   push eax
// 00738dae  ffd3                 call ebx
// 00738db0  85c0                 test eax, eax
// 00738db2  7537                 jne 0x738deb
// 00738db4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00738db8  8b7108               mov esi, dword ptr [ecx + 8]
// 00738dbb  85f6                 test esi, esi
// 00738dbd  7420                 je 0x738ddf
// 00738dbf  90                   nop 
// 00738dc0  8b0e                 mov ecx, dword ptr [esi]
// 00738dc2  8b01                 mov eax, dword ptr [ecx]
// 00738dc4  8b5004               mov edx, dword ptr [eax + 4]
// 00738dc7  ffd2                 call edx
// 00738dc9  8bc6                 mov eax, esi
// 00738dcb  8b7604               mov esi, dword ptr [esi + 4]
// 00738dce  50                   push eax
// 00738dcf  e81c53eeff           call 0x61e0f0
// 00738dd4  83c404               add esp, 4
// 00738dd7  85f6                 test esi, esi
// 00738dd9  75e5                 jne 0x738dc0
// 00738ddb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00738ddf  85c9                 test ecx, ecx
// 00738de1  7408                 je 0x738deb
// 00738de3  8b01                 mov eax, dword ptr [ecx]
// 00738de5  8b10                 mov edx, dword ptr [eax]
// 00738de7  6a01                 push 1
// 00738de9  ffd2                 call edx
// 00738deb  8bc7                 mov eax, edi
// 00738ded  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00738df1  64890d00000000       mov dword ptr fs:[0], ecx
// 00738df8  59                   pop ecx
// 00738df9  5f                   pop edi
// 00738dfa  5e                   pop esi
// 00738dfb  5d                   pop ebp
// 00738dfc  5b                   pop ebx
// 00738dfd  83c41c               add esp, 0x1c
// 00738e00  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ??0GFont@G3D@@AAE@PAVRenderDevice@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVBinaryInput@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
