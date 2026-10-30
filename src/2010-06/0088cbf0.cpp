// from server: 100% by tester
// roc 2008-06 007857e0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007857e0
//
// 007857e0  83ec10               sub esp, 0x10
// 007857e3  53                   push ebx
// 007857e4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007857e8  55                   push ebp
// 007857e9  56                   push esi
// 007857ea  8b742424             mov esi, dword ptr [esp + 0x24]
// 007857ee  8b4644               mov eax, dword ptr [esi + 0x44]
// 007857f1  8b564c               mov edx, dword ptr [esi + 0x4c]
// 007857f4  57                   push edi
// 007857f5  8b7e44               mov edi, dword ptr [esi + 0x44]
// 007857f8  89442410             mov dword ptr [esp + 0x10], eax
// 007857fc  8b4650               mov eax, dword ptr [esi + 0x50]
// 007857ff  56                   push esi
// 00785800  89442420             mov dword ptr [esp + 0x20], eax
// 00785804  83ec10               sub esp, 0x10
// 00785807  8bc4                 mov eax, esp
// 00785809  8938                 mov dword ptr [eax], edi
// 0078580b  8b7e48               mov edi, dword ptr [esi + 0x48]
// 0078580e  8be9                 mov ebp, ecx
// 00785810  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00785813  897804               mov dword ptr [eax + 4], edi
// 00785816  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 00785819  894c2428             mov dword ptr [esp + 0x28], ecx
// 0078581d  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 00785820  8954242c             mov dword ptr [esp + 0x2c], edx
// 00785824  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 0078582a  8b11                 mov edx, dword ptr [ecx]
// 0078582c  897808               mov dword ptr [eax + 8], edi
// 0078582f  8b7e50               mov edi, dword ptr [esi + 0x50]
// 00785832  89780c               mov dword ptr [eax + 0xc], edi
// 00785835  8b4218               mov eax, dword ptr [edx + 0x18]
// 00785838  53                   push ebx
// 00785839  ffd0                 call eax
// 0078583b  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 0078583e  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00785844  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00785847  83f9ff               cmp ecx, -1
// 0078584a  7503                 jne 0x78584f
// 0078584c  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0078584f  8b5070               mov edx, dword ptr [eax + 0x70]
// 00785852  83faff               cmp edx, -1
// 00785855  7505                 jne 0x78585c
// 00785857  8b406c               mov eax, dword ptr [eax + 0x6c]
// 0078585a  eb02                 jmp 0x78585e
// 0078585c  8bc2                 mov eax, edx
// 0078585e  51                   push ecx
// 0078585f  50                   push eax
// 00785860  8d542418             lea edx, [esp + 0x18]
// 00785864  52                   push edx
// 00785865  8bcb                 mov ecx, ebx
// 00785867  e8ecbaf1ff           call 0x6a1358
// 0078586c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00785870  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00785874  83c704               add edi, 4
// 00785877  8d42fd               lea eax, [edx - 3]
// 0078587a  3bf8                 cmp edi, eax
// 0078587c  7d38                 jge 0x7858b6
// 0078587e  8bff                 mov edi, edi
// 00785880  e8bba4f5ff           call 0x6dfd40
// 00785885  6a26                 push 0x26
// 00785887  8bc8                 mov ecx, eax
// 00785889  e8929cf5ff           call 0x6df520
// 0078588e  83f8ff               cmp eax, -1
// 00785891  7415                 je 0x7858a8
// 00785893  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00785897  50                   push eax
// 00785898  6a01                 push 1
// 0078589a  6a03                 push 3
// 0078589c  83c1f9               add ecx, -7
// 0078589f  57                   push edi
// 007858a0  51                   push ecx
// 007858a1  8bcb                 mov ecx, ebx
// 007858a3  e898670300           call 0x7bc040
// 007858a8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007858ac  83c702               add edi, 2
// 007858af  8d42fd               lea eax, [edx - 3]
// 007858b2  3bf8                 cmp edi, eax
// 007858b4  7cca                 jl 0x785880
// 007858b6  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 007858b9  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007858bd  836c241807           sub dword ptr [esp + 0x18], 7
// 007858c2  8b39                 mov edi, dword ptr [ecx]
// 007858c4  6a01                 push 1
// 007858c6  83ec10               sub esp, 0x10
// 007858c9  8bc4                 mov eax, esp
// 007858cb  8928                 mov dword ptr [eax], ebp
// 007858cd  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007858d1  896804               mov dword ptr [eax + 4], ebp
// 007858d4  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007858d8  896808               mov dword ptr [eax + 8], ebp
// 007858db  56                   push esi
// 007858dc  89500c               mov dword ptr [eax + 0xc], edx
// 007858df  8b5768               mov edx, dword ptr [edi + 0x68]
// 007858e2  53                   push ebx
// 007858e3  ffd2                 call edx
// 007858e5  5f                   pop edi
// 007858e6  5e                   pop esi
// 007858e7  5d                   pop ebp
// 007858e8  5b                   pop ebx
// 007858e9  83c410               add esp, 0x10
// 007858ec  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawSingleButton@CAppearanceSetVisio@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp
