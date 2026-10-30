// from server: 100% by auto
// roc 2009-06 006ef830  unit: seg_006e0000  size: 550 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ef830
//
// 006ef830  83ec1c               sub esp, 0x1c
// 006ef833  53                   push ebx
// 006ef834  55                   push ebp
// 006ef835  8b6f30               mov ebp, dword ptr [edi + 0x30]
// 006ef838  8b4524               mov eax, dword ptr [ebp + 0x24]
// 006ef83b  56                   push esi
// 006ef83c  6a0b                 push 0xb
// 006ef83e  68d4df8e00           push 0x8edfd4
// 006ef843  57                   push edi
// 006ef844  89442418             mov dword ptr [esp + 0x18], eax
// 006ef848  e8c31a0000           call 0x6f1310
// 006ef84d  8b7730               mov esi, dword ptr [edi + 0x30]
// 006ef850  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006ef854  41                   inc ecx
// 006ef855  83c40c               add esp, 0xc
// 006ef858  81f9c8000000         cmp ecx, 0xc8
// 006ef85e  8bd8                 mov ebx, eax
// 006ef860  7e0f                 jle 0x6ef871
// 006ef862  b95cde8e00           mov ecx, 0x8ede5c
// 006ef867  bac8000000           mov edx, 0xc8
// 006ef86c  e8cfdfffff           call 0x6ed840
// 006ef871  53                   push ebx
// 006ef872  57                   push edi
// 006ef873  e808e1ffff           call 0x6ed980
// 006ef878  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 006ef87c  6a0b                 push 0xb
// 006ef87e  68c8df8e00           push 0x8edfc8
// 006ef883  57                   push edi
// 006ef884  66898456ac000000     mov word ptr [esi + edx*2 + 0xac], ax
// 006ef88c  e87f1a0000           call 0x6f1310
// 006ef891  8b7730               mov esi, dword ptr [edi + 0x30]
// 006ef894  8bd8                 mov ebx, eax
// 006ef896  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 006ef89a  83c002               add eax, 2
// 006ef89d  83c414               add esp, 0x14
// 006ef8a0  3dc8000000           cmp eax, 0xc8
// 006ef8a5  7e0f                 jle 0x6ef8b6
// 006ef8a7  b95cde8e00           mov ecx, 0x8ede5c
// 006ef8ac  bac8000000           mov edx, 0xc8
// 006ef8b1  e88adfffff           call 0x6ed840
// 006ef8b6  53                   push ebx
// 006ef8b7  57                   push edi
// 006ef8b8  e8c3e0ffff           call 0x6ed980
// 006ef8bd  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006ef8c1  6a0a                 push 0xa
// 006ef8c3  68bcdf8e00           push 0x8edfbc
// 006ef8c8  57                   push edi
// 006ef8c9  6689844eae000000     mov word ptr [esi + ecx*2 + 0xae], ax
// 006ef8d1  e83a1a0000           call 0x6f1310
// 006ef8d6  8b7730               mov esi, dword ptr [edi + 0x30]
// 006ef8d9  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 006ef8dd  83c203               add edx, 3
// 006ef8e0  83c414               add esp, 0x14
// 006ef8e3  81fac8000000         cmp edx, 0xc8
// 006ef8e9  8bd8                 mov ebx, eax
// 006ef8eb  7e0f                 jle 0x6ef8fc
// 006ef8ed  b95cde8e00           mov ecx, 0x8ede5c
// 006ef8f2  bac8000000           mov edx, 0xc8
// 006ef8f7  e844dfffff           call 0x6ed840
// 006ef8fc  53                   push ebx
// 006ef8fd  57                   push edi
// 006ef8fe  e87de0ffff           call 0x6ed980
// 006ef903  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006ef907  6689844eb0000000     mov word ptr [esi + ecx*2 + 0xb0], ax
// 006ef90f  8b7730               mov esi, dword ptr [edi + 0x30]
// 006ef912  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 006ef916  83c204               add edx, 4
// 006ef919  83c408               add esp, 8
// 006ef91c  81fac8000000         cmp edx, 0xc8
// 006ef922  7e0f                 jle 0x6ef933
// 006ef924  b95cde8e00           mov ecx, 0x8ede5c
// 006ef929  bac8000000           mov edx, 0xc8
// 006ef92e  e80ddfffff           call 0x6ed840
// 006ef933  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006ef937  50                   push eax
// 006ef938  57                   push edi
// 006ef939  e842e0ffff           call 0x6ed980
// 006ef93e  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006ef942  83c408               add esp, 8
// 006ef945  6689844eb2000000     mov word ptr [esi + ecx*2 + 0xb2], ax
// 006ef94d  837f103d             cmp dword ptr [edi + 0x10], 0x3d
// 006ef951  7421                 je 0x6ef974
// 006ef953  6a3d                 push 0x3d
// 006ef955  57                   push edi
// 006ef956  e895180000           call 0x6f11f0
// 006ef95b  8b5734               mov edx, dword ptr [edi + 0x34]
// 006ef95e  50                   push eax
// 006ef95f  68b8dd8e00           push 0x8eddb8
// 006ef964  52                   push edx
// 006ef965  e83697fdff           call 0x6c90a0
// 006ef96a  50                   push eax
// 006ef96b  57                   push edi
// 006ef96c  e87f190000           call 0x6f12f0
// 006ef971  83c41c               add esp, 0x1c
// 006ef974  57                   push edi
// 006ef975  e8662d0000           call 0x6f26e0
// 006ef97a  6a00                 push 0
// 006ef97c  8d442418             lea eax, [esp + 0x18]
// 006ef980  50                   push eax
// 006ef981  57                   push edi
// 006ef982  e8d9f6ffff           call 0x6ef060
// 006ef987  8b5730               mov edx, dword ptr [edi + 0x30]
// 006ef98a  8d4c2420             lea ecx, [esp + 0x20]
// 006ef98e  51                   push ecx
// 006ef98f  52                   push edx
// 006ef990  e84bae0000           call 0x6fa7e0
// 006ef995  be2c000000           mov esi, 0x2c
// 006ef99a  83c418               add esp, 0x18
// 006ef99d  397710               cmp dword ptr [edi + 0x10], esi
// 006ef9a0  7420                 je 0x6ef9c2
// 006ef9a2  56                   push esi
// 006ef9a3  57                   push edi
// 006ef9a4  e847180000           call 0x6f11f0
// 006ef9a9  50                   push eax
// 006ef9aa  8b4734               mov eax, dword ptr [edi + 0x34]
// 006ef9ad  68b8dd8e00           push 0x8eddb8
// 006ef9b2  50                   push eax
// 006ef9b3  e8e896fdff           call 0x6c90a0
// 006ef9b8  50                   push eax
// 006ef9b9  57                   push edi
// 006ef9ba  e831190000           call 0x6f12f0
// 006ef9bf  83c41c               add esp, 0x1c
// 006ef9c2  57                   push edi
// 006ef9c3  e8182d0000           call 0x6f26e0
// 006ef9c8  6a00                 push 0
// 006ef9ca  8d4c2418             lea ecx, [esp + 0x18]
// 006ef9ce  51                   push ecx
// 006ef9cf  57                   push edi
// 006ef9d0  e88bf6ffff           call 0x6ef060
// 006ef9d5  8b4730               mov eax, dword ptr [edi + 0x30]
// 006ef9d8  8d542420             lea edx, [esp + 0x20]
// 006ef9dc  52                   push edx
// 006ef9dd  50                   push eax
// 006ef9de  e8fdad0000           call 0x6fa7e0
// 006ef9e3  83c418               add esp, 0x18
// 006ef9e6  397710               cmp dword ptr [edi + 0x10], esi
// 006ef9e9  7526                 jne 0x6efa11
// 006ef9eb  57                   push edi
// 006ef9ec  e8ef2c0000           call 0x6f26e0
// 006ef9f1  6a00                 push 0
// 006ef9f3  8d4c2418             lea ecx, [esp + 0x18]
// 006ef9f7  51                   push ecx
// 006ef9f8  57                   push edi
// 006ef9f9  e862f6ffff           call 0x6ef060
// 006ef9fe  8b4730               mov eax, dword ptr [edi + 0x30]
// 006efa01  8d542420             lea edx, [esp + 0x20]
// 006efa05  52                   push edx
// 006efa06  50                   push eax
// 006efa07  e8d4ad0000           call 0x6fa7e0
// 006efa0c  83c418               add esp, 0x18
// 006efa0f  eb26                 jmp 0x6efa37
// 006efa11  d9e8                 fld1 
// 006efa13  83ec08               sub esp, 8
// 006efa16  dd1c24               fstp qword ptr [esp]
// 006efa19  55                   push ebp
// 006efa1a  e891a40000           call 0x6f9eb0
// 006efa1f  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 006efa22  50                   push eax
// 006efa23  51                   push ecx
// 006efa24  6a01                 push 1
// 006efa26  55                   push ebp
// 006efa27  e8d4a70000           call 0x6fa200
// 006efa2c  6a01                 push 1
// 006efa2e  55                   push ebp
// 006efa2f  e80ca30000           call 0x6f9d40
// 006efa34  83c424               add esp, 0x24
// 006efa37  8b542430             mov edx, dword ptr [esp + 0x30]
// 006efa3b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006efa3f  6a01                 push 1
// 006efa41  6a01                 push 1
// 006efa43  52                   push edx
// 006efa44  50                   push eax
// 006efa45  8bc7                 mov eax, edi
// 006efa47  e844fcffff           call 0x6ef690
// 006efa4c  83c410               add esp, 0x10
// 006efa4f  5e                   pop esi
// 006efa50  5d                   pop ebp
// 006efa51  5b                   pop ebx
// 006efa52  83c41c               add esp, 0x1c
// 006efa55  c3                   ret 
// library lua-5.1.4/lparser.c (function _fornum)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
