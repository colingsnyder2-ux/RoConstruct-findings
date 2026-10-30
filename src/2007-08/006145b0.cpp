// from server: 100% by auto
// roc 2007-08 006145b0  unit: seg_00610000  size: 621 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006145b0
//
// 006145b0  83ec30               sub esp, 0x30
// 006145b3  53                   push ebx
// 006145b4  55                   push ebp
// 006145b5  56                   push esi
// 006145b6  57                   push edi
// 006145b7  33ff                 xor edi, edi
// 006145b9  57                   push edi
// 006145ba  57                   push edi
// 006145bb  8bd9                 mov ebx, ecx
// 006145bd  8b6b30               mov ebp, dword ptr [ebx + 0x30]
// 006145c0  57                   push edi
// 006145c1  8bf0                 mov esi, eax
// 006145c3  8b4304               mov eax, dword ptr [ebx + 4]
// 006145c6  6a0a                 push 0xa
// 006145c8  55                   push ebp
// 006145c9  89442424             mov dword ptr [esp + 0x24], eax
// 006145cd  e8ae470100           call 0x628d80
// 006145d2  8bc8                 mov ecx, eax
// 006145d4  83c8ff               or eax, 0xffffffff
// 006145d7  894c2428             mov dword ptr [esp + 0x28], ecx
// 006145db  894610               mov dword ptr [esi + 0x10], eax
// 006145de  894614               mov dword ptr [esi + 0x14], eax
// 006145e1  c7060b000000         mov dword ptr [esi], 0xb
// 006145e7  894e08               mov dword ptr [esi + 8], ecx
// 006145ea  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 006145ed  56                   push esi
// 006145ee  51                   push ecx
// 006145ef  897c2458             mov dword ptr [esp + 0x58], edi
// 006145f3  897c2450             mov dword ptr [esp + 0x50], edi
// 006145f7  897c2454             mov dword ptr [esp + 0x54], edi
// 006145fb  8974244c             mov dword ptr [esp + 0x4c], esi
// 006145ff  89442444             mov dword ptr [esp + 0x44], eax
// 00614603  89442448             mov dword ptr [esp + 0x48], eax
// 00614607  897c2434             mov dword ptr [esp + 0x34], edi
// 0061460b  897c243c             mov dword ptr [esp + 0x3c], edi
// 0061460f  e87c4d0100           call 0x629390
// 00614614  83c41c               add esp, 0x1c
// 00614617  837b107b             cmp dword ptr [ebx + 0x10], 0x7b
// 0061461b  7421                 je 0x61463e
// 0061461d  6a7b                 push 0x7b
// 0061461f  53                   push ebx
// 00614620  e89b2e0000           call 0x6174c0
// 00614625  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00614628  50                   push eax
// 00614629  6870337c00           push 0x7c3370
// 0061462e  52                   push edx
// 0061462f  e85ca8ffff           call 0x60ee90
// 00614634  50                   push eax
// 00614635  53                   push ebx
// 00614636  e8852f0000           call 0x6175c0
// 0061463b  83c41c               add esp, 0x1c
// 0061463e  53                   push ebx
// 0061463f  e8ac430000           call 0x6189f0
// 00614644  83c404               add esp, 4
// 00614647  837b107d             cmp dword ptr [ebx + 0x10], 0x7d
// 0061464b  0f845f010000         je 0x6147b0
// 00614651  397c2418             cmp dword ptr [esp + 0x18], edi
// 00614655  7435                 je 0x61468c
// 00614657  8d442418             lea eax, [esp + 0x18]
// 0061465b  50                   push eax
// 0061465c  55                   push ebp
// 0061465d  e82e4d0100           call 0x629390
// 00614662  83c408               add esp, 8
// 00614665  837c243c32           cmp dword ptr [esp + 0x3c], 0x32
// 0061466a  897c2418             mov dword ptr [esp + 0x18], edi
// 0061466e  751c                 jne 0x61468c
// 00614670  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00614674  8b542430             mov edx, dword ptr [esp + 0x30]
// 00614678  8b4208               mov eax, dword ptr [edx + 8]
// 0061467b  6a32                 push 0x32
// 0061467d  51                   push ecx
// 0061467e  50                   push eax
// 0061467f  55                   push ebp
// 00614680  e85b470100           call 0x628de0
// 00614685  83c410               add esp, 0x10
// 00614688  897c243c             mov dword ptr [esp + 0x3c], edi
// 0061468c  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0061468f  83f85b               cmp eax, 0x5b
// 00614692  0f84f6000000         je 0x61478e
// 00614698  3d1d010000           cmp eax, 0x11d
// 0061469d  7474                 je 0x614713
// 0061469f  57                   push edi
// 006146a0  8d4c241c             lea ecx, [esp + 0x1c]
// 006146a4  51                   push ecx
// 006146a5  53                   push ebx
// 006146a6  e8750c0000           call 0x615320
// 006146ab  83c40c               add esp, 0xc
// 006146ae  817c2438ffff0300     cmp dword ptr [esp + 0x38], 0x3ffff
// 006146b6  7e49                 jle 0x614701
// 006146b8  8b7330               mov esi, dword ptr [ebx + 0x30]
// 006146bb  8b16                 mov edx, dword ptr [esi]
// 006146bd  8b423c               mov eax, dword ptr [edx + 0x3c]
// 006146c0  3bc7                 cmp eax, edi
// 006146c2  686c347c00           push 0x7c346c
// 006146c7  68ffff0300           push 0x3ffff
// 006146cc  7513                 jne 0x6146e1
// 006146ce  8b4610               mov eax, dword ptr [esi + 0x10]
// 006146d1  68a8337c00           push 0x7c33a8
// 006146d6  50                   push eax
// 006146d7  e8b4a7ffff           call 0x60ee90
// 006146dc  83c410               add esp, 0x10
// 006146df  eb12                 jmp 0x6146f3
// 006146e1  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006146e4  50                   push eax
// 006146e5  6880337c00           push 0x7c3380
// 006146ea  51                   push ecx
// 006146eb  e8a0a7ffff           call 0x60ee90
// 006146f0  83c414               add esp, 0x14
// 006146f3  8b560c               mov edx, dword ptr [esi + 0xc]
// 006146f6  57                   push edi
// 006146f7  50                   push eax
// 006146f8  52                   push edx
// 006146f9  e8222e0000           call 0x617520
// 006146fe  83c40c               add esp, 0xc
// 00614701  b801000000           mov eax, 1
// 00614706  01442438             add dword ptr [esp + 0x38], eax
// 0061470a  0144243c             add dword ptr [esp + 0x3c], eax
// 0061470e  e988000000           jmp 0x61479b
// 00614713  53                   push ebx
// 00614714  e827430000           call 0x618a40
// 00614719  83c404               add esp, 4
// 0061471c  837b203d             cmp dword ptr [ebx + 0x20], 0x3d
// 00614720  7465                 je 0x614787
// 00614722  57                   push edi
// 00614723  8d44241c             lea eax, [esp + 0x1c]
// 00614727  50                   push eax
// 00614728  53                   push ebx
// 00614729  e8f20b0000           call 0x615320
// 0061472e  83c40c               add esp, 0xc
// 00614731  817c2438ffff0300     cmp dword ptr [esp + 0x38], 0x3ffff
// 00614739  7ec6                 jle 0x614701
// 0061473b  8b7330               mov esi, dword ptr [ebx + 0x30]
// 0061473e  8b0e                 mov ecx, dword ptr [esi]
// 00614740  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 00614743  3bc7                 cmp eax, edi
// 00614745  686c347c00           push 0x7c346c
// 0061474a  68ffff0300           push 0x3ffff
// 0061474f  7519                 jne 0x61476a
// 00614751  8b5610               mov edx, dword ptr [esi + 0x10]
// 00614754  68a8337c00           push 0x7c33a8
// 00614759  52                   push edx
// 0061475a  e831a7ffff           call 0x60ee90
// 0061475f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00614762  83c410               add esp, 0x10
// 00614765  57                   push edi
// 00614766  50                   push eax
// 00614767  51                   push ecx
// 00614768  eb8f                 jmp 0x6146f9
// 0061476a  50                   push eax
// 0061476b  8b4610               mov eax, dword ptr [esi + 0x10]
// 0061476e  6880337c00           push 0x7c3380
// 00614773  50                   push eax
// 00614774  e817a7ffff           call 0x60ee90
// 00614779  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0061477c  83c414               add esp, 0x14
// 0061477f  57                   push edi
// 00614780  50                   push eax
// 00614781  51                   push ecx
// 00614782  e972ffffff           jmp 0x6146f9
// 00614787  8d542418             lea edx, [esp + 0x18]
// 0061478b  52                   push edx
// 0061478c  eb05                 jmp 0x614793
// 0061478e  8d442418             lea eax, [esp + 0x18]
// 00614792  50                   push eax
// 00614793  e8e8fcffff           call 0x614480
// 00614798  83c404               add esp, 4
// 0061479b  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0061479e  83f82c               cmp eax, 0x2c
// 006147a1  0f8497feffff         je 0x61463e
// 006147a7  83f83b               cmp eax, 0x3b
// 006147aa  0f848efeffff         je 0x61463e
// 006147b0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006147b4  6a7b                 push 0x7b
// 006147b6  bf7d000000           mov edi, 0x7d
// 006147bb  8bf3                 mov esi, ebx
// 006147bd  e85ef3ffff           call 0x613b20
// 006147c2  8d74241c             lea esi, [esp + 0x1c]
// 006147c6  8bfd                 mov edi, ebp
// 006147c8  e883fdffff           call 0x614550
// 006147cd  8b4d00               mov ecx, dword ptr [ebp]
// 006147d0  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006147d4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006147d7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006147db  50                   push eax
// 006147dc  8d34ba               lea esi, [edx + edi*4]
// 006147df  e80ca2ffff           call 0x60e9f0
// 006147e4  8b0e                 mov ecx, dword ptr [esi]
// 006147e6  c1e017               shl eax, 0x17
// 006147e9  81e1ffff7f00         and ecx, 0x7fffff
// 006147ef  0bc1                 or eax, ecx
// 006147f1  8906                 mov dword ptr [esi], eax
// 006147f3  8b5500               mov edx, dword ptr [ebp]
// 006147f6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006147fa  8b420c               mov eax, dword ptr [edx + 0xc]
// 006147fd  51                   push ecx
// 006147fe  8d34b8               lea esi, [eax + edi*4]
// 00614801  e8eaa1ffff           call 0x60e9f0
// 00614806  c1e00e               shl eax, 0xe
// 00614809  3306                 xor eax, dword ptr [esi]
// 0061480b  83c40c               add esp, 0xc
// 0061480e  5f                   pop edi
// 0061480f  2500c07f00           and eax, 0x7fc000
// 00614814  3106                 xor dword ptr [esi], eax
// 00614816  5e                   pop esi
// 00614817  5d                   pop ebp
// 00614818  5b                   pop ebx
// 00614819  83c430               add esp, 0x30
// 0061481c  c3                   ret 
// library lua-5.1.1/lparser.c (function _constructor)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lparser.c
