// roc 2008-06 0052f8c0  unit: seg_00520000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052f8c0
//
// 0052f8c0  51                   push ecx
// 0052f8c1  807c240c00           cmp byte ptr [esp + 0xc], 0
// 0052f8c6  53                   push ebx
// 0052f8c7  56                   push esi
// 0052f8c8  8bf0                 mov esi, eax
// 0052f8ca  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052f8ce  740d                 je 0x52f8dd
// 0052f8d0  8b5c8668             mov ebx, dword ptr [esi + eax*4 + 0x68]
// 0052f8d4  83c010               add eax, 0x10
// 0052f8d7  89442410             mov dword ptr [esp + 0x10], eax
// 0052f8db  eb04                 jmp 0x52f8e1
// 0052f8dd  8b5c8658             mov ebx, dword ptr [esi + eax*4 + 0x58]
// 0052f8e1  895c2408             mov dword ptr [esp + 8], ebx
// 0052f8e5  85db                 test ebx, ebx
// 0052f8e7  751c                 jne 0x52f905
// 0052f8e9  8b0e                 mov ecx, dword ptr [esi]
// 0052f8eb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052f8ef  c7411432000000       mov dword ptr [ecx + 0x14], 0x32
// 0052f8f6  8b16                 mov edx, dword ptr [esi]
// 0052f8f8  894218               mov dword ptr [edx + 0x18], eax
// 0052f8fb  8b0e                 mov ecx, dword ptr [esi]
// 0052f8fd  8b11                 mov edx, dword ptr [ecx]
// 0052f8ff  56                   push esi
// 0052f900  ffd2                 call edx
// 0052f902  83c404               add esp, 4
// 0052f905  80bb1101000000       cmp byte ptr [ebx + 0x111], 0
// 0052f90c  0f850f010000         jne 0x52fa21
// 0052f912  55                   push ebp
// 0052f913  57                   push edi
// 0052f914  68c4000000           push 0xc4
// 0052f919  e8e2fcffff           call 0x52f600
// 0052f91e  83c404               add esp, 4
// 0052f921  33ed                 xor ebp, ebp
// 0052f923  33ff                 xor edi, edi
// 0052f925  33d2                 xor edx, edx
// 0052f927  33c9                 xor ecx, ecx
// 0052f929  8d4302               lea eax, [ebx + 2]
// 0052f92c  c744241c04000000     mov dword ptr [esp + 0x1c], 4
// 0052f934  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0052f938  03eb                 add ebp, ebx
// 0052f93a  0fb618               movzx ebx, byte ptr [eax]
// 0052f93d  03cb                 add ecx, ebx
// 0052f93f  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0052f943  03d3                 add edx, ebx
// 0052f945  0fb65802             movzx ebx, byte ptr [eax + 2]
// 0052f949  03fb                 add edi, ebx
// 0052f94b  83c004               add eax, 4
// 0052f94e  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0052f953  75df                 jne 0x52f934
// 0052f955  03fa                 add edi, edx
// 0052f957  03f9                 add edi, ecx
// 0052f959  03ef                 add ebp, edi
// 0052f95b  8d5d13               lea ebx, [ebp + 0x13]
// 0052f95e  e80dfdffff           call 0x52f670
// 0052f963  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052f966  8b08                 mov ecx, dword ptr [eax]
// 0052f968  8a542418             mov dl, byte ptr [esp + 0x18]
// 0052f96c  8811                 mov byte ptr [ecx], dl
// 0052f96e  ff00                 inc dword ptr [eax]
// 0052f970  834004ff             add dword ptr [eax + 4], -1
// 0052f974  7520                 jne 0x52f996
// 0052f976  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052f979  56                   push esi
// 0052f97a  ffd0                 call eax
// 0052f97c  83c404               add esp, 4
// 0052f97f  84c0                 test al, al
// 0052f981  7513                 jne 0x52f996
// 0052f983  8b0e                 mov ecx, dword ptr [esi]
// 0052f985  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0052f98c  8b16                 mov edx, dword ptr [esi]
// 0052f98e  8b02                 mov eax, dword ptr [edx]
// 0052f990  56                   push esi
// 0052f991  ffd0                 call eax
// 0052f993  83c404               add esp, 4
// 0052f996  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052f99a  bf01000000           mov edi, 1
// 0052f99f  90                   nop 
// 0052f9a0  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052f9a3  8a141f               mov dl, byte ptr [edi + ebx]
// 0052f9a6  8b08                 mov ecx, dword ptr [eax]
// 0052f9a8  8811                 mov byte ptr [ecx], dl
// 0052f9aa  ff00                 inc dword ptr [eax]
// 0052f9ac  834004ff             add dword ptr [eax + 4], -1
// 0052f9b0  7520                 jne 0x52f9d2
// 0052f9b2  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052f9b5  56                   push esi
// 0052f9b6  ffd0                 call eax
// 0052f9b8  83c404               add esp, 4
// 0052f9bb  84c0                 test al, al
// 0052f9bd  7513                 jne 0x52f9d2
// 0052f9bf  8b0e                 mov ecx, dword ptr [esi]
// 0052f9c1  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0052f9c8  8b16                 mov edx, dword ptr [esi]
// 0052f9ca  8b02                 mov eax, dword ptr [edx]
// 0052f9cc  56                   push esi
// 0052f9cd  ffd0                 call eax
// 0052f9cf  83c404               add esp, 4
// 0052f9d2  47                   inc edi
// 0052f9d3  83ff10               cmp edi, 0x10
// 0052f9d6  7ec8                 jle 0x52f9a0
// 0052f9d8  33ff                 xor edi, edi
// 0052f9da  85ed                 test ebp, ebp
// 0052f9dc  7e3a                 jle 0x52fa18
// 0052f9de  8bff                 mov edi, edi
// 0052f9e0  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052f9e3  8a543b11             mov dl, byte ptr [ebx + edi + 0x11]
// 0052f9e7  8b08                 mov ecx, dword ptr [eax]
// 0052f9e9  8811                 mov byte ptr [ecx], dl
// 0052f9eb  ff00                 inc dword ptr [eax]
// 0052f9ed  834004ff             add dword ptr [eax + 4], -1
// 0052f9f1  7520                 jne 0x52fa13
// 0052f9f3  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052f9f6  56                   push esi
// 0052f9f7  ffd0                 call eax
// 0052f9f9  83c404               add esp, 4
// 0052f9fc  84c0                 test al, al
// 0052f9fe  7513                 jne 0x52fa13
// 0052fa00  8b0e                 mov ecx, dword ptr [esi]
// 0052fa02  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0052fa09  8b16                 mov edx, dword ptr [esi]
// 0052fa0b  8b02                 mov eax, dword ptr [edx]
// 0052fa0d  56                   push esi
// 0052fa0e  ffd0                 call eax
// 0052fa10  83c404               add esp, 4
// 0052fa13  47                   inc edi
// 0052fa14  3bfd                 cmp edi, ebp
// 0052fa16  7cc8                 jl 0x52f9e0
// 0052fa18  5f                   pop edi
// 0052fa19  c6831101000001       mov byte ptr [ebx + 0x111], 1
// 0052fa20  5d                   pop ebp
// 0052fa21  5e                   pop esi
// 0052fa22  5b                   pop ebx
// 0052fa23  59                   pop ecx
// 0052fa24  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_dht)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
