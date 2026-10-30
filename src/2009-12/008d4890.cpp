// roc 2009-12 008d4890  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 629 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d4890
//
// 008d4890  6aff                 push -1
// 008d4892  68a0539600           push 0x9653a0
// 008d4897  64a100000000         mov eax, dword ptr fs:[0]
// 008d489d  50                   push eax
// 008d489e  83ec5c               sub esp, 0x5c
// 008d48a1  53                   push ebx
// 008d48a2  55                   push ebp
// 008d48a3  56                   push esi
// 008d48a4  57                   push edi
// 008d48a5  a10052b600           mov eax, dword ptr [0xb65200]
// 008d48aa  33c4                 xor eax, esp
// 008d48ac  50                   push eax
// 008d48ad  8d442470             lea eax, [esp + 0x70]
// 008d48b1  64a300000000         mov dword ptr fs:[0], eax
// 008d48b7  894c2414             mov dword ptr [esp + 0x14], ecx
// 008d48bb  8bbc248c000000       mov edi, dword ptr [esp + 0x8c]
// 008d48c2  33c9                 xor ecx, ecx
// 008d48c4  8bc7                 mov eax, edi
// 008d48c6  ba08000000           mov edx, 8
// 008d48cb  f7e2                 mul edx
// 008d48cd  0f90c1               seto cl
// 008d48d0  f7d9                 neg ecx
// 008d48d2  0bc8                 or ecx, eax
// 008d48d4  51                   push ecx
// 008d48d5  e868f2f1ff           call 0x7f3b42
// 008d48da  33db                 xor ebx, ebx
// 008d48dc  83c404               add esp, 4
// 008d48df  8be8                 mov ebp, eax
// 008d48e1  33d2                 xor edx, edx
// 008d48e3  3bfb                 cmp edi, ebx
// 008d48e5  896c2418             mov dword ptr [esp + 0x18], ebp
// 008d48e9  895c2438             mov dword ptr [esp + 0x38], ebx
// 008d48ed  7e4f                 jle 0x8d493e
// 008d48ef  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008d48f6  2bcd                 sub ecx, ebp
// 008d48f8  89bc248c000000       mov dword ptr [esp + 0x8c], edi
// 008d48ff  90                   nop 
// 008d4900  8b3401               mov esi, dword ptr [ecx + eax]
// 008d4903  399c2494000000       cmp dword ptr [esp + 0x94], ebx
// 008d490a  751c                 jne 0x8d4928
// 008d490c  03d6                 add edx, esi
// 008d490e  8b742438             mov esi, dword ptr [esp + 0x38]
// 008d4912  89542434             mov dword ptr [esp + 0x34], edx
// 008d4916  8b540104             mov edx, dword ptr [ecx + eax + 4]
// 008d491a  03f2                 add esi, edx
// 008d491c  8b542434             mov edx, dword ptr [esp + 0x34]
// 008d4920  89742438             mov dword ptr [esp + 0x38], esi
// 008d4924  8910                 mov dword ptr [eax], edx
// 008d4926  eb06                 jmp 0x8d492e
// 008d4928  8930                 mov dword ptr [eax], esi
// 008d492a  8b740104             mov esi, dword ptr [ecx + eax + 4]
// 008d492e  897004               mov dword ptr [eax + 4], esi
// 008d4931  83c008               add eax, 8
// 008d4934  83ac248c00000001     sub dword ptr [esp + 0x8c], 1
// 008d493c  75c2                 jne 0x8d4900
// 008d493e  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 008d4945  8b06                 mov eax, dword ptr [esi]
// 008d4947  8b5058               mov edx, dword ptr [eax + 0x58]
// 008d494a  8d4c244c             lea ecx, [esp + 0x4c]
// 008d494e  51                   push ecx
// 008d494f  8bce                 mov ecx, esi
// 008d4951  ffd2                 call edx
// 008d4953  895c2430             mov dword ptr [esp + 0x30], ebx
// 008d4957  c744242cf82a9f00     mov dword ptr [esp + 0x2c], 0x9f2af8
// 008d495f  8d44244c             lea eax, [esp + 0x4c]
// 008d4963  50                   push eax
// 008d4964  895c247c             mov dword ptr [esp + 0x7c], ebx
// 008d4968  ff15c4b09800         call dword ptr [0x98b0c4]
// 008d496e  50                   push eax
// 008d496f  8d4c2430             lea ecx, [esp + 0x30]
// 008d4973  e8b2f4f1ff           call 0x7f3e2a
// 008d4978  895c2420             mov dword ptr [esp + 0x20], ebx
// 008d497c  c744241cf82a9f00     mov dword ptr [esp + 0x1c], 0x9f2af8
// 008d4984  6a01                 push 1
// 008d4986  57                   push edi
// 008d4987  55                   push ebp
// 008d4988  c684248400000001     mov byte ptr [esp + 0x84], 1
// 008d4990  ff15b0b09800         call dword ptr [0x98b0b0]
// 008d4996  50                   push eax
// 008d4997  8d4c2420             lea ecx, [esp + 0x20]
// 008d499b  e88af4f1ff           call 0x7f3e2a
// 008d49a0  6a01                 push 1
// 008d49a2  8d4c2420             lea ecx, [esp + 0x20]
// 008d49a6  51                   push ecx
// 008d49a7  8bce                 mov ecx, esi
// 008d49a9  e8e8230500           call 0x926d96
// 008d49ae  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d49b2  8d54243c             lea edx, [esp + 0x3c]
// 008d49b6  52                   push edx
// 008d49b7  50                   push eax
// 008d49b8  ff152cb19800         call dword ptr [0x98b12c]
// 008d49be  895c2428             mov dword ptr [esp + 0x28], ebx
// 008d49c2  c744242418229a00     mov dword ptr [esp + 0x24], 0x9a2218
// 008d49ca  8b442448             mov eax, dword ptr [esp + 0x48]
// 008d49ce  2b442440             sub eax, dword ptr [esp + 0x40]
// 008d49d2  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d49d6  2b4c243c             sub ecx, dword ptr [esp + 0x3c]
// 008d49da  50                   push eax
// 008d49db  51                   push ecx
// 008d49dc  8b4e04               mov ecx, dword ptr [esi + 4]
// 008d49df  51                   push ecx
// 008d49e0  c684248400000002     mov byte ptr [esp + 0x84], 2
// 008d49e8  ff1550b19800         call dword ptr [0x98b150]
// 008d49ee  50                   push eax
// 008d49ef  8d4c2428             lea ecx, [esp + 0x28]
// 008d49f3  e832f4f1ff           call 0x7f3e2a
// 008d49f8  8d542424             lea edx, [esp + 0x24]
// 008d49fc  52                   push edx
// 008d49fd  56                   push esi
// 008d49fe  8d4c2464             lea ecx, [esp + 0x64]
// 008d4a02  e8796ef7ff           call 0x84b880
// 008d4a07  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d4a0b  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 008d4a0e  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008d4a15  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d4a19  2b542440             sub edx, dword ptr [esp + 0x40]
// 008d4a1d  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008d4a21  2b7c243c             sub edi, dword ptr [esp + 0x3c]
// 008d4a25  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 008d4a2b  8b29                 mov ebp, dword ptr [ecx]
// 008d4a2d  50                   push eax
// 008d4a2e  83ec10               sub esp, 0x10
// 008d4a31  8bc4                 mov eax, esp
// 008d4a33  8918                 mov dword ptr [eax], ebx
// 008d4a35  33db                 xor ebx, ebx
// 008d4a37  895804               mov dword ptr [eax + 4], ebx
// 008d4a3a  897808               mov dword ptr [eax + 8], edi
// 008d4a3d  89500c               mov dword ptr [eax + 0xc], edx
// 008d4a40  8b4518               mov eax, dword ptr [ebp + 0x18]
// 008d4a43  8d542470             lea edx, [esp + 0x70]
// 008d4a47  c684248c00000003     mov byte ptr [esp + 0x8c], 3
// 008d4a4f  52                   push edx
// 008d4a50  ffd0                 call eax
// 008d4a52  8b542440             mov edx, dword ptr [esp + 0x40]
// 008d4a56  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 008d4a5a  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 008d4a5e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d4a62  682000cc00           push 0xcc0020
// 008d4a67  6a00                 push 0
// 008d4a69  6a00                 push 0
// 008d4a6b  8bf8                 mov edi, eax
// 008d4a6d  8b442454             mov eax, dword ptr [esp + 0x54]
// 008d4a71  55                   push ebp
// 008d4a72  2bc2                 sub eax, edx
// 008d4a74  50                   push eax
// 008d4a75  2bcb                 sub ecx, ebx
// 008d4a77  51                   push ecx
// 008d4a78  8b4e04               mov ecx, dword ptr [esi + 4]
// 008d4a7b  52                   push edx
// 008d4a7c  53                   push ebx
// 008d4a7d  51                   push ecx
// 008d4a7e  ff1548b19800         call dword ptr [0x98b148]
// 008d4a84  8d54242c             lea edx, [esp + 0x2c]
// 008d4a88  52                   push edx
// 008d4a89  8bce                 mov ecx, esi
// 008d4a8b  e8d41b0500           call 0x926664
// 008d4a90  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d4a94  50                   push eax
// 008d4a95  e86cf0f1ff           call 0x7f3b06
// 008d4a9a  83c404               add esp, 4
// 008d4a9d  8d4c245c             lea ecx, [esp + 0x5c]
// 008d4aa1  c644247802           mov byte ptr [esp + 0x78], 2
// 008d4aa6  e8e56ef7ff           call 0x84b990
// 008d4aab  8d4c2424             lea ecx, [esp + 0x24]
// 008d4aaf  c644247801           mov byte ptr [esp + 0x78], 1
// 008d4ab4  c744242418229a00     mov dword ptr [esp + 0x24], 0x9a2218
// 008d4abc  e86fa7b3ff           call 0x40f230
// 008d4ac1  bef82a9f00           mov esi, 0x9f2af8
// 008d4ac6  8d4c241c             lea ecx, [esp + 0x1c]
// 008d4aca  c644247800           mov byte ptr [esp + 0x78], 0
// 008d4acf  8974241c             mov dword ptr [esp + 0x1c], esi
// 008d4ad3  e858a7b3ff           call 0x40f230
// 008d4ad8  8d4c242c             lea ecx, [esp + 0x2c]
// 008d4adc  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 008d4ae4  8974242c             mov dword ptr [esp + 0x2c], esi
// 008d4ae8  e843a7b3ff           call 0x40f230
// 008d4aed  8bc7                 mov eax, edi
// 008d4aef  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008d4af3  64890d00000000       mov dword ptr fs:[0], ecx
// 008d4afa  59                   pop ecx
// 008d4afb  5f                   pop edi
// 008d4afc  5e                   pop esi
// 008d4afd  5d                   pop ebp
// 008d4afe  5b                   pop ebx
// 008d4aff  83c468               add esp, 0x68
// 008d4b02  c21800               ret 0x18
// copied from an identical function in another client (function ?FillButton@CAppearanceSet@CXTPTabPaintManager@@QAEKPAVCDC@@PAVCXTPTabManagerItem@@PAUtagPOINT@@HW4XTPTabPosition@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp