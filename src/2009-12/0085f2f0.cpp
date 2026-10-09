// roc 2009-12 0085f2f0  unit: CXTColorDialog  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085f2f0
//
// 0085f2f0  83ec64               sub esp, 0x64
// 0085f2f3  53                   push ebx
// 0085f2f4  55                   push ebp
// 0085f2f5  8b2dc4cb9800         mov ebp, dword ptr [0x98cbc4]
// 0085f2fb  56                   push esi
// 0085f2fc  57                   push edi
// 0085f2fd  6a00                 push 0
// 0085f2ff  6a00                 push 0
// 0085f301  8bf1                 mov esi, ecx
// 0085f303  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085f306  6874040000           push 0x474
// 0085f30b  50                   push eax
// 0085f30c  ffd5                 call ebp
// 0085f30e  50                   push eax
// 0085f30f  e81648f9ff           call 0x7f3b2a
// 0085f314  8b1d70cc9800         mov ebx, dword ptr [0x98cc70]
// 0085f31a  8bf8                 mov edi, eax
// 0085f31c  8b5720               mov edx, dword ptr [edi + 0x20]
// 0085f31f  8d4c2434             lea ecx, [esp + 0x34]
// 0085f323  51                   push ecx
// 0085f324  52                   push edx
// 0085f325  ffd3                 call ebx
// 0085f327  8d442434             lea eax, [esp + 0x34]
// 0085f32b  50                   push eax
// 0085f32c  8bce                 mov ecx, esi
// 0085f32e  e8a554f9ff           call 0x7f47d8
// 0085f333  8b5720               mov edx, dword ptr [edi + 0x20]
// 0085f336  8d4c2454             lea ecx, [esp + 0x54]
// 0085f33a  51                   push ecx
// 0085f33b  6a00                 push 0
// 0085f33d  680a130000           push 0x130a
// 0085f342  52                   push edx
// 0085f343  ffd5                 call ebp
// 0085f345  6a01                 push 1
// 0085f347  8bce                 mov ecx, esi
// 0085f349  e8e253f9ff           call 0x7f4730
// 0085f34e  8be8                 mov ebp, eax
// 0085f350  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0085f353  8d442424             lea eax, [esp + 0x24]
// 0085f357  50                   push eax
// 0085f358  51                   push ecx
// 0085f359  ffd3                 call ebx
// 0085f35b  8d542424             lea edx, [esp + 0x24]
// 0085f35f  52                   push edx
// 0085f360  8bce                 mov ecx, esi
// 0085f362  e87154f9ff           call 0x7f47d8
// 0085f367  6a02                 push 2
// 0085f369  8bce                 mov ecx, esi
// 0085f36b  e8c053f9ff           call 0x7f4730
// 0085f370  8b5020               mov edx, dword ptr [eax + 0x20]
// 0085f373  8d4c2414             lea ecx, [esp + 0x14]
// 0085f377  51                   push ecx
// 0085f378  52                   push edx
// 0085f379  89442418             mov dword ptr [esp + 0x18], eax
// 0085f37d  ffd3                 call ebx
// 0085f37f  8d442414             lea eax, [esp + 0x14]
// 0085f383  50                   push eax
// 0085f384  8bce                 mov ecx, esi
// 0085f386  e84d54f9ff           call 0x7f47d8
// 0085f38b  6a00                 push 0
// 0085f38d  6af1                 push -0xf
// 0085f38f  8d4c241c             lea ecx, [esp + 0x1c]
// 0085f393  51                   push ecx
// 0085f394  ff156ccc9800         call dword ptr [0x98cc6c]
// 0085f39a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085f39e  8b542438             mov edx, dword ptr [esp + 0x38]
// 0085f3a2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085f3a6  83c1f1               add ecx, -0xf
// 0085f3a9  894c2440             mov dword ptr [esp + 0x40], ecx
// 0085f3ad  6a01                 push 1
// 0085f3af  2bca                 sub ecx, edx
// 0085f3b1  51                   push ecx
// 0085f3b2  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0085f3b6  83c0fb               add eax, -5
// 0085f3b9  89442444             mov dword ptr [esp + 0x44], eax
// 0085f3bd  2bc1                 sub eax, ecx
// 0085f3bf  50                   push eax
// 0085f3c0  52                   push edx
// 0085f3c1  51                   push ecx
// 0085f3c2  8bcf                 mov ecx, edi
// 0085f3c4  e86948f9ff           call 0x7f3c32
// 0085f3c9  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0085f3cd  8b542418             mov edx, dword ptr [esp + 0x18]
// 0085f3d1  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085f3d5  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0085f3d9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085f3dd  89542428             mov dword ptr [esp + 0x28], edx
// 0085f3e1  8b542460             mov edx, dword ptr [esp + 0x60]
// 0085f3e5  2b542458             sub edx, dword ptr [esp + 0x58]
// 0085f3e9  89442430             mov dword ptr [esp + 0x30], eax
// 0085f3ed  2b442418             sub eax, dword ptr [esp + 0x18]
// 0085f3f1  8d541a01             lea edx, [edx + ebx + 1]
// 0085f3f5  03c2                 add eax, edx
// 0085f3f7  6a01                 push 1
// 0085f3f9  89442434             mov dword ptr [esp + 0x34], eax
// 0085f3fd  894c2430             mov dword ptr [esp + 0x30], ecx
// 0085f401  2bc2                 sub eax, edx
// 0085f403  50                   push eax
// 0085f404  2bcf                 sub ecx, edi
// 0085f406  51                   push ecx
// 0085f407  52                   push edx
// 0085f408  57                   push edi
// 0085f409  8bcd                 mov ecx, ebp
// 0085f40b  897c2438             mov dword ptr [esp + 0x38], edi
// 0085f40f  8954243c             mov dword ptr [esp + 0x3c], edx
// 0085f413  e81a48f9ff           call 0x7f3c32
// 0085f418  8b442430             mov eax, dword ptr [esp + 0x30]
// 0085f41c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0085f420  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0085f424  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0085f428  8d5005               lea edx, [eax + 5]
// 0085f42b  89442420             mov dword ptr [esp + 0x20], eax
// 0085f42f  2bc3                 sub eax, ebx
// 0085f431  03c2                 add eax, edx
// 0085f433  6a01                 push 1
// 0085f435  89442424             mov dword ptr [esp + 0x24], eax
// 0085f439  894c2420             mov dword ptr [esp + 0x20], ecx
// 0085f43d  2bc2                 sub eax, edx
// 0085f43f  50                   push eax
// 0085f440  2bcf                 sub ecx, edi
// 0085f442  51                   push ecx
// 0085f443  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085f447  52                   push edx
// 0085f448  895c2428             mov dword ptr [esp + 0x28], ebx
// 0085f44c  57                   push edi
// 0085f44d  897c2428             mov dword ptr [esp + 0x28], edi
// 0085f451  8954242c             mov dword ptr [esp + 0x2c], edx
// 0085f455  e8d847f9ff           call 0x7f3c32
// 0085f45a  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0085f460  50                   push eax
// 0085f461  ff1584cc9800         call dword ptr [0x98cc84]
// 0085f467  85c0                 test eax, eax
// 0085f469  7433                 je 0x85f49e
// 0085f46b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085f46f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0085f473  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085f477  894c2468             mov dword ptr [esp + 0x68], ecx
// 0085f47b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085f47f  894c2470             mov dword ptr [esp + 0x70], ecx
// 0085f483  83c105               add ecx, 5
// 0085f486  8d5112               lea edx, [ecx + 0x12]
// 0085f489  6a01                 push 1
// 0085f48b  2bd1                 sub edx, ecx
// 0085f48d  52                   push edx
// 0085f48e  2bc7                 sub eax, edi
// 0085f490  50                   push eax
// 0085f491  51                   push ecx
// 0085f492  57                   push edi
// 0085f493  8d8eb0000000         lea ecx, [esi + 0xb0]
// 0085f499  e89447f9ff           call 0x7f3c32
// 0085f49e  56                   push esi
// 0085f49f  8d4c2448             lea ecx, [esp + 0x48]
// 0085f4a3  e8c8bdfeff           call 0x84b270
// 0085f4a8  8d542434             lea edx, [esp + 0x34]
// 0085f4ac  52                   push edx
// 0085f4ad  8bce                 mov ecx, esi
// 0085f4af  e84649f9ff           call 0x7f3dfa
// 0085f4b4  8b442440             mov eax, dword ptr [esp + 0x40]
// 0085f4b8  8b542448             mov edx, dword ptr [esp + 0x48]
// 0085f4bc  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0085f4c0  83c00a               add eax, 0xa
// 0085f4c3  6a01                 push 1
// 0085f4c5  89442454             mov dword ptr [esp + 0x54], eax
// 0085f4c9  2bc2                 sub eax, edx
// 0085f4cb  50                   push eax
// 0085f4cc  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0085f4d0  83e90f               sub ecx, 0xf
// 0085f4d3  894c2454             mov dword ptr [esp + 0x54], ecx
// 0085f4d7  2bc8                 sub ecx, eax
// 0085f4d9  51                   push ecx
// 0085f4da  52                   push edx
// 0085f4db  50                   push eax
// 0085f4dc  8bce                 mov ecx, esi
// 0085f4de  e84f47f9ff           call 0x7f3c32
// 0085f4e3  5f                   pop edi
// 0085f4e4  5e                   pop esi
// 0085f4e5  5d                   pop ebp
// 0085f4e6  5b                   pop ebx
// 0085f4e7  83c464               add esp, 0x64
// 0085f4ea  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorDialog.cpp (function ?CalculateRects@CXTColorDialog@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorDialog.cpp
