// roc 2009-06 006efa60  unit: seg_006e0000  size: 619 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006efa60
//
// 006efa60  83ec24               sub esp, 0x24
// 006efa63  8b4330               mov eax, dword ptr [ebx + 0x30]
// 006efa66  55                   push ebp
// 006efa67  56                   push esi
// 006efa68  57                   push edi
// 006efa69  6a0f                 push 0xf
// 006efa6b  89442414             mov dword ptr [esp + 0x14], eax
// 006efa6f  8b4024               mov eax, dword ptr [eax + 0x24]
// 006efa72  68fcdf8e00           push 0x8edffc
// 006efa77  53                   push ebx
// 006efa78  89442420             mov dword ptr [esp + 0x20], eax
// 006efa7c  e88f180000           call 0x6f1310
// 006efa81  8b7330               mov esi, dword ptr [ebx + 0x30]
// 006efa84  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006efa88  41                   inc ecx
// 006efa89  83c40c               add esp, 0xc
// 006efa8c  81f9c8000000         cmp ecx, 0xc8
// 006efa92  8bf8                 mov edi, eax
// 006efa94  7e0f                 jle 0x6efaa5
// 006efa96  b95cde8e00           mov ecx, 0x8ede5c
// 006efa9b  bac8000000           mov edx, 0xc8
// 006efaa0  e89bddffff           call 0x6ed840
// 006efaa5  57                   push edi
// 006efaa6  53                   push ebx
// 006efaa7  e8d4deffff           call 0x6ed980
// 006efaac  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 006efab0  6a0b                 push 0xb
// 006efab2  68f0df8e00           push 0x8edff0
// 006efab7  53                   push ebx
// 006efab8  66898456ac000000     mov word ptr [esi + edx*2 + 0xac], ax
// 006efac0  e84b180000           call 0x6f1310
// 006efac5  8b7330               mov esi, dword ptr [ebx + 0x30]
// 006efac8  8bf8                 mov edi, eax
// 006efaca  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 006eface  83c002               add eax, 2
// 006efad1  83c414               add esp, 0x14
// 006efad4  3dc8000000           cmp eax, 0xc8
// 006efad9  7e0f                 jle 0x6efaea
// 006efadb  b95cde8e00           mov ecx, 0x8ede5c
// 006efae0  bac8000000           mov edx, 0xc8
// 006efae5  e856ddffff           call 0x6ed840
// 006efaea  57                   push edi
// 006efaeb  53                   push ebx
// 006efaec  e88fdeffff           call 0x6ed980
// 006efaf1  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006efaf5  6a0d                 push 0xd
// 006efaf7  68e0df8e00           push 0x8edfe0
// 006efafc  53                   push ebx
// 006efafd  6689844eae000000     mov word ptr [esi + ecx*2 + 0xae], ax
// 006efb05  e806180000           call 0x6f1310
// 006efb0a  8b7330               mov esi, dword ptr [ebx + 0x30]
// 006efb0d  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 006efb11  83c203               add edx, 3
// 006efb14  83c414               add esp, 0x14
// 006efb17  81fac8000000         cmp edx, 0xc8
// 006efb1d  8bf8                 mov edi, eax
// 006efb1f  7e0f                 jle 0x6efb30
// 006efb21  b95cde8e00           mov ecx, 0x8ede5c
// 006efb26  bac8000000           mov edx, 0xc8
// 006efb2b  e810ddffff           call 0x6ed840
// 006efb30  57                   push edi
// 006efb31  53                   push ebx
// 006efb32  e849deffff           call 0x6ed980
// 006efb37  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006efb3b  6689844eb0000000     mov word ptr [esi + ecx*2 + 0xb0], ax
// 006efb43  8b7330               mov esi, dword ptr [ebx + 0x30]
// 006efb46  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 006efb4a  83c204               add edx, 4
// 006efb4d  83c408               add esp, 8
// 006efb50  81fac8000000         cmp edx, 0xc8
// 006efb56  7e0f                 jle 0x6efb67
// 006efb58  b95cde8e00           mov ecx, 0x8ede5c
// 006efb5d  bac8000000           mov edx, 0xc8
// 006efb62  e8d9dcffff           call 0x6ed840
// 006efb67  8b442434             mov eax, dword ptr [esp + 0x34]
// 006efb6b  50                   push eax
// 006efb6c  53                   push ebx
// 006efb6d  e80edeffff           call 0x6ed980
// 006efb72  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006efb76  83c408               add esp, 8
// 006efb79  6689844eb2000000     mov word ptr [esi + ecx*2 + 0xb2], ax
// 006efb81  bf04000000           mov edi, 4
// 006efb86  837b102c             cmp dword ptr [ebx + 0x10], 0x2c
// 006efb8a  0f85ba000000         jne 0x6efc4a
// 006efb90  53                   push ebx
// 006efb91  e84a2b0000           call 0x6f26e0
// 006efb96  83c404               add esp, 4
// 006efb99  817b101d010000       cmp dword ptr [ebx + 0x10], 0x11d
// 006efba0  7424                 je 0x6efbc6
// 006efba2  681d010000           push 0x11d
// 006efba7  53                   push ebx
// 006efba8  e843160000           call 0x6f11f0
// 006efbad  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006efbb0  50                   push eax
// 006efbb1  68b8dd8e00           push 0x8eddb8
// 006efbb6  52                   push edx
// 006efbb7  e8e494fdff           call 0x6c90a0
// 006efbbc  50                   push eax
// 006efbbd  53                   push ebx
// 006efbbe  e82d170000           call 0x6f12f0
// 006efbc3  83c41c               add esp, 0x1c
// 006efbc6  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 006efbc9  53                   push ebx
// 006efbca  e8112b0000           call 0x6f26e0
// 006efbcf  8b7330               mov esi, dword ptr [ebx + 0x30]
// 006efbd2  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 006efbd6  8d4c3801             lea ecx, [eax + edi + 1]
// 006efbda  83c404               add esp, 4
// 006efbdd  81f9c8000000         cmp ecx, 0xc8
// 006efbe3  7e47                 jle 0x6efc2c
// 006efbe5  8b16                 mov edx, dword ptr [esi]
// 006efbe7  8b423c               mov eax, dword ptr [edx + 0x3c]
// 006efbea  685cde8e00           push 0x8ede5c
// 006efbef  68c8000000           push 0xc8
// 006efbf4  85c0                 test eax, eax
// 006efbf6  7513                 jne 0x6efc0b
// 006efbf8  8b4610               mov eax, dword ptr [esi + 0x10]
// 006efbfb  68f0dd8e00           push 0x8eddf0
// 006efc00  50                   push eax
// 006efc01  e89a94fdff           call 0x6c90a0
// 006efc06  83c410               add esp, 0x10
// 006efc09  eb12                 jmp 0x6efc1d
// 006efc0b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006efc0e  50                   push eax
// 006efc0f  68c8dd8e00           push 0x8eddc8
// 006efc14  51                   push ecx
// 006efc15  e88694fdff           call 0x6c90a0
// 006efc1a  83c414               add esp, 0x14
// 006efc1d  8b560c               mov edx, dword ptr [esi + 0xc]
// 006efc20  6a00                 push 0
// 006efc22  50                   push eax
// 006efc23  52                   push edx
// 006efc24  e827160000           call 0x6f1250
// 006efc29  83c40c               add esp, 0xc
// 006efc2c  55                   push ebp
// 006efc2d  53                   push ebx
// 006efc2e  e84dddffff           call 0x6ed980
// 006efc33  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006efc37  03cf                 add ecx, edi
// 006efc39  83c408               add esp, 8
// 006efc3c  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 006efc44  47                   inc edi
// 006efc45  e93cffffff           jmp 0x6efb86
// 006efc4a  817b100b010000       cmp dword ptr [ebx + 0x10], 0x10b
// 006efc51  897c240c             mov dword ptr [esp + 0xc], edi
// 006efc55  7424                 je 0x6efc7b
// 006efc57  680b010000           push 0x10b
// 006efc5c  53                   push ebx
// 006efc5d  e88e150000           call 0x6f11f0
// 006efc62  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006efc65  50                   push eax
// 006efc66  68b8dd8e00           push 0x8eddb8
// 006efc6b  52                   push edx
// 006efc6c  e82f94fdff           call 0x6c90a0
// 006efc71  50                   push eax
// 006efc72  53                   push ebx
// 006efc73  e878160000           call 0x6f12f0
// 006efc78  83c41c               add esp, 0x1c
// 006efc7b  53                   push ebx
// 006efc7c  e85f2a0000           call 0x6f26e0
// 006efc81  8b6b04               mov ebp, dword ptr [ebx + 4]
// 006efc84  8d7c241c             lea edi, [esp + 0x1c]
// 006efc88  8bf3                 mov esi, ebx
// 006efc8a  e861ebffff           call 0x6ee7f0
// 006efc8f  50                   push eax
// 006efc90  8bcf                 mov ecx, edi
// 006efc92  ba03000000           mov edx, 3
// 006efc97  8bc3                 mov eax, ebx
// 006efc99  e882e0ffff           call 0x6edd20
// 006efc9e  8b442418             mov eax, dword ptr [esp + 0x18]
// 006efca2  6a03                 push 3
// 006efca4  50                   push eax
// 006efca5  e856a00000           call 0x6f9d00
// 006efcaa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006efcae  8b542424             mov edx, dword ptr [esp + 0x24]
// 006efcb2  6a00                 push 0
// 006efcb4  83c1fd               add ecx, -3
// 006efcb7  51                   push ecx
// 006efcb8  55                   push ebp
// 006efcb9  52                   push edx
// 006efcba  8bc3                 mov eax, ebx
// 006efcbc  e8cff9ffff           call 0x6ef690
// 006efcc1  83c420               add esp, 0x20
// 006efcc4  5f                   pop edi
// 006efcc5  5e                   pop esi
// 006efcc6  5d                   pop ebp
// 006efcc7  83c424               add esp, 0x24
// 006efcca  c3                   ret 
// library lua-5.1.4/lparser.c (function _forlist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
