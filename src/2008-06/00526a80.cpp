// from server: 100% by colin
// roc 2008-06 00526a80  unit: G3D::Line  size: 469 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00526a80
//
// 00526a80  83ec2c               sub esp, 0x2c
// 00526a83  53                   push ebx
// 00526a84  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00526a88  55                   push ebp
// 00526a89  57                   push edi
// 00526a8a  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00526a8e  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00526a96  c70300000000         mov dword ptr [ebx], 0
// 00526a9c  85ff                 test edi, edi
// 00526a9e  0f8496010000         je 0x526c3a
// 00526aa4  8bc7                 mov eax, edi
// 00526aa6  8d5001               lea edx, [eax + 1]
// 00526aa9  8da42400000000       lea esp, [esp]
// 00526ab0  8a08                 mov cl, byte ptr [eax]
// 00526ab2  40                   inc eax
// 00526ab3  84c9                 test cl, cl
// 00526ab5  75f9                 jne 0x526ab0
// 00526ab7  2bc2                 sub eax, edx
// 00526ab9  8be8                 mov ebp, eax
// 00526abb  0f8479010000         je 0x526c3a
// 00526ac1  56                   push esi
// 00526ac2  8b742440             mov esi, dword ptr [esp + 0x40]
// 00526ac6  8d4502               lea eax, [ebp + 2]
// 00526ac9  50                   push eax
// 00526aca  56                   push esi
// 00526acb  e8603a0000           call 0x52a530
// 00526ad0  83c408               add esp, 8
// 00526ad3  8903                 mov dword ptr [ebx], eax
// 00526ad5  85c0                 test eax, eax
// 00526ad7  7518                 jne 0x526af1
// 00526ad9  6858b58200           push 0x82b558
// 00526ade  56                   push esi
// 00526adf  e86c2f0000           call 0x529a50
// 00526ae4  83c408               add esp, 8
// 00526ae7  5e                   pop esi
// 00526ae8  5f                   pop edi
// 00526ae9  5d                   pop ebp
// 00526aea  33c0                 xor eax, eax
// 00526aec  5b                   pop ebx
// 00526aed  83c42c               add esp, 0x2c
// 00526af0  c3                   ret 
// 00526af1  803f00               cmp byte ptr [edi], 0
// 00526af4  8bf0                 mov esi, eax
// 00526af6  744a                 je 0x526b42
// 00526af8  8b1d30288000         mov ebx, dword ptr [0x802830]
// 00526afe  8bff                 mov edi, edi
// 00526b00  8a07                 mov al, byte ptr [edi]
// 00526b02  3c20                 cmp al, 0x20
// 00526b04  7c0c                 jl 0x526b12
// 00526b06  3c7e                 cmp al, 0x7e
// 00526b08  7e04                 jle 0x526b0e
// 00526b0a  3ca1                 cmp al, 0xa1
// 00526b0c  7204                 jb 0x526b12
// 00526b0e  8806                 mov byte ptr [esi], al
// 00526b10  eb25                 jmp 0x526b37
// 00526b12  0fbec8               movsx ecx, al
// 00526b15  51                   push ecx
// 00526b16  8d542418             lea edx, [esp + 0x18]
// 00526b1a  6834b58200           push 0x82b534
// 00526b1f  52                   push edx
// 00526b20  ffd3                 call ebx
// 00526b22  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00526b26  8d442420             lea eax, [esp + 0x20]
// 00526b2a  50                   push eax
// 00526b2b  51                   push ecx
// 00526b2c  e81f2f0000           call 0x529a50
// 00526b31  83c414               add esp, 0x14
// 00526b34  c60620               mov byte ptr [esi], 0x20
// 00526b37  47                   inc edi
// 00526b38  46                   inc esi
// 00526b39  803f00               cmp byte ptr [edi], 0
// 00526b3c  75c2                 jne 0x526b00
// 00526b3e  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00526b42  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00526b46  c60600               mov byte ptr [esi], 0
// 00526b49  8b13                 mov edx, dword ptr [ebx]
// 00526b4b  807c2aff20           cmp byte ptr [edx + ebp - 1], 0x20
// 00526b50  8d742aff             lea esi, [edx + ebp - 1]
// 00526b54  7524                 jne 0x526b7a
// 00526b56  680cb58200           push 0x82b50c
// 00526b5b  57                   push edi
// 00526b5c  e8ef2e0000           call 0x529a50
// 00526b61  83c408               add esp, 8
// 00526b64  803e20               cmp byte ptr [esi], 0x20
// 00526b67  7511                 jne 0x526b7a
// 00526b69  8da42400000000       lea esp, [esp]
// 00526b70  c60600               mov byte ptr [esi], 0
// 00526b73  4e                   dec esi
// 00526b74  4d                   dec ebp
// 00526b75  803e20               cmp byte ptr [esi], 0x20
// 00526b78  74f6                 je 0x526b70
// 00526b7a  8b33                 mov esi, dword ptr [ebx]
// 00526b7c  803e20               cmp byte ptr [esi], 0x20
// 00526b7f  751a                 jne 0x526b9b
// 00526b81  68e8b48200           push 0x82b4e8
// 00526b86  57                   push edi
// 00526b87  e8c42e0000           call 0x529a50
// 00526b8c  83c408               add esp, 8
// 00526b8f  803e20               cmp byte ptr [esi], 0x20
// 00526b92  7507                 jne 0x526b9b
// 00526b94  46                   inc esi
// 00526b95  4d                   dec ebp
// 00526b96  803e20               cmp byte ptr [esi], 0x20
// 00526b99  74f9                 je 0x526b94
// 00526b9b  8a06                 mov al, byte ptr [esi]
// 00526b9d  8b0b                 mov ecx, dword ptr [ebx]
// 00526b9f  33d2                 xor edx, edx
// 00526ba1  84c0                 test al, al
// 00526ba3  742a                 je 0x526bcf
// 00526ba5  3c20                 cmp al, 0x20
// 00526ba7  7519                 jne 0x526bc2
// 00526ba9  85d2                 test edx, edx
// 00526bab  750a                 jne 0x526bb7
// 00526bad  8801                 mov byte ptr [ecx], al
// 00526baf  41                   inc ecx
// 00526bb0  ba01000000           mov edx, 1
// 00526bb5  eb10                 jmp 0x526bc7
// 00526bb7  4d                   dec ebp
// 00526bb8  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00526bc0  eb05                 jmp 0x526bc7
// 00526bc2  8801                 mov byte ptr [ecx], al
// 00526bc4  41                   inc ecx
// 00526bc5  33d2                 xor edx, edx
// 00526bc7  8a4601               mov al, byte ptr [esi + 1]
// 00526bca  46                   inc esi
// 00526bcb  84c0                 test al, al
// 00526bcd  75d6                 jne 0x526ba5
// 00526bcf  837c241000           cmp dword ptr [esp + 0x10], 0
// 00526bd4  c60100               mov byte ptr [ecx], 0
// 00526bd7  740e                 je 0x526be7
// 00526bd9  68bcb48200           push 0x82b4bc
// 00526bde  57                   push edi
// 00526bdf  e86c2e0000           call 0x529a50
// 00526be4  83c408               add esp, 8
// 00526be7  85ed                 test ebp, ebp
// 00526be9  7523                 jne 0x526c0e
// 00526beb  8b03                 mov eax, dword ptr [ebx]
// 00526bed  50                   push eax
// 00526bee  57                   push edi
// 00526bef  e80c390000           call 0x52a500
// 00526bf4  68a8b48200           push 0x82b4a8
// 00526bf9  57                   push edi
// 00526bfa  892b                 mov dword ptr [ebx], ebp
// 00526bfc  e84f2e0000           call 0x529a50
// 00526c01  83c410               add esp, 0x10
// 00526c04  5e                   pop esi
// 00526c05  5f                   pop edi
// 00526c06  8bc5                 mov eax, ebp
// 00526c08  5d                   pop ebp
// 00526c09  5b                   pop ebx
// 00526c0a  83c42c               add esp, 0x2c
// 00526c0d  c3                   ret 
// 00526c0e  83fd4f               cmp ebp, 0x4f
// 00526c11  761d                 jbe 0x526c30
// 00526c13  687cb48200           push 0x82b47c
// 00526c18  57                   push edi
// 00526c19  e8322e0000           call 0x529a50
// 00526c1e  83c408               add esp, 8
// 00526c21  c7833c01000000000000 mov dword ptr [ebx + 0x13c], 0
// 00526c2b  bd4f000000           mov ebp, 0x4f
// 00526c30  5e                   pop esi
// 00526c31  5f                   pop edi
// 00526c32  8bc5                 mov eax, ebp
// 00526c34  5d                   pop ebp
// 00526c35  5b                   pop ebx
// 00526c36  83c42c               add esp, 0x2c
// 00526c39  c3                   ret 
// 00526c3a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00526c3e  6868b48200           push 0x82b468
// 00526c43  51                   push ecx
// 00526c44  e8072e0000           call 0x529a50
// 00526c49  83c408               add esp, 8
// 00526c4c  5f                   pop edi
// 00526c4d  5d                   pop ebp
// 00526c4e  33c0                 xor eax, eax
// 00526c50  5b                   pop ebx
// 00526c51  83c42c               add esp, 0x2c
// 00526c54  c3                   ret 
// library g3d-6.09-png-dll/pngwutil.c (function _png_check_keyword)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-png-dll pngwutil.c
