// roc 2009-12 008d73d0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d73d0
//
// 008d73d0  83ec20               sub esp, 0x20
// 008d73d3  53                   push ebx
// 008d73d4  55                   push ebp
// 008d73d5  56                   push esi
// 008d73d6  8b742434             mov esi, dword ptr [esp + 0x34]
// 008d73da  8b4644               mov eax, dword ptr [esi + 0x44]
// 008d73dd  8b564c               mov edx, dword ptr [esi + 0x4c]
// 008d73e0  57                   push edi
// 008d73e1  8bf9                 mov edi, ecx
// 008d73e3  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 008d73e6  89442410             mov dword ptr [esp + 0x10], eax
// 008d73ea  8b4650               mov eax, dword ptr [esi + 0x50]
// 008d73ed  894c2414             mov dword ptr [esp + 0x14], ecx
// 008d73f1  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008d73f4  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d73f8  89542418             mov dword ptr [esp + 0x18], edx
// 008d73fc  8b11                 mov edx, dword ptr [ecx]
// 008d73fe  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d7401  33db                 xor ebx, ebx
// 008d7403  33ed                 xor ebp, ebp
// 008d7405  ffd0                 call eax
// 008d7407  50                   push eax
// 008d7408  83ec10               sub esp, 0x10
// 008d740b  8bc4                 mov eax, esp
// 008d740d  8918                 mov dword ptr [eax], ebx
// 008d740f  896804               mov dword ptr [eax + 4], ebp
// 008d7412  b901000000           mov ecx, 1
// 008d7417  894808               mov dword ptr [eax + 8], ecx
// 008d741a  33c9                 xor ecx, ecx
// 008d741c  89480c               mov dword ptr [eax + 0xc], ecx
// 008d741f  8d4c2424             lea ecx, [esp + 0x24]
// 008d7423  51                   push ecx
// 008d7424  e887caffff           call 0x8d3eb0
// 008d7429  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008d742d  8b571c               mov edx, dword ptr [edi + 0x1c]
// 008d7430  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 008d7436  8b11                 mov edx, dword ptr [ecx]
// 008d7438  83c418               add esp, 0x18
// 008d743b  56                   push esi
// 008d743c  83ec10               sub esp, 0x10
// 008d743f  8bc4                 mov eax, esp
// 008d7441  8918                 mov dword ptr [eax], ebx
// 008d7443  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008d7447  895804               mov dword ptr [eax + 4], ebx
// 008d744a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008d744e  895808               mov dword ptr [eax + 8], ebx
// 008d7451  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 008d7455  89580c               mov dword ptr [eax + 0xc], ebx
// 008d7458  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 008d745c  8b4218               mov eax, dword ptr [edx + 0x18]
// 008d745f  53                   push ebx
// 008d7460  ffd0                 call eax
// 008d7462  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008d7465  397104               cmp dword ptr [ecx + 4], esi
// 008d7468  7532                 jne 0x8d749c
// 008d746a  8b11                 mov edx, dword ptr [ecx]
// 008d746c  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d746f  896c2428             mov dword ptr [esp + 0x28], ebp
// 008d7473  ffd0                 call eax
// 008d7475  50                   push eax
// 008d7476  83ec10               sub esp, 0x10
// 008d7479  8bc4                 mov eax, esp
// 008d747b  33c9                 xor ecx, ecx
// 008d747d  8928                 mov dword ptr [eax], ebp
// 008d747f  894804               mov dword ptr [eax + 4], ecx
// 008d7482  8bcd                 mov ecx, ebp
// 008d7484  894808               mov dword ptr [eax + 8], ecx
// 008d7487  8d542424             lea edx, [esp + 0x24]
// 008d748b  b901000000           mov ecx, 1
// 008d7490  52                   push edx
// 008d7491  89480c               mov dword ptr [eax + 0xc], ecx
// 008d7494  e817caffff           call 0x8d3eb0
// 008d7499  83c418               add esp, 0x18
// 008d749c  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008d749f  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d74a5  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d74a8  83f9ff               cmp ecx, -1
// 008d74ab  7503                 jne 0x8d74b0
// 008d74ad  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d74b0  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d74b3  83faff               cmp edx, -1
// 008d74b6  7505                 jne 0x8d74bd
// 008d74b8  8b4048               mov eax, dword ptr [eax + 0x48]
// 008d74bb  eb02                 jmp 0x8d74bf
// 008d74bd  8bc2                 mov eax, edx
// 008d74bf  51                   push ecx
// 008d74c0  50                   push eax
// 008d74c1  8d4c2418             lea ecx, [esp + 0x18]
// 008d74c5  51                   push ecx
// 008d74c6  8bcb                 mov ecx, ebx
// 008d74c8  e82bd1f1ff           call 0x7f45f8
// 008d74cd  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 008d74d0  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 008d74d3  8b17                 mov edx, dword ptr [edi]
// 008d74d5  8b5268               mov edx, dword ptr [edx + 0x68]
// 008d74d8  6a01                 push 1
// 008d74da  83ec10               sub esp, 0x10
// 008d74dd  8bc4                 mov eax, esp
// 008d74df  8908                 mov dword ptr [eax], ecx
// 008d74e1  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 008d74e4  894804               mov dword ptr [eax + 4], ecx
// 008d74e7  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 008d74ea  894808               mov dword ptr [eax + 8], ecx
// 008d74ed  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 008d74f0  56                   push esi
// 008d74f1  89480c               mov dword ptr [eax + 0xc], ecx
// 008d74f4  53                   push ebx
// 008d74f5  8bcf                 mov ecx, edi
// 008d74f7  ffd2                 call edx
// 008d74f9  5f                   pop edi
// 008d74fa  5e                   pop esi
// 008d74fb  5d                   pop ebp
// 008d74fc  5b                   pop ebx
// 008d74fd  83c420               add esp, 0x20
// 008d7500  c20800               ret 8
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetFlat@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp