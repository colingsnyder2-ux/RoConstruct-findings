// roc 2011-06 00870b80  unit: CXTColorDialog  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00870b80
//
// 00870b80  83ec64               sub esp, 0x64
// 00870b83  53                   push ebx
// 00870b84  55                   push ebp
// 00870b85  8b2dc019a400         mov ebp, dword ptr [0xa419c0]
// 00870b8b  56                   push esi
// 00870b8c  57                   push edi
// 00870b8d  6a00                 push 0
// 00870b8f  6a00                 push 0
// 00870b91  8bf1                 mov esi, ecx
// 00870b93  8b4620               mov eax, dword ptr [esi + 0x20]
// 00870b96  6874040000           push 0x474
// 00870b9b  50                   push eax
// 00870b9c  ffd5                 call ebp
// 00870b9e  50                   push eax
// 00870b9f  e88497f9ff           call 0x80a328
// 00870ba4  8b1d5c1ca400         mov ebx, dword ptr [0xa41c5c]
// 00870baa  8bf8                 mov edi, eax
// 00870bac  8b5720               mov edx, dword ptr [edi + 0x20]
// 00870baf  8d4c2434             lea ecx, [esp + 0x34]
// 00870bb3  51                   push ecx
// 00870bb4  52                   push edx
// 00870bb5  ffd3                 call ebx
// 00870bb7  8d442434             lea eax, [esp + 0x34]
// 00870bbb  50                   push eax
// 00870bbc  8bce                 mov ecx, esi
// 00870bbe  e843a4f9ff           call 0x80b006
// 00870bc3  8b5720               mov edx, dword ptr [edi + 0x20]
// 00870bc6  8d4c2454             lea ecx, [esp + 0x54]
// 00870bca  51                   push ecx
// 00870bcb  6a00                 push 0
// 00870bcd  680a130000           push 0x130a
// 00870bd2  52                   push edx
// 00870bd3  ffd5                 call ebp
// 00870bd5  6a01                 push 1
// 00870bd7  8bce                 mov ecx, esi
// 00870bd9  e880a3f9ff           call 0x80af5e
// 00870bde  8be8                 mov ebp, eax
// 00870be0  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00870be3  8d442424             lea eax, [esp + 0x24]
// 00870be7  50                   push eax
// 00870be8  51                   push ecx
// 00870be9  ffd3                 call ebx
// 00870beb  8d542424             lea edx, [esp + 0x24]
// 00870bef  52                   push edx
// 00870bf0  8bce                 mov ecx, esi
// 00870bf2  e80fa4f9ff           call 0x80b006
// 00870bf7  6a02                 push 2
// 00870bf9  8bce                 mov ecx, esi
// 00870bfb  e85ea3f9ff           call 0x80af5e
// 00870c00  8b5020               mov edx, dword ptr [eax + 0x20]
// 00870c03  8d4c2414             lea ecx, [esp + 0x14]
// 00870c07  51                   push ecx
// 00870c08  52                   push edx
// 00870c09  89442418             mov dword ptr [esp + 0x18], eax
// 00870c0d  ffd3                 call ebx
// 00870c0f  8d442414             lea eax, [esp + 0x14]
// 00870c13  50                   push eax
// 00870c14  8bce                 mov ecx, esi
// 00870c16  e8eba3f9ff           call 0x80b006
// 00870c1b  6a00                 push 0
// 00870c1d  6af1                 push -0xf
// 00870c1f  8d4c241c             lea ecx, [esp + 0x1c]
// 00870c23  51                   push ecx
// 00870c24  ff15601ca400         call dword ptr [0xa41c60]
// 00870c2a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00870c2e  8b542438             mov edx, dword ptr [esp + 0x38]
// 00870c32  8b442414             mov eax, dword ptr [esp + 0x14]
// 00870c36  83c1f1               add ecx, -0xf
// 00870c39  894c2440             mov dword ptr [esp + 0x40], ecx
// 00870c3d  6a01                 push 1
// 00870c3f  2bca                 sub ecx, edx
// 00870c41  51                   push ecx
// 00870c42  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00870c46  83c0fb               add eax, -5
// 00870c49  89442444             mov dword ptr [esp + 0x44], eax
// 00870c4d  2bc1                 sub eax, ecx
// 00870c4f  50                   push eax
// 00870c50  52                   push edx
// 00870c51  51                   push ecx
// 00870c52  8bcf                 mov ecx, edi
// 00870c54  e8d797f9ff           call 0x80a430
// 00870c59  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00870c5d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00870c61  8b442420             mov eax, dword ptr [esp + 0x20]
// 00870c65  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00870c69  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00870c6d  89542428             mov dword ptr [esp + 0x28], edx
// 00870c71  8b542460             mov edx, dword ptr [esp + 0x60]
// 00870c75  2b542458             sub edx, dword ptr [esp + 0x58]
// 00870c79  89442430             mov dword ptr [esp + 0x30], eax
// 00870c7d  2b442418             sub eax, dword ptr [esp + 0x18]
// 00870c81  8d541a01             lea edx, [edx + ebx + 1]
// 00870c85  03c2                 add eax, edx
// 00870c87  6a01                 push 1
// 00870c89  89442434             mov dword ptr [esp + 0x34], eax
// 00870c8d  894c2430             mov dword ptr [esp + 0x30], ecx
// 00870c91  2bc2                 sub eax, edx
// 00870c93  50                   push eax
// 00870c94  2bcf                 sub ecx, edi
// 00870c96  51                   push ecx
// 00870c97  52                   push edx
// 00870c98  57                   push edi
// 00870c99  8bcd                 mov ecx, ebp
// 00870c9b  897c2438             mov dword ptr [esp + 0x38], edi
// 00870c9f  8954243c             mov dword ptr [esp + 0x3c], edx
// 00870ca3  e88897f9ff           call 0x80a430
// 00870ca8  8b442430             mov eax, dword ptr [esp + 0x30]
// 00870cac  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00870cb0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00870cb4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00870cb8  8d5005               lea edx, [eax + 5]
// 00870cbb  89442420             mov dword ptr [esp + 0x20], eax
// 00870cbf  2bc3                 sub eax, ebx
// 00870cc1  03c2                 add eax, edx
// 00870cc3  6a01                 push 1
// 00870cc5  89442424             mov dword ptr [esp + 0x24], eax
// 00870cc9  894c2420             mov dword ptr [esp + 0x20], ecx
// 00870ccd  2bc2                 sub eax, edx
// 00870ccf  50                   push eax
// 00870cd0  2bcf                 sub ecx, edi
// 00870cd2  51                   push ecx
// 00870cd3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00870cd7  52                   push edx
// 00870cd8  895c2428             mov dword ptr [esp + 0x28], ebx
// 00870cdc  57                   push edi
// 00870cdd  897c2428             mov dword ptr [esp + 0x28], edi
// 00870ce1  8954242c             mov dword ptr [esp + 0x2c], edx
// 00870ce5  e84697f9ff           call 0x80a430
// 00870cea  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00870cf0  50                   push eax
// 00870cf1  ff15ec1ba400         call dword ptr [0xa41bec]
// 00870cf7  85c0                 test eax, eax
// 00870cf9  7433                 je 0x870d2e
// 00870cfb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00870cff  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00870d03  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00870d07  894c2468             mov dword ptr [esp + 0x68], ecx
// 00870d0b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00870d0f  894c2470             mov dword ptr [esp + 0x70], ecx
// 00870d13  83c105               add ecx, 5
// 00870d16  8d5112               lea edx, [ecx + 0x12]
// 00870d19  6a01                 push 1
// 00870d1b  2bd1                 sub edx, ecx
// 00870d1d  52                   push edx
// 00870d1e  2bc7                 sub eax, edi
// 00870d20  50                   push eax
// 00870d21  51                   push ecx
// 00870d22  57                   push edi
// 00870d23  8d8eb0000000         lea ecx, [esi + 0xb0]
// 00870d29  e80297f9ff           call 0x80a430
// 00870d2e  56                   push esi
// 00870d2f  8d4c2448             lea ecx, [esp + 0x48]
// 00870d33  e8f8bffeff           call 0x85cd30
// 00870d38  8d542434             lea edx, [esp + 0x34]
// 00870d3c  52                   push edx
// 00870d3d  8bce                 mov ecx, esi
// 00870d3f  e8ba98f9ff           call 0x80a5fe
// 00870d44  8b442440             mov eax, dword ptr [esp + 0x40]
// 00870d48  8b542448             mov edx, dword ptr [esp + 0x48]
// 00870d4c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00870d50  83c00a               add eax, 0xa
// 00870d53  6a01                 push 1
// 00870d55  89442454             mov dword ptr [esp + 0x54], eax
// 00870d59  2bc2                 sub eax, edx
// 00870d5b  50                   push eax
// 00870d5c  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00870d60  83e90f               sub ecx, 0xf
// 00870d63  894c2454             mov dword ptr [esp + 0x54], ecx
// 00870d67  2bc8                 sub ecx, eax
// 00870d69  51                   push ecx
// 00870d6a  52                   push edx
// 00870d6b  50                   push eax
// 00870d6c  8bce                 mov ecx, esi
// 00870d6e  e8bd96f9ff           call 0x80a430
// 00870d73  5f                   pop edi
// 00870d74  5e                   pop esi
// 00870d75  5d                   pop ebp
// 00870d76  5b                   pop ebx
// 00870d77  83c464               add esp, 0x64
// 00870d7a  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorDialog.cpp (function ?CalculateRects@CXTColorDialog@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorDialog.cpp
