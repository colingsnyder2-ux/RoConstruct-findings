// roc 2008-06 00706800  unit: CXTColorDialog  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00706800
//
// 00706800  83ec64               sub esp, 0x64
// 00706803  53                   push ebx
// 00706804  55                   push ebp
// 00706805  8b2d142e8000         mov ebp, dword ptr [0x802e14]
// 0070680b  56                   push esi
// 0070680c  57                   push edi
// 0070680d  6a00                 push 0
// 0070680f  6a00                 push 0
// 00706811  8bf1                 mov esi, ecx
// 00706813  8b4620               mov eax, dword ptr [esi + 0x20]
// 00706816  6874040000           push 0x474
// 0070681b  50                   push eax
// 0070681c  ffd5                 call ebp
// 0070681e  50                   push eax
// 0070681f  e8baa3f9ff           call 0x6a0bde
// 00706824  8b1d342e8000         mov ebx, dword ptr [0x802e34]
// 0070682a  8bf8                 mov edi, eax
// 0070682c  8b5720               mov edx, dword ptr [edi + 0x20]
// 0070682f  8d4c2434             lea ecx, [esp + 0x34]
// 00706833  51                   push ecx
// 00706834  52                   push edx
// 00706835  ffd3                 call ebx
// 00706837  8d442434             lea eax, [esp + 0x34]
// 0070683b  50                   push eax
// 0070683c  8bce                 mov ecx, esi
// 0070683e  e859acf9ff           call 0x6a149c
// 00706843  8b5720               mov edx, dword ptr [edi + 0x20]
// 00706846  8d4c2454             lea ecx, [esp + 0x54]
// 0070684a  51                   push ecx
// 0070684b  6a00                 push 0
// 0070684d  680a130000           push 0x130a
// 00706852  52                   push edx
// 00706853  ffd5                 call ebp
// 00706855  6a01                 push 1
// 00706857  8bce                 mov ecx, esi
// 00706859  e8baabf9ff           call 0x6a1418
// 0070685e  8be8                 mov ebp, eax
// 00706860  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00706863  8d442424             lea eax, [esp + 0x24]
// 00706867  50                   push eax
// 00706868  51                   push ecx
// 00706869  ffd3                 call ebx
// 0070686b  8d542424             lea edx, [esp + 0x24]
// 0070686f  52                   push edx
// 00706870  8bce                 mov ecx, esi
// 00706872  e825acf9ff           call 0x6a149c
// 00706877  6a02                 push 2
// 00706879  8bce                 mov ecx, esi
// 0070687b  e898abf9ff           call 0x6a1418
// 00706880  8b5020               mov edx, dword ptr [eax + 0x20]
// 00706883  8d4c2414             lea ecx, [esp + 0x14]
// 00706887  51                   push ecx
// 00706888  52                   push edx
// 00706889  89442418             mov dword ptr [esp + 0x18], eax
// 0070688d  ffd3                 call ebx
// 0070688f  8d442414             lea eax, [esp + 0x14]
// 00706893  50                   push eax
// 00706894  8bce                 mov ecx, esi
// 00706896  e801acf9ff           call 0x6a149c
// 0070689b  6a00                 push 0
// 0070689d  6af1                 push -0xf
// 0070689f  8d4c241c             lea ecx, [esp + 0x1c]
// 007068a3  51                   push ecx
// 007068a4  ff15682d8000         call dword ptr [0x802d68]
// 007068aa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007068ae  8b542438             mov edx, dword ptr [esp + 0x38]
// 007068b2  8b442414             mov eax, dword ptr [esp + 0x14]
// 007068b6  83c1f1               add ecx, -0xf
// 007068b9  894c2440             mov dword ptr [esp + 0x40], ecx
// 007068bd  6a01                 push 1
// 007068bf  2bca                 sub ecx, edx
// 007068c1  51                   push ecx
// 007068c2  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007068c6  83c0fb               add eax, -5
// 007068c9  89442444             mov dword ptr [esp + 0x44], eax
// 007068cd  2bc1                 sub eax, ecx
// 007068cf  50                   push eax
// 007068d0  52                   push edx
// 007068d1  51                   push ecx
// 007068d2  8bcf                 mov ecx, edi
// 007068d4  e873a1f9ff           call 0x6a0a4c
// 007068d9  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007068dd  8b542418             mov edx, dword ptr [esp + 0x18]
// 007068e1  8b442420             mov eax, dword ptr [esp + 0x20]
// 007068e5  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 007068e9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007068ed  89542428             mov dword ptr [esp + 0x28], edx
// 007068f1  8b542460             mov edx, dword ptr [esp + 0x60]
// 007068f5  2b542458             sub edx, dword ptr [esp + 0x58]
// 007068f9  89442430             mov dword ptr [esp + 0x30], eax
// 007068fd  2b442418             sub eax, dword ptr [esp + 0x18]
// 00706901  8d541a01             lea edx, [edx + ebx + 1]
// 00706905  03c2                 add eax, edx
// 00706907  6a01                 push 1
// 00706909  89442434             mov dword ptr [esp + 0x34], eax
// 0070690d  894c2430             mov dword ptr [esp + 0x30], ecx
// 00706911  2bc2                 sub eax, edx
// 00706913  50                   push eax
// 00706914  2bcf                 sub ecx, edi
// 00706916  51                   push ecx
// 00706917  52                   push edx
// 00706918  57                   push edi
// 00706919  8bcd                 mov ecx, ebp
// 0070691b  897c2438             mov dword ptr [esp + 0x38], edi
// 0070691f  8954243c             mov dword ptr [esp + 0x3c], edx
// 00706923  e824a1f9ff           call 0x6a0a4c
// 00706928  8b442430             mov eax, dword ptr [esp + 0x30]
// 0070692c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00706930  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00706934  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00706938  8d5005               lea edx, [eax + 5]
// 0070693b  89442420             mov dword ptr [esp + 0x20], eax
// 0070693f  2bc3                 sub eax, ebx
// 00706941  03c2                 add eax, edx
// 00706943  6a01                 push 1
// 00706945  89442424             mov dword ptr [esp + 0x24], eax
// 00706949  894c2420             mov dword ptr [esp + 0x20], ecx
// 0070694d  2bc2                 sub eax, edx
// 0070694f  50                   push eax
// 00706950  2bcf                 sub ecx, edi
// 00706952  51                   push ecx
// 00706953  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00706957  52                   push edx
// 00706958  895c2428             mov dword ptr [esp + 0x28], ebx
// 0070695c  57                   push edi
// 0070695d  897c2428             mov dword ptr [esp + 0x28], edi
// 00706961  8954242c             mov dword ptr [esp + 0x2c], edx
// 00706965  e8e2a0f9ff           call 0x6a0a4c
// 0070696a  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00706970  50                   push eax
// 00706971  ff15502d8000         call dword ptr [0x802d50]
// 00706977  85c0                 test eax, eax
// 00706979  7433                 je 0x7069ae
// 0070697b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0070697f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00706983  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00706987  894c2468             mov dword ptr [esp + 0x68], ecx
// 0070698b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070698f  894c2470             mov dword ptr [esp + 0x70], ecx
// 00706993  83c105               add ecx, 5
// 00706996  8d5112               lea edx, [ecx + 0x12]
// 00706999  6a01                 push 1
// 0070699b  2bd1                 sub edx, ecx
// 0070699d  52                   push edx
// 0070699e  2bc7                 sub eax, edi
// 007069a0  50                   push eax
// 007069a1  51                   push ecx
// 007069a2  57                   push edi
// 007069a3  8d8eb0000000         lea ecx, [esi + 0xb0]
// 007069a9  e89ea0f9ff           call 0x6a0a4c
// 007069ae  56                   push esi
// 007069af  8d4c2448             lea ecx, [esp + 0x48]
// 007069b3  e81811ffff           call 0x6f7ad0
// 007069b8  8d542434             lea edx, [esp + 0x34]
// 007069bc  52                   push edx
// 007069bd  8bce                 mov ecx, esi
// 007069bf  e86ea2f9ff           call 0x6a0c32
// 007069c4  8b442440             mov eax, dword ptr [esp + 0x40]
// 007069c8  8b542448             mov edx, dword ptr [esp + 0x48]
// 007069cc  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007069d0  83c00a               add eax, 0xa
// 007069d3  6a01                 push 1
// 007069d5  89442454             mov dword ptr [esp + 0x54], eax
// 007069d9  2bc2                 sub eax, edx
// 007069db  50                   push eax
// 007069dc  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007069e0  83e90f               sub ecx, 0xf
// 007069e3  894c2454             mov dword ptr [esp + 0x54], ecx
// 007069e7  2bc8                 sub ecx, eax
// 007069e9  51                   push ecx
// 007069ea  52                   push edx
// 007069eb  50                   push eax
// 007069ec  8bce                 mov ecx, esi
// 007069ee  e859a0f9ff           call 0x6a0a4c
// 007069f3  5f                   pop edi
// 007069f4  5e                   pop esi
// 007069f5  5d                   pop ebp
// 007069f6  5b                   pop ebx
// 007069f7  83c464               add esp, 0x64
// 007069fa  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorDialog.cpp (function ?CalculateRects@CXTColorDialog@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorDialog.cpp
