// from server: 100% by auto
// roc 2012-06 00655660  unit: seg_00650000  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655660
//
// 00655660  53                   push ebx
// 00655661  56                   push esi
// 00655662  57                   push edi
// 00655663  8bf0                 mov esi, eax
// 00655665  68da000000           push 0xda
// 0065566a  e851faffff           call 0x6550c0
// 0065566f  8b9ee4000000         mov ebx, dword ptr [esi + 0xe4]
// 00655675  83c404               add esp, 4
// 00655678  8d5c1b06             lea ebx, [ebx + ebx + 6]
// 0065567c  e8affaffff           call 0x655130
// 00655681  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655684  8a96e4000000         mov dl, byte ptr [esi + 0xe4]
// 0065568a  8b08                 mov ecx, dword ptr [eax]
// 0065568c  8811                 mov byte ptr [ecx], dl
// 0065568e  ff00                 inc dword ptr [eax]
// 00655690  83cfff               or edi, 0xffffffff
// 00655693  017804               add dword ptr [eax + 4], edi
// 00655696  7523                 jne 0x6556bb
// 00655698  8b400c               mov eax, dword ptr [eax + 0xc]
// 0065569b  56                   push esi
// 0065569c  ffd0                 call eax
// 0065569e  83c404               add esp, 4
// 006556a1  84c0                 test al, al
// 006556a3  7516                 jne 0x6556bb
// 006556a5  8b0e                 mov ecx, dword ptr [esi]
// 006556a7  bb18000000           mov ebx, 0x18
// 006556ac  895914               mov dword ptr [ecx + 0x14], ebx
// 006556af  8b16                 mov edx, dword ptr [esi]
// 006556b1  8b02                 mov eax, dword ptr [edx]
// 006556b3  56                   push esi
// 006556b4  ffd0                 call eax
// 006556b6  83c404               add esp, 4
// 006556b9  eb05                 jmp 0x6556c0
// 006556bb  bb18000000           mov ebx, 0x18
// 006556c0  55                   push ebp
// 006556c1  33ed                 xor ebp, ebp
// 006556c3  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 006556c9  0f8eb1000000         jle 0x655780
// 006556cf  8d9ee8000000         lea ebx, [esi + 0xe8]
// 006556d5  8b3b                 mov edi, dword ptr [ebx]
// 006556d7  8b4618               mov eax, dword ptr [esi + 0x18]
// 006556da  8a17                 mov dl, byte ptr [edi]
// 006556dc  8b08                 mov ecx, dword ptr [eax]
// 006556de  8811                 mov byte ptr [ecx], dl
// 006556e0  ff00                 inc dword ptr [eax]
// 006556e2  834004ff             add dword ptr [eax + 4], -1
// 006556e6  7520                 jne 0x655708
// 006556e8  8b400c               mov eax, dword ptr [eax + 0xc]
// 006556eb  56                   push esi
// 006556ec  ffd0                 call eax
// 006556ee  83c404               add esp, 4
// 006556f1  84c0                 test al, al
// 006556f3  7513                 jne 0x655708
// 006556f5  8b0e                 mov ecx, dword ptr [esi]
// 006556f7  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 006556fe  8b16                 mov edx, dword ptr [esi]
// 00655700  8b02                 mov eax, dword ptr [edx]
// 00655702  56                   push esi
// 00655703  ffd0                 call eax
// 00655705  83c404               add esp, 4
// 00655708  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0065570f  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00655712  8b5718               mov edx, dword ptr [edi + 0x18]
// 00655715  741d                 je 0x655734
// 00655717  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0065571e  7512                 jne 0x655732
// 00655720  33d2                 xor edx, edx
// 00655722  399634010000         cmp dword ptr [esi + 0x134], edx
// 00655728  740a                 je 0x655734
// 0065572a  3896b1000000         cmp byte ptr [esi + 0xb1], dl
// 00655730  7502                 jne 0x655734
// 00655732  33c9                 xor ecx, ecx
// 00655734  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655737  c0e104               shl cl, 4
// 0065573a  02ca                 add cl, dl
// 0065573c  8b10                 mov edx, dword ptr [eax]
// 0065573e  880a                 mov byte ptr [edx], cl
// 00655740  ff00                 inc dword ptr [eax]
// 00655742  834004ff             add dword ptr [eax + 4], -1
// 00655746  7520                 jne 0x655768
// 00655748  8b400c               mov eax, dword ptr [eax + 0xc]
// 0065574b  56                   push esi
// 0065574c  ffd0                 call eax
// 0065574e  83c404               add esp, 4
// 00655751  84c0                 test al, al
// 00655753  7513                 jne 0x655768
// 00655755  8b0e                 mov ecx, dword ptr [esi]
// 00655757  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0065575e  8b16                 mov edx, dword ptr [esi]
// 00655760  8b02                 mov eax, dword ptr [edx]
// 00655762  56                   push esi
// 00655763  ffd0                 call eax
// 00655765  83c404               add esp, 4
// 00655768  45                   inc ebp
// 00655769  83c304               add ebx, 4
// 0065576c  3baee4000000         cmp ebp, dword ptr [esi + 0xe4]
// 00655772  0f8c5dffffff         jl 0x6556d5
// 00655778  bb18000000           mov ebx, 0x18
// 0065577d  83cfff               or edi, 0xffffffff
// 00655780  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655783  8a962c010000         mov dl, byte ptr [esi + 0x12c]
// 00655789  8b08                 mov ecx, dword ptr [eax]
// 0065578b  8811                 mov byte ptr [ecx], dl
// 0065578d  ff00                 inc dword ptr [eax]
// 0065578f  017804               add dword ptr [eax + 4], edi
// 00655792  5d                   pop ebp
// 00655793  751c                 jne 0x6557b1
// 00655795  8b400c               mov eax, dword ptr [eax + 0xc]
// 00655798  56                   push esi
// 00655799  ffd0                 call eax
// 0065579b  83c404               add esp, 4
// 0065579e  84c0                 test al, al
// 006557a0  750f                 jne 0x6557b1
// 006557a2  8b0e                 mov ecx, dword ptr [esi]
// 006557a4  895914               mov dword ptr [ecx + 0x14], ebx
// 006557a7  8b16                 mov edx, dword ptr [esi]
// 006557a9  8b02                 mov eax, dword ptr [edx]
// 006557ab  56                   push esi
// 006557ac  ffd0                 call eax
// 006557ae  83c404               add esp, 4
// 006557b1  8b4618               mov eax, dword ptr [esi + 0x18]
// 006557b4  8a9630010000         mov dl, byte ptr [esi + 0x130]
// 006557ba  8b08                 mov ecx, dword ptr [eax]
// 006557bc  8811                 mov byte ptr [ecx], dl
// 006557be  ff00                 inc dword ptr [eax]
// 006557c0  017804               add dword ptr [eax + 4], edi
// 006557c3  751c                 jne 0x6557e1
// 006557c5  8b400c               mov eax, dword ptr [eax + 0xc]
// 006557c8  56                   push esi
// 006557c9  ffd0                 call eax
// 006557cb  83c404               add esp, 4
// 006557ce  84c0                 test al, al
// 006557d0  750f                 jne 0x6557e1
// 006557d2  8b0e                 mov ecx, dword ptr [esi]
// 006557d4  895914               mov dword ptr [ecx + 0x14], ebx
// 006557d7  8b16                 mov edx, dword ptr [esi]
// 006557d9  8b02                 mov eax, dword ptr [edx]
// 006557db  56                   push esi
// 006557dc  ffd0                 call eax
// 006557de  83c404               add esp, 4
// 006557e1  8a8e34010000         mov cl, byte ptr [esi + 0x134]
// 006557e7  8b4618               mov eax, dword ptr [esi + 0x18]
// 006557ea  8b10                 mov edx, dword ptr [eax]
// 006557ec  c0e104               shl cl, 4
// 006557ef  028e38010000         add cl, byte ptr [esi + 0x138]
// 006557f5  880a                 mov byte ptr [edx], cl
// 006557f7  ff00                 inc dword ptr [eax]
// 006557f9  017804               add dword ptr [eax + 4], edi
// 006557fc  751c                 jne 0x65581a
// 006557fe  8b400c               mov eax, dword ptr [eax + 0xc]
// 00655801  56                   push esi
// 00655802  ffd0                 call eax
// 00655804  83c404               add esp, 4
// 00655807  84c0                 test al, al
// 00655809  750f                 jne 0x65581a
// 0065580b  8b0e                 mov ecx, dword ptr [esi]
// 0065580d  895914               mov dword ptr [ecx + 0x14], ebx
// 00655810  8b16                 mov edx, dword ptr [esi]
// 00655812  8b02                 mov eax, dword ptr [edx]
// 00655814  56                   push esi
// 00655815  ffd0                 call eax
// 00655817  83c404               add esp, 4
// 0065581a  5f                   pop edi
// 0065581b  5e                   pop esi
// 0065581c  5b                   pop ebx
// 0065581d  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_sos)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
