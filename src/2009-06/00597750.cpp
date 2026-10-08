// from server: 100% by auto
// roc 2009-06 00597750  unit: seg_00590000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00597750
//
// 00597750  51                   push ecx
// 00597751  807c240c00           cmp byte ptr [esp + 0xc], 0
// 00597756  53                   push ebx
// 00597757  56                   push esi
// 00597758  8bf0                 mov esi, eax
// 0059775a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059775e  740d                 je 0x59776d
// 00597760  8b5c8668             mov ebx, dword ptr [esi + eax*4 + 0x68]
// 00597764  83c010               add eax, 0x10
// 00597767  89442410             mov dword ptr [esp + 0x10], eax
// 0059776b  eb04                 jmp 0x597771
// 0059776d  8b5c8658             mov ebx, dword ptr [esi + eax*4 + 0x58]
// 00597771  895c2408             mov dword ptr [esp + 8], ebx
// 00597775  85db                 test ebx, ebx
// 00597777  751c                 jne 0x597795
// 00597779  8b0e                 mov ecx, dword ptr [esi]
// 0059777b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059777f  c7411432000000       mov dword ptr [ecx + 0x14], 0x32
// 00597786  8b16                 mov edx, dword ptr [esi]
// 00597788  894218               mov dword ptr [edx + 0x18], eax
// 0059778b  8b0e                 mov ecx, dword ptr [esi]
// 0059778d  8b11                 mov edx, dword ptr [ecx]
// 0059778f  56                   push esi
// 00597790  ffd2                 call edx
// 00597792  83c404               add esp, 4
// 00597795  80bb1101000000       cmp byte ptr [ebx + 0x111], 0
// 0059779c  0f850f010000         jne 0x5978b1
// 005977a2  55                   push ebp
// 005977a3  57                   push edi
// 005977a4  68c4000000           push 0xc4
// 005977a9  e8e2fcffff           call 0x597490
// 005977ae  83c404               add esp, 4
// 005977b1  33ed                 xor ebp, ebp
// 005977b3  33ff                 xor edi, edi
// 005977b5  33d2                 xor edx, edx
// 005977b7  33c9                 xor ecx, ecx
// 005977b9  8d4302               lea eax, [ebx + 2]
// 005977bc  c744241c04000000     mov dword ptr [esp + 0x1c], 4
// 005977c4  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 005977c8  03eb                 add ebp, ebx
// 005977ca  0fb618               movzx ebx, byte ptr [eax]
// 005977cd  03cb                 add ecx, ebx
// 005977cf  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005977d3  03d3                 add edx, ebx
// 005977d5  0fb65802             movzx ebx, byte ptr [eax + 2]
// 005977d9  03fb                 add edi, ebx
// 005977db  83c004               add eax, 4
// 005977de  836c241c01           sub dword ptr [esp + 0x1c], 1
// 005977e3  75df                 jne 0x5977c4
// 005977e5  03fa                 add edi, edx
// 005977e7  03f9                 add edi, ecx
// 005977e9  03ef                 add ebp, edi
// 005977eb  8d5d13               lea ebx, [ebp + 0x13]
// 005977ee  e80dfdffff           call 0x597500
// 005977f3  8b4618               mov eax, dword ptr [esi + 0x18]
// 005977f6  8b08                 mov ecx, dword ptr [eax]
// 005977f8  8a542418             mov dl, byte ptr [esp + 0x18]
// 005977fc  8811                 mov byte ptr [ecx], dl
// 005977fe  ff00                 inc dword ptr [eax]
// 00597800  834004ff             add dword ptr [eax + 4], -1
// 00597804  7520                 jne 0x597826
// 00597806  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597809  56                   push esi
// 0059780a  ffd0                 call eax
// 0059780c  83c404               add esp, 4
// 0059780f  84c0                 test al, al
// 00597811  7513                 jne 0x597826
// 00597813  8b0e                 mov ecx, dword ptr [esi]
// 00597815  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0059781c  8b16                 mov edx, dword ptr [esi]
// 0059781e  8b02                 mov eax, dword ptr [edx]
// 00597820  56                   push esi
// 00597821  ffd0                 call eax
// 00597823  83c404               add esp, 4
// 00597826  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0059782a  bf01000000           mov edi, 1
// 0059782f  90                   nop 
// 00597830  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597833  8a141f               mov dl, byte ptr [edi + ebx]
// 00597836  8b08                 mov ecx, dword ptr [eax]
// 00597838  8811                 mov byte ptr [ecx], dl
// 0059783a  ff00                 inc dword ptr [eax]
// 0059783c  834004ff             add dword ptr [eax + 4], -1
// 00597840  7520                 jne 0x597862
// 00597842  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597845  56                   push esi
// 00597846  ffd0                 call eax
// 00597848  83c404               add esp, 4
// 0059784b  84c0                 test al, al
// 0059784d  7513                 jne 0x597862
// 0059784f  8b0e                 mov ecx, dword ptr [esi]
// 00597851  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00597858  8b16                 mov edx, dword ptr [esi]
// 0059785a  8b02                 mov eax, dword ptr [edx]
// 0059785c  56                   push esi
// 0059785d  ffd0                 call eax
// 0059785f  83c404               add esp, 4
// 00597862  47                   inc edi
// 00597863  83ff10               cmp edi, 0x10
// 00597866  7ec8                 jle 0x597830
// 00597868  33ff                 xor edi, edi
// 0059786a  85ed                 test ebp, ebp
// 0059786c  7e3a                 jle 0x5978a8
// 0059786e  8bff                 mov edi, edi
// 00597870  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597873  8a543b11             mov dl, byte ptr [ebx + edi + 0x11]
// 00597877  8b08                 mov ecx, dword ptr [eax]
// 00597879  8811                 mov byte ptr [ecx], dl
// 0059787b  ff00                 inc dword ptr [eax]
// 0059787d  834004ff             add dword ptr [eax + 4], -1
// 00597881  7520                 jne 0x5978a3
// 00597883  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597886  56                   push esi
// 00597887  ffd0                 call eax
// 00597889  83c404               add esp, 4
// 0059788c  84c0                 test al, al
// 0059788e  7513                 jne 0x5978a3
// 00597890  8b0e                 mov ecx, dword ptr [esi]
// 00597892  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00597899  8b16                 mov edx, dword ptr [esi]
// 0059789b  8b02                 mov eax, dword ptr [edx]
// 0059789d  56                   push esi
// 0059789e  ffd0                 call eax
// 005978a0  83c404               add esp, 4
// 005978a3  47                   inc edi
// 005978a4  3bfd                 cmp edi, ebp
// 005978a6  7cc8                 jl 0x597870
// 005978a8  5f                   pop edi
// 005978a9  c6831101000001       mov byte ptr [ebx + 0x111], 1
// 005978b0  5d                   pop ebp
// 005978b1  5e                   pop esi
// 005978b2  5b                   pop ebx
// 005978b3  59                   pop ecx
// 005978b4  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_dht)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
