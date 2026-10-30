// roc 2009-12 008d8a40  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d8a40
//
// 008d8a40  83ec10               sub esp, 0x10
// 008d8a43  53                   push ebx
// 008d8a44  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008d8a48  55                   push ebp
// 008d8a49  56                   push esi
// 008d8a4a  8b742424             mov esi, dword ptr [esp + 0x24]
// 008d8a4e  8b4644               mov eax, dword ptr [esi + 0x44]
// 008d8a51  8b564c               mov edx, dword ptr [esi + 0x4c]
// 008d8a54  57                   push edi
// 008d8a55  8b7e44               mov edi, dword ptr [esi + 0x44]
// 008d8a58  89442410             mov dword ptr [esp + 0x10], eax
// 008d8a5c  8b4650               mov eax, dword ptr [esi + 0x50]
// 008d8a5f  56                   push esi
// 008d8a60  89442420             mov dword ptr [esp + 0x20], eax
// 008d8a64  83ec10               sub esp, 0x10
// 008d8a67  8bc4                 mov eax, esp
// 008d8a69  8938                 mov dword ptr [eax], edi
// 008d8a6b  8b7e48               mov edi, dword ptr [esi + 0x48]
// 008d8a6e  8be9                 mov ebp, ecx
// 008d8a70  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 008d8a73  897804               mov dword ptr [eax + 4], edi
// 008d8a76  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 008d8a79  894c2428             mov dword ptr [esp + 0x28], ecx
// 008d8a7d  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 008d8a80  8954242c             mov dword ptr [esp + 0x2c], edx
// 008d8a84  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 008d8a8a  8b11                 mov edx, dword ptr [ecx]
// 008d8a8c  897808               mov dword ptr [eax + 8], edi
// 008d8a8f  8b7e50               mov edi, dword ptr [esi + 0x50]
// 008d8a92  89780c               mov dword ptr [eax + 0xc], edi
// 008d8a95  8b4218               mov eax, dword ptr [edx + 0x18]
// 008d8a98  53                   push ebx
// 008d8a99  ffd0                 call eax
// 008d8a9b  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 008d8a9e  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d8aa4  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d8aa7  83f9ff               cmp ecx, -1
// 008d8aaa  7503                 jne 0x8d8aaf
// 008d8aac  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d8aaf  8b5070               mov edx, dword ptr [eax + 0x70]
// 008d8ab2  83faff               cmp edx, -1
// 008d8ab5  7505                 jne 0x8d8abc
// 008d8ab7  8b406c               mov eax, dword ptr [eax + 0x6c]
// 008d8aba  eb02                 jmp 0x8d8abe
// 008d8abc  8bc2                 mov eax, edx
// 008d8abe  51                   push ecx
// 008d8abf  50                   push eax
// 008d8ac0  8d542418             lea edx, [esp + 0x18]
// 008d8ac4  52                   push edx
// 008d8ac5  8bcb                 mov ecx, ebx
// 008d8ac7  e82cbbf1ff           call 0x7f45f8
// 008d8acc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008d8ad0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d8ad4  83c704               add edi, 4
// 008d8ad7  8d42fd               lea eax, [edx - 3]
// 008d8ada  3bf8                 cmp edi, eax
// 008d8adc  7d38                 jge 0x8d8b16
// 008d8ade  8bff                 mov edi, edi
// 008d8ae0  e8eb6ef5ff           call 0x82f9d0
// 008d8ae5  6a26                 push 0x26
// 008d8ae7  8bc8                 mov ecx, eax
// 008d8ae9  e81266f5ff           call 0x82f100
// 008d8aee  83f8ff               cmp eax, -1
// 008d8af1  7415                 je 0x8d8b08
// 008d8af3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d8af7  50                   push eax
// 008d8af8  6a01                 push 1
// 008d8afa  6a03                 push 3
// 008d8afc  83c1f9               add ecx, -7
// 008d8aff  57                   push edi
// 008d8b00  51                   push ecx
// 008d8b01  8bcb                 mov ecx, ebx
// 008d8b03  e88ed90400           call 0x926496
// 008d8b08  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d8b0c  83c702               add edi, 2
// 008d8b0f  8d42fd               lea eax, [edx - 3]
// 008d8b12  3bf8                 cmp edi, eax
// 008d8b14  7cca                 jl 0x8d8ae0
// 008d8b16  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 008d8b19  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008d8b1d  836c241807           sub dword ptr [esp + 0x18], 7
// 008d8b22  8b39                 mov edi, dword ptr [ecx]
// 008d8b24  6a01                 push 1
// 008d8b26  83ec10               sub esp, 0x10
// 008d8b29  8bc4                 mov eax, esp
// 008d8b2b  8928                 mov dword ptr [eax], ebp
// 008d8b2d  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008d8b31  896804               mov dword ptr [eax + 4], ebp
// 008d8b34  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008d8b38  896808               mov dword ptr [eax + 8], ebp
// 008d8b3b  56                   push esi
// 008d8b3c  89500c               mov dword ptr [eax + 0xc], edx
// 008d8b3f  8b5768               mov edx, dword ptr [edi + 0x68]
// 008d8b42  53                   push ebx
// 008d8b43  ffd2                 call edx
// 008d8b45  5f                   pop edi
// 008d8b46  5e                   pop esi
// 008d8b47  5d                   pop ebp
// 008d8b48  5b                   pop ebx
// 008d8b49  83c410               add esp, 0x10
// 008d8b4c  c20800               ret 8
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetVisio@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp