// roc 2009-12 00619780  unit: seg_00610000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00619780
//
// 00619780  51                   push ecx
// 00619781  807c240c00           cmp byte ptr [esp + 0xc], 0
// 00619786  53                   push ebx
// 00619787  56                   push esi
// 00619788  8bf0                 mov esi, eax
// 0061978a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061978e  740d                 je 0x61979d
// 00619790  8b5c8668             mov ebx, dword ptr [esi + eax*4 + 0x68]
// 00619794  83c010               add eax, 0x10
// 00619797  89442410             mov dword ptr [esp + 0x10], eax
// 0061979b  eb04                 jmp 0x6197a1
// 0061979d  8b5c8658             mov ebx, dword ptr [esi + eax*4 + 0x58]
// 006197a1  895c2408             mov dword ptr [esp + 8], ebx
// 006197a5  85db                 test ebx, ebx
// 006197a7  751c                 jne 0x6197c5
// 006197a9  8b0e                 mov ecx, dword ptr [esi]
// 006197ab  8b442410             mov eax, dword ptr [esp + 0x10]
// 006197af  c7411432000000       mov dword ptr [ecx + 0x14], 0x32
// 006197b6  8b16                 mov edx, dword ptr [esi]
// 006197b8  894218               mov dword ptr [edx + 0x18], eax
// 006197bb  8b0e                 mov ecx, dword ptr [esi]
// 006197bd  8b11                 mov edx, dword ptr [ecx]
// 006197bf  56                   push esi
// 006197c0  ffd2                 call edx
// 006197c2  83c404               add esp, 4
// 006197c5  80bb1101000000       cmp byte ptr [ebx + 0x111], 0
// 006197cc  0f850f010000         jne 0x6198e1
// 006197d2  55                   push ebp
// 006197d3  57                   push edi
// 006197d4  68c4000000           push 0xc4
// 006197d9  e8e2fcffff           call 0x6194c0
// 006197de  83c404               add esp, 4
// 006197e1  33ed                 xor ebp, ebp
// 006197e3  33ff                 xor edi, edi
// 006197e5  33d2                 xor edx, edx
// 006197e7  33c9                 xor ecx, ecx
// 006197e9  8d4302               lea eax, [ebx + 2]
// 006197ec  c744241c04000000     mov dword ptr [esp + 0x1c], 4
// 006197f4  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 006197f8  03eb                 add ebp, ebx
// 006197fa  0fb618               movzx ebx, byte ptr [eax]
// 006197fd  03cb                 add ecx, ebx
// 006197ff  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00619803  03d3                 add edx, ebx
// 00619805  0fb65802             movzx ebx, byte ptr [eax + 2]
// 00619809  03fb                 add edi, ebx
// 0061980b  83c004               add eax, 4
// 0061980e  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00619813  75df                 jne 0x6197f4
// 00619815  03fa                 add edi, edx
// 00619817  03f9                 add edi, ecx
// 00619819  03ef                 add ebp, edi
// 0061981b  8d5d13               lea ebx, [ebp + 0x13]
// 0061981e  e80dfdffff           call 0x619530
// 00619823  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619826  8b08                 mov ecx, dword ptr [eax]
// 00619828  8a542418             mov dl, byte ptr [esp + 0x18]
// 0061982c  8811                 mov byte ptr [ecx], dl
// 0061982e  ff00                 inc dword ptr [eax]
// 00619830  834004ff             add dword ptr [eax + 4], -1
// 00619834  7520                 jne 0x619856
// 00619836  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619839  56                   push esi
// 0061983a  ffd0                 call eax
// 0061983c  83c404               add esp, 4
// 0061983f  84c0                 test al, al
// 00619841  7513                 jne 0x619856
// 00619843  8b0e                 mov ecx, dword ptr [esi]
// 00619845  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0061984c  8b16                 mov edx, dword ptr [esi]
// 0061984e  8b02                 mov eax, dword ptr [edx]
// 00619850  56                   push esi
// 00619851  ffd0                 call eax
// 00619853  83c404               add esp, 4
// 00619856  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0061985a  bf01000000           mov edi, 1
// 0061985f  90                   nop 
// 00619860  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619863  8a141f               mov dl, byte ptr [edi + ebx]
// 00619866  8b08                 mov ecx, dword ptr [eax]
// 00619868  8811                 mov byte ptr [ecx], dl
// 0061986a  ff00                 inc dword ptr [eax]
// 0061986c  834004ff             add dword ptr [eax + 4], -1
// 00619870  7520                 jne 0x619892
// 00619872  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619875  56                   push esi
// 00619876  ffd0                 call eax
// 00619878  83c404               add esp, 4
// 0061987b  84c0                 test al, al
// 0061987d  7513                 jne 0x619892
// 0061987f  8b0e                 mov ecx, dword ptr [esi]
// 00619881  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00619888  8b16                 mov edx, dword ptr [esi]
// 0061988a  8b02                 mov eax, dword ptr [edx]
// 0061988c  56                   push esi
// 0061988d  ffd0                 call eax
// 0061988f  83c404               add esp, 4
// 00619892  47                   inc edi
// 00619893  83ff10               cmp edi, 0x10
// 00619896  7ec8                 jle 0x619860
// 00619898  33ff                 xor edi, edi
// 0061989a  85ed                 test ebp, ebp
// 0061989c  7e3a                 jle 0x6198d8
// 0061989e  8bff                 mov edi, edi
// 006198a0  8b4618               mov eax, dword ptr [esi + 0x18]
// 006198a3  8a543b11             mov dl, byte ptr [ebx + edi + 0x11]
// 006198a7  8b08                 mov ecx, dword ptr [eax]
// 006198a9  8811                 mov byte ptr [ecx], dl
// 006198ab  ff00                 inc dword ptr [eax]
// 006198ad  834004ff             add dword ptr [eax + 4], -1
// 006198b1  7520                 jne 0x6198d3
// 006198b3  8b400c               mov eax, dword ptr [eax + 0xc]
// 006198b6  56                   push esi
// 006198b7  ffd0                 call eax
// 006198b9  83c404               add esp, 4
// 006198bc  84c0                 test al, al
// 006198be  7513                 jne 0x6198d3
// 006198c0  8b0e                 mov ecx, dword ptr [esi]
// 006198c2  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 006198c9  8b16                 mov edx, dword ptr [esi]
// 006198cb  8b02                 mov eax, dword ptr [edx]
// 006198cd  56                   push esi
// 006198ce  ffd0                 call eax
// 006198d0  83c404               add esp, 4
// 006198d3  47                   inc edi
// 006198d4  3bfd                 cmp edi, ebp
// 006198d6  7cc8                 jl 0x6198a0
// 006198d8  5f                   pop edi
// 006198d9  c6831101000001       mov byte ptr [ebx + 0x111], 1
// 006198e0  5d                   pop ebp
// 006198e1  5e                   pop esi
// 006198e2  5b                   pop ebx
// 006198e3  59                   pop ecx
// 006198e4  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_dht)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
