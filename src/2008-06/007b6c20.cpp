// roc 2008-06 007b6c20  unit: G3D::Sky  size: 786 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b6c20
//
// 007b6c20  6aff                 push -1
// 007b6c22  688ee37e00           push 0x7ee38e
// 007b6c27  64a100000000         mov eax, dword ptr fs:[0]
// 007b6c2d  50                   push eax
// 007b6c2e  64892500000000       mov dword ptr fs:[0], esp
// 007b6c35  83ec1c               sub esp, 0x1c
// 007b6c38  53                   push ebx
// 007b6c39  55                   push ebp
// 007b6c3a  56                   push esi
// 007b6c3b  57                   push edi
// 007b6c3c  8bf9                 mov edi, ecx
// 007b6c3e  33c0                 xor eax, eax
// 007b6c40  c707e0e18100         mov dword ptr [edi], 0x81e1e0
// 007b6c46  894704               mov dword ptr [edi + 4], eax
// 007b6c49  897c241c             mov dword ptr [esp + 0x1c], edi
// 007b6c4d  894708               mov dword ptr [edi + 8], eax
// 007b6c50  c707b45b8700         mov dword ptr [edi], 0x875bb4
// 007b6c56  89442434             mov dword ptr [esp + 0x34], eax
// 007b6c5a  898718020000         mov dword ptr [edi + 0x218], eax
// 007b6c60  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007b6c64  8b742444             mov esi, dword ptr [esp + 0x44]
// 007b6c68  8bce                 mov ecx, esi
// 007b6c6a  c644243401           mov byte ptr [esp + 0x34], 1
// 007b6c6f  89871c020000         mov dword ptr [edi + 0x21c], eax
// 007b6c75  e8c62ed5ff           call 0x509b40
// 007b6c7a  8d6f0c               lea ebp, [edi + 0xc]
// 007b6c7d  bb80000000           mov ebx, 0x80
// 007b6c82  8b4644               mov eax, dword ptr [esi + 0x44]
// 007b6c85  8d4802               lea ecx, [eax + 2]
// 007b6c88  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 007b6c8b  7e0f                 jle 0x7b6c9c
// 007b6c8d  8b5634               mov edx, dword ptr [esi + 0x34]
// 007b6c90  6a02                 push 2
// 007b6c92  03d0                 add edx, eax
// 007b6c94  52                   push edx
// 007b6c95  8bce                 mov ecx, esi
// 007b6c97  e834ebd5ff           call 0x5157d0
// 007b6c9c  83464402             add dword ptr [esi + 0x44], 2
// 007b6ca0  807e2400             cmp byte ptr [esi + 0x24], 0
// 007b6ca4  8b4644               mov eax, dword ptr [esi + 0x44]
// 007b6ca7  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 007b6caa  7418                 je 0x7b6cc4
// 007b6cac  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 007b6cb0  03c1                 add eax, ecx
// 007b6cb2  8a40fe               mov al, byte ptr [eax - 2]
// 007b6cb5  8854243c             mov byte ptr [esp + 0x3c], dl
// 007b6cb9  8844243d             mov byte ptr [esp + 0x3d], al
// 007b6cbd  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 007b6cc2  eb05                 jmp 0x7b6cc9
// 007b6cc4  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 007b6cc9  0fb7d0               movzx edx, ax
// 007b6ccc  895500               mov dword ptr [ebp], edx
// 007b6ccf  83c504               add ebp, 4
// 007b6cd2  83eb01               sub ebx, 1
// 007b6cd5  75ab                 jne 0x7b6c82
// 007b6cd7  8b4644               mov eax, dword ptr [esi + 0x44]
// 007b6cda  8d4802               lea ecx, [eax + 2]
// 007b6cdd  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 007b6ce0  7e0f                 jle 0x7b6cf1
// 007b6ce2  8b5634               mov edx, dword ptr [esi + 0x34]
// 007b6ce5  6a02                 push 2
// 007b6ce7  03d0                 add edx, eax
// 007b6ce9  52                   push edx
// 007b6cea  8bce                 mov ecx, esi
// 007b6cec  e8dfead5ff           call 0x5157d0
// 007b6cf1  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 007b6cf4  bb02000000           mov ebx, 2
// 007b6cf9  015e44               add dword ptr [esi + 0x44], ebx
// 007b6cfc  807e2400             cmp byte ptr [esi + 0x24], 0
// 007b6d00  8b4644               mov eax, dword ptr [esi + 0x44]
// 007b6d03  7418                 je 0x7b6d1d
// 007b6d05  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 007b6d09  03c1                 add eax, ecx
// 007b6d0b  8a40fe               mov al, byte ptr [eax - 2]
// 007b6d0e  8854243c             mov byte ptr [esp + 0x3c], dl
// 007b6d12  8844243d             mov byte ptr [esp + 0x3d], al
// 007b6d16  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 007b6d1b  eb05                 jmp 0x7b6d22
// 007b6d1d  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 007b6d22  0fb7d0               movzx edx, ax
// 007b6d25  899714020000         mov dword ptr [edi + 0x214], edx
// 007b6d2b  8b4644               mov eax, dword ptr [esi + 0x44]
// 007b6d2e  8d4802               lea ecx, [eax + 2]
// 007b6d31  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 007b6d34  7e0e                 jle 0x7b6d44
// 007b6d36  8b5634               mov edx, dword ptr [esi + 0x34]
// 007b6d39  53                   push ebx
// 007b6d3a  03d0                 add edx, eax
// 007b6d3c  52                   push edx
// 007b6d3d  8bce                 mov ecx, esi
// 007b6d3f  e88cead5ff           call 0x5157d0
// 007b6d44  015e44               add dword ptr [esi + 0x44], ebx
// 007b6d47  807e2400             cmp byte ptr [esi + 0x24], 0
// 007b6d4b  8b4644               mov eax, dword ptr [esi + 0x44]
// 007b6d4e  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 007b6d51  7418                 je 0x7b6d6b
// 007b6d53  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 007b6d57  03c1                 add eax, ecx
// 007b6d59  8a40fe               mov al, byte ptr [eax - 2]
// 007b6d5c  8854243c             mov byte ptr [esp + 0x3c], dl
// 007b6d60  8844243d             mov byte ptr [esp + 0x3d], al
// 007b6d64  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 007b6d69  eb05                 jmp 0x7b6d70
// 007b6d6b  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 007b6d70  0fb7c0               movzx eax, ax
// 007b6d73  99                   cdq 
// 007b6d74  83e20f               and edx, 0xf
// 007b6d77  03c2                 add eax, edx
// 007b6d79  c1f804               sar eax, 4
// 007b6d7c  8bc8                 mov ecx, eax
// 007b6d7e  c1e104               shl ecx, 4
// 007b6d81  49                   dec ecx
// 007b6d82  8bd1                 mov edx, ecx
// 007b6d84  c1ea10               shr edx, 0x10
// 007b6d87  0bca                 or ecx, edx
// 007b6d89  8bd1                 mov edx, ecx
// 007b6d8b  c1ea08               shr edx, 8
// 007b6d8e  0bca                 or ecx, edx
// 007b6d90  8bd1                 mov edx, ecx
// 007b6d92  c1ea04               shr edx, 4
// 007b6d95  0bca                 or ecx, edx
// 007b6d97  8bd1                 mov edx, ecx
// 007b6d99  c1ea02               shr edx, 2
// 007b6d9c  0bca                 or ecx, edx
// 007b6d9e  8bd1                 mov edx, ecx
// 007b6da0  89870c020000         mov dword ptr [edi + 0x20c], eax
// 007b6da6  898710020000         mov dword ptr [edi + 0x210], eax
// 007b6dac  8d04c5ffffffff       lea eax, [eax*8 - 1]
// 007b6db3  d1ea                 shr edx, 1
// 007b6db5  0bca                 or ecx, edx
// 007b6db7  8d5101               lea edx, [ecx + 1]
// 007b6dba  8bc8                 mov ecx, eax
// 007b6dbc  c1e910               shr ecx, 0x10
// 007b6dbf  0bc1                 or eax, ecx
// 007b6dc1  8bc8                 mov ecx, eax
// 007b6dc3  c1e908               shr ecx, 8
// 007b6dc6  0bc1                 or eax, ecx
// 007b6dc8  8bc8                 mov ecx, eax
// 007b6dca  c1e904               shr ecx, 4
// 007b6dcd  0bc1                 or eax, ecx
// 007b6dcf  8bc8                 mov ecx, eax
// 007b6dd1  c1e902               shr ecx, 2
// 007b6dd4  0bc1                 or eax, ecx
// 007b6dd6  8bc8                 mov ecx, eax
// 007b6dd8  d1e9                 shr ecx, 1
// 007b6dda  0bc1                 or eax, ecx
// 007b6ddc  8d6801               lea ebp, [eax + 1]
// 007b6ddf  8b4634               mov eax, dword ptr [esi + 0x34]
// 007b6de2  85c0                 test eax, eax
// 007b6de4  7626                 jbe 0x7b6e0c
// 007b6de6  8d542414             lea edx, [esp + 0x14]
// 007b6dea  52                   push edx
// 007b6deb  8d4c2424             lea ecx, [esp + 0x24]
// 007b6def  c7442418680c8200     mov dword ptr [esp + 0x18], 0x820c68
// 007b6df7  ff15a4288000         call dword ptr [0x8028a4]
// 007b6dfd  687c998d00           push 0x8d997c
// 007b6e02  8d442424             lea eax, [esp + 0x24]
// 007b6e06  50                   push eax
// 007b6e07  e880a7eeff           call 0x6a158c
// 007b6e0c  d9e8                 fld1 
// 007b6e0e  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 007b6e11  8b7644               mov esi, dword ptr [esi + 0x44]
// 007b6e14  83ec08               sub esp, 8
// 007b6e17  d9542404             fst dword ptr [esp + 4]
// 007b6e1b  03f0                 add esi, eax
// 007b6e1d  a1b8fa9600           mov eax, dword ptr [0x96fab8]
// 007b6e22  d91c24               fstp dword ptr [esp]
// 007b6e25  6a00                 push 0
// 007b6e27  53                   push ebx
// 007b6e28  6a03                 push 3
// 007b6e2a  6a00                 push 0
// 007b6e2c  50                   push eax
// 007b6e2d  6a01                 push 1
// 007b6e2f  55                   push ebp
// 007b6e30  52                   push edx
// 007b6e31  8b542468             mov edx, dword ptr [esp + 0x68]
// 007b6e35  50                   push eax
// 007b6e36  03f1                 add esi, ecx
// 007b6e38  8d4c2444             lea ecx, [esp + 0x44]
// 007b6e3c  51                   push ecx
// 007b6e3d  52                   push edx
// 007b6e3e  8d442444             lea eax, [esp + 0x44]
// 007b6e42  50                   push eax
// 007b6e43  89742450             mov dword ptr [esp + 0x50], esi
// 007b6e47  e844d8cbff           call 0x474690
// 007b6e4c  83c438               add esp, 0x38
// 007b6e4f  8b28                 mov ebp, dword ptr [eax]
// 007b6e51  8b8718020000         mov eax, dword ptr [edi + 0x218]
// 007b6e57  8b1dac218000         mov ebx, dword ptr [0x8021ac]
// 007b6e5d  c644243402           mov byte ptr [esp + 0x34], 2
// 007b6e62  3be8                 cmp ebp, eax
// 007b6e64  7466                 je 0x7b6ecc
// 007b6e66  85c0                 test eax, eax
// 007b6e68  744e                 je 0x7b6eb8
// 007b6e6a  83c004               add eax, 4
// 007b6e6d  50                   push eax
// 007b6e6e  ffd3                 call ebx
// 007b6e70  85c0                 test eax, eax
// 007b6e72  753a                 jne 0x7b6eae
// 007b6e74  8b8718020000         mov eax, dword ptr [edi + 0x218]
// 007b6e7a  8b7008               mov esi, dword ptr [eax + 8]
// 007b6e7d  85f6                 test esi, esi
// 007b6e7f  741b                 je 0x7b6e9c
// 007b6e81  8b0e                 mov ecx, dword ptr [esi]
// 007b6e83  8b11                 mov edx, dword ptr [ecx]
// 007b6e85  8b4204               mov eax, dword ptr [edx + 4]
// 007b6e88  ffd0                 call eax
// 007b6e8a  8bc6                 mov eax, esi
// 007b6e8c  8b7604               mov esi, dword ptr [esi + 4]
// 007b6e8f  50                   push eax
// 007b6e90  e8e597eeff           call 0x6a067a
// 007b6e95  83c404               add esp, 4
// 007b6e98  85f6                 test esi, esi
// 007b6e9a  75e5                 jne 0x7b6e81
// 007b6e9c  8b8f18020000         mov ecx, dword ptr [edi + 0x218]
// 007b6ea2  85c9                 test ecx, ecx
// 007b6ea4  7408                 je 0x7b6eae
// 007b6ea6  8b11                 mov edx, dword ptr [ecx]
// 007b6ea8  8b02                 mov eax, dword ptr [edx]
// 007b6eaa  6a01                 push 1
// 007b6eac  ffd0                 call eax
// 007b6eae  c7871802000000000000 mov dword ptr [edi + 0x218], 0
// 007b6eb8  85ed                 test ebp, ebp
// 007b6eba  7410                 je 0x7b6ecc
// 007b6ebc  8d4504               lea eax, [ebp + 4]
// 007b6ebf  50                   push eax
// 007b6ec0  89af18020000         mov dword ptr [edi + 0x218], ebp
// 007b6ec6  ff15b0218000         call dword ptr [0x8021b0]
// 007b6ecc  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b6ed0  c644243401           mov byte ptr [esp + 0x34], 1
// 007b6ed5  85c0                 test eax, eax
// 007b6ed7  7442                 je 0x7b6f1b
// 007b6ed9  83c004               add eax, 4
// 007b6edc  50                   push eax
// 007b6edd  ffd3                 call ebx
// 007b6edf  85c0                 test eax, eax
// 007b6ee1  7538                 jne 0x7b6f1b
// 007b6ee3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b6ee7  8b7108               mov esi, dword ptr [ecx + 8]
// 007b6eea  85f6                 test esi, esi
// 007b6eec  7421                 je 0x7b6f0f
// 007b6eee  8bff                 mov edi, edi
// 007b6ef0  8b0e                 mov ecx, dword ptr [esi]
// 007b6ef2  8b11                 mov edx, dword ptr [ecx]
// 007b6ef4  8b4204               mov eax, dword ptr [edx + 4]
// 007b6ef7  ffd0                 call eax
// 007b6ef9  8bc6                 mov eax, esi
// 007b6efb  8b7604               mov esi, dword ptr [esi + 4]
// 007b6efe  50                   push eax
// 007b6eff  e87697eeff           call 0x6a067a
// 007b6f04  83c404               add esp, 4
// 007b6f07  85f6                 test esi, esi
// 007b6f09  75e5                 jne 0x7b6ef0
// 007b6f0b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b6f0f  85c9                 test ecx, ecx
// 007b6f11  7408                 je 0x7b6f1b
// 007b6f13  8b11                 mov edx, dword ptr [ecx]
// 007b6f15  8b02                 mov eax, dword ptr [edx]
// 007b6f17  6a01                 push 1
// 007b6f19  ffd0                 call eax
// 007b6f1b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b6f1f  8bc7                 mov eax, edi
// 007b6f21  5f                   pop edi
// 007b6f22  5e                   pop esi
// 007b6f23  5d                   pop ebp
// 007b6f24  5b                   pop ebx
// 007b6f25  64890d00000000       mov dword ptr fs:[0], ecx
// 007b6f2c  83c428               add esp, 0x28
// 007b6f2f  c20c00               ret 0xc
// library g3d-6.09-rbx2008/GLG3Dcpp\GFont.cpp (function ??0GFont@G3D@@AAE@PAVRenderDevice@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVBinaryInput@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/GFont.cpp
