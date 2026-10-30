// roc 2011-06 008daca0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008daca0
//
// 008daca0  83ec10               sub esp, 0x10
// 008daca3  53                   push ebx
// 008daca4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008daca8  55                   push ebp
// 008daca9  56                   push esi
// 008dacaa  57                   push edi
// 008dacab  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008dacaf  8bf1                 mov esi, ecx
// 008dacb1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008dacb5  8b16                 mov edx, dword ptr [esi]
// 008dacb7  8b5208               mov edx, dword ptr [edx + 8]
// 008dacba  53                   push ebx
// 008dacbb  83ec10               sub esp, 0x10
// 008dacbe  8bc4                 mov eax, esp
// 008dacc0  8908                 mov dword ptr [eax], ecx
// 008dacc2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008dacc6  894804               mov dword ptr [eax + 4], ecx
// 008dacc9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008daccd  894808               mov dword ptr [eax + 8], ecx
// 008dacd0  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008dacd4  89480c               mov dword ptr [eax + 0xc], ecx
// 008dacd7  57                   push edi
// 008dacd8  8bce                 mov ecx, esi
// 008dacda  ffd2                 call edx
// 008dacdc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008dacdf  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008dace5  8b2f                 mov ebp, dword ptr [edi]
// 008dace7  8b11                 mov edx, dword ptr [ecx]
// 008dace9  53                   push ebx
// 008dacea  83ec10               sub esp, 0x10
// 008daced  8bc4                 mov eax, esp
// 008dacef  8928                 mov dword ptr [eax], ebp
// 008dacf1  8b6f04               mov ebp, dword ptr [edi + 4]
// 008dacf4  896804               mov dword ptr [eax + 4], ebp
// 008dacf7  8b6f08               mov ebp, dword ptr [edi + 8]
// 008dacfa  896808               mov dword ptr [eax + 8], ebp
// 008dacfd  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 008dad00  89680c               mov dword ptr [eax + 0xc], ebp
// 008dad03  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008dad07  8b420c               mov eax, dword ptr [edx + 0xc]
// 008dad0a  55                   push ebp
// 008dad0b  ffd0                 call eax
// 008dad0d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008dad11  8b16                 mov edx, dword ptr [esi]
// 008dad13  8b520c               mov edx, dword ptr [edx + 0xc]
// 008dad16  53                   push ebx
// 008dad17  83ec10               sub esp, 0x10
// 008dad1a  8bc4                 mov eax, esp
// 008dad1c  8908                 mov dword ptr [eax], ecx
// 008dad1e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008dad22  894804               mov dword ptr [eax + 4], ecx
// 008dad25  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008dad29  894808               mov dword ptr [eax + 8], ecx
// 008dad2c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008dad30  89480c               mov dword ptr [eax + 0xc], ecx
// 008dad33  8d442424             lea eax, [esp + 0x24]
// 008dad37  50                   push eax
// 008dad38  8bce                 mov ecx, esi
// 008dad3a  ffd2                 call edx
// 008dad3c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008dad3f  83783800             cmp dword ptr [eax + 0x38], 0
// 008dad43  7570                 jne 0x8dadb5
// 008dad45  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008dad4b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008dad4f  8b11                 mov edx, dword ptr [ecx]
// 008dad51  53                   push ebx
// 008dad52  83ec10               sub esp, 0x10
// 008dad55  8bc4                 mov eax, esp
// 008dad57  8928                 mov dword ptr [eax], ebp
// 008dad59  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008dad5d  896804               mov dword ptr [eax + 4], ebp
// 008dad60  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008dad64  896808               mov dword ptr [eax + 8], ebp
// 008dad67  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008dad6b  89680c               mov dword ptr [eax + 0xc], ebp
// 008dad6e  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008dad72  8b4210               mov eax, dword ptr [edx + 0x10]
// 008dad75  55                   push ebp
// 008dad76  ffd0                 call eax
// 008dad78  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008dad7b  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008dad81  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 008dad87  83f9ff               cmp ecx, -1
// 008dad8a  7506                 jne 0x8dad92
// 008dad8c  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 008dad92  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008dad98  83faff               cmp edx, -1
// 008dad9b  7508                 jne 0x8dada5
// 008dad9d  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 008dada3  eb02                 jmp 0x8dada7
// 008dada5  8bc2                 mov eax, edx
// 008dada7  51                   push ecx
// 008dada8  50                   push eax
// 008dada9  8d542418             lea edx, [esp + 0x18]
// 008dadad  52                   push edx
// 008dadae  8bcd                 mov ecx, ebp
// 008dadb0  e86500f3ff           call 0x80ae1a
// 008dadb5  8b761c               mov esi, dword ptr [esi + 0x1c]
// 008dadb8  837e3801             cmp dword ptr [esi + 0x38], 1
// 008dadbc  7561                 jne 0x8dae1f
// 008dadbe  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 008dadc4  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 008dadca  83f9ff               cmp ecx, -1
// 008dadcd  7506                 jne 0x8dadd5
// 008dadcf  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 008dadd5  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008daddb  83faff               cmp edx, -1
// 008dadde  7508                 jne 0x8dade8
// 008dade0  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 008dade6  eb02                 jmp 0x8dadea
// 008dade8  8bc2                 mov eax, edx
// 008dadea  51                   push ecx
// 008dadeb  50                   push eax
// 008dadec  8b03                 mov eax, dword ptr [ebx]
// 008dadee  8b5048               mov edx, dword ptr [eax + 0x48]
// 008dadf1  8bcb                 mov ecx, ebx
// 008dadf3  ffd2                 call edx
// 008dadf5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dadf9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008dadfd  50                   push eax
// 008dadfe  83ec10               sub esp, 0x10
// 008dae01  8bc4                 mov eax, esp
// 008dae03  8908                 mov dword ptr [eax], ecx
// 008dae05  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008dae09  895004               mov dword ptr [eax + 4], edx
// 008dae0c  8b542438             mov edx, dword ptr [esp + 0x38]
// 008dae10  894808               mov dword ptr [eax + 8], ecx
// 008dae13  55                   push ebp
// 008dae14  89500c               mov dword ptr [eax + 0xc], edx
// 008dae17  e8d4eaffff           call 0x8d98f0
// 008dae1c  83c420               add esp, 0x20
// 008dae1f  8bc7                 mov eax, edi
// 008dae21  5f                   pop edi
// 008dae22  5e                   pop esi
// 008dae23  5d                   pop ebp
// 008dae24  5b                   pop ebx
// 008dae25  83c410               add esp, 0x10
// 008dae28  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
