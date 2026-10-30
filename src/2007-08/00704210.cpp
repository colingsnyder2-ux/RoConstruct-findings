// from server: 100% by auto
// roc 2007-08 00704210  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00704210
//
// 00704210  83ec10               sub esp, 0x10
// 00704213  53                   push ebx
// 00704214  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00704218  55                   push ebp
// 00704219  56                   push esi
// 0070421a  57                   push edi
// 0070421b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0070421f  8bf1                 mov esi, ecx
// 00704221  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00704225  8b16                 mov edx, dword ptr [esi]
// 00704227  8b5208               mov edx, dword ptr [edx + 8]
// 0070422a  53                   push ebx
// 0070422b  83ec10               sub esp, 0x10
// 0070422e  8bc4                 mov eax, esp
// 00704230  8908                 mov dword ptr [eax], ecx
// 00704232  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00704236  894804               mov dword ptr [eax + 4], ecx
// 00704239  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0070423d  894808               mov dword ptr [eax + 8], ecx
// 00704240  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00704244  89480c               mov dword ptr [eax + 0xc], ecx
// 00704247  57                   push edi
// 00704248  8bce                 mov ecx, esi
// 0070424a  ffd2                 call edx
// 0070424c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0070424f  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00704255  8b2f                 mov ebp, dword ptr [edi]
// 00704257  8b11                 mov edx, dword ptr [ecx]
// 00704259  53                   push ebx
// 0070425a  83ec10               sub esp, 0x10
// 0070425d  8bc4                 mov eax, esp
// 0070425f  8928                 mov dword ptr [eax], ebp
// 00704261  8b6f04               mov ebp, dword ptr [edi + 4]
// 00704264  896804               mov dword ptr [eax + 4], ebp
// 00704267  8b6f08               mov ebp, dword ptr [edi + 8]
// 0070426a  896808               mov dword ptr [eax + 8], ebp
// 0070426d  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00704270  89680c               mov dword ptr [eax + 0xc], ebp
// 00704273  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00704277  8b420c               mov eax, dword ptr [edx + 0xc]
// 0070427a  55                   push ebp
// 0070427b  ffd0                 call eax
// 0070427d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00704281  8b16                 mov edx, dword ptr [esi]
// 00704283  8b520c               mov edx, dword ptr [edx + 0xc]
// 00704286  53                   push ebx
// 00704287  83ec10               sub esp, 0x10
// 0070428a  8bc4                 mov eax, esp
// 0070428c  8908                 mov dword ptr [eax], ecx
// 0070428e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00704292  894804               mov dword ptr [eax + 4], ecx
// 00704295  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00704299  894808               mov dword ptr [eax + 8], ecx
// 0070429c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007042a0  89480c               mov dword ptr [eax + 0xc], ecx
// 007042a3  8d442424             lea eax, [esp + 0x24]
// 007042a7  50                   push eax
// 007042a8  8bce                 mov ecx, esi
// 007042aa  ffd2                 call edx
// 007042ac  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007042af  83783800             cmp dword ptr [eax + 0x38], 0
// 007042b3  756a                 jne 0x70431f
// 007042b5  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007042bb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007042bf  8b11                 mov edx, dword ptr [ecx]
// 007042c1  53                   push ebx
// 007042c2  83ec10               sub esp, 0x10
// 007042c5  8bc4                 mov eax, esp
// 007042c7  8928                 mov dword ptr [eax], ebp
// 007042c9  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007042cd  896804               mov dword ptr [eax + 4], ebp
// 007042d0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007042d4  896808               mov dword ptr [eax + 8], ebp
// 007042d7  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007042db  89680c               mov dword ptr [eax + 0xc], ebp
// 007042de  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 007042e2  8b4210               mov eax, dword ptr [edx + 0x10]
// 007042e5  55                   push ebp
// 007042e6  ffd0                 call eax
// 007042e8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007042eb  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 007042f1  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 007042f7  83f9ff               cmp ecx, -1
// 007042fa  7506                 jne 0x704302
// 007042fc  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00704302  8b5070               mov edx, dword ptr [eax + 0x70]
// 00704305  83faff               cmp edx, -1
// 00704308  7505                 jne 0x70430f
// 0070430a  8b406c               mov eax, dword ptr [eax + 0x6c]
// 0070430d  eb02                 jmp 0x704311
// 0070430f  8bc2                 mov eax, edx
// 00704311  51                   push ecx
// 00704312  50                   push eax
// 00704313  8d542418             lea edx, [esp + 0x18]
// 00704317  52                   push edx
// 00704318  8bcd                 mov ecx, ebp
// 0070431a  e88bc5f2ff           call 0x6308aa
// 0070431f  8b761c               mov esi, dword ptr [esi + 0x1c]
// 00704322  837e3801             cmp dword ptr [esi + 0x38], 1
// 00704326  755b                 jne 0x704383
// 00704328  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0070432e  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 00704334  83f9ff               cmp ecx, -1
// 00704337  7506                 jne 0x70433f
// 00704339  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 0070433f  8b5070               mov edx, dword ptr [eax + 0x70]
// 00704342  83faff               cmp edx, -1
// 00704345  7505                 jne 0x70434c
// 00704347  8b406c               mov eax, dword ptr [eax + 0x6c]
// 0070434a  eb02                 jmp 0x70434e
// 0070434c  8bc2                 mov eax, edx
// 0070434e  51                   push ecx
// 0070434f  50                   push eax
// 00704350  8b03                 mov eax, dword ptr [ebx]
// 00704352  8b5048               mov edx, dword ptr [eax + 0x48]
// 00704355  8bcb                 mov ecx, ebx
// 00704357  ffd2                 call edx
// 00704359  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0070435d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00704361  50                   push eax
// 00704362  83ec10               sub esp, 0x10
// 00704365  8bc4                 mov eax, esp
// 00704367  8908                 mov dword ptr [eax], ecx
// 00704369  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0070436d  895004               mov dword ptr [eax + 4], edx
// 00704370  8b542438             mov edx, dword ptr [esp + 0x38]
// 00704374  894808               mov dword ptr [eax + 8], ecx
// 00704377  55                   push ebp
// 00704378  89500c               mov dword ptr [eax + 0xc], edx
// 0070437b  e840f8ffff           call 0x703bc0
// 00704380  83c420               add esp, 0x20
// 00704383  8bc7                 mov eax, edi
// 00704385  5f                   pop edi
// 00704386  5e                   pop esi
// 00704387  5d                   pop ebp
// 00704388  5b                   pop ebx
// 00704389  83c410               add esp, 0x10
// 0070438c  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetVisualStudio@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
