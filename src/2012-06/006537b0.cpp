// roc 2012-06 006537b0  unit: seg_00650000  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006537b0
//
// 006537b0  b8dcff0000           mov eax, 0xffdc
// 006537b5  394620               cmp dword ptr [esi + 0x20], eax
// 006537b8  7f05                 jg 0x6537bf
// 006537ba  39461c               cmp dword ptr [esi + 0x1c], eax
// 006537bd  7e18                 jle 0x6537d7
// 006537bf  8b0e                 mov ecx, dword ptr [esi]
// 006537c1  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 006537c8  8b16                 mov edx, dword ptr [esi]
// 006537ca  894218               mov dword ptr [edx + 0x18], eax
// 006537cd  8b06                 mov eax, dword ptr [esi]
// 006537cf  8b08                 mov ecx, dword ptr [eax]
// 006537d1  56                   push esi
// 006537d2  ffd1                 call ecx
// 006537d4  83c404               add esp, 4
// 006537d7  83bec000000008       cmp dword ptr [esi + 0xc0], 8
// 006537de  741e                 je 0x6537fe
// 006537e0  8b16                 mov edx, dword ptr [esi]
// 006537e2  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 006537e9  8b06                 mov eax, dword ptr [esi]
// 006537eb  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 006537f1  894818               mov dword ptr [eax + 0x18], ecx
// 006537f4  8b16                 mov edx, dword ptr [esi]
// 006537f6  8b02                 mov eax, dword ptr [edx]
// 006537f8  56                   push esi
// 006537f9  ffd0                 call eax
// 006537fb  83c404               add esp, 4
// 006537fe  b80a000000           mov eax, 0xa
// 00653803  394624               cmp dword ptr [esi + 0x24], eax
// 00653806  7e20                 jle 0x653828
// 00653808  8b0e                 mov ecx, dword ptr [esi]
// 0065380a  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 00653811  8b16                 mov edx, dword ptr [esi]
// 00653813  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00653816  894a18               mov dword ptr [edx + 0x18], ecx
// 00653819  8b16                 mov edx, dword ptr [esi]
// 0065381b  89421c               mov dword ptr [edx + 0x1c], eax
// 0065381e  8b06                 mov eax, dword ptr [esi]
// 00653820  8b08                 mov ecx, dword ptr [eax]
// 00653822  56                   push esi
// 00653823  ffd1                 call ecx
// 00653825  83c404               add esp, 4
// 00653828  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0065382e  53                   push ebx
// 0065382f  55                   push ebp
// 00653830  bb01000000           mov ebx, 1
// 00653835  33ed                 xor ebp, ebp
// 00653837  396e24               cmp dword ptr [esi + 0x24], ebp
// 0065383a  57                   push edi
// 0065383b  899e10010000         mov dword ptr [esi + 0x110], ebx
// 00653841  899e14010000         mov dword ptr [esi + 0x114], ebx
// 00653847  7e64                 jle 0x6538ad
// 00653849  8d780c               lea edi, [eax + 0xc]
// 0065384c  8d642400             lea esp, [esp]
// 00653850  8b47fc               mov eax, dword ptr [edi - 4]
// 00653853  85c0                 test eax, eax
// 00653855  7e10                 jle 0x653867
// 00653857  83f804               cmp eax, 4
// 0065385a  7f0b                 jg 0x653867
// 0065385c  8b07                 mov eax, dword ptr [edi]
// 0065385e  85c0                 test eax, eax
// 00653860  7e05                 jle 0x653867
// 00653862  83f804               cmp eax, 4
// 00653865  7e13                 jle 0x65387a
// 00653867  8b16                 mov edx, dword ptr [esi]
// 00653869  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 00653870  8b06                 mov eax, dword ptr [esi]
// 00653872  8b08                 mov ecx, dword ptr [eax]
// 00653874  56                   push esi
// 00653875  ffd1                 call ecx
// 00653877  83c404               add esp, 4
// 0065387a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00653880  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00653883  3bc1                 cmp eax, ecx
// 00653885  7f02                 jg 0x653889
// 00653887  8bc1                 mov eax, ecx
// 00653889  898610010000         mov dword ptr [esi + 0x110], eax
// 0065388f  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00653895  8b0f                 mov ecx, dword ptr [edi]
// 00653897  3bc1                 cmp eax, ecx
// 00653899  7f02                 jg 0x65389d
// 0065389b  8bc1                 mov eax, ecx
// 0065389d  03eb                 add ebp, ebx
// 0065389f  898614010000         mov dword ptr [esi + 0x114], eax
// 006538a5  83c754               add edi, 0x54
// 006538a8  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 006538ab  7ca3                 jl 0x653850
// 006538ad  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 006538b3  33ed                 xor ebp, ebp
// 006538b5  396e24               cmp dword ptr [esi + 0x24], ebp
// 006538b8  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 006538c2  0f8e91000000         jle 0x653959
// 006538c8  8d781c               lea edi, [eax + 0x1c]
// 006538cb  eb03                 jmp 0x6538d0
// 006538cd  8d4900               lea ecx, [ecx]
// 006538d0  8b47ec               mov eax, dword ptr [edi - 0x14]
// 006538d3  c7470808000000       mov dword ptr [edi + 8], 8
// 006538da  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 006538de  8b9610010000         mov edx, dword ptr [esi + 0x110]
// 006538e4  03d2                 add edx, edx
// 006538e6  03d2                 add edx, edx
// 006538e8  03d2                 add edx, edx
// 006538ea  52                   push edx
// 006538eb  50                   push eax
// 006538ec  e8bffbffff           call 0x6534b0
// 006538f1  8b57f0               mov edx, dword ptr [edi - 0x10]
// 006538f4  8907                 mov dword ptr [edi], eax
// 006538f6  0faf5620             imul edx, dword ptr [esi + 0x20]
// 006538fa  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 00653900  03c9                 add ecx, ecx
// 00653902  03c9                 add ecx, ecx
// 00653904  03c9                 add ecx, ecx
// 00653906  51                   push ecx
// 00653907  52                   push edx
// 00653908  e8a3fbffff           call 0x6534b0
// 0065390d  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 00653910  894704               mov dword ptr [edi + 4], eax
// 00653913  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 00653917  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0065391d  50                   push eax
// 0065391e  51                   push ecx
// 0065391f  e88cfbffff           call 0x6534b0
// 00653924  89470c               mov dword ptr [edi + 0xc], eax
// 00653927  8b47f0               mov eax, dword ptr [edi - 0x10]
// 0065392a  0faf4620             imul eax, dword ptr [esi + 0x20]
// 0065392e  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 00653934  52                   push edx
// 00653935  50                   push eax
// 00653936  e875fbffff           call 0x6534b0
// 0065393b  894710               mov dword ptr [edi + 0x10], eax
// 0065393e  885f14               mov byte ptr [edi + 0x14], bl
// 00653941  c7473000000000       mov dword ptr [edi + 0x30], 0
// 00653948  03eb                 add ebp, ebx
// 0065394a  83c420               add esp, 0x20
// 0065394d  83c754               add edi, 0x54
// 00653950  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 00653953  0f8c77ffffff         jl 0x6538d0
// 00653959  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0065395f  8b5620               mov edx, dword ptr [esi + 0x20]
// 00653962  03c9                 add ecx, ecx
// 00653964  03c9                 add ecx, ecx
// 00653966  03c9                 add ecx, ecx
// 00653968  51                   push ecx
// 00653969  52                   push edx
// 0065396a  e841fbffff           call 0x6534b0
// 0065396f  89861c010000         mov dword ptr [esi + 0x11c], eax
// 00653975  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0065397b  83c408               add esp, 8
// 0065397e  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00653981  7c17                 jl 0x65399a
// 00653983  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 0065398a  750e                 jne 0x65399a
// 0065398c  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00653992  5f                   pop edi
// 00653993  5d                   pop ebp
// 00653994  c6411000             mov byte ptr [ecx + 0x10], 0
// 00653998  5b                   pop ebx
// 00653999  c3                   ret 
// 0065399a  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 006539a0  5f                   pop edi
// 006539a1  5d                   pop ebp
// 006539a2  885a10               mov byte ptr [edx + 0x10], bl
// 006539a5  5b                   pop ebx
// 006539a6  c3                   ret 
// library jpeg-6b/jdinput.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
