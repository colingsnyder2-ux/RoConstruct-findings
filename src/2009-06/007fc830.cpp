// from server: 100% by tester
// roc 2008-06 00784170  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00784170
//
// 00784170  83ec20               sub esp, 0x20
// 00784173  53                   push ebx
// 00784174  55                   push ebp
// 00784175  56                   push esi
// 00784176  8b742434             mov esi, dword ptr [esp + 0x34]
// 0078417a  8b4644               mov eax, dword ptr [esi + 0x44]
// 0078417d  8b564c               mov edx, dword ptr [esi + 0x4c]
// 00784180  57                   push edi
// 00784181  8bf9                 mov edi, ecx
// 00784183  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00784186  89442410             mov dword ptr [esp + 0x10], eax
// 0078418a  8b4650               mov eax, dword ptr [esi + 0x50]
// 0078418d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00784191  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00784194  8944241c             mov dword ptr [esp + 0x1c], eax
// 00784198  89542418             mov dword ptr [esp + 0x18], edx
// 0078419c  8b11                 mov edx, dword ptr [ecx]
// 0078419e  8b4248               mov eax, dword ptr [edx + 0x48]
// 007841a1  33db                 xor ebx, ebx
// 007841a3  33ed                 xor ebp, ebp
// 007841a5  ffd0                 call eax
// 007841a7  50                   push eax
// 007841a8  83ec10               sub esp, 0x10
// 007841ab  8bc4                 mov eax, esp
// 007841ad  8918                 mov dword ptr [eax], ebx
// 007841af  896804               mov dword ptr [eax + 4], ebp
// 007841b2  b901000000           mov ecx, 1
// 007841b7  894808               mov dword ptr [eax + 8], ecx
// 007841ba  33c9                 xor ecx, ecx
// 007841bc  89480c               mov dword ptr [eax + 0xc], ecx
// 007841bf  8d4c2424             lea ecx, [esp + 0x24]
// 007841c3  51                   push ecx
// 007841c4  e887caffff           call 0x780c50
// 007841c9  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007841cd  8b571c               mov edx, dword ptr [edi + 0x1c]
// 007841d0  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 007841d6  8b11                 mov edx, dword ptr [ecx]
// 007841d8  83c418               add esp, 0x18
// 007841db  56                   push esi
// 007841dc  83ec10               sub esp, 0x10
// 007841df  8bc4                 mov eax, esp
// 007841e1  8918                 mov dword ptr [eax], ebx
// 007841e3  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007841e7  895804               mov dword ptr [eax + 4], ebx
// 007841ea  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007841ee  895808               mov dword ptr [eax + 8], ebx
// 007841f1  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 007841f5  89580c               mov dword ptr [eax + 0xc], ebx
// 007841f8  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 007841fc  8b4218               mov eax, dword ptr [edx + 0x18]
// 007841ff  53                   push ebx
// 00784200  ffd0                 call eax
// 00784202  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00784205  397104               cmp dword ptr [ecx + 4], esi
// 00784208  7532                 jne 0x78423c
// 0078420a  8b11                 mov edx, dword ptr [ecx]
// 0078420c  8b4248               mov eax, dword ptr [edx + 0x48]
// 0078420f  896c2428             mov dword ptr [esp + 0x28], ebp
// 00784213  ffd0                 call eax
// 00784215  50                   push eax
// 00784216  83ec10               sub esp, 0x10
// 00784219  8bc4                 mov eax, esp
// 0078421b  33c9                 xor ecx, ecx
// 0078421d  8928                 mov dword ptr [eax], ebp
// 0078421f  894804               mov dword ptr [eax + 4], ecx
// 00784222  8bcd                 mov ecx, ebp
// 00784224  894808               mov dword ptr [eax + 8], ecx
// 00784227  8d542424             lea edx, [esp + 0x24]
// 0078422b  b901000000           mov ecx, 1
// 00784230  52                   push edx
// 00784231  89480c               mov dword ptr [eax + 0xc], ecx
// 00784234  e817caffff           call 0x780c50
// 00784239  83c418               add esp, 0x18
// 0078423c  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0078423f  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00784245  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00784248  83f9ff               cmp ecx, -1
// 0078424b  7503                 jne 0x784250
// 0078424d  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00784250  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00784253  83faff               cmp edx, -1
// 00784256  7505                 jne 0x78425d
// 00784258  8b4048               mov eax, dword ptr [eax + 0x48]
// 0078425b  eb02                 jmp 0x78425f
// 0078425d  8bc2                 mov eax, edx
// 0078425f  51                   push ecx
// 00784260  50                   push eax
// 00784261  8d4c2418             lea ecx, [esp + 0x18]
// 00784265  51                   push ecx
// 00784266  8bcb                 mov ecx, ebx
// 00784268  e8ebd0f1ff           call 0x6a1358
// 0078426d  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00784270  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 00784273  8b17                 mov edx, dword ptr [edi]
// 00784275  8b5268               mov edx, dword ptr [edx + 0x68]
// 00784278  6a01                 push 1
// 0078427a  83ec10               sub esp, 0x10
// 0078427d  8bc4                 mov eax, esp
// 0078427f  8908                 mov dword ptr [eax], ecx
// 00784281  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00784284  894804               mov dword ptr [eax + 4], ecx
// 00784287  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0078428a  894808               mov dword ptr [eax + 8], ecx
// 0078428d  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 00784290  56                   push esi
// 00784291  89480c               mov dword ptr [eax + 0xc], ecx
// 00784294  53                   push ebx
// 00784295  8bcf                 mov ecx, edi
// 00784297  ffd2                 call edx
// 00784299  5f                   pop edi
// 0078429a  5e                   pop esi
// 0078429b  5d                   pop ebp
// 0078429c  5b                   pop ebx
// 0078429d  83c420               add esp, 0x20
// 007842a0  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawSingleButton@CAppearanceSetFlat@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp
