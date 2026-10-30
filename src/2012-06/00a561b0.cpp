// roc 2012-06 00a561b0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 502 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a561b0
//
// 00a561b0  6aff                 push -1
// 00a561b2  681873ae00           push 0xae7318
// 00a561b7  64a100000000         mov eax, dword ptr fs:[0]
// 00a561bd  50                   push eax
// 00a561be  83ec2c               sub esp, 0x2c
// 00a561c1  53                   push ebx
// 00a561c2  55                   push ebp
// 00a561c3  56                   push esi
// 00a561c4  57                   push edi
// 00a561c5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a561ca  33c4                 xor eax, esp
// 00a561cc  50                   push eax
// 00a561cd  8d442440             lea eax, [esp + 0x40]
// 00a561d1  64a300000000         mov dword ptr fs:[0], eax
// 00a561d7  8bf1                 mov esi, ecx
// 00a561d9  89742414             mov dword ptr [esp + 0x14], esi
// 00a561dd  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a561e0  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00a561e6  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00a561e9  83f8ff               cmp eax, -1
// 00a561ec  7503                 jne 0xa561f1
// 00a561ee  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00a561f1  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 00a561f5  50                   push eax
// 00a561f6  8d4c245c             lea ecx, [esp + 0x5c]
// 00a561fa  51                   push ecx
// 00a561fb  8bcd                 mov ecx, ebp
// 00a561fd  e8aaccf2ff           call 0x982eac
// 00a56202  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00a56206  8b13                 mov edx, dword ptr [ebx]
// 00a56208  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a5620b  8bcb                 mov ecx, ebx
// 00a5620d  ffd0                 call eax
// 00a5620f  50                   push eax
// 00a56210  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a56213  8b5050               mov edx, dword ptr [eax + 0x50]
// 00a56216  83c050               add eax, 0x50
// 00a56219  83ec10               sub esp, 0x10
// 00a5621c  8bcc                 mov ecx, esp
// 00a5621e  8911                 mov dword ptr [ecx], edx
// 00a56220  8b5004               mov edx, dword ptr [eax + 4]
// 00a56223  895104               mov dword ptr [ecx + 4], edx
// 00a56226  8b5008               mov edx, dword ptr [eax + 8]
// 00a56229  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a5622c  895108               mov dword ptr [ecx + 8], edx
// 00a5622f  89410c               mov dword ptr [ecx + 0xc], eax
// 00a56232  8d4c246c             lea ecx, [esp + 0x6c]
// 00a56236  51                   push ecx
// 00a56237  e844b9ffff           call 0xa51b80
// 00a5623c  33ff                 xor edi, edi
// 00a5623e  83c418               add esp, 0x18
// 00a56241  897c241c             mov dword ptr [esp + 0x1c], edi
// 00a56245  c744241828e1c000     mov dword ptr [esp + 0x18], 0xc0e128
// 00a5624d  8d542458             lea edx, [esp + 0x58]
// 00a56251  52                   push edx
// 00a56252  897c244c             mov dword ptr [esp + 0x4c], edi
// 00a56256  ff152c21b200         call dword ptr [0xb2212c]
// 00a5625c  50                   push eax
// 00a5625d  8d4c241c             lea ecx, [esp + 0x1c]
// 00a56261  e872c4f2ff           call 0x9826d8
// 00a56266  8d442418             lea eax, [esp + 0x18]
// 00a5626a  50                   push eax
// 00a5626b  8bcd                 mov ecx, ebp
// 00a5626d  e87c350400           call 0xa997ee
// 00a56272  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a56275  83783802             cmp dword ptr [eax + 0x38], 2
// 00a56279  743e                 je 0xa562b9
// 00a5627b  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a56281  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00a56284  83f9ff               cmp ecx, -1
// 00a56287  7503                 jne 0xa5628c
// 00a56289  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00a5628c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00a5628f  83faff               cmp edx, -1
// 00a56292  7513                 jne 0xa562a7
// 00a56294  8b4048               mov eax, dword ptr [eax + 0x48]
// 00a56297  51                   push ecx
// 00a56298  50                   push eax
// 00a56299  8d4c2460             lea ecx, [esp + 0x60]
// 00a5629d  51                   push ecx
// 00a5629e  8bcd                 mov ecx, ebp
// 00a562a0  e801ccf2ff           call 0x982ea6
// 00a562a5  eb48                 jmp 0xa562ef
// 00a562a7  51                   push ecx
// 00a562a8  8bc2                 mov eax, edx
// 00a562aa  50                   push eax
// 00a562ab  8d4c2460             lea ecx, [esp + 0x60]
// 00a562af  51                   push ecx
// 00a562b0  8bcd                 mov ecx, ebp
// 00a562b2  e8efcbf2ff           call 0x982ea6
// 00a562b7  eb36                 jmp 0xa562ef
// 00a562b9  397b5c               cmp dword ptr [ebx + 0x5c], edi
// 00a562bc  7e31                 jle 0xa562ef
// 00a562be  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a562c4  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00a562c7  83f9ff               cmp ecx, -1
// 00a562ca  7503                 jne 0xa562cf
// 00a562cc  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00a562cf  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a562d3  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a562d7  2bc2                 sub eax, edx
// 00a562d9  83f9ff               cmp ecx, -1
// 00a562dc  7411                 je 0xa562ef
// 00a562de  51                   push ecx
// 00a562df  6a01                 push 1
// 00a562e1  50                   push eax
// 00a562e2  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a562e6  50                   push eax
// 00a562e7  52                   push edx
// 00a562e8  8bcd                 mov ecx, ebp
// 00a562ea  e8a1320400           call 0xa99590
// 00a562ef  6a01                 push 1
// 00a562f1  8bcd                 mov ecx, ebp
// 00a562f3  e8b0320400           call 0xa995a8
// 00a562f8  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 00a562fb  8d78ff               lea edi, [eax - 1]
// 00a562fe  85ff                 test edi, edi
// 00a56300  7c6c                 jl 0xa5636e
// 00a56302  85ff                 test edi, edi
// 00a56304  7c10                 jl 0xa56316
// 00a56306  3b7b5c               cmp edi, dword ptr [ebx + 0x5c]
// 00a56309  7d0b                 jge 0xa56316
// 00a5630b  8b4b58               mov ecx, dword ptr [ebx + 0x58]
// 00a5630e  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 00a56311  8d04b9               lea eax, [ecx + edi*4]
// 00a56314  eb02                 jmp 0xa56318
// 00a56316  33f6                 xor esi, esi
// 00a56318  8b5644               mov edx, dword ptr [esi + 0x44]
// 00a5631b  89542420             mov dword ptr [esp + 0x20], edx
// 00a5631f  8b4648               mov eax, dword ptr [esi + 0x48]
// 00a56322  89442424             mov dword ptr [esp + 0x24], eax
// 00a56326  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00a56329  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a5632d  8b5650               mov edx, dword ptr [esi + 0x50]
// 00a56330  8d442420             lea eax, [esp + 0x20]
// 00a56334  50                   push eax
// 00a56335  8d4c245c             lea ecx, [esp + 0x5c]
// 00a56339  89542430             mov dword ptr [esp + 0x30], edx
// 00a5633d  51                   push ecx
// 00a5633e  8d542438             lea edx, [esp + 0x38]
// 00a56342  52                   push edx
// 00a56343  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a56349  85c0                 test eax, eax
// 00a5634b  741c                 je 0xa56369
// 00a5634d  8d442420             lea eax, [esp + 0x20]
// 00a56351  50                   push eax
// 00a56352  ff15f03ab200         call dword ptr [0xb23af0]
// 00a56358  85c0                 test eax, eax
// 00a5635a  750d                 jne 0xa56369
// 00a5635c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a56360  8b11                 mov edx, dword ptr [ecx]
// 00a56362  8b4234               mov eax, dword ptr [edx + 0x34]
// 00a56365  56                   push esi
// 00a56366  55                   push ebp
// 00a56367  ffd0                 call eax
// 00a56369  83ef01               sub edi, 1
// 00a5636c  7994                 jns 0xa56302
// 00a5636e  6a00                 push 0
// 00a56370  8bcd                 mov ecx, ebp
// 00a56372  e877340400           call 0xa997ee
// 00a56377  8d4c2418             lea ecx, [esp + 0x18]
// 00a5637b  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00a56383  c744241828e1c000     mov dword ptr [esp + 0x18], 0xc0e128
// 00a5638b  e870089cff           call 0x416c00
// 00a56390  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a56394  64890d00000000       mov dword ptr fs:[0], ecx
// 00a5639b  59                   pop ecx
// 00a5639c  5f                   pop edi
// 00a5639d  5e                   pop esi
// 00a5639e  5d                   pop ebp
// 00a5639f  5b                   pop ebx
// 00a563a0  83c438               add esp, 0x38
// 00a563a3  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawTabControl@CAppearanceSetVisio@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabPaintManagerAppearance.cpp