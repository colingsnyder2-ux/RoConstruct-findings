// roc 2008-06 006629c0  unit: RBX::FilterStairs  size: 619 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006629c0
//
// 006629c0  83ec24               sub esp, 0x24
// 006629c3  8b4330               mov eax, dword ptr [ebx + 0x30]
// 006629c6  55                   push ebp
// 006629c7  56                   push esi
// 006629c8  57                   push edi
// 006629c9  6a0f                 push 0xf
// 006629cb  89442414             mov dword ptr [esp + 0x14], eax
// 006629cf  8b4024               mov eax, dword ptr [eax + 0x24]
// 006629d2  68ecc68400           push 0x84c6ec
// 006629d7  53                   push ebx
// 006629d8  89442420             mov dword ptr [esp + 0x20], eax
// 006629dc  e84f180000           call 0x664230
// 006629e1  8b7330               mov esi, dword ptr [ebx + 0x30]
// 006629e4  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006629e8  41                   inc ecx
// 006629e9  83c40c               add esp, 0xc
// 006629ec  81f9c8000000         cmp ecx, 0xc8
// 006629f2  8bf8                 mov edi, eax
// 006629f4  7e0f                 jle 0x662a05
// 006629f6  b964c58400           mov ecx, 0x84c564
// 006629fb  bac8000000           mov edx, 0xc8
// 00662a00  e8cbddffff           call 0x6607d0
// 00662a05  57                   push edi
// 00662a06  53                   push ebx
// 00662a07  e804dfffff           call 0x660910
// 00662a0c  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00662a10  6a0b                 push 0xb
// 00662a12  68e0c68400           push 0x84c6e0
// 00662a17  53                   push ebx
// 00662a18  66898456ac000000     mov word ptr [esi + edx*2 + 0xac], ax
// 00662a20  e80b180000           call 0x664230
// 00662a25  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00662a28  8bf8                 mov edi, eax
// 00662a2a  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 00662a2e  83c002               add eax, 2
// 00662a31  83c414               add esp, 0x14
// 00662a34  3dc8000000           cmp eax, 0xc8
// 00662a39  7e0f                 jle 0x662a4a
// 00662a3b  b964c58400           mov ecx, 0x84c564
// 00662a40  bac8000000           mov edx, 0xc8
// 00662a45  e886ddffff           call 0x6607d0
// 00662a4a  57                   push edi
// 00662a4b  53                   push ebx
// 00662a4c  e8bfdeffff           call 0x660910
// 00662a51  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00662a55  6a0d                 push 0xd
// 00662a57  68d0c68400           push 0x84c6d0
// 00662a5c  53                   push ebx
// 00662a5d  6689844eae000000     mov word ptr [esi + ecx*2 + 0xae], ax
// 00662a65  e8c6170000           call 0x664230
// 00662a6a  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00662a6d  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00662a71  83c203               add edx, 3
// 00662a74  83c414               add esp, 0x14
// 00662a77  81fac8000000         cmp edx, 0xc8
// 00662a7d  8bf8                 mov edi, eax
// 00662a7f  7e0f                 jle 0x662a90
// 00662a81  b964c58400           mov ecx, 0x84c564
// 00662a86  bac8000000           mov edx, 0xc8
// 00662a8b  e840ddffff           call 0x6607d0
// 00662a90  57                   push edi
// 00662a91  53                   push ebx
// 00662a92  e879deffff           call 0x660910
// 00662a97  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00662a9b  6689844eb0000000     mov word ptr [esi + ecx*2 + 0xb0], ax
// 00662aa3  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00662aa6  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00662aaa  83c204               add edx, 4
// 00662aad  83c408               add esp, 8
// 00662ab0  81fac8000000         cmp edx, 0xc8
// 00662ab6  7e0f                 jle 0x662ac7
// 00662ab8  b964c58400           mov ecx, 0x84c564
// 00662abd  bac8000000           mov edx, 0xc8
// 00662ac2  e809ddffff           call 0x6607d0
// 00662ac7  8b442434             mov eax, dword ptr [esp + 0x34]
// 00662acb  50                   push eax
// 00662acc  53                   push ebx
// 00662acd  e83edeffff           call 0x660910
// 00662ad2  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00662ad6  83c408               add esp, 8
// 00662ad9  6689844eb2000000     mov word ptr [esi + ecx*2 + 0xb2], ax
// 00662ae1  bf04000000           mov edi, 4
// 00662ae6  837b102c             cmp dword ptr [ebx + 0x10], 0x2c
// 00662aea  0f85ba000000         jne 0x662baa
// 00662af0  53                   push ebx
// 00662af1  e80a2b0000           call 0x665600
// 00662af6  83c404               add esp, 4
// 00662af9  817b101d010000       cmp dword ptr [ebx + 0x10], 0x11d
// 00662b00  7424                 je 0x662b26
// 00662b02  681d010000           push 0x11d
// 00662b07  53                   push ebx
// 00662b08  e803160000           call 0x664110
// 00662b0d  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00662b10  50                   push eax
// 00662b11  68c0c48400           push 0x84c4c0
// 00662b16  52                   push edx
// 00662b17  e8a4fffbff           call 0x622ac0
// 00662b1c  50                   push eax
// 00662b1d  53                   push ebx
// 00662b1e  e8ed160000           call 0x664210
// 00662b23  83c41c               add esp, 0x1c
// 00662b26  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 00662b29  53                   push ebx
// 00662b2a  e8d12a0000           call 0x665600
// 00662b2f  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00662b32  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 00662b36  8d4c3801             lea ecx, [eax + edi + 1]
// 00662b3a  83c404               add esp, 4
// 00662b3d  81f9c8000000         cmp ecx, 0xc8
// 00662b43  7e47                 jle 0x662b8c
// 00662b45  8b16                 mov edx, dword ptr [esi]
// 00662b47  8b423c               mov eax, dword ptr [edx + 0x3c]
// 00662b4a  6864c58400           push 0x84c564
// 00662b4f  68c8000000           push 0xc8
// 00662b54  85c0                 test eax, eax
// 00662b56  7513                 jne 0x662b6b
// 00662b58  8b4610               mov eax, dword ptr [esi + 0x10]
// 00662b5b  68f8c48400           push 0x84c4f8
// 00662b60  50                   push eax
// 00662b61  e85afffbff           call 0x622ac0
// 00662b66  83c410               add esp, 0x10
// 00662b69  eb12                 jmp 0x662b7d
// 00662b6b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00662b6e  50                   push eax
// 00662b6f  68d0c48400           push 0x84c4d0
// 00662b74  51                   push ecx
// 00662b75  e846fffbff           call 0x622ac0
// 00662b7a  83c414               add esp, 0x14
// 00662b7d  8b560c               mov edx, dword ptr [esi + 0xc]
// 00662b80  6a00                 push 0
// 00662b82  50                   push eax
// 00662b83  52                   push edx
// 00662b84  e8e7150000           call 0x664170
// 00662b89  83c40c               add esp, 0xc
// 00662b8c  55                   push ebp
// 00662b8d  53                   push ebx
// 00662b8e  e87dddffff           call 0x660910
// 00662b93  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00662b97  03cf                 add ecx, edi
// 00662b99  83c408               add esp, 8
// 00662b9c  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 00662ba4  47                   inc edi
// 00662ba5  e93cffffff           jmp 0x662ae6
// 00662baa  817b100b010000       cmp dword ptr [ebx + 0x10], 0x10b
// 00662bb1  897c240c             mov dword ptr [esp + 0xc], edi
// 00662bb5  7424                 je 0x662bdb
// 00662bb7  680b010000           push 0x10b
// 00662bbc  53                   push ebx
// 00662bbd  e84e150000           call 0x664110
// 00662bc2  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00662bc5  50                   push eax
// 00662bc6  68c0c48400           push 0x84c4c0
// 00662bcb  52                   push edx
// 00662bcc  e8effefbff           call 0x622ac0
// 00662bd1  50                   push eax
// 00662bd2  53                   push ebx
// 00662bd3  e838160000           call 0x664210
// 00662bd8  83c41c               add esp, 0x1c
// 00662bdb  53                   push ebx
// 00662bdc  e81f2a0000           call 0x665600
// 00662be1  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00662be4  8d7c241c             lea edi, [esp + 0x1c]
// 00662be8  8bf3                 mov esi, ebx
// 00662bea  e891ebffff           call 0x661780
// 00662bef  50                   push eax
// 00662bf0  8bcf                 mov ecx, edi
// 00662bf2  ba03000000           mov edx, 3
// 00662bf7  8bc3                 mov eax, ebx
// 00662bf9  e8b2e0ffff           call 0x660cb0
// 00662bfe  8b442418             mov eax, dword ptr [esp + 0x18]
// 00662c02  6a03                 push 3
// 00662c04  50                   push eax
// 00662c05  e856810000           call 0x66ad60
// 00662c0a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00662c0e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00662c12  6a00                 push 0
// 00662c14  83c1fd               add ecx, -3
// 00662c17  51                   push ecx
// 00662c18  55                   push ebp
// 00662c19  52                   push edx
// 00662c1a  8bc3                 mov eax, ebx
// 00662c1c  e8cff9ffff           call 0x6625f0
// 00662c21  83c420               add esp, 0x20
// 00662c24  5f                   pop edi
// 00662c25  5e                   pop esi
// 00662c26  5d                   pop ebp
// 00662c27  83c424               add esp, 0x24
// 00662c2a  c3                   ret 
// library lua-5.1.4/lparser.c (function _forlist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
