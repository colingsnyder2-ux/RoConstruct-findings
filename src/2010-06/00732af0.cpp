// roc 2010-06 00732af0  unit: lua_exception  size: 743 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00732af0
//
// 00732af0  83ec28               sub esp, 0x28
// 00732af3  53                   push ebx
// 00732af4  56                   push esi
// 00732af5  8b742434             mov esi, dword ptr [esp + 0x34]
// 00732af9  57                   push edi
// 00732afa  8b7e08               mov edi, dword ptr [esi + 8]
// 00732afd  6a00                 push 0
// 00732aff  68fe08a000           push 0xa008fe
// 00732b04  bb01000000           mov ebx, 1
// 00732b09  56                   push esi
// 00732b0a  895c2424             mov dword ptr [esp + 0x24], ebx
// 00732b0e  e8cdb20400           call 0x77dde0
// 00732b13  8907                 mov dword ptr [edi], eax
// 00732b15  c7470804000000       mov dword ptr [edi + 8], 4
// 00732b1c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00732b1f  2b4608               sub eax, dword ptr [esi + 8]
// 00732b22  83c40c               add esp, 0xc
// 00732b25  83f810               cmp eax, 0x10
// 00732b28  7f0a                 jg 0x732b34
// 00732b2a  53                   push ebx
// 00732b2b  56                   push esi
// 00732b2c  e85fd0ffff           call 0x72fb90
// 00732b31  83c408               add esp, 8
// 00732b34  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00732b38  83460810             add dword ptr [esi + 8], 0x10
// 00732b3c  55                   push ebp
// 00732b3d  6a25                 push 0x25
// 00732b3f  57                   push edi
// 00732b40  ff153ca89e00         call dword ptr [0x9ea83c]
// 00732b46  83c408               add esp, 8
// 00732b49  89442418             mov dword ptr [esp + 0x18], eax
// 00732b4d  85c0                 test eax, eax
// 00732b4f  0f84a2010000         je 0x732cf7
// 00732b55  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00732b59  8d69fc               lea ebp, [ecx - 4]
// 00732b5c  83c1f8               add ecx, -8
// 00732b5f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00732b63  eb04                 jmp 0x732b69
// 00732b65  8b442418             mov eax, dword ptr [esp + 0x18]
// 00732b69  8b5e08               mov ebx, dword ptr [esi + 8]
// 00732b6c  2bc7                 sub eax, edi
// 00732b6e  50                   push eax
// 00732b6f  57                   push edi
// 00732b70  56                   push esi
// 00732b71  e86ab20400           call 0x77dde0
// 00732b76  8903                 mov dword ptr [ebx], eax
// 00732b78  c7430804000000       mov dword ptr [ebx + 8], 4
// 00732b7f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00732b82  2b4e08               sub ecx, dword ptr [esi + 8]
// 00732b85  bb10000000           mov ebx, 0x10
// 00732b8a  83c40c               add esp, 0xc
// 00732b8d  3bcb                 cmp ecx, ebx
// 00732b8f  7f0b                 jg 0x732b9c
// 00732b91  6a01                 push 1
// 00732b93  56                   push esi
// 00732b94  e8f7cfffff           call 0x72fb90
// 00732b99  83c408               add esp, 8
// 00732b9c  015e08               add dword ptr [esi + 8], ebx
// 00732b9f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00732ba3  8a4201               mov al, byte ptr [edx + 1]
// 00732ba6  8b7e08               mov edi, dword ptr [esi + 8]
// 00732ba9  0fbec8               movsx ecx, al
// 00732bac  83c1db               add ecx, -0x25
// 00732baf  83f94e               cmp ecx, 0x4e
// 00732bb2  0f87c9000000         ja 0x732c81
// 00732bb8  0fb689882d7300       movzx ecx, byte ptr [ecx + 0x732d88]
// 00732bbf  ff248d6c2d7300       jmp dword ptr [ecx*4 + 0x732d6c]
// 00732bc6  8b5504               mov edx, dword ptr [ebp + 4]
// 00732bc9  8344241404           add dword ptr [esp + 0x14], 4
// 00732bce  83c504               add ebp, 4
// 00732bd1  85d2                 test edx, edx
// 00732bd3  7505                 jne 0x732bda
// 00732bd5  ba90dda400           mov edx, 0xa4dd90
// 00732bda  e8c1feffff           call 0x732aa0
// 00732bdf  e9eb000000           jmp 0x732ccf
// 00732be4  8a5504               mov dl, byte ptr [ebp + 4]
// 00732be7  8344241404           add dword ptr [esp + 0x14], 4
// 00732bec  83c504               add ebp, 4
// 00732bef  8854243c             mov byte ptr [esp + 0x3c], dl
// 00732bf3  8d54243c             lea edx, [esp + 0x3c]
// 00732bf7  c644243d00           mov byte ptr [esp + 0x3d], 0
// 00732bfc  e89ffeffff           call 0x732aa0
// 00732c01  e9c9000000           jmp 0x732ccf
// 00732c06  db4504               fild dword ptr [ebp + 4]
// 00732c09  8344241404           add dword ptr [esp + 0x14], 4
// 00732c0e  83c504               add ebp, 4
// 00732c11  c7470803000000       mov dword ptr [edi + 8], 3
// 00732c18  dd1f                 fstp qword ptr [edi]
// 00732c1a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00732c1d  2b4608               sub eax, dword ptr [esi + 8]
// 00732c20  3bc3                 cmp eax, ebx
// 00732c22  e998000000           jmp 0x732cbf
// 00732c27  8b442414             mov eax, dword ptr [esp + 0x14]
// 00732c2b  dd4008               fld qword ptr [eax + 8]
// 00732c2e  83c008               add eax, 8
// 00732c31  dd1f                 fstp qword ptr [edi]
// 00732c33  c7470803000000       mov dword ptr [edi + 8], 3
// 00732c3a  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00732c3d  2b4e08               sub ecx, dword ptr [esi + 8]
// 00732c40  83c508               add ebp, 8
// 00732c43  89442414             mov dword ptr [esp + 0x14], eax
// 00732c47  3bcb                 cmp ecx, ebx
// 00732c49  eb74                 jmp 0x732cbf
// 00732c4b  8b5504               mov edx, dword ptr [ebp + 4]
// 00732c4e  8344241404           add dword ptr [esp + 0x14], 4
// 00732c53  83c504               add ebp, 4
// 00732c56  52                   push edx
// 00732c57  8d442424             lea eax, [esp + 0x24]
// 00732c5b  688cdda400           push 0xa4dd8c
// 00732c60  50                   push eax
// 00732c61  ff1564a89e00         call dword ptr [0x9ea864]
// 00732c67  83c40c               add esp, 0xc
// 00732c6a  8d542420             lea edx, [esp + 0x20]
// 00732c6e  e82dfeffff           call 0x732aa0
// 00732c73  eb5a                 jmp 0x732ccf
// 00732c75  ba88dda400           mov edx, 0xa4dd88
// 00732c7a  e821feffff           call 0x732aa0
// 00732c7f  eb4e                 jmp 0x732ccf
// 00732c81  88442411             mov byte ptr [esp + 0x11], al
// 00732c85  8d442410             lea eax, [esp + 0x10]
// 00732c89  c644241025           mov byte ptr [esp + 0x10], 0x25
// 00732c8e  c644241200           mov byte ptr [esp + 0x12], 0
// 00732c93  8d5001               lea edx, [eax + 1]
// 00732c96  8a08                 mov cl, byte ptr [eax]
// 00732c98  40                   inc eax
// 00732c99  84c9                 test cl, cl
// 00732c9b  75f9                 jne 0x732c96
// 00732c9d  2bc2                 sub eax, edx
// 00732c9f  50                   push eax
// 00732ca0  8d4c2414             lea ecx, [esp + 0x14]
// 00732ca4  51                   push ecx
// 00732ca5  56                   push esi
// 00732ca6  e835b10400           call 0x77dde0
// 00732cab  8907                 mov dword ptr [edi], eax
// 00732cad  c7470804000000       mov dword ptr [edi + 8], 4
// 00732cb4  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00732cb7  2b5608               sub edx, dword ptr [esi + 8]
// 00732cba  83c40c               add esp, 0xc
// 00732cbd  3bd3                 cmp edx, ebx
// 00732cbf  7f0b                 jg 0x732ccc
// 00732cc1  6a01                 push 1
// 00732cc3  56                   push esi
// 00732cc4  e8c7ceffff           call 0x72fb90
// 00732cc9  83c408               add esp, 8
// 00732ccc  015e08               add dword ptr [esi + 8], ebx
// 00732ccf  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00732cd3  8344241c02           add dword ptr [esp + 0x1c], 2
// 00732cd8  83c702               add edi, 2
// 00732cdb  6a25                 push 0x25
// 00732cdd  57                   push edi
// 00732cde  ff153ca89e00         call dword ptr [0x9ea83c]
// 00732ce4  83c408               add esp, 8
// 00732ce7  89442418             mov dword ptr [esp + 0x18], eax
// 00732ceb  85c0                 test eax, eax
// 00732ced  0f8572feffff         jne 0x732b65
// 00732cf3  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00732cf7  8b6e08               mov ebp, dword ptr [esi + 8]
// 00732cfa  8bc7                 mov eax, edi
// 00732cfc  8d5001               lea edx, [eax + 1]
// 00732cff  90                   nop 
// 00732d00  8a08                 mov cl, byte ptr [eax]
// 00732d02  40                   inc eax
// 00732d03  84c9                 test cl, cl
// 00732d05  75f9                 jne 0x732d00
// 00732d07  2bc2                 sub eax, edx
// 00732d09  50                   push eax
// 00732d0a  57                   push edi
// 00732d0b  56                   push esi
// 00732d0c  e8cfb00400           call 0x77dde0
// 00732d11  894500               mov dword ptr [ebp], eax
// 00732d14  c7450804000000       mov dword ptr [ebp + 8], 4
// 00732d1b  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00732d1e  2b4608               sub eax, dword ptr [esi + 8]
// 00732d21  83c40c               add esp, 0xc
// 00732d24  83f810               cmp eax, 0x10
// 00732d27  5d                   pop ebp
// 00732d28  7f0b                 jg 0x732d35
// 00732d2a  6a01                 push 1
// 00732d2c  56                   push esi
// 00732d2d  e85eceffff           call 0x72fb90
// 00732d32  83c408               add esp, 8
// 00732d35  83460810             add dword ptr [esi + 8], 0x10
// 00732d39  8b4608               mov eax, dword ptr [esi + 8]
// 00732d3c  2b460c               sub eax, dword ptr [esi + 0xc]
// 00732d3f  8d4b01               lea ecx, [ebx + 1]
// 00732d42  c1f804               sar eax, 4
// 00732d45  48                   dec eax
// 00732d46  50                   push eax
// 00732d47  51                   push ecx
// 00732d48  56                   push esi
// 00732d49  e8128c0400           call 0x77b960
// 00732d4e  f7db                 neg ebx
// 00732d50  c1e304               shl ebx, 4
// 00732d53  015e08               add dword ptr [esi + 8], ebx
// 00732d56  8b7608               mov esi, dword ptr [esi + 8]
// 00732d59  8b46f0               mov eax, dword ptr [esi - 0x10]
// 00732d5c  83c40c               add esp, 0xc
// 00732d5f  5f                   pop edi
// 00732d60  5e                   pop esi
// 00732d61  83c010               add eax, 0x10
// 00732d64  5b                   pop ebx
// 00732d65  83c428               add esp, 0x28
// 00732d68  c3                   ret 
// 00732d69  8d4900               lea ecx, [ecx]
// 00732d6c  752c                 jne 0x732d9a
// 00732d6e  7300                 jae 0x732d70
// 00732d70  e42b                 in al, 0x2b
// 00732d72  7300                 jae 0x732d74
// 00732d74  06                   push es
// 00732d75  2c73                 sub al, 0x73
// 00732d77  0027                 add byte ptr [edi], ah
// 00732d79  2c73                 sub al, 0x73
// 00732d7b  004b2c               add byte ptr [ebx + 0x2c], cl
// 00732d7e  7300                 jae 0x732d80
// copied from an identical function in another client (function _luaO_pushvfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lobject.c