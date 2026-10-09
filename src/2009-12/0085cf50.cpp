// roc 2009-12 0085cf50  unit: CXTPDockingPane  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085cf50
//
// 0085cf50  56                   push esi
// 0085cf51  57                   push edi
// 0085cf52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085cf56  8bf1                 mov esi, ecx
// 0085cf58  8b06                 mov eax, dword ptr [esi]
// 0085cf5a  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0085cf5d  57                   push edi
// 0085cf5e  ffd2                 call edx
// 0085cf60  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085cf64  85c0                 test eax, eax
// 0085cf66  7409                 je 0x85cf71
// 0085cf68  833800               cmp dword ptr [eax], 0
// 0085cf6b  0f8486000000         je 0x85cff7
// 0085cf71  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085cf75  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085cf79  8b542418             mov edx, dword ptr [esp + 0x18]
// 0085cf7d  89461c               mov dword ptr [esi + 0x1c], eax
// 0085cf80  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085cf84  894e20               mov dword ptr [esi + 0x20], ecx
// 0085cf87  895624               mov dword ptr [esi + 0x24], edx
// 0085cf8a  894628               mov dword ptr [esi + 0x28], eax
// 0085cf8d  85ff                 test edi, edi
// 0085cf8f  7466                 je 0x85cff7
// 0085cf91  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0085cf94  85c9                 test ecx, ecx
// 0085cf96  745f                 je 0x85cff7
// 0085cf98  8b01                 mov eax, dword ptr [ecx]
// 0085cf9a  8b7f20               mov edi, dword ptr [edi + 0x20]
// 0085cf9d  6a02                 push 2
// 0085cf9f  8d542414             lea edx, [esp + 0x14]
// 0085cfa3  52                   push edx
// 0085cfa4  8b5020               mov edx, dword ptr [eax + 0x20]
// 0085cfa7  ffd2                 call edx
// 0085cfa9  50                   push eax
// 0085cfaa  57                   push edi
// 0085cfab  ff15c0ca9800         call dword ptr [0x98cac0]
// 0085cfb1  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0085cfb7  85c0                 test eax, eax
// 0085cfb9  7421                 je 0x85cfdc
// 0085cfbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085cfbf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085cfc3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0085cfc7  6a01                 push 1
// 0085cfc9  2bd1                 sub edx, ecx
// 0085cfcb  52                   push edx
// 0085cfcc  8b542418             mov edx, dword ptr [esp + 0x18]
// 0085cfd0  2bfa                 sub edi, edx
// 0085cfd2  57                   push edi
// 0085cfd3  51                   push ecx
// 0085cfd4  52                   push edx
// 0085cfd5  50                   push eax
// 0085cfd6  ff1518ca9800         call dword ptr [0x98ca18]
// 0085cfdc  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0085cfe2  85c0                 test eax, eax
// 0085cfe4  7411                 je 0x85cff7
// 0085cfe6  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0085cfec  83e101               and ecx, 1
// 0085cfef  51                   push ecx
// 0085cff0  50                   push eax
// 0085cff1  ff15b4cb9800         call dword ptr [0x98cbb4]
// 0085cff7  5f                   pop edi
// 0085cff8  5e                   pop esi
// 0085cff9  c21800               ret 0x18
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?OnSizeParent@CXTPDockingPane@@MAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
