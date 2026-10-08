// roc 2010-06 00888fc0  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00888fc0
//
// 00888fc0  83ec10               sub esp, 0x10
// 00888fc3  53                   push ebx
// 00888fc4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00888fc8  55                   push ebp
// 00888fc9  56                   push esi
// 00888fca  57                   push edi
// 00888fcb  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00888fcf  8bf1                 mov esi, ecx
// 00888fd1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00888fd5  8b16                 mov edx, dword ptr [esi]
// 00888fd7  8b5208               mov edx, dword ptr [edx + 8]
// 00888fda  53                   push ebx
// 00888fdb  83ec10               sub esp, 0x10
// 00888fde  8bc4                 mov eax, esp
// 00888fe0  8908                 mov dword ptr [eax], ecx
// 00888fe2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00888fe6  894804               mov dword ptr [eax + 4], ecx
// 00888fe9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00888fed  894808               mov dword ptr [eax + 8], ecx
// 00888ff0  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00888ff4  89480c               mov dword ptr [eax + 0xc], ecx
// 00888ff7  57                   push edi
// 00888ff8  8bce                 mov ecx, esi
// 00888ffa  ffd2                 call edx
// 00888ffc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00888fff  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00889005  8b2f                 mov ebp, dword ptr [edi]
// 00889007  8b11                 mov edx, dword ptr [ecx]
// 00889009  53                   push ebx
// 0088900a  83ec10               sub esp, 0x10
// 0088900d  8bc4                 mov eax, esp
// 0088900f  8928                 mov dword ptr [eax], ebp
// 00889011  8b6f04               mov ebp, dword ptr [edi + 4]
// 00889014  896804               mov dword ptr [eax + 4], ebp
// 00889017  8b6f08               mov ebp, dword ptr [edi + 8]
// 0088901a  896808               mov dword ptr [eax + 8], ebp
// 0088901d  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00889020  89680c               mov dword ptr [eax + 0xc], ebp
// 00889023  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00889027  8b420c               mov eax, dword ptr [edx + 0xc]
// 0088902a  55                   push ebp
// 0088902b  ffd0                 call eax
// 0088902d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00889031  8b16                 mov edx, dword ptr [esi]
// 00889033  8b520c               mov edx, dword ptr [edx + 0xc]
// 00889036  53                   push ebx
// 00889037  83ec10               sub esp, 0x10
// 0088903a  8bc4                 mov eax, esp
// 0088903c  8908                 mov dword ptr [eax], ecx
// 0088903e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00889042  894804               mov dword ptr [eax + 4], ecx
// 00889045  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00889049  894808               mov dword ptr [eax + 8], ecx
// 0088904c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00889050  89480c               mov dword ptr [eax + 0xc], ecx
// 00889053  8d442424             lea eax, [esp + 0x24]
// 00889057  50                   push eax
// 00889058  8bce                 mov ecx, esi
// 0088905a  ffd2                 call edx
// 0088905c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0088905f  83783800             cmp dword ptr [eax + 0x38], 0
// 00889063  756a                 jne 0x8890cf
// 00889065  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 0088906b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0088906f  8b11                 mov edx, dword ptr [ecx]
// 00889071  53                   push ebx
// 00889072  83ec10               sub esp, 0x10
// 00889075  8bc4                 mov eax, esp
// 00889077  8928                 mov dword ptr [eax], ebp
// 00889079  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0088907d  896804               mov dword ptr [eax + 4], ebp
// 00889080  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00889084  896808               mov dword ptr [eax + 8], ebp
// 00889087  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0088908b  89680c               mov dword ptr [eax + 0xc], ebp
// 0088908e  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00889092  8b4210               mov eax, dword ptr [edx + 0x10]
// 00889095  55                   push ebp
// 00889096  ffd0                 call eax
// 00889098  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0088909b  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008890a1  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 008890a7  83f9ff               cmp ecx, -1
// 008890aa  7506                 jne 0x8890b2
// 008890ac  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 008890b2  8b5070               mov edx, dword ptr [eax + 0x70]
// 008890b5  83faff               cmp edx, -1
// 008890b8  7505                 jne 0x8890bf
// 008890ba  8b406c               mov eax, dword ptr [eax + 0x6c]
// 008890bd  eb02                 jmp 0x8890c1
// 008890bf  8bc2                 mov eax, edx
// 008890c1  51                   push ecx
// 008890c2  50                   push eax
// 008890c3  8d542418             lea edx, [esp + 0x18]
// 008890c7  52                   push edx
// 008890c8  8bcd                 mov ecx, ebp
// 008890ca  e869f6f1ff           call 0x7a8738
// 008890cf  8b761c               mov esi, dword ptr [esi + 0x1c]
// 008890d2  837e3801             cmp dword ptr [esi + 0x38], 1
// 008890d6  755b                 jne 0x889133
// 008890d8  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 008890de  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 008890e4  83f9ff               cmp ecx, -1
// 008890e7  7506                 jne 0x8890ef
// 008890e9  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 008890ef  8b5070               mov edx, dword ptr [eax + 0x70]
// 008890f2  83faff               cmp edx, -1
// 008890f5  7505                 jne 0x8890fc
// 008890f7  8b406c               mov eax, dword ptr [eax + 0x6c]
// 008890fa  eb02                 jmp 0x8890fe
// 008890fc  8bc2                 mov eax, edx
// 008890fe  51                   push ecx
// 008890ff  50                   push eax
// 00889100  8b03                 mov eax, dword ptr [ebx]
// 00889102  8b5048               mov edx, dword ptr [eax + 0x48]
// 00889105  8bcb                 mov ecx, ebx
// 00889107  ffd2                 call edx
// 00889109  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088910d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00889111  50                   push eax
// 00889112  83ec10               sub esp, 0x10
// 00889115  8bc4                 mov eax, esp
// 00889117  8908                 mov dword ptr [eax], ecx
// 00889119  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088911d  895004               mov dword ptr [eax + 4], edx
// 00889120  8b542438             mov edx, dword ptr [esp + 0x38]
// 00889124  894808               mov dword ptr [eax + 8], ecx
// 00889127  55                   push ebp
// 00889128  89500c               mov dword ptr [eax + 0xc], edx
// 0088912b  e840f8ffff           call 0x888970
// 00889130  83c420               add esp, 0x20
// 00889133  8bc7                 mov eax, edi
// 00889135  5f                   pop edi
// 00889136  5e                   pop esi
// 00889137  5d                   pop ebp
// 00889138  5b                   pop ebx
// 00889139  83c410               add esp, 0x10
// 0088913c  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetVisualStudio@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
