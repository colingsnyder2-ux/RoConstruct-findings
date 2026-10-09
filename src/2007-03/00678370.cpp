// roc 2007-03 00678370  unit: seg_00670000  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00678370
//
// 00678370  83ec64               sub esp, 0x64
// 00678373  53                   push ebx
// 00678374  55                   push ebp
// 00678375  8b2d50ee7700         mov ebp, dword ptr [0x77ee50]
// 0067837b  56                   push esi
// 0067837c  57                   push edi
// 0067837d  6a00                 push 0
// 0067837f  6a00                 push 0
// 00678381  8bf1                 mov esi, ecx
// 00678383  8b4620               mov eax, dword ptr [esi + 0x20]
// 00678386  6874040000           push 0x474
// 0067838b  50                   push eax
// 0067838c  ffd5                 call ebp
// 0067838e  50                   push eax
// 0067838f  e8ba62faff           call 0x61e64e
// 00678394  8b1d5ced7700         mov ebx, dword ptr [0x77ed5c]
// 0067839a  8bf8                 mov edi, eax
// 0067839c  8b5720               mov edx, dword ptr [edi + 0x20]
// 0067839f  8d4c2434             lea ecx, [esp + 0x34]
// 006783a3  51                   push ecx
// 006783a4  52                   push edx
// 006783a5  ffd3                 call ebx
// 006783a7  8d442434             lea eax, [esp + 0x34]
// 006783ab  50                   push eax
// 006783ac  8bce                 mov ecx, esi
// 006783ae  e8c96afaff           call 0x61ee7c
// 006783b3  8b5720               mov edx, dword ptr [edi + 0x20]
// 006783b6  8d4c2454             lea ecx, [esp + 0x54]
// 006783ba  51                   push ecx
// 006783bb  6a00                 push 0
// 006783bd  680a130000           push 0x130a
// 006783c2  52                   push edx
// 006783c3  ffd5                 call ebp
// 006783c5  6a01                 push 1
// 006783c7  8bce                 mov ecx, esi
// 006783c9  e8186afaff           call 0x61ede6
// 006783ce  8be8                 mov ebp, eax
// 006783d0  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 006783d3  8d442424             lea eax, [esp + 0x24]
// 006783d7  50                   push eax
// 006783d8  51                   push ecx
// 006783d9  ffd3                 call ebx
// 006783db  8d542424             lea edx, [esp + 0x24]
// 006783df  52                   push edx
// 006783e0  8bce                 mov ecx, esi
// 006783e2  e8956afaff           call 0x61ee7c
// 006783e7  6a02                 push 2
// 006783e9  8bce                 mov ecx, esi
// 006783eb  e8f669faff           call 0x61ede6
// 006783f0  8b5020               mov edx, dword ptr [eax + 0x20]
// 006783f3  8d4c2414             lea ecx, [esp + 0x14]
// 006783f7  51                   push ecx
// 006783f8  52                   push edx
// 006783f9  89442418             mov dword ptr [esp + 0x18], eax
// 006783fd  ffd3                 call ebx
// 006783ff  8d442414             lea eax, [esp + 0x14]
// 00678403  50                   push eax
// 00678404  8bce                 mov ecx, esi
// 00678406  e8716afaff           call 0x61ee7c
// 0067840b  6a00                 push 0
// 0067840d  6af1                 push -0xf
// 0067840f  8d4c241c             lea ecx, [esp + 0x1c]
// 00678413  51                   push ecx
// 00678414  ff1558ed7700         call dword ptr [0x77ed58]
// 0067841a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0067841e  8b542438             mov edx, dword ptr [esp + 0x38]
// 00678422  8b442414             mov eax, dword ptr [esp + 0x14]
// 00678426  83c1f1               add ecx, -0xf
// 00678429  894c2440             mov dword ptr [esp + 0x40], ecx
// 0067842d  6a01                 push 1
// 0067842f  2bca                 sub ecx, edx
// 00678431  51                   push ecx
// 00678432  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00678436  83c0fb               add eax, -5
// 00678439  89442444             mov dword ptr [esp + 0x44], eax
// 0067843d  2bc1                 sub eax, ecx
// 0067843f  50                   push eax
// 00678440  52                   push edx
// 00678441  51                   push ecx
// 00678442  8bcf                 mov ecx, edi
// 00678444  e87360faff           call 0x61e4bc
// 00678449  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0067844d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00678451  8b442420             mov eax, dword ptr [esp + 0x20]
// 00678455  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00678459  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0067845d  89542428             mov dword ptr [esp + 0x28], edx
// 00678461  8b542460             mov edx, dword ptr [esp + 0x60]
// 00678465  2b542458             sub edx, dword ptr [esp + 0x58]
// 00678469  89442430             mov dword ptr [esp + 0x30], eax
// 0067846d  2b442418             sub eax, dword ptr [esp + 0x18]
// 00678471  8d541a01             lea edx, [edx + ebx + 1]
// 00678475  03c2                 add eax, edx
// 00678477  6a01                 push 1
// 00678479  89442434             mov dword ptr [esp + 0x34], eax
// 0067847d  894c2430             mov dword ptr [esp + 0x30], ecx
// 00678481  2bc2                 sub eax, edx
// 00678483  50                   push eax
// 00678484  2bcf                 sub ecx, edi
// 00678486  51                   push ecx
// 00678487  52                   push edx
// 00678488  57                   push edi
// 00678489  8bcd                 mov ecx, ebp
// 0067848b  897c2438             mov dword ptr [esp + 0x38], edi
// 0067848f  8954243c             mov dword ptr [esp + 0x3c], edx
// 00678493  e82460faff           call 0x61e4bc
// 00678498  8b442430             mov eax, dword ptr [esp + 0x30]
// 0067849c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006784a0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006784a4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006784a8  8d5005               lea edx, [eax + 5]
// 006784ab  89442420             mov dword ptr [esp + 0x20], eax
// 006784af  2bc3                 sub eax, ebx
// 006784b1  03c2                 add eax, edx
// 006784b3  6a01                 push 1
// 006784b5  89442424             mov dword ptr [esp + 0x24], eax
// 006784b9  894c2420             mov dword ptr [esp + 0x20], ecx
// 006784bd  2bc2                 sub eax, edx
// 006784bf  50                   push eax
// 006784c0  2bcf                 sub ecx, edi
// 006784c2  51                   push ecx
// 006784c3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006784c7  52                   push edx
// 006784c8  895c2428             mov dword ptr [esp + 0x28], ebx
// 006784cc  57                   push edi
// 006784cd  897c2428             mov dword ptr [esp + 0x28], edi
// 006784d1  8954242c             mov dword ptr [esp + 0x2c], edx
// 006784d5  e8e25ffaff           call 0x61e4bc
// 006784da  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 006784e0  50                   push eax
// 006784e1  ff1574ed7700         call dword ptr [0x77ed74]
// 006784e7  85c0                 test eax, eax
// 006784e9  7433                 je 0x67851e
// 006784eb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006784ef  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006784f3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006784f7  894c2468             mov dword ptr [esp + 0x68], ecx
// 006784fb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006784ff  894c2470             mov dword ptr [esp + 0x70], ecx
// 00678503  83c105               add ecx, 5
// 00678506  8d5112               lea edx, [ecx + 0x12]
// 00678509  6a01                 push 1
// 0067850b  2bd1                 sub edx, ecx
// 0067850d  52                   push edx
// 0067850e  2bc7                 sub eax, edi
// 00678510  50                   push eax
// 00678511  51                   push ecx
// 00678512  57                   push edi
// 00678513  8d8eb0000000         lea ecx, [esi + 0xb0]
// 00678519  e89e5ffaff           call 0x61e4bc
// 0067851e  56                   push esi
// 0067851f  8d4c2448             lea ecx, [esp + 0x48]
// 00678523  e8a832ffff           call 0x66b7d0
// 00678528  8d542434             lea edx, [esp + 0x34]
// 0067852c  52                   push edx
// 0067852d  8bce                 mov ecx, esi
// 0067852f  e86861faff           call 0x61e69c
// 00678534  8b442440             mov eax, dword ptr [esp + 0x40]
// 00678538  8b542448             mov edx, dword ptr [esp + 0x48]
// 0067853c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00678540  83c00a               add eax, 0xa
// 00678543  6a01                 push 1
// 00678545  89442454             mov dword ptr [esp + 0x54], eax
// 00678549  2bc2                 sub eax, edx
// 0067854b  50                   push eax
// 0067854c  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00678550  83e90f               sub ecx, 0xf
// 00678553  894c2454             mov dword ptr [esp + 0x54], ecx
// 00678557  2bc8                 sub ecx, eax
// 00678559  51                   push ecx
// 0067855a  52                   push edx
// 0067855b  50                   push eax
// 0067855c  8bce                 mov ecx, esi
// 0067855e  e8595ffaff           call 0x61e4bc
// 00678563  5f                   pop edi
// 00678564  5e                   pop esi
// 00678565  5d                   pop ebp
// 00678566  5b                   pop ebx
// 00678567  83c464               add esp, 0x64
// 0067856a  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorDialog.cpp (function ?CalculateRects@CXTColorDialog@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorDialog.cpp
