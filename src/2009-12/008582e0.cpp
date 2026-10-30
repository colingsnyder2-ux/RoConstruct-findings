// roc 2009-12 008582e0  unit: CXTPTabClientWnd  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008582e0
//
// 008582e0  83ec10               sub esp, 0x10
// 008582e3  57                   push edi
// 008582e4  8bf9                 mov edi, ecx
// 008582e6  83bfb400000000       cmp dword ptr [edi + 0xb4], 0
// 008582ed  750c                 jne 0x8582fb
// 008582ef  e83cbbf9ff           call 0x7f3e30
// 008582f4  5f                   pop edi
// 008582f5  83c410               add esp, 0x10
// 008582f8  c20c00               ret 0xc
// 008582fb  b801000000           mov eax, 1
// 00858300  53                   push ebx
// 00858301  89475c               mov dword ptr [edi + 0x5c], eax
// 00858304  894758               mov dword ptr [edi + 0x58], eax
// 00858307  33db                 xor ebx, ebx
// 00858309  e842e3ffff           call 0x856650
// 0085830e  85c0                 test eax, eax
// 00858310  0f8eca000000         jle 0x8583e0
// 00858316  55                   push ebp
// 00858317  8b2d5cca9800         mov ebp, dword ptr [0x98ca5c]
// 0085831d  56                   push esi
// 0085831e  8bff                 mov edi, edi
// 00858320  53                   push ebx
// 00858321  8bcf                 mov ecx, edi
// 00858323  e818f2ffff           call 0x857540
// 00858328  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0085832c  8bf0                 mov esi, eax
// 0085832e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00858332  50                   push eax
// 00858333  51                   push ecx
// 00858334  8d96a0000000         lea edx, [esi + 0xa0]
// 0085833a  52                   push edx
// 0085833b  ffd5                 call ebp
// 0085833d  85c0                 test eax, eax
// 0085833f  740c                 je 0x85834d
// 00858341  8bcf                 mov ecx, edi
// 00858343  e808e3ffff           call 0x856650
// 00858348  48                   dec eax
// 00858349  3bd8                 cmp ebx, eax
// 0085834b  7c47                 jl 0x858394
// 0085834d  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00858350  8b4634               mov eax, dword ptr [esi + 0x34]
// 00858353  8b563c               mov edx, dword ptr [esi + 0x3c]
// 00858356  89442410             mov dword ptr [esp + 0x10], eax
// 0085835a  8b4640               mov eax, dword ptr [esi + 0x40]
// 0085835d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00858361  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00858365  89542418             mov dword ptr [esp + 0x18], edx
// 00858369  8b542428             mov edx, dword ptr [esp + 0x28]
// 0085836d  51                   push ecx
// 0085836e  89442420             mov dword ptr [esp + 0x20], eax
// 00858372  52                   push edx
// 00858373  8d442418             lea eax, [esp + 0x18]
// 00858377  50                   push eax
// 00858378  ffd5                 call ebp
// 0085837a  85c0                 test eax, eax
// 0085837c  7532                 jne 0x8583b0
// 0085837e  8bcf                 mov ecx, edi
// 00858380  43                   inc ebx
// 00858381  e8cae2ffff           call 0x856650
// 00858386  3bd8                 cmp ebx, eax
// 00858388  7c96                 jl 0x858320
// 0085838a  5e                   pop esi
// 0085838b  5d                   pop ebp
// 0085838c  5b                   pop ebx
// 0085838d  5f                   pop edi
// 0085838e  83c410               add esp, 0x10
// 00858391  c20c00               ret 0xc
// 00858394  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00858398  8b542428             mov edx, dword ptr [esp + 0x28]
// 0085839c  51                   push ecx
// 0085839d  52                   push edx
// 0085839e  53                   push ebx
// 0085839f  8bcf                 mov ecx, edi
// 008583a1  e8eafaffff           call 0x857e90
// 008583a6  5e                   pop esi
// 008583a7  5d                   pop ebp
// 008583a8  5b                   pop ebx
// 008583a9  5f                   pop edi
// 008583aa  83c410               add esp, 0x10
// 008583ad  c20c00               ret 0xc
// 008583b0  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 008583b4  7511                 jne 0x8583c7
// 008583b6  8b4604               mov eax, dword ptr [esi + 4]
// 008583b9  85c0                 test eax, eax
// 008583bb  740a                 je 0x8583c7
// 008583bd  8b16                 mov edx, dword ptr [esi]
// 008583bf  50                   push eax
// 008583c0  8b4260               mov eax, dword ptr [edx + 0x60]
// 008583c3  8bce                 mov ecx, esi
// 008583c5  ffd0                 call eax
// 008583c7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008583cb  8b542428             mov edx, dword ptr [esp + 0x28]
// 008583cf  8b4720               mov eax, dword ptr [edi + 0x20]
// 008583d2  6a00                 push 0
// 008583d4  51                   push ecx
// 008583d5  52                   push edx
// 008583d6  50                   push eax
// 008583d7  8bce                 mov ecx, esi
// 008583d9  e842820700           call 0x8d0620
// 008583de  5e                   pop esi
// 008583df  5d                   pop ebp
// 008583e0  5b                   pop ebx
// 008583e1  5f                   pop edi
// 008583e2  83c410               add esp, 0x10
// 008583e5  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTPTabClientWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp