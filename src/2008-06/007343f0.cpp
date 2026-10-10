// roc 2008-06 007343f0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 883 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007343f0
//
// 007343f0  83ec34               sub esp, 0x34
// 007343f3  53                   push ebx
// 007343f4  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 007343f8  8b03                 mov eax, dword ptr [ebx]
// 007343fa  8b5078               mov edx, dword ptr [eax + 0x78]
// 007343fd  55                   push ebp
// 007343fe  56                   push esi
// 007343ff  8bf1                 mov esi, ecx
// 00734401  57                   push edi
// 00734402  8bcb                 mov ecx, ebx
// 00734404  ffd2                 call edx
// 00734406  89442414             mov dword ptr [esp + 0x14], eax
// 0073440a  8b03                 mov eax, dword ptr [ebx]
// 0073440c  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0073440f  8bcb                 mov ecx, ebx
// 00734411  ffd2                 call edx
// 00734413  8bbb9c000000         mov edi, dword ptr [ebx + 0x9c]
// 00734419  89442410             mov dword ptr [esp + 0x10], eax
// 0073441d  83ffff               cmp edi, -1
// 00734420  7511                 jne 0x734433
// 00734422  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 00734428  85c9                 test ecx, ecx
// 0073442a  7407                 je 0x734433
// 0073442c  e88f73f7ff           call 0x6ab7c0
// 00734431  8bf8                 mov edi, eax
// 00734433  8b8ba0000000         mov ecx, dword ptr [ebx + 0xa0]
// 00734439  83f9ff               cmp ecx, -1
// 0073443c  7513                 jne 0x734451
// 0073443e  8b835c010000         mov eax, dword ptr [ebx + 0x15c]
// 00734444  85c0                 test eax, eax
// 00734446  7409                 je 0x734451
// 00734448  8b4038               mov eax, dword ptr [eax + 0x38]
// 0073444b  89442418             mov dword ptr [esp + 0x18], eax
// 0073444f  eb04                 jmp 0x734455
// 00734451  894c2418             mov dword ptr [esp + 0x18], ecx
// 00734455  8b13                 mov edx, dword ptr [ebx]
// 00734457  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 0073445d  8bcb                 mov ecx, ebx
// 0073445f  ffd0                 call eax
// 00734461  8be8                 mov ebp, eax
// 00734463  8bcb                 mov ecx, ebx
// 00734465  896c244c             mov dword ptr [esp + 0x4c], ebp
// 00734469  e8226bf7ff           call 0x6aaf90
// 0073446e  83f804               cmp eax, 4
// 00734471  0f85b2010000         jne 0x734629
// 00734477  8bce                 mov ecx, esi
// 00734479  e8f2a4f7ff           call 0x6ae970
// 0073447e  8b8b00010000         mov ecx, dword ptr [ebx + 0x100]
// 00734484  8be8                 mov ebp, eax
// 00734486  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0073448c  896c2424             mov dword ptr [esp + 0x24], ebp
// 00734490  83f802               cmp eax, 2
// 00734493  0f84e0000000         je 0x734579
// 00734499  83f803               cmp eax, 3
// 0073449c  0f84d7000000         je 0x734579
// 007344a2  33c9                 xor ecx, ecx
// 007344a4  894c2420             mov dword ptr [esp + 0x20], ecx
// 007344a8  394c2410             cmp dword ptr [esp + 0x10], ecx
// 007344ac  750a                 jne 0x7344b8
// 007344ae  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007344b2  394c244c             cmp dword ptr [esp + 0x4c], ecx
// 007344b6  7408                 je 0x7344c0
// 007344b8  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 007344c0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007344c4  8b542450             mov edx, dword ptr [esp + 0x50]
// 007344c8  50                   push eax
// 007344c9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007344cd  6a01                 push 1
// 007344cf  6a00                 push 0
// 007344d1  50                   push eax
// 007344d2  8b442424             mov eax, dword ptr [esp + 0x24]
// 007344d6  57                   push edi
// 007344d7  50                   push eax
// 007344d8  8b442434             mov eax, dword ptr [esp + 0x34]
// 007344dc  50                   push eax
// 007344dd  2bcd                 sub ecx, ebp
// 007344df  83ec10               sub esp, 0x10
// 007344e2  8bc4                 mov eax, esp
// 007344e4  8910                 mov dword ptr [eax], edx
// 007344e6  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 007344ed  895004               mov dword ptr [eax + 4], edx
// 007344f0  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007344f7  895008               mov dword ptr [eax + 8], edx
// 007344fa  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 007344fe  89480c               mov dword ptr [eax + 0xc], ecx
// 00734501  8b06                 mov eax, dword ptr [esi]
// 00734503  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 00734509  55                   push ebp
// 0073450a  8bce                 mov ecx, esi
// 0073450c  ffd2                 call edx
// 0073450e  837c241000           cmp dword ptr [esp + 0x10], 0
// 00734513  7512                 jne 0x734527
// 00734515  837c241400           cmp dword ptr [esp + 0x14], 0
// 0073451a  750b                 jne 0x734527
// 0073451c  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 00734521  0f8432020000         je 0x734759
// 00734527  85ff                 test edi, edi
// 00734529  0f842a020000         je 0x734759
// 0073452f  837c242000           cmp dword ptr [esp + 0x20], 0
// 00734534  8b9b00010000         mov ebx, dword ptr [ebx + 0x100]
// 0073453a  8b9b00010000         mov ebx, dword ptr [ebx + 0x100]
// 00734540  53                   push ebx
// 00734541  6a01                 push 1
// 00734543  0f8493000000         je 0x7345dc
// 00734549  ff742454             push dword ptr [esp + 0x54]
// 0073454d  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00734551  8b442430             mov eax, dword ptr [esp + 0x30]
// 00734555  8b542460             mov edx, dword ptr [esp + 0x60]
// 00734559  6a00                 push 0
// 0073455b  57                   push edi
// 0073455c  6a00                 push 0
// 0073455e  03c1                 add eax, ecx
// 00734560  6a01                 push 1
// 00734562  89442448             mov dword ptr [esp + 0x48], eax
// 00734566  83ec10               sub esp, 0x10
// 00734569  8bc4                 mov eax, esp
// 0073456b  8908                 mov dword ptr [eax], ecx
// 0073456d  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00734571  895004               mov dword ptr [eax + 4], edx
// 00734574  e98c000000           jmp 0x734605
// 00734579  837c241000           cmp dword ptr [esp + 0x10], 0
// 0073457e  b901000000           mov ecx, 1
// 00734583  894c2420             mov dword ptr [esp + 0x20], ecx
// 00734587  750f                 jne 0x734598
// 00734589  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0073458e  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00734596  7404                 je 0x73459c
// 00734598  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0073459c  8b542450             mov edx, dword ptr [esp + 0x50]
// 007345a0  50                   push eax
// 007345a1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007345a5  6a01                 push 1
// 007345a7  6a00                 push 0
// 007345a9  50                   push eax
// 007345aa  8b442424             mov eax, dword ptr [esp + 0x24]
// 007345ae  57                   push edi
// 007345af  50                   push eax
// 007345b0  8b442434             mov eax, dword ptr [esp + 0x34]
// 007345b4  50                   push eax
// 007345b5  8d0c2a               lea ecx, [edx + ebp]
// 007345b8  8b542470             mov edx, dword ptr [esp + 0x70]
// 007345bc  83ec10               sub esp, 0x10
// 007345bf  8bc4                 mov eax, esp
// 007345c1  8908                 mov dword ptr [eax], ecx
// 007345c3  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007345ca  895004               mov dword ptr [eax + 4], edx
// 007345cd  894808               mov dword ptr [eax + 8], ecx
// 007345d0  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007345d7  e91effffff           jmp 0x7344fa
// 007345dc  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 007345e0  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007345e4  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 007345e8  8b542458             mov edx, dword ptr [esp + 0x58]
// 007345ec  53                   push ebx
// 007345ed  6a00                 push 0
// 007345ef  57                   push edi
// 007345f0  6a00                 push 0
// 007345f2  6a01                 push 1
// 007345f4  83ec10               sub esp, 0x10
// 007345f7  8bc4                 mov eax, esp
// 007345f9  8910                 mov dword ptr [eax], edx
// 007345fb  894804               mov dword ptr [eax + 4], ecx
// 007345fe  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00734605  894808               mov dword ptr [eax + 8], ecx
// 00734608  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0073460f  89480c               mov dword ptr [eax + 0xc], ecx
// 00734612  8b06                 mov eax, dword ptr [esi]
// 00734614  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0073461a  55                   push ebp
// 0073461b  8bce                 mov ecx, esi
// 0073461d  ffd2                 call edx
// 0073461f  5f                   pop edi
// 00734620  5e                   pop esi
// 00734621  5d                   pop ebp
// 00734622  5b                   pop ebx
// 00734623  83c434               add esp, 0x34
// 00734626  c21800               ret 0x18
// 00734629  837c241000           cmp dword ptr [esp + 0x10], 0
// 0073462e  750c                 jne 0x73463c
// 00734630  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00734638  85ed                 test ebp, ebp
// 0073463a  7408                 je 0x734644
// 0073463c  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00734644  8b442458             mov eax, dword ptr [esp + 0x58]
// 00734648  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0073464c  8b542454             mov edx, dword ptr [esp + 0x54]
// 00734650  83c0f4               add eax, -0xc
// 00734653  8944243c             mov dword ptr [esp + 0x3c], eax
// 00734657  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 0073465d  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00734663  50                   push eax
// 00734664  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00734668  8b2e                 mov ebp, dword ptr [esi]
// 0073466a  6a01                 push 1
// 0073466c  6a00                 push 0
// 0073466e  50                   push eax
// 0073466f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00734673  57                   push edi
// 00734674  50                   push eax
// 00734675  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00734679  50                   push eax
// 0073467a  83ec10               sub esp, 0x10
// 0073467d  8bc4                 mov eax, esp
// 0073467f  8908                 mov dword ptr [eax], ecx
// 00734681  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00734685  895004               mov dword ptr [eax + 4], edx
// 00734688  8b542474             mov edx, dword ptr [esp + 0x74]
// 0073468c  894808               mov dword ptr [eax + 8], ecx
// 0073468f  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00734696  89480c               mov dword ptr [eax + 0xc], ecx
// 00734699  8b8584000000         mov eax, dword ptr [ebp + 0x84]
// 0073469f  52                   push edx
// 007346a0  8bce                 mov ecx, esi
// 007346a2  ffd0                 call eax
// 007346a4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007346a8  8b442454             mov eax, dword ptr [esp + 0x54]
// 007346ac  8d51f9               lea edx, [ecx - 7]
// 007346af  89542424             mov dword ptr [esp + 0x24], edx
// 007346b3  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007346b7  03c2                 add eax, edx
// 007346b9  99                   cdq 
// 007346ba  2bc2                 sub eax, edx
// 007346bc  8be8                 mov ebp, eax
// 007346be  d1fd                 sar ebp, 1
// 007346c0  837c241000           cmp dword ptr [esp + 0x10], 0
// 007346c5  750e                 jne 0x7346d5
// 007346c7  837c241400           cmp dword ptr [esp + 0x14], 0
// 007346cc  7507                 jne 0x7346d5
// 007346ce  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 007346d3  7458                 je 0x73472d
// 007346d5  85ff                 test edi, edi
// 007346d7  7454                 je 0x73472d
// 007346d9  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 007346df  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 007346e5  50                   push eax
// 007346e6  8b442450             mov eax, dword ptr [esp + 0x50]
// 007346ea  8b16                 mov edx, dword ptr [esi]
// 007346ec  6a01                 push 1
// 007346ee  50                   push eax
// 007346ef  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 007346f5  6a00                 push 0
// 007346f7  57                   push edi
// 007346f8  6a00                 push 0
// 007346fa  6a01                 push 1
// 007346fc  83c1f4               add ecx, -0xc
// 007346ff  83ec10               sub esp, 0x10
// 00734702  8bc4                 mov eax, esp
// 00734704  8908                 mov dword ptr [eax], ecx
// 00734706  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0073470d  894804               mov dword ptr [eax + 4], ecx
// 00734710  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00734717  894808               mov dword ptr [eax + 8], ecx
// 0073471a  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00734721  89480c               mov dword ptr [eax + 0xc], ecx
// 00734724  8b442474             mov eax, dword ptr [esp + 0x74]
// 00734728  50                   push eax
// 00734729  8bce                 mov ecx, esi
// 0073472b  ffd2                 call edx
// 0073472d  83ff03               cmp edi, 3
// 00734730  7502                 jne 0x734734
// 00734732  33ff                 xor edi, edi
// 00734734  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00734738  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073473c  8b06                 mov eax, dword ptr [esi]
// 0073473e  8b80f4000000         mov eax, dword ptr [eax + 0xf4]
// 00734744  6a00                 push 0
// 00734746  57                   push edi
// 00734747  51                   push ecx
// 00734748  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0073474c  52                   push edx
// 0073474d  8b542458             mov edx, dword ptr [esp + 0x58]
// 00734751  55                   push ebp
// 00734752  51                   push ecx
// 00734753  53                   push ebx
// 00734754  52                   push edx
// 00734755  8bce                 mov ecx, esi
// 00734757  ffd0                 call eax
// 00734759  5f                   pop edi
// 0073475a  5e                   pop esi
// 0073475b  5d                   pop ebp
// 0073475c  5b                   pop ebx
// 0073475d  83c434               add esp, 0x34
// 00734760  c21800               ret 0x18
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawSplitButtonFrame@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPControl@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp
