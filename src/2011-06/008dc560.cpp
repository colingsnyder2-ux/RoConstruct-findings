// roc 2011-06 008dc560  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 429 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dc560
//
// 008dc560  83ec10               sub esp, 0x10
// 008dc563  53                   push ebx
// 008dc564  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008dc568  55                   push ebp
// 008dc569  56                   push esi
// 008dc56a  57                   push edi
// 008dc56b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008dc56f  8bf1                 mov esi, ecx
// 008dc571  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008dc575  8b16                 mov edx, dword ptr [esi]
// 008dc577  8b5208               mov edx, dword ptr [edx + 8]
// 008dc57a  57                   push edi
// 008dc57b  83ec10               sub esp, 0x10
// 008dc57e  8bc4                 mov eax, esp
// 008dc580  8908                 mov dword ptr [eax], ecx
// 008dc582  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008dc586  894804               mov dword ptr [eax + 4], ecx
// 008dc589  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008dc58d  894808               mov dword ptr [eax + 8], ecx
// 008dc590  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008dc594  89480c               mov dword ptr [eax + 0xc], ecx
// 008dc597  53                   push ebx
// 008dc598  8bce                 mov ecx, esi
// 008dc59a  ffd2                 call edx
// 008dc59c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008dc59f  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008dc5a5  8b2b                 mov ebp, dword ptr [ebx]
// 008dc5a7  8b11                 mov edx, dword ptr [ecx]
// 008dc5a9  8b520c               mov edx, dword ptr [edx + 0xc]
// 008dc5ac  57                   push edi
// 008dc5ad  83ec10               sub esp, 0x10
// 008dc5b0  8bc4                 mov eax, esp
// 008dc5b2  8928                 mov dword ptr [eax], ebp
// 008dc5b4  8b6b04               mov ebp, dword ptr [ebx + 4]
// 008dc5b7  896804               mov dword ptr [eax + 4], ebp
// 008dc5ba  8b6b08               mov ebp, dword ptr [ebx + 8]
// 008dc5bd  896808               mov dword ptr [eax + 8], ebp
// 008dc5c0  8b6b0c               mov ebp, dword ptr [ebx + 0xc]
// 008dc5c3  89680c               mov dword ptr [eax + 0xc], ebp
// 008dc5c6  8b442440             mov eax, dword ptr [esp + 0x40]
// 008dc5ca  50                   push eax
// 008dc5cb  ffd2                 call edx
// 008dc5cd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008dc5d1  8b16                 mov edx, dword ptr [esi]
// 008dc5d3  8b520c               mov edx, dword ptr [edx + 0xc]
// 008dc5d6  57                   push edi
// 008dc5d7  83ec10               sub esp, 0x10
// 008dc5da  8bc4                 mov eax, esp
// 008dc5dc  8908                 mov dword ptr [eax], ecx
// 008dc5de  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008dc5e2  894804               mov dword ptr [eax + 4], ecx
// 008dc5e5  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008dc5e9  894808               mov dword ptr [eax + 8], ecx
// 008dc5ec  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008dc5f0  89480c               mov dword ptr [eax + 0xc], ecx
// 008dc5f3  8d442424             lea eax, [esp + 0x24]
// 008dc5f7  50                   push eax
// 008dc5f8  8bce                 mov ecx, esi
// 008dc5fa  ffd2                 call edx
// 008dc5fc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008dc5ff  83783800             cmp dword ptr [eax + 0x38], 0
// 008dc603  7564                 jne 0x8dc669
// 008dc605  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008dc60b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008dc60f  8b11                 mov edx, dword ptr [ecx]
// 008dc611  57                   push edi
// 008dc612  83ec10               sub esp, 0x10
// 008dc615  8bc4                 mov eax, esp
// 008dc617  8928                 mov dword ptr [eax], ebp
// 008dc619  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008dc61d  896804               mov dword ptr [eax + 4], ebp
// 008dc620  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008dc624  896808               mov dword ptr [eax + 8], ebp
// 008dc627  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008dc62b  89680c               mov dword ptr [eax + 0xc], ebp
// 008dc62e  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008dc632  8b4210               mov eax, dword ptr [edx + 0x10]
// 008dc635  55                   push ebp
// 008dc636  ffd0                 call eax
// 008dc638  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008dc63b  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008dc641  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008dc644  83f9ff               cmp ecx, -1
// 008dc647  7503                 jne 0x8dc64c
// 008dc649  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008dc64c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008dc64f  83faff               cmp edx, -1
// 008dc652  7505                 jne 0x8dc659
// 008dc654  8b4048               mov eax, dword ptr [eax + 0x48]
// 008dc657  eb02                 jmp 0x8dc65b
// 008dc659  8bc2                 mov eax, edx
// 008dc65b  51                   push ecx
// 008dc65c  50                   push eax
// 008dc65d  8d542418             lea edx, [esp + 0x18]
// 008dc661  52                   push edx
// 008dc662  8bcd                 mov ecx, ebp
// 008dc664  e8b1e7f2ff           call 0x80ae1a
// 008dc669  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008dc66c  83783801             cmp dword ptr [eax + 0x38], 1
// 008dc670  0f858b000000         jne 0x8dc701
// 008dc676  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008dc67c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008dc680  8b11                 mov edx, dword ptr [ecx]
// 008dc682  57                   push edi
// 008dc683  83ec10               sub esp, 0x10
// 008dc686  8bc4                 mov eax, esp
// 008dc688  8928                 mov dword ptr [eax], ebp
// 008dc68a  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008dc68e  896804               mov dword ptr [eax + 4], ebp
// 008dc691  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008dc695  896808               mov dword ptr [eax + 8], ebp
// 008dc698  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008dc69c  89680c               mov dword ptr [eax + 0xc], ebp
// 008dc69f  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008dc6a3  8b4210               mov eax, dword ptr [edx + 0x10]
// 008dc6a6  55                   push ebp
// 008dc6a7  ffd0                 call eax
// 008dc6a9  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008dc6ac  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008dc6b2  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008dc6b5  83f9ff               cmp ecx, -1
// 008dc6b8  7503                 jne 0x8dc6bd
// 008dc6ba  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008dc6bd  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008dc6c0  83faff               cmp edx, -1
// 008dc6c3  7505                 jne 0x8dc6ca
// 008dc6c5  8b4048               mov eax, dword ptr [eax + 0x48]
// 008dc6c8  eb02                 jmp 0x8dc6cc
// 008dc6ca  8bc2                 mov eax, edx
// 008dc6cc  8b17                 mov edx, dword ptr [edi]
// 008dc6ce  51                   push ecx
// 008dc6cf  50                   push eax
// 008dc6d0  8b4248               mov eax, dword ptr [edx + 0x48]
// 008dc6d3  8bcf                 mov ecx, edi
// 008dc6d5  ffd0                 call eax
// 008dc6d7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dc6db  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008dc6df  50                   push eax
// 008dc6e0  83ec10               sub esp, 0x10
// 008dc6e3  8bc4                 mov eax, esp
// 008dc6e5  8908                 mov dword ptr [eax], ecx
// 008dc6e7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008dc6eb  895004               mov dword ptr [eax + 4], edx
// 008dc6ee  8b542438             mov edx, dword ptr [esp + 0x38]
// 008dc6f2  894808               mov dword ptr [eax + 8], ecx
// 008dc6f5  55                   push ebp
// 008dc6f6  89500c               mov dword ptr [eax + 0xc], edx
// 008dc6f9  e8f2d1ffff           call 0x8d98f0
// 008dc6fe  83c420               add esp, 0x20
// 008dc701  5f                   pop edi
// 008dc702  5e                   pop esi
// 008dc703  5d                   pop ebp
// 008dc704  8bc3                 mov eax, ebx
// 008dc706  5b                   pop ebx
// 008dc707  83c410               add esp, 0x10
// 008dc70a  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetFlat@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
