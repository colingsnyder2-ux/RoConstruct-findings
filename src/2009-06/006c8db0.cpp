// roc 2009-06 006c8db0  unit: seg_006c0000  size: 743 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c8db0
//
// 006c8db0  83ec28               sub esp, 0x28
// 006c8db3  53                   push ebx
// 006c8db4  56                   push esi
// 006c8db5  8b742434             mov esi, dword ptr [esp + 0x34]
// 006c8db9  57                   push edi
// 006c8dba  8b7e08               mov edi, dword ptr [esi + 8]
// 006c8dbd  6a00                 push 0
// 006c8dbf  6816d28a00           push 0x8ad216
// 006c8dc4  bb01000000           mov ebx, 1
// 006c8dc9  56                   push esi
// 006c8dca  895c2424             mov dword ptr [esp + 0x24], ebx
// 006c8dce  e86d3d0200           call 0x6ecb40
// 006c8dd3  8907                 mov dword ptr [edi], eax
// 006c8dd5  c7470804000000       mov dword ptr [edi + 8], 4
// 006c8ddc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006c8ddf  2b4608               sub eax, dword ptr [esi + 8]
// 006c8de2  83c40c               add esp, 0xc
// 006c8de5  83f810               cmp eax, 0x10
// 006c8de8  7f0a                 jg 0x6c8df4
// 006c8dea  53                   push ebx
// 006c8deb  56                   push esi
// 006c8dec  e8cf9fffff           call 0x6c2dc0
// 006c8df1  83c408               add esp, 8
// 006c8df4  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 006c8df8  83460810             add dword ptr [esi + 8], 0x10
// 006c8dfc  55                   push ebp
// 006c8dfd  6a25                 push 0x25
// 006c8dff  57                   push edi
// 006c8e00  ff1500e88900         call dword ptr [0x89e800]
// 006c8e06  83c408               add esp, 8
// 006c8e09  89442418             mov dword ptr [esp + 0x18], eax
// 006c8e0d  85c0                 test eax, eax
// 006c8e0f  0f84a2010000         je 0x6c8fb7
// 006c8e15  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006c8e19  8d69fc               lea ebp, [ecx - 4]
// 006c8e1c  83c1f8               add ecx, -8
// 006c8e1f  894c2414             mov dword ptr [esp + 0x14], ecx
// 006c8e23  eb04                 jmp 0x6c8e29
// 006c8e25  8b442418             mov eax, dword ptr [esp + 0x18]
// 006c8e29  8b5e08               mov ebx, dword ptr [esi + 8]
// 006c8e2c  2bc7                 sub eax, edi
// 006c8e2e  50                   push eax
// 006c8e2f  57                   push edi
// 006c8e30  56                   push esi
// 006c8e31  e80a3d0200           call 0x6ecb40
// 006c8e36  8903                 mov dword ptr [ebx], eax
// 006c8e38  c7430804000000       mov dword ptr [ebx + 8], 4
// 006c8e3f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006c8e42  2b4e08               sub ecx, dword ptr [esi + 8]
// 006c8e45  bb10000000           mov ebx, 0x10
// 006c8e4a  83c40c               add esp, 0xc
// 006c8e4d  3bcb                 cmp ecx, ebx
// 006c8e4f  7f0b                 jg 0x6c8e5c
// 006c8e51  6a01                 push 1
// 006c8e53  56                   push esi
// 006c8e54  e8679fffff           call 0x6c2dc0
// 006c8e59  83c408               add esp, 8
// 006c8e5c  015e08               add dword ptr [esi + 8], ebx
// 006c8e5f  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c8e63  8a4201               mov al, byte ptr [edx + 1]
// 006c8e66  8b7e08               mov edi, dword ptr [esi + 8]
// 006c8e69  0fbec8               movsx ecx, al
// 006c8e6c  83c1db               add ecx, -0x25
// 006c8e6f  83f94e               cmp ecx, 0x4e
// 006c8e72  0f87c9000000         ja 0x6c8f41
// 006c8e78  0fb68948906c00       movzx ecx, byte ptr [ecx + 0x6c9048]
// 006c8e7f  ff248d2c906c00       jmp dword ptr [ecx*4 + 0x6c902c]
// 006c8e86  8b5504               mov edx, dword ptr [ebp + 4]
// 006c8e89  8344241404           add dword ptr [esp + 0x14], 4
// 006c8e8e  83c504               add ebp, 4
// 006c8e91  85d2                 test edx, edx
// 006c8e93  7505                 jne 0x6c8e9a
// 006c8e95  ba8cc48e00           mov edx, 0x8ec48c
// 006c8e9a  e8c1feffff           call 0x6c8d60
// 006c8e9f  e9eb000000           jmp 0x6c8f8f
// 006c8ea4  8a5504               mov dl, byte ptr [ebp + 4]
// 006c8ea7  8344241404           add dword ptr [esp + 0x14], 4
// 006c8eac  83c504               add ebp, 4
// 006c8eaf  8854243c             mov byte ptr [esp + 0x3c], dl
// 006c8eb3  8d54243c             lea edx, [esp + 0x3c]
// 006c8eb7  c644243d00           mov byte ptr [esp + 0x3d], 0
// 006c8ebc  e89ffeffff           call 0x6c8d60
// 006c8ec1  e9c9000000           jmp 0x6c8f8f
// 006c8ec6  db4504               fild dword ptr [ebp + 4]
// 006c8ec9  8344241404           add dword ptr [esp + 0x14], 4
// 006c8ece  83c504               add ebp, 4
// 006c8ed1  c7470803000000       mov dword ptr [edi + 8], 3
// 006c8ed8  dd1f                 fstp qword ptr [edi]
// 006c8eda  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006c8edd  2b4608               sub eax, dword ptr [esi + 8]
// 006c8ee0  3bc3                 cmp eax, ebx
// 006c8ee2  e998000000           jmp 0x6c8f7f
// 006c8ee7  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c8eeb  dd4008               fld qword ptr [eax + 8]
// 006c8eee  83c008               add eax, 8
// 006c8ef1  dd1f                 fstp qword ptr [edi]
// 006c8ef3  c7470803000000       mov dword ptr [edi + 8], 3
// 006c8efa  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006c8efd  2b4e08               sub ecx, dword ptr [esi + 8]
// 006c8f00  83c508               add ebp, 8
// 006c8f03  89442414             mov dword ptr [esp + 0x14], eax
// 006c8f07  3bcb                 cmp ecx, ebx
// 006c8f09  eb74                 jmp 0x6c8f7f
// 006c8f0b  8b5504               mov edx, dword ptr [ebp + 4]
// 006c8f0e  8344241404           add dword ptr [esp + 0x14], 4
// 006c8f13  83c504               add ebp, 4
// 006c8f16  52                   push edx
// 006c8f17  8d442424             lea eax, [esp + 0x24]
// 006c8f1b  6888c48e00           push 0x8ec488
// 006c8f20  50                   push eax
// 006c8f21  ff1538e98900         call dword ptr [0x89e938]
// 006c8f27  83c40c               add esp, 0xc
// 006c8f2a  8d542420             lea edx, [esp + 0x20]
// 006c8f2e  e82dfeffff           call 0x6c8d60
// 006c8f33  eb5a                 jmp 0x6c8f8f
// 006c8f35  ba84b58d00           mov edx, 0x8db584
// 006c8f3a  e821feffff           call 0x6c8d60
// 006c8f3f  eb4e                 jmp 0x6c8f8f
// 006c8f41  88442411             mov byte ptr [esp + 0x11], al
// 006c8f45  8d442410             lea eax, [esp + 0x10]
// 006c8f49  c644241025           mov byte ptr [esp + 0x10], 0x25
// 006c8f4e  c644241200           mov byte ptr [esp + 0x12], 0
// 006c8f53  8d5001               lea edx, [eax + 1]
// 006c8f56  8a08                 mov cl, byte ptr [eax]
// 006c8f58  40                   inc eax
// 006c8f59  84c9                 test cl, cl
// 006c8f5b  75f9                 jne 0x6c8f56
// 006c8f5d  2bc2                 sub eax, edx
// 006c8f5f  50                   push eax
// 006c8f60  8d4c2414             lea ecx, [esp + 0x14]
// 006c8f64  51                   push ecx
// 006c8f65  56                   push esi
// 006c8f66  e8d53b0200           call 0x6ecb40
// 006c8f6b  8907                 mov dword ptr [edi], eax
// 006c8f6d  c7470804000000       mov dword ptr [edi + 8], 4
// 006c8f74  8b561c               mov edx, dword ptr [esi + 0x1c]
// 006c8f77  2b5608               sub edx, dword ptr [esi + 8]
// 006c8f7a  83c40c               add esp, 0xc
// 006c8f7d  3bd3                 cmp edx, ebx
// 006c8f7f  7f0b                 jg 0x6c8f8c
// 006c8f81  6a01                 push 1
// 006c8f83  56                   push esi
// 006c8f84  e8379effff           call 0x6c2dc0
// 006c8f89  83c408               add esp, 8
// 006c8f8c  015e08               add dword ptr [esi + 8], ebx
// 006c8f8f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006c8f93  8344241c02           add dword ptr [esp + 0x1c], 2
// 006c8f98  83c702               add edi, 2
// 006c8f9b  6a25                 push 0x25
// 006c8f9d  57                   push edi
// 006c8f9e  ff1500e88900         call dword ptr [0x89e800]
// 006c8fa4  83c408               add esp, 8
// 006c8fa7  89442418             mov dword ptr [esp + 0x18], eax
// 006c8fab  85c0                 test eax, eax
// 006c8fad  0f8572feffff         jne 0x6c8e25
// 006c8fb3  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006c8fb7  8b6e08               mov ebp, dword ptr [esi + 8]
// 006c8fba  8bc7                 mov eax, edi
// 006c8fbc  8d5001               lea edx, [eax + 1]
// 006c8fbf  90                   nop 
// 006c8fc0  8a08                 mov cl, byte ptr [eax]
// 006c8fc2  40                   inc eax
// 006c8fc3  84c9                 test cl, cl
// 006c8fc5  75f9                 jne 0x6c8fc0
// 006c8fc7  2bc2                 sub eax, edx
// 006c8fc9  50                   push eax
// 006c8fca  57                   push edi
// 006c8fcb  56                   push esi
// 006c8fcc  e86f3b0200           call 0x6ecb40
// 006c8fd1  894500               mov dword ptr [ebp], eax
// 006c8fd4  c7450804000000       mov dword ptr [ebp + 8], 4
// 006c8fdb  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006c8fde  2b4608               sub eax, dword ptr [esi + 8]
// 006c8fe1  83c40c               add esp, 0xc
// 006c8fe4  83f810               cmp eax, 0x10
// 006c8fe7  5d                   pop ebp
// 006c8fe8  7f0b                 jg 0x6c8ff5
// 006c8fea  6a01                 push 1
// 006c8fec  56                   push esi
// 006c8fed  e8ce9dffff           call 0x6c2dc0
// 006c8ff2  83c408               add esp, 8
// 006c8ff5  83460810             add dword ptr [esi + 8], 0x10
// 006c8ff9  8b4608               mov eax, dword ptr [esi + 8]
// 006c8ffc  2b460c               sub eax, dword ptr [esi + 0xc]
// 006c8fff  8d4b01               lea ecx, [ebx + 1]
// 006c9002  c1f804               sar eax, 4
// 006c9005  48                   dec eax
// 006c9006  50                   push eax
// 006c9007  51                   push ecx
// 006c9008  56                   push esi
// 006c9009  e8c2160200           call 0x6ea6d0
// 006c900e  f7db                 neg ebx
// 006c9010  c1e304               shl ebx, 4
// 006c9013  015e08               add dword ptr [esi + 8], ebx
// 006c9016  8b7608               mov esi, dword ptr [esi + 8]
// 006c9019  8b46f0               mov eax, dword ptr [esi - 0x10]
// 006c901c  83c40c               add esp, 0xc
// 006c901f  5f                   pop edi
// 006c9020  5e                   pop esi
// 006c9021  83c010               add eax, 0x10
// 006c9024  5b                   pop ebx
// 006c9025  83c428               add esp, 0x28
// 006c9028  c3                   ret 
// 006c9029  8d4900               lea ecx, [ecx]
// 006c902c  358f6c00a4           xor eax, 0xa4006c8f
// 006c9031  8e6c00c6             mov gs, word ptr [eax + eax - 0x3a]
// 006c9035  8e6c00e7             mov gs, word ptr [eax + eax - 0x19]
// 006c9039  8e6c000b             mov gs, word ptr [eax + eax + 0xb]
// copied from an identical function in another client (function _luaO_pushvfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lobject.c