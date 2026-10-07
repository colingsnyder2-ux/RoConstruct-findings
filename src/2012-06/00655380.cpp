// roc 2012-06 00655380  unit: seg_00650000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655380
//
// 00655380  51                   push ecx
// 00655381  807c240c00           cmp byte ptr [esp + 0xc], 0
// 00655386  53                   push ebx
// 00655387  56                   push esi
// 00655388  8bf0                 mov esi, eax
// 0065538a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065538e  740d                 je 0x65539d
// 00655390  8b5c8668             mov ebx, dword ptr [esi + eax*4 + 0x68]
// 00655394  83c010               add eax, 0x10
// 00655397  89442410             mov dword ptr [esp + 0x10], eax
// 0065539b  eb04                 jmp 0x6553a1
// 0065539d  8b5c8658             mov ebx, dword ptr [esi + eax*4 + 0x58]
// 006553a1  895c2408             mov dword ptr [esp + 8], ebx
// 006553a5  85db                 test ebx, ebx
// 006553a7  751c                 jne 0x6553c5
// 006553a9  8b0e                 mov ecx, dword ptr [esi]
// 006553ab  8b442410             mov eax, dword ptr [esp + 0x10]
// 006553af  c7411432000000       mov dword ptr [ecx + 0x14], 0x32
// 006553b6  8b16                 mov edx, dword ptr [esi]
// 006553b8  894218               mov dword ptr [edx + 0x18], eax
// 006553bb  8b0e                 mov ecx, dword ptr [esi]
// 006553bd  8b11                 mov edx, dword ptr [ecx]
// 006553bf  56                   push esi
// 006553c0  ffd2                 call edx
// 006553c2  83c404               add esp, 4
// 006553c5  80bb1101000000       cmp byte ptr [ebx + 0x111], 0
// 006553cc  0f850f010000         jne 0x6554e1
// 006553d2  55                   push ebp
// 006553d3  57                   push edi
// 006553d4  68c4000000           push 0xc4
// 006553d9  e8e2fcffff           call 0x6550c0
// 006553de  83c404               add esp, 4
// 006553e1  33ed                 xor ebp, ebp
// 006553e3  33ff                 xor edi, edi
// 006553e5  33d2                 xor edx, edx
// 006553e7  33c9                 xor ecx, ecx
// 006553e9  8d4302               lea eax, [ebx + 2]
// 006553ec  c744241c04000000     mov dword ptr [esp + 0x1c], 4
// 006553f4  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 006553f8  03eb                 add ebp, ebx
// 006553fa  0fb618               movzx ebx, byte ptr [eax]
// 006553fd  03cb                 add ecx, ebx
// 006553ff  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00655403  03d3                 add edx, ebx
// 00655405  0fb65802             movzx ebx, byte ptr [eax + 2]
// 00655409  03fb                 add edi, ebx
// 0065540b  83c004               add eax, 4
// 0065540e  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00655413  75df                 jne 0x6553f4
// 00655415  03fa                 add edi, edx
// 00655417  03f9                 add edi, ecx
// 00655419  03ef                 add ebp, edi
// 0065541b  8d5d13               lea ebx, [ebp + 0x13]
// 0065541e  e80dfdffff           call 0x655130
// 00655423  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655426  8b08                 mov ecx, dword ptr [eax]
// 00655428  8a542418             mov dl, byte ptr [esp + 0x18]
// 0065542c  8811                 mov byte ptr [ecx], dl
// 0065542e  ff00                 inc dword ptr [eax]
// 00655430  834004ff             add dword ptr [eax + 4], -1
// 00655434  7520                 jne 0x655456
// 00655436  8b400c               mov eax, dword ptr [eax + 0xc]
// 00655439  56                   push esi
// 0065543a  ffd0                 call eax
// 0065543c  83c404               add esp, 4
// 0065543f  84c0                 test al, al
// 00655441  7513                 jne 0x655456
// 00655443  8b0e                 mov ecx, dword ptr [esi]
// 00655445  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0065544c  8b16                 mov edx, dword ptr [esi]
// 0065544e  8b02                 mov eax, dword ptr [edx]
// 00655450  56                   push esi
// 00655451  ffd0                 call eax
// 00655453  83c404               add esp, 4
// 00655456  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0065545a  bf01000000           mov edi, 1
// 0065545f  90                   nop 
// 00655460  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655463  8a141f               mov dl, byte ptr [edi + ebx]
// 00655466  8b08                 mov ecx, dword ptr [eax]
// 00655468  8811                 mov byte ptr [ecx], dl
// 0065546a  ff00                 inc dword ptr [eax]
// 0065546c  834004ff             add dword ptr [eax + 4], -1
// 00655470  7520                 jne 0x655492
// 00655472  8b400c               mov eax, dword ptr [eax + 0xc]
// 00655475  56                   push esi
// 00655476  ffd0                 call eax
// 00655478  83c404               add esp, 4
// 0065547b  84c0                 test al, al
// 0065547d  7513                 jne 0x655492
// 0065547f  8b0e                 mov ecx, dword ptr [esi]
// 00655481  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00655488  8b16                 mov edx, dword ptr [esi]
// 0065548a  8b02                 mov eax, dword ptr [edx]
// 0065548c  56                   push esi
// 0065548d  ffd0                 call eax
// 0065548f  83c404               add esp, 4
// 00655492  47                   inc edi
// 00655493  83ff10               cmp edi, 0x10
// 00655496  7ec8                 jle 0x655460
// 00655498  33ff                 xor edi, edi
// 0065549a  85ed                 test ebp, ebp
// 0065549c  7e3a                 jle 0x6554d8
// 0065549e  8bff                 mov edi, edi
// 006554a0  8b4618               mov eax, dword ptr [esi + 0x18]
// 006554a3  8a543b11             mov dl, byte ptr [ebx + edi + 0x11]
// 006554a7  8b08                 mov ecx, dword ptr [eax]
// 006554a9  8811                 mov byte ptr [ecx], dl
// 006554ab  ff00                 inc dword ptr [eax]
// 006554ad  834004ff             add dword ptr [eax + 4], -1
// 006554b1  7520                 jne 0x6554d3
// 006554b3  8b400c               mov eax, dword ptr [eax + 0xc]
// 006554b6  56                   push esi
// 006554b7  ffd0                 call eax
// 006554b9  83c404               add esp, 4
// 006554bc  84c0                 test al, al
// 006554be  7513                 jne 0x6554d3
// 006554c0  8b0e                 mov ecx, dword ptr [esi]
// 006554c2  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 006554c9  8b16                 mov edx, dword ptr [esi]
// 006554cb  8b02                 mov eax, dword ptr [edx]
// 006554cd  56                   push esi
// 006554ce  ffd0                 call eax
// 006554d0  83c404               add esp, 4
// 006554d3  47                   inc edi
// 006554d4  3bfd                 cmp edi, ebp
// 006554d6  7cc8                 jl 0x6554a0
// 006554d8  5f                   pop edi
// 006554d9  c6831101000001       mov byte ptr [ebx + 0x111], 1
// 006554e0  5d                   pop ebp
// 006554e1  5e                   pop esi
// 006554e2  5b                   pop ebx
// 006554e3  59                   pop ecx
// 006554e4  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_dht)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
