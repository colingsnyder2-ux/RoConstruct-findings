// roc 2009-12 008432f0  unit: CXTPPopupBar  size: 713 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008432f0
//
// 008432f0  6aff                 push -1
// 008432f2  6890d09500           push 0x95d090
// 008432f7  64a100000000         mov eax, dword ptr fs:[0]
// 008432fd  50                   push eax
// 008432fe  81ec80000000         sub esp, 0x80
// 00843304  53                   push ebx
// 00843305  55                   push ebp
// 00843306  56                   push esi
// 00843307  57                   push edi
// 00843308  a10052b600           mov eax, dword ptr [0xb65200]
// 0084330d  33c4                 xor eax, esp
// 0084330f  50                   push eax
// 00843310  8d842494000000       lea eax, [esp + 0x94]
// 00843317  64a300000000         mov dword ptr fs:[0], eax
// 0084331d  8bf1                 mov esi, ecx
// 0084331f  8b06                 mov eax, dword ptr [esi]
// 00843321  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00843327  ffd2                 call edx
// 00843329  8bd8                 mov ebx, eax
// 0084332b  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0084332f  85db                 test ebx, ebx
// 00843331  0f8455010000         je 0x84348c
// 00843337  8bbb5c010000         mov edi, dword ptr [ebx + 0x15c]
// 0084333d  85ff                 test edi, edi
// 0084333f  7423                 je 0x843364
// 00843341  8bce                 mov ecx, esi
// 00843343  e8b811fcff           call 0x804500
// 00843348  85c0                 test eax, eax
// 0084334a  7516                 jne 0x843362
// 0084334c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0084334f  6a05                 push 5
// 00843351  50                   push eax
// 00843352  ff15fccb9800         call dword ptr [0x98cbfc]
// 00843358  50                   push eax
// 00843359  e8cc07fbff           call 0x7f3b2a
// 0084335e  85c0                 test eax, eax
// 00843360  7402                 je 0x843364
// 00843362  33ff                 xor edi, edi
// 00843364  33ed                 xor ebp, ebp
// 00843366  85ff                 test edi, edi
// 00843368  0f840b020000         je 0x843579
// 0084336e  8bce                 mov ecx, esi
// 00843370  e8fbecffff           call 0x842070
// 00843375  89442418             mov dword ptr [esp + 0x18], eax
// 00843379  83f804               cmp eax, 4
// 0084337c  740e                 je 0x84338c
// 0084337e  83f803               cmp eax, 3
// 00843381  7409                 je 0x84338c
// 00843383  83f802               cmp eax, 2
// 00843386  0f85ed010000         jne 0x843579
// 0084338c  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00843392  8b3da4ca9800         mov edi, dword ptr [0x98caa4]
// 00843398  85c9                 test ecx, ecx
// 0084339a  7419                 je 0x8433b5
// 0084339c  6a01                 push 1
// 0084339e  e81d33fbff           call 0x7f66c0
// 008433a3  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 008433a9  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 008433af  8b5020               mov edx, dword ptr [eax + 0x20]
// 008433b2  52                   push edx
// 008433b3  ffd7                 call edi
// 008433b5  8bce                 mov ecx, esi
// 008433b7  e8d43cfcff           call 0x807090
// 008433bc  8b4020               mov eax, dword ptr [eax + 0x20]
// 008433bf  50                   push eax
// 008433c0  ffd7                 call edi
// 008433c2  56                   push esi
// 008433c3  8d4c2454             lea ecx, [esp + 0x54]
// 008433c7  e80a13fbff           call 0x7f46d6
// 008433cc  56                   push esi
// 008433cd  8d4c2424             lea ecx, [esp + 0x24]
// 008433d1  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 008433dc  e8ef7e0000           call 0x84b2d0
// 008433e1  56                   push esi
// 008433e2  8d4c2434             lea ecx, [esp + 0x34]
// 008433e6  e8857e0000           call 0x84b270
// 008433eb  8b542454             mov edx, dword ptr [esp + 0x54]
// 008433ef  8d4c2420             lea ecx, [esp + 0x20]
// 008433f3  51                   push ecx
// 008433f4  52                   push edx
// 008433f5  8d4c246c             lea ecx, [esp + 0x6c]
// 008433f9  e8327f0000           call 0x84b330
// 008433fe  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00843402  8b16                 mov edx, dword ptr [esi]
// 00843404  8b92b0010000         mov edx, dword ptr [edx + 0x1b0]
// 0084340a  83ec10               sub esp, 0x10
// 0084340d  8bc4                 mov eax, esp
// 0084340f  8908                 mov dword ptr [eax], ecx
// 00843411  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00843415  894804               mov dword ptr [eax + 4], ecx
// 00843418  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0084341c  894808               mov dword ptr [eax + 8], ecx
// 0084341f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00843423  89480c               mov dword ptr [eax + 0xc], ecx
// 00843426  8d442474             lea eax, [esp + 0x74]
// 0084342a  50                   push eax
// 0084342b  8bce                 mov ecx, esi
// 0084342d  c68424b000000001     mov byte ptr [esp + 0xb0], 1
// 00843435  ffd2                 call edx
// 00843437  8b2de4cb9800         mov ebp, dword ptr [0x98cbe4]
// 0084343d  ffd5                 call ebp
// 0084343f  50                   push eax
// 00843440  e8e506fbff           call 0x7f3b2a
// 00843445  8b4020               mov eax, dword ptr [eax + 0x20]
// 00843448  50                   push eax
// 00843449  ff15e0cb9800         call dword ptr [0x98cbe0]
// 0084344f  50                   push eax
// 00843450  e8db2f0e00           call 0x926430
// 00843455  8d4c2450             lea ecx, [esp + 0x50]
// 00843459  51                   push ecx
// 0084345a  8bf8                 mov edi, eax
// 0084345c  e8af8c0000           call 0x84c110
// 00843461  8d542454             lea edx, [esp + 0x54]
// 00843465  6a00                 push 0
// 00843467  52                   push edx
// 00843468  8bd8                 mov ebx, eax
// 0084346a  e8d18c0000           call 0x84c140
// 0084346f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00843473  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00843477  2b442430             sub eax, dword ptr [esp + 0x30]
// 0084347b  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 0084347f  83c40c               add esp, 0xc
// 00843482  85ff                 test edi, edi
// 00843484  7510                 jne 0x843496
// 00843486  897c2414             mov dword ptr [esp + 0x14], edi
// 0084348a  eb11                 jmp 0x84349d
// 0084348c  bf01000000           mov edi, 1
// 00843491  e9abfeffff           jmp 0x843341
// 00843496  8b5704               mov edx, dword ptr [edi + 4]
// 00843499  89542414             mov dword ptr [esp + 0x14], edx
// 0084349d  8b542434             mov edx, dword ptr [esp + 0x34]
// 008434a1  682000cc00           push 0xcc0020
// 008434a6  52                   push edx
// 008434a7  8b542438             mov edx, dword ptr [esp + 0x38]
// 008434ab  52                   push edx
// 008434ac  8b542420             mov edx, dword ptr [esp + 0x20]
// 008434b0  52                   push edx
// 008434b1  50                   push eax
// 008434b2  8b442468             mov eax, dword ptr [esp + 0x68]
// 008434b6  51                   push ecx
// 008434b7  6a00                 push 0
// 008434b9  6a00                 push 0
// 008434bb  50                   push eax
// 008434bc  ff1548b19800         call dword ptr [0x98b148]
// 008434c2  ffd5                 call ebp
// 008434c4  50                   push eax
// 008434c5  e86006fbff           call 0x7f3b2a
// 008434ca  8b4f04               mov ecx, dword ptr [edi + 4]
// 008434cd  8b5020               mov edx, dword ptr [eax + 0x20]
// 008434d0  51                   push ecx
// 008434d1  52                   push edx
// 008434d2  ff15d8cb9800         call dword ptr [0x98cbd8]
// 008434d8  8d442450             lea eax, [esp + 0x50]
// 008434dc  53                   push ebx
// 008434dd  50                   push eax
// 008434de  e85d8c0000           call 0x84c140
// 008434e3  83c408               add esp, 8
// 008434e6  8bce                 mov ecx, esi
// 008434e8  e8a310fcff           call 0x804590
// 008434ed  8b10                 mov edx, dword ptr [eax]
// 008434ef  8bc8                 mov ecx, eax
// 008434f1  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 008434f7  56                   push esi
// 008434f8  ffd0                 call eax
// 008434fa  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008434fe  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00843502  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00843506  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0084350a  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0084350e  8bce                 mov ecx, esi
// 00843510  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00843518  e87310fcff           call 0x804590
// 0084351d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00843521  52                   push edx
// 00843522  83ec10               sub esp, 0x10
// 00843525  8bd4                 mov edx, esp
// 00843527  893a                 mov dword ptr [edx], edi
// 00843529  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 0084352d  896a04               mov dword ptr [edx + 4], ebp
// 00843530  895a08               mov dword ptr [edx + 8], ebx
// 00843533  897a0c               mov dword ptr [edx + 0xc], edi
// 00843536  8d542478             lea edx, [esp + 0x78]
// 0084353a  52                   push edx
// 0084353b  8bc8                 mov ecx, eax
// 0084353d  8b00                 mov eax, dword ptr [eax]
// 0084353f  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 00843545  8d542468             lea edx, [esp + 0x68]
// 00843549  52                   push edx
// 0084354a  ffd0                 call eax
// 0084354c  8d4c2464             lea ecx, [esp + 0x64]
// 00843550  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 00843558  e8e37f0000           call 0x84b540
// 0084355d  8d4c2450             lea ecx, [esp + 0x50]
// 00843561  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 0084356c  e85f11fbff           call 0x7f46d0
// 00843571  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00843575  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00843579  85db                 test ebx, ebx
// 0084357b  740a                 je 0x843587
// 0084357d  c7835c01000000000000 mov dword ptr [ebx + 0x15c], 0
// 00843587  85ed                 test ebp, ebp
// 00843589  7514                 jne 0x84359f
// 0084358b  8bce                 mov ecx, esi
// 0084358d  e8fe0ffcff           call 0x804590
// 00843592  8b10                 mov edx, dword ptr [eax]
// 00843594  8bc8                 mov ecx, eax
// 00843596  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 0084359c  56                   push esi
// 0084359d  ffd0                 call eax
// 0084359f  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008435a6  64890d00000000       mov dword ptr fs:[0], ecx
// 008435ad  59                   pop ecx
// 008435ae  5f                   pop edi
// 008435af  5e                   pop esi
// 008435b0  5d                   pop ebp
// 008435b1  5b                   pop ebx
// 008435b2  81c48c000000         add esp, 0x8c
// 008435b8  c3                   ret 
// copied from an identical function in another client (function ?Animate@CXTPPopupBar@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp