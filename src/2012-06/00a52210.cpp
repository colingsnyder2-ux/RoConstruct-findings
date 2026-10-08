// roc 2012-06 00a52210  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a52210
//
// 00a52210  83ec10               sub esp, 0x10
// 00a52213  53                   push ebx
// 00a52214  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a52218  55                   push ebp
// 00a52219  56                   push esi
// 00a5221a  57                   push edi
// 00a5221b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a5221f  8bf1                 mov esi, ecx
// 00a52221  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a52225  8b16                 mov edx, dword ptr [esi]
// 00a52227  8b5208               mov edx, dword ptr [edx + 8]
// 00a5222a  53                   push ebx
// 00a5222b  83ec10               sub esp, 0x10
// 00a5222e  8bc4                 mov eax, esp
// 00a52230  8908                 mov dword ptr [eax], ecx
// 00a52232  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a52236  894804               mov dword ptr [eax + 4], ecx
// 00a52239  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a5223d  894808               mov dword ptr [eax + 8], ecx
// 00a52240  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a52244  89480c               mov dword ptr [eax + 0xc], ecx
// 00a52247  57                   push edi
// 00a52248  8bce                 mov ecx, esi
// 00a5224a  ffd2                 call edx
// 00a5224c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a5224f  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00a52255  8b2f                 mov ebp, dword ptr [edi]
// 00a52257  8b11                 mov edx, dword ptr [ecx]
// 00a52259  53                   push ebx
// 00a5225a  83ec10               sub esp, 0x10
// 00a5225d  8bc4                 mov eax, esp
// 00a5225f  8928                 mov dword ptr [eax], ebp
// 00a52261  8b6f04               mov ebp, dword ptr [edi + 4]
// 00a52264  896804               mov dword ptr [eax + 4], ebp
// 00a52267  8b6f08               mov ebp, dword ptr [edi + 8]
// 00a5226a  896808               mov dword ptr [eax + 8], ebp
// 00a5226d  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00a52270  89680c               mov dword ptr [eax + 0xc], ebp
// 00a52273  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00a52277  8b420c               mov eax, dword ptr [edx + 0xc]
// 00a5227a  55                   push ebp
// 00a5227b  ffd0                 call eax
// 00a5227d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a52281  8b16                 mov edx, dword ptr [esi]
// 00a52283  8b520c               mov edx, dword ptr [edx + 0xc]
// 00a52286  53                   push ebx
// 00a52287  83ec10               sub esp, 0x10
// 00a5228a  8bc4                 mov eax, esp
// 00a5228c  8908                 mov dword ptr [eax], ecx
// 00a5228e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a52292  894804               mov dword ptr [eax + 4], ecx
// 00a52295  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a52299  894808               mov dword ptr [eax + 8], ecx
// 00a5229c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a522a0  89480c               mov dword ptr [eax + 0xc], ecx
// 00a522a3  8d442424             lea eax, [esp + 0x24]
// 00a522a7  50                   push eax
// 00a522a8  8bce                 mov ecx, esi
// 00a522aa  ffd2                 call edx
// 00a522ac  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a522af  83783800             cmp dword ptr [eax + 0x38], 0
// 00a522b3  756a                 jne 0xa5231f
// 00a522b5  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00a522bb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a522bf  8b11                 mov edx, dword ptr [ecx]
// 00a522c1  53                   push ebx
// 00a522c2  83ec10               sub esp, 0x10
// 00a522c5  8bc4                 mov eax, esp
// 00a522c7  8928                 mov dword ptr [eax], ebp
// 00a522c9  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00a522cd  896804               mov dword ptr [eax + 4], ebp
// 00a522d0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a522d4  896808               mov dword ptr [eax + 8], ebp
// 00a522d7  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00a522db  89680c               mov dword ptr [eax + 0xc], ebp
// 00a522de  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00a522e2  8b4210               mov eax, dword ptr [edx + 0x10]
// 00a522e5  55                   push ebp
// 00a522e6  ffd0                 call eax
// 00a522e8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00a522eb  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00a522f1  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 00a522f7  83f9ff               cmp ecx, -1
// 00a522fa  7506                 jne 0xa52302
// 00a522fc  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00a52302  8b5070               mov edx, dword ptr [eax + 0x70]
// 00a52305  83faff               cmp edx, -1
// 00a52308  7505                 jne 0xa5230f
// 00a5230a  8b406c               mov eax, dword ptr [eax + 0x6c]
// 00a5230d  eb02                 jmp 0xa52311
// 00a5230f  8bc2                 mov eax, edx
// 00a52311  51                   push ecx
// 00a52312  50                   push eax
// 00a52313  8d542418             lea edx, [esp + 0x18]
// 00a52317  52                   push edx
// 00a52318  8bcd                 mov ecx, ebp
// 00a5231a  e8870bf3ff           call 0x982ea6
// 00a5231f  8b761c               mov esi, dword ptr [esi + 0x1c]
// 00a52322  837e3801             cmp dword ptr [esi + 0x38], 1
// 00a52326  755b                 jne 0xa52383
// 00a52328  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 00a5232e  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 00a52334  83f9ff               cmp ecx, -1
// 00a52337  7506                 jne 0xa5233f
// 00a52339  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00a5233f  8b5070               mov edx, dword ptr [eax + 0x70]
// 00a52342  83faff               cmp edx, -1
// 00a52345  7505                 jne 0xa5234c
// 00a52347  8b406c               mov eax, dword ptr [eax + 0x6c]
// 00a5234a  eb02                 jmp 0xa5234e
// 00a5234c  8bc2                 mov eax, edx
// 00a5234e  51                   push ecx
// 00a5234f  50                   push eax
// 00a52350  8b03                 mov eax, dword ptr [ebx]
// 00a52352  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a52355  8bcb                 mov ecx, ebx
// 00a52357  ffd2                 call edx
// 00a52359  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a5235d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a52361  50                   push eax
// 00a52362  83ec10               sub esp, 0x10
// 00a52365  8bc4                 mov eax, esp
// 00a52367  8908                 mov dword ptr [eax], ecx
// 00a52369  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a5236d  895004               mov dword ptr [eax + 4], edx
// 00a52370  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a52374  894808               mov dword ptr [eax + 8], ecx
// 00a52377  55                   push ebp
// 00a52378  89500c               mov dword ptr [eax + 0xc], edx
// 00a5237b  e840f8ffff           call 0xa51bc0
// 00a52380  83c420               add esp, 0x20
// 00a52383  8bc7                 mov eax, edi
// 00a52385  5f                   pop edi
// 00a52386  5e                   pop esi
// 00a52387  5d                   pop ebp
// 00a52388  5b                   pop ebx
// 00a52389  83c410               add esp, 0x10
// 00a5238c  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetVisualStudio@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
