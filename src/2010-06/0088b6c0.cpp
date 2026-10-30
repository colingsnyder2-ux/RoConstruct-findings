// roc 2010-06 0088b6c0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 429 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088b6c0
//
// 0088b6c0  83ec10               sub esp, 0x10
// 0088b6c3  53                   push ebx
// 0088b6c4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0088b6c8  55                   push ebp
// 0088b6c9  56                   push esi
// 0088b6ca  57                   push edi
// 0088b6cb  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0088b6cf  8bf1                 mov esi, ecx
// 0088b6d1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088b6d5  8b16                 mov edx, dword ptr [esi]
// 0088b6d7  8b5208               mov edx, dword ptr [edx + 8]
// 0088b6da  57                   push edi
// 0088b6db  83ec10               sub esp, 0x10
// 0088b6de  8bc4                 mov eax, esp
// 0088b6e0  8908                 mov dword ptr [eax], ecx
// 0088b6e2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0088b6e6  894804               mov dword ptr [eax + 4], ecx
// 0088b6e9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0088b6ed  894808               mov dword ptr [eax + 8], ecx
// 0088b6f0  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0088b6f4  89480c               mov dword ptr [eax + 0xc], ecx
// 0088b6f7  53                   push ebx
// 0088b6f8  8bce                 mov ecx, esi
// 0088b6fa  ffd2                 call edx
// 0088b6fc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0088b6ff  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 0088b705  8b2b                 mov ebp, dword ptr [ebx]
// 0088b707  8b11                 mov edx, dword ptr [ecx]
// 0088b709  8b520c               mov edx, dword ptr [edx + 0xc]
// 0088b70c  57                   push edi
// 0088b70d  83ec10               sub esp, 0x10
// 0088b710  8bc4                 mov eax, esp
// 0088b712  8928                 mov dword ptr [eax], ebp
// 0088b714  8b6b04               mov ebp, dword ptr [ebx + 4]
// 0088b717  896804               mov dword ptr [eax + 4], ebp
// 0088b71a  8b6b08               mov ebp, dword ptr [ebx + 8]
// 0088b71d  896808               mov dword ptr [eax + 8], ebp
// 0088b720  8b6b0c               mov ebp, dword ptr [ebx + 0xc]
// 0088b723  89680c               mov dword ptr [eax + 0xc], ebp
// 0088b726  8b442440             mov eax, dword ptr [esp + 0x40]
// 0088b72a  50                   push eax
// 0088b72b  ffd2                 call edx
// 0088b72d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088b731  8b16                 mov edx, dword ptr [esi]
// 0088b733  8b520c               mov edx, dword ptr [edx + 0xc]
// 0088b736  57                   push edi
// 0088b737  83ec10               sub esp, 0x10
// 0088b73a  8bc4                 mov eax, esp
// 0088b73c  8908                 mov dword ptr [eax], ecx
// 0088b73e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0088b742  894804               mov dword ptr [eax + 4], ecx
// 0088b745  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0088b749  894808               mov dword ptr [eax + 8], ecx
// 0088b74c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0088b750  89480c               mov dword ptr [eax + 0xc], ecx
// 0088b753  8d442424             lea eax, [esp + 0x24]
// 0088b757  50                   push eax
// 0088b758  8bce                 mov ecx, esi
// 0088b75a  ffd2                 call edx
// 0088b75c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0088b75f  83783800             cmp dword ptr [eax + 0x38], 0
// 0088b763  7564                 jne 0x88b7c9
// 0088b765  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 0088b76b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0088b76f  8b11                 mov edx, dword ptr [ecx]
// 0088b771  57                   push edi
// 0088b772  83ec10               sub esp, 0x10
// 0088b775  8bc4                 mov eax, esp
// 0088b777  8928                 mov dword ptr [eax], ebp
// 0088b779  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0088b77d  896804               mov dword ptr [eax + 4], ebp
// 0088b780  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0088b784  896808               mov dword ptr [eax + 8], ebp
// 0088b787  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0088b78b  89680c               mov dword ptr [eax + 0xc], ebp
// 0088b78e  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0088b792  8b4210               mov eax, dword ptr [edx + 0x10]
// 0088b795  55                   push ebp
// 0088b796  ffd0                 call eax
// 0088b798  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0088b79b  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 0088b7a1  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0088b7a4  83f9ff               cmp ecx, -1
// 0088b7a7  7503                 jne 0x88b7ac
// 0088b7a9  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0088b7ac  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0088b7af  83faff               cmp edx, -1
// 0088b7b2  7505                 jne 0x88b7b9
// 0088b7b4  8b4048               mov eax, dword ptr [eax + 0x48]
// 0088b7b7  eb02                 jmp 0x88b7bb
// 0088b7b9  8bc2                 mov eax, edx
// 0088b7bb  51                   push ecx
// 0088b7bc  50                   push eax
// 0088b7bd  8d542418             lea edx, [esp + 0x18]
// 0088b7c1  52                   push edx
// 0088b7c2  8bcd                 mov ecx, ebp
// 0088b7c4  e86fcff1ff           call 0x7a8738
// 0088b7c9  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0088b7cc  83783801             cmp dword ptr [eax + 0x38], 1
// 0088b7d0  0f858b000000         jne 0x88b861
// 0088b7d6  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 0088b7dc  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0088b7e0  8b11                 mov edx, dword ptr [ecx]
// 0088b7e2  57                   push edi
// 0088b7e3  83ec10               sub esp, 0x10
// 0088b7e6  8bc4                 mov eax, esp
// 0088b7e8  8928                 mov dword ptr [eax], ebp
// 0088b7ea  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0088b7ee  896804               mov dword ptr [eax + 4], ebp
// 0088b7f1  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0088b7f5  896808               mov dword ptr [eax + 8], ebp
// 0088b7f8  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0088b7fc  89680c               mov dword ptr [eax + 0xc], ebp
// 0088b7ff  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0088b803  8b4210               mov eax, dword ptr [edx + 0x10]
// 0088b806  55                   push ebp
// 0088b807  ffd0                 call eax
// 0088b809  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0088b80c  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 0088b812  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0088b815  83f9ff               cmp ecx, -1
// 0088b818  7503                 jne 0x88b81d
// 0088b81a  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0088b81d  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0088b820  83faff               cmp edx, -1
// 0088b823  7505                 jne 0x88b82a
// 0088b825  8b4048               mov eax, dword ptr [eax + 0x48]
// 0088b828  eb02                 jmp 0x88b82c
// 0088b82a  8bc2                 mov eax, edx
// 0088b82c  8b17                 mov edx, dword ptr [edi]
// 0088b82e  51                   push ecx
// 0088b82f  50                   push eax
// 0088b830  8b4248               mov eax, dword ptr [edx + 0x48]
// 0088b833  8bcf                 mov ecx, edi
// 0088b835  ffd0                 call eax
// 0088b837  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088b83b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088b83f  50                   push eax
// 0088b840  83ec10               sub esp, 0x10
// 0088b843  8bc4                 mov eax, esp
// 0088b845  8908                 mov dword ptr [eax], ecx
// 0088b847  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088b84b  895004               mov dword ptr [eax + 4], edx
// 0088b84e  8b542438             mov edx, dword ptr [esp + 0x38]
// 0088b852  894808               mov dword ptr [eax + 8], ecx
// 0088b855  55                   push ebp
// 0088b856  89500c               mov dword ptr [eax + 0xc], edx
// 0088b859  e812d1ffff           call 0x888970
// 0088b85e  83c420               add esp, 0x20
// 0088b861  5f                   pop edi
// 0088b862  5e                   pop esi
// 0088b863  5d                   pop ebp
// 0088b864  8bc3                 mov eax, ebx
// 0088b866  5b                   pop ebx
// 0088b867  83c410               add esp, 0x10
// 0088b86a  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetFlat@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
