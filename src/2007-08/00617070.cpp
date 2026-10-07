// roc 2007-08 00617070  unit: seg_00610000  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00617070
//
// 00617070  56                   push esi
// 00617071  8b742408             mov esi, dword ptr [esp + 8]
// 00617075  8b06                 mov eax, dword ptr [esi]
// 00617077  57                   push edi
// 00617078  50                   push eax
// 00617079  e8e2c0ffff           call 0x613160
// 0061707e  8b0e                 mov ecx, dword ptr [esi]
// 00617080  8bf8                 mov edi, eax
// 00617082  8b4108               mov eax, dword ptr [ecx + 8]
// 00617085  8938                 mov dword ptr [eax], edi
// 00617087  c7400809000000       mov dword ptr [eax + 8], 9
// 0061708e  8b06                 mov eax, dword ptr [esi]
// 00617090  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00617093  2b5008               sub edx, dword ptr [eax + 8]
// 00617096  83c404               add esp, 4
// 00617099  83fa10               cmp edx, 0x10
// 0061709c  7f0b                 jg 0x6170a9
// 0061709e  6a01                 push 1
// 006170a0  50                   push eax
// 006170a1  e86aeafaff           call 0x5c5b10
// 006170a6  83c408               add esp, 8
// 006170a9  8b06                 mov eax, dword ptr [esi]
// 006170ab  83400810             add dword ptr [eax + 8], 0x10
// 006170af  e82cf9ffff           call 0x6169e0
// 006170b4  85c0                 test eax, eax
// 006170b6  894720               mov dword ptr [edi + 0x20], eax
// 006170b9  7507                 jne 0x6170c2
// 006170bb  8b442410             mov eax, dword ptr [esp + 0x10]
// 006170bf  894720               mov dword ptr [edi + 0x20], eax
// 006170c2  e8a9f8ffff           call 0x616970
// 006170c7  89473c               mov dword ptr [edi + 0x3c], eax
// 006170ca  e8a1f8ffff           call 0x616970
// 006170cf  6a01                 push 1
// 006170d1  8d4c2410             lea ecx, [esp + 0x10]
// 006170d5  894740               mov dword ptr [edi + 0x40], eax
// 006170d8  8b5604               mov edx, dword ptr [esi + 4]
// 006170db  51                   push ecx
// 006170dc  52                   push edx
// 006170dd  e8dec2ffff           call 0x6133c0
// 006170e2  83c40c               add esp, 0xc
// 006170e5  85c0                 test eax, eax
// 006170e7  7423                 je 0x61710c
// 006170e9  8b460c               mov eax, dword ptr [esi + 0xc]
// 006170ec  8b0e                 mov ecx, dword ptr [esi]
// 006170ee  68e0357c00           push 0x7c35e0
// 006170f3  50                   push eax
// 006170f4  68c4357c00           push 0x7c35c4
// 006170f9  51                   push ecx
// 006170fa  e8917dffff           call 0x60ee90
// 006170ff  8b16                 mov edx, dword ptr [esi]
// 00617101  6a03                 push 3
// 00617103  52                   push edx
// 00617104  e817effaff           call 0x5c6020
// 00617109  83c418               add esp, 0x18
// 0061710c  8a44240c             mov al, byte ptr [esp + 0xc]
// 00617110  6a01                 push 1
// 00617112  8d4c2410             lea ecx, [esp + 0x10]
// 00617116  884748               mov byte ptr [edi + 0x48], al
// 00617119  8b5604               mov edx, dword ptr [esi + 4]
// 0061711c  51                   push ecx
// 0061711d  52                   push edx
// 0061711e  e89dc2ffff           call 0x6133c0
// 00617123  83c40c               add esp, 0xc
// 00617126  85c0                 test eax, eax
// 00617128  7423                 je 0x61714d
// 0061712a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0061712d  8b0e                 mov ecx, dword ptr [esi]
// 0061712f  68e0357c00           push 0x7c35e0
// 00617134  50                   push eax
// 00617135  68c4357c00           push 0x7c35c4
// 0061713a  51                   push ecx
// 0061713b  e8507dffff           call 0x60ee90
// 00617140  8b16                 mov edx, dword ptr [esi]
// 00617142  6a03                 push 3
// 00617144  52                   push edx
// 00617145  e8d6eefaff           call 0x5c6020
// 0061714a  83c418               add esp, 0x18
// 0061714d  8a44240c             mov al, byte ptr [esp + 0xc]
// 00617151  6a01                 push 1
// 00617153  8d4c2410             lea ecx, [esp + 0x10]
// 00617157  884749               mov byte ptr [edi + 0x49], al
// 0061715a  8b5604               mov edx, dword ptr [esi + 4]
// 0061715d  51                   push ecx
// 0061715e  52                   push edx
// 0061715f  e85cc2ffff           call 0x6133c0
// 00617164  83c40c               add esp, 0xc
// 00617167  85c0                 test eax, eax
// 00617169  7423                 je 0x61718e
// 0061716b  8b460c               mov eax, dword ptr [esi + 0xc]
// 0061716e  8b0e                 mov ecx, dword ptr [esi]
// 00617170  68e0357c00           push 0x7c35e0
// 00617175  50                   push eax
// 00617176  68c4357c00           push 0x7c35c4
// 0061717b  51                   push ecx
// 0061717c  e80f7dffff           call 0x60ee90
// 00617181  8b16                 mov edx, dword ptr [esi]
// 00617183  6a03                 push 3
// 00617185  52                   push edx
// 00617186  e895eefaff           call 0x5c6020
// 0061718b  83c418               add esp, 0x18
// 0061718e  8a44240c             mov al, byte ptr [esp + 0xc]
// 00617192  6a01                 push 1
// 00617194  8d4c2410             lea ecx, [esp + 0x10]
// 00617198  88474a               mov byte ptr [edi + 0x4a], al
// 0061719b  8b5604               mov edx, dword ptr [esi + 4]
// 0061719e  51                   push ecx
// 0061719f  52                   push edx
// 006171a0  e81bc2ffff           call 0x6133c0
// 006171a5  83c40c               add esp, 0xc
// 006171a8  85c0                 test eax, eax
// 006171aa  7423                 je 0x6171cf
// 006171ac  8b460c               mov eax, dword ptr [esi + 0xc]
// 006171af  8b0e                 mov ecx, dword ptr [esi]
// 006171b1  68e0357c00           push 0x7c35e0
// 006171b6  50                   push eax
// 006171b7  68c4357c00           push 0x7c35c4
// 006171bc  51                   push ecx
// 006171bd  e8ce7cffff           call 0x60ee90
// 006171c2  8b16                 mov edx, dword ptr [esi]
// 006171c4  6a03                 push 3
// 006171c6  52                   push edx
// 006171c7  e854eefaff           call 0x5c6020
// 006171cc  83c418               add esp, 0x18
// 006171cf  8a44240c             mov al, byte ptr [esp + 0xc]
// 006171d3  53                   push ebx
// 006171d4  88474b               mov byte ptr [edi + 0x4b], al
// 006171d7  8bdf                 mov ebx, edi
// 006171d9  8bc6                 mov eax, esi
// 006171db  e8b0f8ffff           call 0x616a90
// 006171e0  57                   push edi
// 006171e1  8bc6                 mov eax, esi
// 006171e3  e828f9ffff           call 0x616b10
// 006171e8  8bc6                 mov eax, esi
// 006171ea  e8c1fbffff           call 0x616db0
// 006171ef  57                   push edi
// 006171f0  e89bfafaff           call 0x5c6c90
// 006171f5  83c408               add esp, 8
// 006171f8  85c0                 test eax, eax
// 006171fa  5b                   pop ebx
// 006171fb  7523                 jne 0x617220
// 006171fd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00617200  8b16                 mov edx, dword ptr [esi]
// 00617202  680c367c00           push 0x7c360c
// 00617207  51                   push ecx
// 00617208  68c4357c00           push 0x7c35c4
// 0061720d  52                   push edx
// 0061720e  e87d7cffff           call 0x60ee90
// 00617213  8b06                 mov eax, dword ptr [esi]
// 00617215  6a03                 push 3
// 00617217  50                   push eax
// 00617218  e803eefaff           call 0x5c6020
// 0061721d  83c418               add esp, 0x18
// 00617220  8b36                 mov esi, dword ptr [esi]
// 00617222  834608f0             add dword ptr [esi + 8], -0x10
// 00617226  8bc7                 mov eax, edi
// 00617228  5f                   pop edi
// 00617229  5e                   pop esi
// 0061722a  c3                   ret 
// library lua-5.1.3/lundump.c (function _LoadFunction)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.3 lundump.c
