// roc 2009-12 006254b0  unit: seg_00620000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006254b0
//
// 006254b0  83ec08               sub esp, 8
// 006254b3  53                   push ebx
// 006254b4  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 006254b8  55                   push ebp
// 006254b9  56                   push esi
// 006254ba  8b742418             mov esi, dword ptr [esp + 0x18]
// 006254be  8bae5c010000         mov ebp, dword ptr [esi + 0x15c]
// 006254c4  57                   push edi
// 006254c5  33ff                 xor edi, edi
// 006254c7  897520               mov dword ptr [ebp + 0x20], esi
// 006254ca  885d0c               mov byte ptr [ebp + 0xc], bl
// 006254cd  39be2c010000         cmp dword ptr [esi + 0x12c], edi
// 006254d3  0f94c0               sete al
// 006254d6  88442410             mov byte ptr [esp + 0x10], al
// 006254da  39be34010000         cmp dword ptr [esi + 0x134], edi
// 006254e0  7516                 jne 0x6254f8
// 006254e2  84c0                 test al, al
// 006254e4  7409                 je 0x6254ef
// 006254e6  c74504104d6200       mov dword ptr [ebp + 4], 0x624d10
// 006254ed  eb37                 jmp 0x625526
// 006254ef  c74504804e6200       mov dword ptr [ebp + 4], 0x624e80
// 006254f6  eb2e                 jmp 0x625526
// 006254f8  84c0                 test al, al
// 006254fa  7409                 je 0x625505
// 006254fc  c7450460506200       mov dword ptr [ebp + 4], 0x625060
// 00625503  eb21                 jmp 0x625526
// 00625505  c7450420516200       mov dword ptr [ebp + 4], 0x625120
// 0062550c  397d40               cmp dword ptr [ebp + 0x40], edi
// 0062550f  7515                 jne 0x625526
// 00625511  8b4604               mov eax, dword ptr [esi + 4]
// 00625514  8b08                 mov ecx, dword ptr [eax]
// 00625516  68e8030000           push 0x3e8
// 0062551b  6a01                 push 1
// 0062551d  56                   push esi
// 0062551e  ffd1                 call ecx
// 00625520  83c40c               add esp, 0xc
// 00625523  894540               mov dword ptr [ebp + 0x40], eax
// 00625526  84db                 test bl, bl
// 00625528  7409                 je 0x625533
// 0062552a  c74508e0536200       mov dword ptr [ebp + 8], 0x6253e0
// 00625531  eb07                 jmp 0x62553a
// 00625533  c7450890536200       mov dword ptr [ebp + 8], 0x625390
// 0062553a  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 00625540  897c2414             mov dword ptr [esp + 0x14], edi
// 00625544  0f8ec6000000         jle 0x625610
// 0062554a  8d5524               lea edx, [ebp + 0x24]
// 0062554d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00625551  8d9ee8000000         lea ebx, [esi + 0xe8]
// 00625557  eb07                 jmp 0x625560
// 00625559  8da42400000000       lea esp, [esp]
// 00625560  807c241000           cmp byte ptr [esp + 0x10], 0
// 00625565  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00625569  8b03                 mov eax, dword ptr [ebx]
// 0062556b  8939                 mov dword ptr [ecx], edi
// 0062556d  740d                 je 0x62557c
// 0062556f  39be34010000         cmp dword ptr [esi + 0x134], edi
// 00625575  757c                 jne 0x6255f3
// 00625577  8b7814               mov edi, dword ptr [eax + 0x14]
// 0062557a  eb06                 jmp 0x625582
// 0062557c  8b7818               mov edi, dword ptr [eax + 0x18]
// 0062557f  897d34               mov dword ptr [ebp + 0x34], edi
// 00625582  807c242000           cmp byte ptr [esp + 0x20], 0
// 00625587  7454                 je 0x6255dd
// 00625589  85ff                 test edi, edi
// 0062558b  7c05                 jl 0x625592
// 0062558d  83ff04               cmp edi, 4
// 00625590  7c18                 jl 0x6255aa
// 00625592  8b16                 mov edx, dword ptr [esi]
// 00625594  c7421432000000       mov dword ptr [edx + 0x14], 0x32
// 0062559b  8b06                 mov eax, dword ptr [esi]
// 0062559d  897818               mov dword ptr [eax + 0x18], edi
// 006255a0  8b0e                 mov ecx, dword ptr [esi]
// 006255a2  8b11                 mov edx, dword ptr [ecx]
// 006255a4  56                   push esi
// 006255a5  ffd2                 call edx
// 006255a7  83c404               add esp, 4
// 006255aa  837cbd5c00           cmp dword ptr [ebp + edi*4 + 0x5c], 0
// 006255af  7516                 jne 0x6255c7
// 006255b1  8b4604               mov eax, dword ptr [esi + 4]
// 006255b4  8b08                 mov ecx, dword ptr [eax]
// 006255b6  6804040000           push 0x404
// 006255bb  6a01                 push 1
// 006255bd  56                   push esi
// 006255be  ffd1                 call ecx
// 006255c0  83c40c               add esp, 0xc
// 006255c3  8944bd5c             mov dword ptr [ebp + edi*4 + 0x5c], eax
// 006255c7  8b54bd5c             mov edx, dword ptr [ebp + edi*4 + 0x5c]
// 006255cb  6804040000           push 0x404
// 006255d0  6a00                 push 0
// 006255d2  52                   push edx
// 006255d3  e8ccf41c00           call 0x7f4aa4
// 006255d8  83c40c               add esp, 0xc
// 006255db  eb14                 jmp 0x6255f1
// 006255dd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006255e1  8d44bd4c             lea eax, [ebp + edi*4 + 0x4c]
// 006255e5  50                   push eax
// 006255e6  57                   push edi
// 006255e7  51                   push ecx
// 006255e8  56                   push esi
// 006255e9  e832e6ffff           call 0x623c20
// 006255ee  83c410               add esp, 0x10
// 006255f1  33ff                 xor edi, edi
// 006255f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 006255f7  8344241c04           add dword ptr [esp + 0x1c], 4
// 006255fc  40                   inc eax
// 006255fd  83c304               add ebx, 4
// 00625600  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00625606  89442414             mov dword ptr [esp + 0x14], eax
// 0062560a  0f8c50ffffff         jl 0x625560
// 00625610  897d38               mov dword ptr [ebp + 0x38], edi
// 00625613  897d3c               mov dword ptr [ebp + 0x3c], edi
// 00625616  897d18               mov dword ptr [ebp + 0x18], edi
// 00625619  897d1c               mov dword ptr [ebp + 0x1c], edi
// 0062561c  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 00625622  897d48               mov dword ptr [ebp + 0x48], edi
// 00625625  5f                   pop edi
// 00625626  5e                   pop esi
// 00625627  895544               mov dword ptr [ebp + 0x44], edx
// 0062562a  5d                   pop ebp
// 0062562b  5b                   pop ebx
// 0062562c  83c408               add esp, 8
// 0062562f  c3                   ret 
// library jpeg-6b/jcphuff.c (function _start_pass_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
