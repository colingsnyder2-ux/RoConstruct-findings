// from server: 100% by auto
// roc 2010-06 00782aa0  unit: seg_00780000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00782aa0
//
// 00782aa0  83ec5c               sub esp, 0x5c
// 00782aa3  53                   push ebx
// 00782aa4  55                   push ebp
// 00782aa5  57                   push edi
// 00782aa6  8b3e                 mov edi, dword ptr [esi]
// 00782aa8  33ed                 xor ebp, ebp
// 00782aaa  57                   push edi
// 00782aab  8bde                 mov ebx, esi
// 00782aad  896c2410             mov dword ptr [esp + 0x10], ebp
// 00782ab1  897c2418             mov dword ptr [esp + 0x18], edi
// 00782ab5  e816f9ffff           call 0x7823d0
// 00782aba  8b4638               mov eax, dword ptr [esi + 0x38]
// 00782abd  8b08                 mov ecx, dword ptr [eax]
// 00782abf  83c404               add esp, 4
// 00782ac2  8d51ff               lea edx, [ecx - 1]
// 00782ac5  8910                 mov dword ptr [eax], edx
// 00782ac7  85c9                 test ecx, ecx
// 00782ac9  760f                 jbe 0x782ada
// 00782acb  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00782ace  8b5104               mov edx, dword ptr [ecx + 4]
// 00782ad1  0fb602               movzx eax, byte ptr [edx]
// 00782ad4  42                   inc edx
// 00782ad5  895104               mov dword ptr [ecx + 4], edx
// 00782ad8  eb0c                 jmp 0x782ae6
// 00782ada  8b4638               mov eax, dword ptr [esi + 0x38]
// 00782add  50                   push eax
// 00782ade  e83db8ffff           call 0x77e320
// 00782ae3  83c404               add esp, 4
// 00782ae6  8906                 mov dword ptr [esi], eax
// 00782ae8  83f83d               cmp eax, 0x3d
// 00782aeb  0f85dd000000         jne 0x782bce
// 00782af1  8d68c4               lea ebp, [eax - 0x3c]
// 00782af4  8b7e3c               mov edi, dword ptr [esi + 0x3c]
// 00782af7  8b5704               mov edx, dword ptr [edi + 4]
// 00782afa  8b4708               mov eax, dword ptr [edi + 8]
// 00782afd  8b0e                 mov ecx, dword ptr [esi]
// 00782aff  03d5                 add edx, ebp
// 00782b01  894c2410             mov dword ptr [esp + 0x10], ecx
// 00782b05  3bd0                 cmp edx, eax
// 00782b07  7676                 jbe 0x782b7f
// 00782b09  3dfeffff7f           cmp eax, 0x7ffffffe
// 00782b0e  723d                 jb 0x782b4d
// 00782b10  8b4640               mov eax, dword ptr [esi + 0x40]
// 00782b13  6a50                 push 0x50
// 00782b15  83c010               add eax, 0x10
// 00782b18  50                   push eax
// 00782b19  8d4c2420             lea ecx, [esp + 0x20]
// 00782b1d  51                   push ecx
// 00782b1e  e8dd02fbff           call 0x732e00
// 00782b23  8b5604               mov edx, dword ptr [esi + 4]
// 00782b26  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00782b29  682036a500           push 0xa53620
// 00782b2e  52                   push edx
// 00782b2f  8d44242c             lea eax, [esp + 0x2c]
// 00782b33  50                   push eax
// 00782b34  6808dea400           push 0xa4de08
// 00782b39  51                   push ecx
// 00782b3a  e8a102fbff           call 0x732de0
// 00782b3f  8b5634               mov edx, dword ptr [esi + 0x34]
// 00782b42  6a03                 push 3
// 00782b44  52                   push edx
// 00782b45  e866d5faff           call 0x7300b0
// 00782b4a  83c428               add esp, 0x28
// 00782b4d  8b4708               mov eax, dword ptr [edi + 8]
// 00782b50  8d1c00               lea ebx, [eax + eax]
// 00782b53  8d4b01               lea ecx, [ebx + 1]
// 00782b56  83f9fd               cmp ecx, -3
// 00782b59  7713                 ja 0x782b6e
// 00782b5b  8b17                 mov edx, dword ptr [edi]
// 00782b5d  53                   push ebx
// 00782b5e  50                   push eax
// 00782b5f  8b4634               mov eax, dword ptr [esi + 0x34]
// 00782b62  52                   push edx
// 00782b63  50                   push eax
// 00782b64  e897beffff           call 0x77ea00
// 00782b69  83c410               add esp, 0x10
// 00782b6c  eb0c                 jmp 0x782b7a
// 00782b6e  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00782b71  51                   push ecx
// 00782b72  e869beffff           call 0x77e9e0
// 00782b77  83c404               add esp, 4
// 00782b7a  8907                 mov dword ptr [edi], eax
// 00782b7c  895f08               mov dword ptr [edi + 8], ebx
// 00782b7f  8b4704               mov eax, dword ptr [edi + 4]
// 00782b82  8b17                 mov edx, dword ptr [edi]
// 00782b84  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 00782b88  880c02               mov byte ptr [edx + eax], cl
// 00782b8b  016f04               add dword ptr [edi + 4], ebp
// 00782b8e  8b4638               mov eax, dword ptr [esi + 0x38]
// 00782b91  8b08                 mov ecx, dword ptr [eax]
// 00782b93  8d51ff               lea edx, [ecx - 1]
// 00782b96  8910                 mov dword ptr [eax], edx
// 00782b98  85c9                 test ecx, ecx
// 00782b9a  760f                 jbe 0x782bab
// 00782b9c  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00782b9f  8b5104               mov edx, dword ptr [ecx + 4]
// 00782ba2  0fb602               movzx eax, byte ptr [edx]
// 00782ba5  42                   inc edx
// 00782ba6  895104               mov dword ptr [ecx + 4], edx
// 00782ba9  eb0c                 jmp 0x782bb7
// 00782bab  8b4638               mov eax, dword ptr [esi + 0x38]
// 00782bae  50                   push eax
// 00782baf  e86cb7ffff           call 0x77e320
// 00782bb4  83c404               add esp, 4
// 00782bb7  016c240c             add dword ptr [esp + 0xc], ebp
// 00782bbb  8906                 mov dword ptr [esi], eax
// 00782bbd  83f83d               cmp eax, 0x3d
// 00782bc0  0f842effffff         je 0x782af4
// 00782bc6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00782bca  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00782bce  393e                 cmp dword ptr [esi], edi
// 00782bd0  7509                 jne 0x782bdb
// 00782bd2  5f                   pop edi
// 00782bd3  8bc5                 mov eax, ebp
// 00782bd5  5d                   pop ebp
// 00782bd6  5b                   pop ebx
// 00782bd7  83c45c               add esp, 0x5c
// 00782bda  c3                   ret 
// 00782bdb  83c8ff               or eax, 0xffffffff
// 00782bde  5f                   pop edi
// 00782bdf  2bc5                 sub eax, ebp
// 00782be1  5d                   pop ebp
// 00782be2  5b                   pop ebx
// 00782be3  83c45c               add esp, 0x5c
// 00782be6  c3                   ret 
// library lua-5.1.4/llex.c (function _skip_sep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
