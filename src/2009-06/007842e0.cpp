// roc 2009-06 007842e0  unit: CXTColorDialog  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007842e0
//
// 007842e0  83ec64               sub esp, 0x64
// 007842e3  53                   push ebx
// 007842e4  55                   push ebp
// 007842e5  8b2d90ee8900         mov ebp, dword ptr [0x89ee90]
// 007842eb  56                   push esi
// 007842ec  57                   push edi
// 007842ed  6a00                 push 0
// 007842ef  6a00                 push 0
// 007842f1  8bf1                 mov esi, ecx
// 007842f3  8b4620               mov eax, dword ptr [esi + 0x20]
// 007842f6  6874040000           push 0x474
// 007842fb  50                   push eax
// 007842fc  ffd5                 call ebp
// 007842fe  50                   push eax
// 007842ff  e8fe49f9ff           call 0x718d02
// 00784304  8b1df4ed8900         mov ebx, dword ptr [0x89edf4]
// 0078430a  8bf8                 mov edi, eax
// 0078430c  8b5720               mov edx, dword ptr [edi + 0x20]
// 0078430f  8d4c2434             lea ecx, [esp + 0x34]
// 00784313  51                   push ecx
// 00784314  52                   push edx
// 00784315  ffd3                 call ebx
// 00784317  8d442434             lea eax, [esp + 0x34]
// 0078431b  50                   push eax
// 0078431c  8bce                 mov ecx, esi
// 0078431e  e88156f9ff           call 0x7199a4
// 00784323  8b5720               mov edx, dword ptr [edi + 0x20]
// 00784326  8d4c2454             lea ecx, [esp + 0x54]
// 0078432a  51                   push ecx
// 0078432b  6a00                 push 0
// 0078432d  680a130000           push 0x130a
// 00784332  52                   push edx
// 00784333  ffd5                 call ebp
// 00784335  6a01                 push 1
// 00784337  8bce                 mov ecx, esi
// 00784339  e8be55f9ff           call 0x7198fc
// 0078433e  8be8                 mov ebp, eax
// 00784340  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00784343  8d442424             lea eax, [esp + 0x24]
// 00784347  50                   push eax
// 00784348  51                   push ecx
// 00784349  ffd3                 call ebx
// 0078434b  8d542424             lea edx, [esp + 0x24]
// 0078434f  52                   push edx
// 00784350  8bce                 mov ecx, esi
// 00784352  e84d56f9ff           call 0x7199a4
// 00784357  6a02                 push 2
// 00784359  8bce                 mov ecx, esi
// 0078435b  e89c55f9ff           call 0x7198fc
// 00784360  8b5020               mov edx, dword ptr [eax + 0x20]
// 00784363  8d4c2414             lea ecx, [esp + 0x14]
// 00784367  51                   push ecx
// 00784368  52                   push edx
// 00784369  89442418             mov dword ptr [esp + 0x18], eax
// 0078436d  ffd3                 call ebx
// 0078436f  8d442414             lea eax, [esp + 0x14]
// 00784373  50                   push eax
// 00784374  8bce                 mov ecx, esi
// 00784376  e82956f9ff           call 0x7199a4
// 0078437b  6a00                 push 0
// 0078437d  6af1                 push -0xf
// 0078437f  8d4c241c             lea ecx, [esp + 0x1c]
// 00784383  51                   push ecx
// 00784384  ff15f8ed8900         call dword ptr [0x89edf8]
// 0078438a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0078438e  8b542438             mov edx, dword ptr [esp + 0x38]
// 00784392  8b442414             mov eax, dword ptr [esp + 0x14]
// 00784396  83c1f1               add ecx, -0xf
// 00784399  894c2440             mov dword ptr [esp + 0x40], ecx
// 0078439d  6a01                 push 1
// 0078439f  2bca                 sub ecx, edx
// 007843a1  51                   push ecx
// 007843a2  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007843a6  83c0fb               add eax, -5
// 007843a9  89442444             mov dword ptr [esp + 0x44], eax
// 007843ad  2bc1                 sub eax, ecx
// 007843af  50                   push eax
// 007843b0  52                   push edx
// 007843b1  51                   push ecx
// 007843b2  8bcf                 mov ecx, edi
// 007843b4  e8514af9ff           call 0x718e0a
// 007843b9  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007843bd  8b542418             mov edx, dword ptr [esp + 0x18]
// 007843c1  8b442420             mov eax, dword ptr [esp + 0x20]
// 007843c5  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 007843c9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007843cd  89542428             mov dword ptr [esp + 0x28], edx
// 007843d1  8b542460             mov edx, dword ptr [esp + 0x60]
// 007843d5  2b542458             sub edx, dword ptr [esp + 0x58]
// 007843d9  89442430             mov dword ptr [esp + 0x30], eax
// 007843dd  2b442418             sub eax, dword ptr [esp + 0x18]
// 007843e1  8d541a01             lea edx, [edx + ebx + 1]
// 007843e5  03c2                 add eax, edx
// 007843e7  6a01                 push 1
// 007843e9  89442434             mov dword ptr [esp + 0x34], eax
// 007843ed  894c2430             mov dword ptr [esp + 0x30], ecx
// 007843f1  2bc2                 sub eax, edx
// 007843f3  50                   push eax
// 007843f4  2bcf                 sub ecx, edi
// 007843f6  51                   push ecx
// 007843f7  52                   push edx
// 007843f8  57                   push edi
// 007843f9  8bcd                 mov ecx, ebp
// 007843fb  897c2438             mov dword ptr [esp + 0x38], edi
// 007843ff  8954243c             mov dword ptr [esp + 0x3c], edx
// 00784403  e8024af9ff           call 0x718e0a
// 00784408  8b442430             mov eax, dword ptr [esp + 0x30]
// 0078440c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00784410  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00784414  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00784418  8d5005               lea edx, [eax + 5]
// 0078441b  89442420             mov dword ptr [esp + 0x20], eax
// 0078441f  2bc3                 sub eax, ebx
// 00784421  03c2                 add eax, edx
// 00784423  6a01                 push 1
// 00784425  89442424             mov dword ptr [esp + 0x24], eax
// 00784429  894c2420             mov dword ptr [esp + 0x20], ecx
// 0078442d  2bc2                 sub eax, edx
// 0078442f  50                   push eax
// 00784430  2bcf                 sub ecx, edi
// 00784432  51                   push ecx
// 00784433  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00784437  52                   push edx
// 00784438  895c2428             mov dword ptr [esp + 0x28], ebx
// 0078443c  57                   push edi
// 0078443d  897c2428             mov dword ptr [esp + 0x28], edi
// 00784441  8954242c             mov dword ptr [esp + 0x2c], edx
// 00784445  e8c049f9ff           call 0x718e0a
// 0078444a  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00784450  50                   push eax
// 00784451  ff15e0ed8900         call dword ptr [0x89ede0]
// 00784457  85c0                 test eax, eax
// 00784459  7433                 je 0x78448e
// 0078445b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0078445f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00784463  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00784467  894c2468             mov dword ptr [esp + 0x68], ecx
// 0078446b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0078446f  894c2470             mov dword ptr [esp + 0x70], ecx
// 00784473  83c105               add ecx, 5
// 00784476  8d5112               lea edx, [ecx + 0x12]
// 00784479  6a01                 push 1
// 0078447b  2bd1                 sub edx, ecx
// 0078447d  52                   push edx
// 0078447e  2bc7                 sub eax, edi
// 00784480  50                   push eax
// 00784481  51                   push ecx
// 00784482  57                   push edi
// 00784483  8d8eb0000000         lea ecx, [esi + 0xb0]
// 00784489  e87c49f9ff           call 0x718e0a
// 0078448e  56                   push esi
// 0078448f  8d4c2448             lea ecx, [esp + 0x48]
// 00784493  e8d8bffeff           call 0x770470
// 00784498  8d542434             lea edx, [esp + 0x34]
// 0078449c  52                   push edx
// 0078449d  8bce                 mov ecx, esi
// 0078449f  e82e4bf9ff           call 0x718fd2
// 007844a4  8b442440             mov eax, dword ptr [esp + 0x40]
// 007844a8  8b542448             mov edx, dword ptr [esp + 0x48]
// 007844ac  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007844b0  83c00a               add eax, 0xa
// 007844b3  6a01                 push 1
// 007844b5  89442454             mov dword ptr [esp + 0x54], eax
// 007844b9  2bc2                 sub eax, edx
// 007844bb  50                   push eax
// 007844bc  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007844c0  83e90f               sub ecx, 0xf
// 007844c3  894c2454             mov dword ptr [esp + 0x54], ecx
// 007844c7  2bc8                 sub ecx, eax
// 007844c9  51                   push ecx
// 007844ca  52                   push edx
// 007844cb  50                   push eax
// 007844cc  8bce                 mov ecx, esi
// 007844ce  e83749f9ff           call 0x718e0a
// 007844d3  5f                   pop edi
// 007844d4  5e                   pop esi
// 007844d5  5d                   pop ebp
// 007844d6  5b                   pop ebx
// 007844d7  83c464               add esp, 0x64
// 007844da  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorDialog.cpp (function ?CalculateRects@CXTColorDialog@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorDialog.cpp
