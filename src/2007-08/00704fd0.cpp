// from server: 100% by auto
// roc 2007-08 00704fd0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00704fd0
//
// 00704fd0  83ec10               sub esp, 0x10
// 00704fd3  53                   push ebx
// 00704fd4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00704fd8  55                   push ebp
// 00704fd9  56                   push esi
// 00704fda  57                   push edi
// 00704fdb  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00704fdf  8bf1                 mov esi, ecx
// 00704fe1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00704fe5  8b16                 mov edx, dword ptr [esi]
// 00704fe7  8b5208               mov edx, dword ptr [edx + 8]
// 00704fea  53                   push ebx
// 00704feb  83ec10               sub esp, 0x10
// 00704fee  8bc4                 mov eax, esp
// 00704ff0  8908                 mov dword ptr [eax], ecx
// 00704ff2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00704ff6  894804               mov dword ptr [eax + 4], ecx
// 00704ff9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00704ffd  894808               mov dword ptr [eax + 8], ecx
// 00705000  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00705004  89480c               mov dword ptr [eax + 0xc], ecx
// 00705007  57                   push edi
// 00705008  8bce                 mov ecx, esi
// 0070500a  ffd2                 call edx
// 0070500c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0070500f  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00705015  8b2f                 mov ebp, dword ptr [edi]
// 00705017  8b11                 mov edx, dword ptr [ecx]
// 00705019  53                   push ebx
// 0070501a  83ec10               sub esp, 0x10
// 0070501d  8bc4                 mov eax, esp
// 0070501f  8928                 mov dword ptr [eax], ebp
// 00705021  8b6f04               mov ebp, dword ptr [edi + 4]
// 00705024  896804               mov dword ptr [eax + 4], ebp
// 00705027  8b6f08               mov ebp, dword ptr [edi + 8]
// 0070502a  896808               mov dword ptr [eax + 8], ebp
// 0070502d  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00705030  89680c               mov dword ptr [eax + 0xc], ebp
// 00705033  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00705037  8b420c               mov eax, dword ptr [edx + 0xc]
// 0070503a  55                   push ebp
// 0070503b  ffd0                 call eax
// 0070503d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00705041  8b16                 mov edx, dword ptr [esi]
// 00705043  8b520c               mov edx, dword ptr [edx + 0xc]
// 00705046  53                   push ebx
// 00705047  83ec10               sub esp, 0x10
// 0070504a  8bc4                 mov eax, esp
// 0070504c  8908                 mov dword ptr [eax], ecx
// 0070504e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00705052  894804               mov dword ptr [eax + 4], ecx
// 00705055  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00705059  894808               mov dword ptr [eax + 8], ecx
// 0070505c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00705060  89480c               mov dword ptr [eax + 0xc], ecx
// 00705063  8d442424             lea eax, [esp + 0x24]
// 00705067  50                   push eax
// 00705068  8bce                 mov ecx, esi
// 0070506a  ffd2                 call edx
// 0070506c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0070506f  83783800             cmp dword ptr [eax + 0x38], 0
// 00705073  7570                 jne 0x7050e5
// 00705075  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 0070507b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0070507f  8b11                 mov edx, dword ptr [ecx]
// 00705081  53                   push ebx
// 00705082  83ec10               sub esp, 0x10
// 00705085  8bc4                 mov eax, esp
// 00705087  8928                 mov dword ptr [eax], ebp
// 00705089  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0070508d  896804               mov dword ptr [eax + 4], ebp
// 00705090  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00705094  896808               mov dword ptr [eax + 8], ebp
// 00705097  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0070509b  89680c               mov dword ptr [eax + 0xc], ebp
// 0070509e  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 007050a2  8b4210               mov eax, dword ptr [edx + 0x10]
// 007050a5  55                   push ebp
// 007050a6  ffd0                 call eax
// 007050a8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007050ab  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 007050b1  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 007050b7  83f9ff               cmp ecx, -1
// 007050ba  7506                 jne 0x7050c2
// 007050bc  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 007050c2  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 007050c8  83faff               cmp edx, -1
// 007050cb  7508                 jne 0x7050d5
// 007050cd  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 007050d3  eb02                 jmp 0x7050d7
// 007050d5  8bc2                 mov eax, edx
// 007050d7  51                   push ecx
// 007050d8  50                   push eax
// 007050d9  8d542418             lea edx, [esp + 0x18]
// 007050dd  52                   push edx
// 007050de  8bcd                 mov ecx, ebp
// 007050e0  e8c5b7f2ff           call 0x6308aa
// 007050e5  8b761c               mov esi, dword ptr [esi + 0x1c]
// 007050e8  837e3801             cmp dword ptr [esi + 0x38], 1
// 007050ec  7561                 jne 0x70514f
// 007050ee  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 007050f4  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 007050fa  83f9ff               cmp ecx, -1
// 007050fd  7506                 jne 0x705105
// 007050ff  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 00705105  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0070510b  83faff               cmp edx, -1
// 0070510e  7508                 jne 0x705118
// 00705110  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00705116  eb02                 jmp 0x70511a
// 00705118  8bc2                 mov eax, edx
// 0070511a  51                   push ecx
// 0070511b  50                   push eax
// 0070511c  8b03                 mov eax, dword ptr [ebx]
// 0070511e  8b5048               mov edx, dword ptr [eax + 0x48]
// 00705121  8bcb                 mov ecx, ebx
// 00705123  ffd2                 call edx
// 00705125  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00705129  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0070512d  50                   push eax
// 0070512e  83ec10               sub esp, 0x10
// 00705131  8bc4                 mov eax, esp
// 00705133  8908                 mov dword ptr [eax], ecx
// 00705135  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00705139  895004               mov dword ptr [eax + 4], edx
// 0070513c  8b542438             mov edx, dword ptr [esp + 0x38]
// 00705140  894808               mov dword ptr [eax + 8], ecx
// 00705143  55                   push ebp
// 00705144  89500c               mov dword ptr [eax + 0xc], edx
// 00705147  e874eaffff           call 0x703bc0
// 0070514c  83c420               add esp, 0x20
// 0070514f  8bc7                 mov eax, edi
// 00705151  5f                   pop edi
// 00705152  5e                   pop esi
// 00705153  5d                   pop ebp
// 00705154  5b                   pop ebx
// 00705155  83c410               add esp, 0x10
// 00705158  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
