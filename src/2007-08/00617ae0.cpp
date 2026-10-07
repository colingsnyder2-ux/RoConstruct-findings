// roc 2007-08 00617ae0  unit: seg_00610000  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00617ae0
//
// 00617ae0  83ec5c               sub esp, 0x5c
// 00617ae3  53                   push ebx
// 00617ae4  55                   push ebp
// 00617ae5  57                   push edi
// 00617ae6  8b3e                 mov edi, dword ptr [esi]
// 00617ae8  33ed                 xor ebp, ebp
// 00617aea  57                   push edi
// 00617aeb  8bde                 mov ebx, esi
// 00617aed  896c2410             mov dword ptr [esp + 0x10], ebp
// 00617af1  897c2418             mov dword ptr [esp + 0x18], edi
// 00617af5  e806f9ffff           call 0x617400
// 00617afa  8b4638               mov eax, dword ptr [esi + 0x38]
// 00617afd  8b08                 mov ecx, dword ptr [eax]
// 00617aff  83c404               add esp, 4
// 00617b02  85c9                 test ecx, ecx
// 00617b04  8d51ff               lea edx, [ecx - 1]
// 00617b07  8910                 mov dword ptr [eax], edx
// 00617b09  7611                 jbe 0x617b1c
// 00617b0b  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00617b0e  8b5104               mov edx, dword ptr [ecx + 4]
// 00617b11  0fb602               movzx eax, byte ptr [edx]
// 00617b14  83c201               add edx, 1
// 00617b17  895104               mov dword ptr [ecx + 4], edx
// 00617b1a  eb0c                 jmp 0x617b28
// 00617b1c  8b4638               mov eax, dword ptr [esi + 0x38]
// 00617b1f  50                   push eax
// 00617b20  e8cbb7ffff           call 0x6132f0
// 00617b25  83c404               add esp, 4
// 00617b28  83f83d               cmp eax, 0x3d
// 00617b2b  8906                 mov dword ptr [esi], eax
// 00617b2d  0f85e8000000         jne 0x617c1b
// 00617b33  bd01000000           mov ebp, 1
// 00617b38  eb06                 jmp 0x617b40
// 00617b3a  8d9b00000000         lea ebx, [ebx]
// 00617b40  8b7e3c               mov edi, dword ptr [esi + 0x3c]
// 00617b43  8b5704               mov edx, dword ptr [edi + 4]
// 00617b46  8b4708               mov eax, dword ptr [edi + 8]
// 00617b49  8b0e                 mov ecx, dword ptr [esi]
// 00617b4b  03d5                 add edx, ebp
// 00617b4d  3bd0                 cmp edx, eax
// 00617b4f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00617b53  7676                 jbe 0x617bcb
// 00617b55  3dfeffff7f           cmp eax, 0x7ffffffe
// 00617b5a  723d                 jb 0x617b99
// 00617b5c  8b4640               mov eax, dword ptr [esi + 0x40]
// 00617b5f  6a50                 push 0x50
// 00617b61  83c010               add eax, 0x10
// 00617b64  50                   push eax
// 00617b65  8d4c2420             lea ecx, [esp + 0x20]
// 00617b69  51                   push ecx
// 00617b6a  e84173ffff           call 0x60eeb0
// 00617b6f  8b5604               mov edx, dword ptr [esi + 4]
// 00617b72  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00617b75  6830397c00           push 0x7c3930
// 00617b7a  52                   push edx
// 00617b7b  8d44242c             lea eax, [esp + 0x2c]
// 00617b7f  50                   push eax
// 00617b80  6878977b00           push 0x7b9778
// 00617b85  51                   push ecx
// 00617b86  e80573ffff           call 0x60ee90
// 00617b8b  8b5634               mov edx, dword ptr [esi + 0x34]
// 00617b8e  6a03                 push 3
// 00617b90  52                   push edx
// 00617b91  e88ae4faff           call 0x5c6020
// 00617b96  83c428               add esp, 0x28
// 00617b99  8b4708               mov eax, dword ptr [edi + 8]
// 00617b9c  8d1c00               lea ebx, [eax + eax]
// 00617b9f  8d4b01               lea ecx, [ebx + 1]
// 00617ba2  83f9fd               cmp ecx, -3
// 00617ba5  7713                 ja 0x617bba
// 00617ba7  8b17                 mov edx, dword ptr [edi]
// 00617ba9  53                   push ebx
// 00617baa  50                   push eax
// 00617bab  8b4634               mov eax, dword ptr [esi + 0x34]
// 00617bae  52                   push edx
// 00617baf  50                   push eax
// 00617bb0  e83bbeffff           call 0x6139f0
// 00617bb5  83c410               add esp, 0x10
// 00617bb8  eb0c                 jmp 0x617bc6
// 00617bba  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00617bbd  51                   push ecx
// 00617bbe  e80dbeffff           call 0x6139d0
// 00617bc3  83c404               add esp, 4
// 00617bc6  8907                 mov dword ptr [edi], eax
// 00617bc8  895f08               mov dword ptr [edi + 8], ebx
// 00617bcb  8b4704               mov eax, dword ptr [edi + 4]
// 00617bce  8b17                 mov edx, dword ptr [edi]
// 00617bd0  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 00617bd4  880c02               mov byte ptr [edx + eax], cl
// 00617bd7  016f04               add dword ptr [edi + 4], ebp
// 00617bda  8b4638               mov eax, dword ptr [esi + 0x38]
// 00617bdd  8b08                 mov ecx, dword ptr [eax]
// 00617bdf  85c9                 test ecx, ecx
// 00617be1  8d51ff               lea edx, [ecx - 1]
// 00617be4  8910                 mov dword ptr [eax], edx
// 00617be6  7610                 jbe 0x617bf8
// 00617be8  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00617beb  8b5104               mov edx, dword ptr [ecx + 4]
// 00617bee  0fb602               movzx eax, byte ptr [edx]
// 00617bf1  03d5                 add edx, ebp
// 00617bf3  895104               mov dword ptr [ecx + 4], edx
// 00617bf6  eb0c                 jmp 0x617c04
// 00617bf8  8b4638               mov eax, dword ptr [esi + 0x38]
// 00617bfb  50                   push eax
// 00617bfc  e8efb6ffff           call 0x6132f0
// 00617c01  83c404               add esp, 4
// 00617c04  016c240c             add dword ptr [esp + 0xc], ebp
// 00617c08  83f83d               cmp eax, 0x3d
// 00617c0b  8906                 mov dword ptr [esi], eax
// 00617c0d  0f842dffffff         je 0x617b40
// 00617c13  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00617c17  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00617c1b  393e                 cmp dword ptr [esi], edi
// 00617c1d  7509                 jne 0x617c28
// 00617c1f  5f                   pop edi
// 00617c20  8bc5                 mov eax, ebp
// 00617c22  5d                   pop ebp
// 00617c23  5b                   pop ebx
// 00617c24  83c45c               add esp, 0x5c
// 00617c27  c3                   ret 
// 00617c28  83c8ff               or eax, 0xffffffff
// 00617c2b  5f                   pop edi
// 00617c2c  2bc5                 sub eax, ebp
// 00617c2e  5d                   pop ebp
// 00617c2f  5b                   pop ebx
// 00617c30  83c45c               add esp, 0x5c
// 00617c33  c3                   ret 
// library lua-5.1.4/llex.c (function _skip_sep)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
