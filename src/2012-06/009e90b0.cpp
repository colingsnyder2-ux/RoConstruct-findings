// roc 2012-06 009e90b0  unit: CXTColorDialog  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e90b0
//
// 009e90b0  83ec64               sub esp, 0x64
// 009e90b3  53                   push ebx
// 009e90b4  55                   push ebp
// 009e90b5  8b2d043cb200         mov ebp, dword ptr [0xb23c04]
// 009e90bb  56                   push esi
// 009e90bc  57                   push edi
// 009e90bd  6a00                 push 0
// 009e90bf  6a00                 push 0
// 009e90c1  8bf1                 mov esi, ecx
// 009e90c3  8b4620               mov eax, dword ptr [esi + 0x20]
// 009e90c6  6874040000           push 0x474
// 009e90cb  50                   push eax
// 009e90cc  ffd5                 call ebp
// 009e90ce  50                   push eax
// 009e90cf  e89295f9ff           call 0x982666
// 009e90d4  8b1df83ab200         mov ebx, dword ptr [0xb23af8]
// 009e90da  8bf8                 mov edi, eax
// 009e90dc  8b5720               mov edx, dword ptr [edi + 0x20]
// 009e90df  8d4c2434             lea ecx, [esp + 0x34]
// 009e90e3  51                   push ecx
// 009e90e4  52                   push edx
// 009e90e5  ffd3                 call ebx
// 009e90e7  8d442434             lea eax, [esp + 0x34]
// 009e90eb  50                   push eax
// 009e90ec  8bce                 mov ecx, esi
// 009e90ee  e8ab9ff9ff           call 0x98309e
// 009e90f3  8b5720               mov edx, dword ptr [edi + 0x20]
// 009e90f6  8d4c2454             lea ecx, [esp + 0x54]
// 009e90fa  51                   push ecx
// 009e90fb  6a00                 push 0
// 009e90fd  680a130000           push 0x130a
// 009e9102  52                   push edx
// 009e9103  ffd5                 call ebp
// 009e9105  6a01                 push 1
// 009e9107  8bce                 mov ecx, esi
// 009e9109  e8e29ef9ff           call 0x982ff0
// 009e910e  8be8                 mov ebp, eax
// 009e9110  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 009e9113  8d442424             lea eax, [esp + 0x24]
// 009e9117  50                   push eax
// 009e9118  51                   push ecx
// 009e9119  ffd3                 call ebx
// 009e911b  8d542424             lea edx, [esp + 0x24]
// 009e911f  52                   push edx
// 009e9120  8bce                 mov ecx, esi
// 009e9122  e8779ff9ff           call 0x98309e
// 009e9127  6a02                 push 2
// 009e9129  8bce                 mov ecx, esi
// 009e912b  e8c09ef9ff           call 0x982ff0
// 009e9130  8b5020               mov edx, dword ptr [eax + 0x20]
// 009e9133  8d4c2414             lea ecx, [esp + 0x14]
// 009e9137  51                   push ecx
// 009e9138  52                   push edx
// 009e9139  89442418             mov dword ptr [esp + 0x18], eax
// 009e913d  ffd3                 call ebx
// 009e913f  8d442414             lea eax, [esp + 0x14]
// 009e9143  50                   push eax
// 009e9144  8bce                 mov ecx, esi
// 009e9146  e8539ff9ff           call 0x98309e
// 009e914b  6a00                 push 0
// 009e914d  6af1                 push -0xf
// 009e914f  8d4c241c             lea ecx, [esp + 0x1c]
// 009e9153  51                   push ecx
// 009e9154  ff15f43ab200         call dword ptr [0xb23af4]
// 009e915a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009e915e  8b542438             mov edx, dword ptr [esp + 0x38]
// 009e9162  8b442414             mov eax, dword ptr [esp + 0x14]
// 009e9166  83c1f1               add ecx, -0xf
// 009e9169  894c2440             mov dword ptr [esp + 0x40], ecx
// 009e916d  6a01                 push 1
// 009e916f  2bca                 sub ecx, edx
// 009e9171  51                   push ecx
// 009e9172  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 009e9176  83c0fb               add eax, -5
// 009e9179  89442444             mov dword ptr [esp + 0x44], eax
// 009e917d  2bc1                 sub eax, ecx
// 009e917f  50                   push eax
// 009e9180  52                   push edx
// 009e9181  51                   push ecx
// 009e9182  8bcf                 mov ecx, edi
// 009e9184  e85193f9ff           call 0x9824da
// 009e9189  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009e918d  8b542418             mov edx, dword ptr [esp + 0x18]
// 009e9191  8b442420             mov eax, dword ptr [esp + 0x20]
// 009e9195  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 009e9199  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009e919d  89542428             mov dword ptr [esp + 0x28], edx
// 009e91a1  8b542460             mov edx, dword ptr [esp + 0x60]
// 009e91a5  2b542458             sub edx, dword ptr [esp + 0x58]
// 009e91a9  89442430             mov dword ptr [esp + 0x30], eax
// 009e91ad  2b442418             sub eax, dword ptr [esp + 0x18]
// 009e91b1  8d541a01             lea edx, [edx + ebx + 1]
// 009e91b5  03c2                 add eax, edx
// 009e91b7  6a01                 push 1
// 009e91b9  89442434             mov dword ptr [esp + 0x34], eax
// 009e91bd  894c2430             mov dword ptr [esp + 0x30], ecx
// 009e91c1  2bc2                 sub eax, edx
// 009e91c3  50                   push eax
// 009e91c4  2bcf                 sub ecx, edi
// 009e91c6  51                   push ecx
// 009e91c7  52                   push edx
// 009e91c8  57                   push edi
// 009e91c9  8bcd                 mov ecx, ebp
// 009e91cb  897c2438             mov dword ptr [esp + 0x38], edi
// 009e91cf  8954243c             mov dword ptr [esp + 0x3c], edx
// 009e91d3  e80293f9ff           call 0x9824da
// 009e91d8  8b442430             mov eax, dword ptr [esp + 0x30]
// 009e91dc  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 009e91e0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 009e91e4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009e91e8  8d5005               lea edx, [eax + 5]
// 009e91eb  89442420             mov dword ptr [esp + 0x20], eax
// 009e91ef  2bc3                 sub eax, ebx
// 009e91f1  03c2                 add eax, edx
// 009e91f3  6a01                 push 1
// 009e91f5  89442424             mov dword ptr [esp + 0x24], eax
// 009e91f9  894c2420             mov dword ptr [esp + 0x20], ecx
// 009e91fd  2bc2                 sub eax, edx
// 009e91ff  50                   push eax
// 009e9200  2bcf                 sub ecx, edi
// 009e9202  51                   push ecx
// 009e9203  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009e9207  52                   push edx
// 009e9208  895c2428             mov dword ptr [esp + 0x28], ebx
// 009e920c  57                   push edi
// 009e920d  897c2428             mov dword ptr [esp + 0x28], edi
// 009e9211  8954242c             mov dword ptr [esp + 0x2c], edx
// 009e9215  e8c092f9ff           call 0x9824da
// 009e921a  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 009e9220  50                   push eax
// 009e9221  ff15143bb200         call dword ptr [0xb23b14]
// 009e9227  85c0                 test eax, eax
// 009e9229  7433                 je 0x9e925e
// 009e922b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009e922f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009e9233  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009e9237  894c2468             mov dword ptr [esp + 0x68], ecx
// 009e923b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009e923f  894c2470             mov dword ptr [esp + 0x70], ecx
// 009e9243  83c105               add ecx, 5
// 009e9246  8d5112               lea edx, [ecx + 0x12]
// 009e9249  6a01                 push 1
// 009e924b  2bd1                 sub edx, ecx
// 009e924d  52                   push edx
// 009e924e  2bc7                 sub eax, edi
// 009e9250  50                   push eax
// 009e9251  51                   push ecx
// 009e9252  57                   push edi
// 009e9253  8d8eb0000000         lea ecx, [esi + 0xb0]
// 009e9259  e87c92f9ff           call 0x9824da
// 009e925e  56                   push esi
// 009e925f  8d4c2448             lea ecx, [esp + 0x48]
// 009e9263  e8d8befeff           call 0x9d5140
// 009e9268  8d542434             lea edx, [esp + 0x34]
// 009e926c  52                   push edx
// 009e926d  8bce                 mov ecx, esi
// 009e926f  e83a94f9ff           call 0x9826ae
// 009e9274  8b442440             mov eax, dword ptr [esp + 0x40]
// 009e9278  8b542448             mov edx, dword ptr [esp + 0x48]
// 009e927c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 009e9280  83c00a               add eax, 0xa
// 009e9283  6a01                 push 1
// 009e9285  89442454             mov dword ptr [esp + 0x54], eax
// 009e9289  2bc2                 sub eax, edx
// 009e928b  50                   push eax
// 009e928c  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 009e9290  83e90f               sub ecx, 0xf
// 009e9293  894c2454             mov dword ptr [esp + 0x54], ecx
// 009e9297  2bc8                 sub ecx, eax
// 009e9299  51                   push ecx
// 009e929a  52                   push edx
// 009e929b  50                   push eax
// 009e929c  8bce                 mov ecx, esi
// 009e929e  e83792f9ff           call 0x9824da
// 009e92a3  5f                   pop edi
// 009e92a4  5e                   pop esi
// 009e92a5  5d                   pop ebp
// 009e92a6  5b                   pop ebx
// 009e92a7  83c464               add esp, 0x64
// 009e92aa  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorDialog.cpp (function ?CalculateRects@CXTColorDialog@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorDialog.cpp
