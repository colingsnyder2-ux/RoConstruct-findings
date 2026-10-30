// roc 2009-12 008d7510  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 429 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d7510
//
// 008d7510  83ec10               sub esp, 0x10
// 008d7513  53                   push ebx
// 008d7514  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008d7518  55                   push ebp
// 008d7519  56                   push esi
// 008d751a  57                   push edi
// 008d751b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008d751f  8bf1                 mov esi, ecx
// 008d7521  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d7525  8b16                 mov edx, dword ptr [esi]
// 008d7527  8b5208               mov edx, dword ptr [edx + 8]
// 008d752a  57                   push edi
// 008d752b  83ec10               sub esp, 0x10
// 008d752e  8bc4                 mov eax, esp
// 008d7530  8908                 mov dword ptr [eax], ecx
// 008d7532  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d7536  894804               mov dword ptr [eax + 4], ecx
// 008d7539  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008d753d  894808               mov dword ptr [eax + 8], ecx
// 008d7540  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008d7544  89480c               mov dword ptr [eax + 0xc], ecx
// 008d7547  53                   push ebx
// 008d7548  8bce                 mov ecx, esi
// 008d754a  ffd2                 call edx
// 008d754c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d754f  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d7555  8b2b                 mov ebp, dword ptr [ebx]
// 008d7557  8b11                 mov edx, dword ptr [ecx]
// 008d7559  8b520c               mov edx, dword ptr [edx + 0xc]
// 008d755c  57                   push edi
// 008d755d  83ec10               sub esp, 0x10
// 008d7560  8bc4                 mov eax, esp
// 008d7562  8928                 mov dword ptr [eax], ebp
// 008d7564  8b6b04               mov ebp, dword ptr [ebx + 4]
// 008d7567  896804               mov dword ptr [eax + 4], ebp
// 008d756a  8b6b08               mov ebp, dword ptr [ebx + 8]
// 008d756d  896808               mov dword ptr [eax + 8], ebp
// 008d7570  8b6b0c               mov ebp, dword ptr [ebx + 0xc]
// 008d7573  89680c               mov dword ptr [eax + 0xc], ebp
// 008d7576  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d757a  50                   push eax
// 008d757b  ffd2                 call edx
// 008d757d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d7581  8b16                 mov edx, dword ptr [esi]
// 008d7583  8b520c               mov edx, dword ptr [edx + 0xc]
// 008d7586  57                   push edi
// 008d7587  83ec10               sub esp, 0x10
// 008d758a  8bc4                 mov eax, esp
// 008d758c  8908                 mov dword ptr [eax], ecx
// 008d758e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d7592  894804               mov dword ptr [eax + 4], ecx
// 008d7595  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008d7599  894808               mov dword ptr [eax + 8], ecx
// 008d759c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008d75a0  89480c               mov dword ptr [eax + 0xc], ecx
// 008d75a3  8d442424             lea eax, [esp + 0x24]
// 008d75a7  50                   push eax
// 008d75a8  8bce                 mov ecx, esi
// 008d75aa  ffd2                 call edx
// 008d75ac  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d75af  83783800             cmp dword ptr [eax + 0x38], 0
// 008d75b3  7564                 jne 0x8d7619
// 008d75b5  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d75bb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008d75bf  8b11                 mov edx, dword ptr [ecx]
// 008d75c1  57                   push edi
// 008d75c2  83ec10               sub esp, 0x10
// 008d75c5  8bc4                 mov eax, esp
// 008d75c7  8928                 mov dword ptr [eax], ebp
// 008d75c9  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008d75cd  896804               mov dword ptr [eax + 4], ebp
// 008d75d0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008d75d4  896808               mov dword ptr [eax + 8], ebp
// 008d75d7  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008d75db  89680c               mov dword ptr [eax + 0xc], ebp
// 008d75de  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008d75e2  8b4210               mov eax, dword ptr [edx + 0x10]
// 008d75e5  55                   push ebp
// 008d75e6  ffd0                 call eax
// 008d75e8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008d75eb  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d75f1  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d75f4  83f9ff               cmp ecx, -1
// 008d75f7  7503                 jne 0x8d75fc
// 008d75f9  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d75fc  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d75ff  83faff               cmp edx, -1
// 008d7602  7505                 jne 0x8d7609
// 008d7604  8b4048               mov eax, dword ptr [eax + 0x48]
// 008d7607  eb02                 jmp 0x8d760b
// 008d7609  8bc2                 mov eax, edx
// 008d760b  51                   push ecx
// 008d760c  50                   push eax
// 008d760d  8d542418             lea edx, [esp + 0x18]
// 008d7611  52                   push edx
// 008d7612  8bcd                 mov ecx, ebp
// 008d7614  e8dfcff1ff           call 0x7f45f8
// 008d7619  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d761c  83783801             cmp dword ptr [eax + 0x38], 1
// 008d7620  0f858b000000         jne 0x8d76b1
// 008d7626  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d762c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008d7630  8b11                 mov edx, dword ptr [ecx]
// 008d7632  57                   push edi
// 008d7633  83ec10               sub esp, 0x10
// 008d7636  8bc4                 mov eax, esp
// 008d7638  8928                 mov dword ptr [eax], ebp
// 008d763a  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008d763e  896804               mov dword ptr [eax + 4], ebp
// 008d7641  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008d7645  896808               mov dword ptr [eax + 8], ebp
// 008d7648  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008d764c  89680c               mov dword ptr [eax + 0xc], ebp
// 008d764f  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008d7653  8b4210               mov eax, dword ptr [edx + 0x10]
// 008d7656  55                   push ebp
// 008d7657  ffd0                 call eax
// 008d7659  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008d765c  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d7662  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d7665  83f9ff               cmp ecx, -1
// 008d7668  7503                 jne 0x8d766d
// 008d766a  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d766d  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d7670  83faff               cmp edx, -1
// 008d7673  7505                 jne 0x8d767a
// 008d7675  8b4048               mov eax, dword ptr [eax + 0x48]
// 008d7678  eb02                 jmp 0x8d767c
// 008d767a  8bc2                 mov eax, edx
// 008d767c  8b17                 mov edx, dword ptr [edi]
// 008d767e  51                   push ecx
// 008d767f  50                   push eax
// 008d7680  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d7683  8bcf                 mov ecx, edi
// 008d7685  ffd0                 call eax
// 008d7687  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d768b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d768f  50                   push eax
// 008d7690  83ec10               sub esp, 0x10
// 008d7693  8bc4                 mov eax, esp
// 008d7695  8908                 mov dword ptr [eax], ecx
// 008d7697  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008d769b  895004               mov dword ptr [eax + 4], edx
// 008d769e  8b542438             mov edx, dword ptr [esp + 0x38]
// 008d76a2  894808               mov dword ptr [eax + 8], ecx
// 008d76a5  55                   push ebp
// 008d76a6  89500c               mov dword ptr [eax + 0xc], edx
// 008d76a9  e812d1ffff           call 0x8d47c0
// 008d76ae  83c420               add esp, 0x20
// 008d76b1  5f                   pop edi
// 008d76b2  5e                   pop esi
// 008d76b3  5d                   pop ebp
// 008d76b4  8bc3                 mov eax, ebx
// 008d76b6  5b                   pop ebx
// 008d76b7  83c410               add esp, 0x10
// 008d76ba  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetFlat@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
