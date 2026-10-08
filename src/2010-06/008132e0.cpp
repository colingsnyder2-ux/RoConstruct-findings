// roc 2010-06 008132e0  unit: CXTColorDialog  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008132e0
//
// 008132e0  83ec64               sub esp, 0x64
// 008132e3  53                   push ebx
// 008132e4  55                   push ebp
// 008132e5  8b2d54ba9e00         mov ebp, dword ptr [0x9eba54]
// 008132eb  56                   push esi
// 008132ec  57                   push edi
// 008132ed  6a00                 push 0
// 008132ef  6a00                 push 0
// 008132f1  8bf1                 mov esi, ecx
// 008132f3  8b4620               mov eax, dword ptr [esi + 0x20]
// 008132f6  6874040000           push 0x474
// 008132fb  50                   push eax
// 008132fc  ffd5                 call ebp
// 008132fe  50                   push eax
// 008132ff  e86649f9ff           call 0x7a7c6a
// 00813304  8b1d3cbc9e00         mov ebx, dword ptr [0x9ebc3c]
// 0081330a  8bf8                 mov edi, eax
// 0081330c  8b5720               mov edx, dword ptr [edi + 0x20]
// 0081330f  8d4c2434             lea ecx, [esp + 0x34]
// 00813313  51                   push ecx
// 00813314  52                   push edx
// 00813315  ffd3                 call ebx
// 00813317  8d442434             lea eax, [esp + 0x34]
// 0081331b  50                   push eax
// 0081331c  8bce                 mov ecx, esi
// 0081331e  e8ef55f9ff           call 0x7a8912
// 00813323  8b5720               mov edx, dword ptr [edi + 0x20]
// 00813326  8d4c2454             lea ecx, [esp + 0x54]
// 0081332a  51                   push ecx
// 0081332b  6a00                 push 0
// 0081332d  680a130000           push 0x130a
// 00813332  52                   push edx
// 00813333  ffd5                 call ebp
// 00813335  6a01                 push 1
// 00813337  8bce                 mov ecx, esi
// 00813339  e82c55f9ff           call 0x7a886a
// 0081333e  8be8                 mov ebp, eax
// 00813340  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00813343  8d442424             lea eax, [esp + 0x24]
// 00813347  50                   push eax
// 00813348  51                   push ecx
// 00813349  ffd3                 call ebx
// 0081334b  8d542424             lea edx, [esp + 0x24]
// 0081334f  52                   push edx
// 00813350  8bce                 mov ecx, esi
// 00813352  e8bb55f9ff           call 0x7a8912
// 00813357  6a02                 push 2
// 00813359  8bce                 mov ecx, esi
// 0081335b  e80a55f9ff           call 0x7a886a
// 00813360  8b5020               mov edx, dword ptr [eax + 0x20]
// 00813363  8d4c2414             lea ecx, [esp + 0x14]
// 00813367  51                   push ecx
// 00813368  52                   push edx
// 00813369  89442418             mov dword ptr [esp + 0x18], eax
// 0081336d  ffd3                 call ebx
// 0081336f  8d442414             lea eax, [esp + 0x14]
// 00813373  50                   push eax
// 00813374  8bce                 mov ecx, esi
// 00813376  e89755f9ff           call 0x7a8912
// 0081337b  6a00                 push 0
// 0081337d  6af1                 push -0xf
// 0081337f  8d4c241c             lea ecx, [esp + 0x1c]
// 00813383  51                   push ecx
// 00813384  ff1540bc9e00         call dword ptr [0x9ebc40]
// 0081338a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081338e  8b542438             mov edx, dword ptr [esp + 0x38]
// 00813392  8b442414             mov eax, dword ptr [esp + 0x14]
// 00813396  83c1f1               add ecx, -0xf
// 00813399  894c2440             mov dword ptr [esp + 0x40], ecx
// 0081339d  6a01                 push 1
// 0081339f  2bca                 sub ecx, edx
// 008133a1  51                   push ecx
// 008133a2  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008133a6  83c0fb               add eax, -5
// 008133a9  89442444             mov dword ptr [esp + 0x44], eax
// 008133ad  2bc1                 sub eax, ecx
// 008133af  50                   push eax
// 008133b0  52                   push edx
// 008133b1  51                   push ecx
// 008133b2  8bcf                 mov ecx, edi
// 008133b4  e8b949f9ff           call 0x7a7d72
// 008133b9  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008133bd  8b542418             mov edx, dword ptr [esp + 0x18]
// 008133c1  8b442420             mov eax, dword ptr [esp + 0x20]
// 008133c5  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 008133c9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008133cd  89542428             mov dword ptr [esp + 0x28], edx
// 008133d1  8b542460             mov edx, dword ptr [esp + 0x60]
// 008133d5  2b542458             sub edx, dword ptr [esp + 0x58]
// 008133d9  89442430             mov dword ptr [esp + 0x30], eax
// 008133dd  2b442418             sub eax, dword ptr [esp + 0x18]
// 008133e1  8d541a01             lea edx, [edx + ebx + 1]
// 008133e5  03c2                 add eax, edx
// 008133e7  6a01                 push 1
// 008133e9  89442434             mov dword ptr [esp + 0x34], eax
// 008133ed  894c2430             mov dword ptr [esp + 0x30], ecx
// 008133f1  2bc2                 sub eax, edx
// 008133f3  50                   push eax
// 008133f4  2bcf                 sub ecx, edi
// 008133f6  51                   push ecx
// 008133f7  52                   push edx
// 008133f8  57                   push edi
// 008133f9  8bcd                 mov ecx, ebp
// 008133fb  897c2438             mov dword ptr [esp + 0x38], edi
// 008133ff  8954243c             mov dword ptr [esp + 0x3c], edx
// 00813403  e86a49f9ff           call 0x7a7d72
// 00813408  8b442430             mov eax, dword ptr [esp + 0x30]
// 0081340c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00813410  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00813414  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00813418  8d5005               lea edx, [eax + 5]
// 0081341b  89442420             mov dword ptr [esp + 0x20], eax
// 0081341f  2bc3                 sub eax, ebx
// 00813421  03c2                 add eax, edx
// 00813423  6a01                 push 1
// 00813425  89442424             mov dword ptr [esp + 0x24], eax
// 00813429  894c2420             mov dword ptr [esp + 0x20], ecx
// 0081342d  2bc2                 sub eax, edx
// 0081342f  50                   push eax
// 00813430  2bcf                 sub ecx, edi
// 00813432  51                   push ecx
// 00813433  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00813437  52                   push edx
// 00813438  895c2428             mov dword ptr [esp + 0x28], ebx
// 0081343c  57                   push edi
// 0081343d  897c2428             mov dword ptr [esp + 0x28], edi
// 00813441  8954242c             mov dword ptr [esp + 0x2c], edx
// 00813445  e82849f9ff           call 0x7a7d72
// 0081344a  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00813450  50                   push eax
// 00813451  ff1528bc9e00         call dword ptr [0x9ebc28]
// 00813457  85c0                 test eax, eax
// 00813459  7433                 je 0x81348e
// 0081345b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081345f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00813463  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00813467  894c2468             mov dword ptr [esp + 0x68], ecx
// 0081346b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0081346f  894c2470             mov dword ptr [esp + 0x70], ecx
// 00813473  83c105               add ecx, 5
// 00813476  8d5112               lea edx, [ecx + 0x12]
// 00813479  6a01                 push 1
// 0081347b  2bd1                 sub edx, ecx
// 0081347d  52                   push edx
// 0081347e  2bc7                 sub eax, edi
// 00813480  50                   push eax
// 00813481  51                   push ecx
// 00813482  57                   push edi
// 00813483  8d8eb0000000         lea ecx, [esi + 0xb0]
// 00813489  e8e448f9ff           call 0x7a7d72
// 0081348e  56                   push esi
// 0081348f  8d4c2448             lea ecx, [esp + 0x48]
// 00813493  e818befeff           call 0x7ff2b0
// 00813498  8d542434             lea edx, [esp + 0x34]
// 0081349c  52                   push edx
// 0081349d  8bce                 mov ecx, esi
// 0081349f  e89c4af9ff           call 0x7a7f40
// 008134a4  8b442440             mov eax, dword ptr [esp + 0x40]
// 008134a8  8b542448             mov edx, dword ptr [esp + 0x48]
// 008134ac  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008134b0  83c00a               add eax, 0xa
// 008134b3  6a01                 push 1
// 008134b5  89442454             mov dword ptr [esp + 0x54], eax
// 008134b9  2bc2                 sub eax, edx
// 008134bb  50                   push eax
// 008134bc  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008134c0  83e90f               sub ecx, 0xf
// 008134c3  894c2454             mov dword ptr [esp + 0x54], ecx
// 008134c7  2bc8                 sub ecx, eax
// 008134c9  51                   push ecx
// 008134ca  52                   push edx
// 008134cb  50                   push eax
// 008134cc  8bce                 mov ecx, esi
// 008134ce  e89f48f9ff           call 0x7a7d72
// 008134d3  5f                   pop edi
// 008134d4  5e                   pop esi
// 008134d5  5d                   pop ebp
// 008134d6  5b                   pop ebx
// 008134d7  83c464               add esp, 0x64
// 008134da  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorDialog.cpp (function ?CalculateRects@CXTColorDialog@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorDialog.cpp
