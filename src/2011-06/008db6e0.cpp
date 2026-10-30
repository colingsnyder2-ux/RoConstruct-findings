// roc 2011-06 008db6e0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008db6e0
//
// 008db6e0  83ec40               sub esp, 0x40
// 008db6e3  53                   push ebx
// 008db6e4  55                   push ebp
// 008db6e5  56                   push esi
// 008db6e6  57                   push edi
// 008db6e7  8bf1                 mov esi, ecx
// 008db6e9  e8622f0100           call 0x8ee650
// 008db6ee  8bc8                 mov ecx, eax
// 008db6f0  e83b160100           call 0x8ecd30
// 008db6f5  85c0                 test eax, eax
// 008db6f7  7518                 jne 0x8db711
// 008db6f9  8b742454             mov esi, dword ptr [esp + 0x54]
// 008db6fd  50                   push eax
// 008db6fe  56                   push esi
// 008db6ff  ff15681ca400         call dword ptr [0xa41c68]
// 008db705  8bc6                 mov eax, esi
// 008db707  5f                   pop edi
// 008db708  5e                   pop esi
// 008db709  5d                   pop ebp
// 008db70a  5b                   pop ebx
// 008db70b  83c440               add esp, 0x40
// 008db70e  c21c00               ret 0x1c
// 008db711  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 008db715  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008db719  8b16                 mov edx, dword ptr [esi]
// 008db71b  8b5208               mov edx, dword ptr [edx + 8]
// 008db71e  53                   push ebx
// 008db71f  83ec10               sub esp, 0x10
// 008db722  8bc4                 mov eax, esp
// 008db724  8908                 mov dword ptr [eax], ecx
// 008db726  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008db72a  894804               mov dword ptr [eax + 4], ecx
// 008db72d  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008db731  894808               mov dword ptr [eax + 8], ecx
// 008db734  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008db73b  89480c               mov dword ptr [eax + 0xc], ecx
// 008db73e  8d442434             lea eax, [esp + 0x34]
// 008db742  50                   push eax
// 008db743  8bce                 mov ecx, esi
// 008db745  ffd2                 call edx
// 008db747  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008db74a  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008db750  bd08000000           mov ebp, 8
// 008db755  8b4c2808             mov ecx, dword ptr [eax + ebp + 8]
// 008db759  03c5                 add eax, ebp
// 008db75b  83f9ff               cmp ecx, -1
// 008db75e  7505                 jne 0x8db765
// 008db760  8b4004               mov eax, dword ptr [eax + 4]
// 008db763  eb02                 jmp 0x8db767
// 008db765  8bc1                 mov eax, ecx
// 008db767  50                   push eax
// 008db768  8d4c2424             lea ecx, [esp + 0x24]
// 008db76c  51                   push ecx
// 008db76d  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008db771  e8aaf6f2ff           call 0x80ae20
// 008db776  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008db77a  8b16                 mov edx, dword ptr [esi]
// 008db77c  8b520c               mov edx, dword ptr [edx + 0xc]
// 008db77f  53                   push ebx
// 008db780  83ec10               sub esp, 0x10
// 008db783  8bc4                 mov eax, esp
// 008db785  8908                 mov dword ptr [eax], ecx
// 008db787  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008db78b  894804               mov dword ptr [eax + 4], ecx
// 008db78e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008db792  894808               mov dword ptr [eax + 8], ecx
// 008db795  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008db79c  89480c               mov dword ptr [eax + 0xc], ecx
// 008db79f  8d442424             lea eax, [esp + 0x24]
// 008db7a3  50                   push eax
// 008db7a4  8bce                 mov ecx, esi
// 008db7a6  ffd2                 call edx
// 008db7a8  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008db7ab  83783800             cmp dword ptr [eax + 0x38], 0
// 008db7af  756f                 jne 0x8db820
// 008db7b1  68ec05ad00           push 0xad05ec
// 008db7b6  e8952e0100           call 0x8ee650
// 008db7bb  8bc8                 mov ecx, eax
// 008db7bd  e8ae2d0100           call 0x8ee570
// 008db7c2  8bf8                 mov edi, eax
// 008db7c4  85ff                 test edi, edi
// 008db7c6  7458                 je 0x8db820
// 008db7c8  6a01                 push 1
// 008db7ca  6a00                 push 0
// 008db7cc  8d4c2448             lea ecx, [esp + 0x48]
// 008db7d0  51                   push ecx
// 008db7d1  8bcf                 mov ecx, edi
// 008db7d3  8bdd                 mov ebx, ebp
// 008db7d5  896c2448             mov dword ptr [esp + 0x48], ebp
// 008db7d9  e8321f0100           call 0x8ed710
// 008db7de  83ec10               sub esp, 0x10
// 008db7e1  8bcc                 mov ecx, esp
// 008db7e3  8919                 mov dword ptr [ecx], ebx
// 008db7e5  896904               mov dword ptr [ecx + 4], ebp
// 008db7e8  8bd3                 mov edx, ebx
// 008db7ea  895108               mov dword ptr [ecx + 8], edx
// 008db7ed  89510c               mov dword ptr [ecx + 0xc], edx
// 008db7f0  8b10                 mov edx, dword ptr [eax]
// 008db7f2  83ec10               sub esp, 0x10
// 008db7f5  8bcc                 mov ecx, esp
// 008db7f7  8911                 mov dword ptr [ecx], edx
// 008db7f9  8b5004               mov edx, dword ptr [eax + 4]
// 008db7fc  895104               mov dword ptr [ecx + 4], edx
// 008db7ff  8b5008               mov edx, dword ptr [eax + 8]
// 008db802  8b400c               mov eax, dword ptr [eax + 0xc]
// 008db805  895108               mov dword ptr [ecx + 8], edx
// 008db808  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008db80c  89410c               mov dword ptr [ecx + 0xc], eax
// 008db80f  8d4c2430             lea ecx, [esp + 0x30]
// 008db813  51                   push ecx
// 008db814  52                   push edx
// 008db815  8bcf                 mov ecx, edi
// 008db817  e8c4170100           call 0x8ecfe0
// 008db81c  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 008db820  8b761c               mov esi, dword ptr [esi + 0x1c]
// 008db823  837e3801             cmp dword ptr [esi + 0x38], 1
// 008db827  7565                 jne 0x8db88e
// 008db829  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 008db82f  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 008db835  83f9ff               cmp ecx, -1
// 008db838  7506                 jne 0x8db840
// 008db83a  8b8830010000         mov ecx, dword ptr [eax + 0x130]
// 008db840  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 008db846  83faff               cmp edx, -1
// 008db849  7508                 jne 0x8db853
// 008db84b  8b8030010000         mov eax, dword ptr [eax + 0x130]
// 008db851  eb02                 jmp 0x8db855
// 008db853  8bc2                 mov eax, edx
// 008db855  51                   push ecx
// 008db856  50                   push eax
// 008db857  8b03                 mov eax, dword ptr [ebx]
// 008db859  8b5048               mov edx, dword ptr [eax + 0x48]
// 008db85c  8bcb                 mov ecx, ebx
// 008db85e  ffd2                 call edx
// 008db860  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008db864  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008db868  50                   push eax
// 008db869  83ec10               sub esp, 0x10
// 008db86c  8bc4                 mov eax, esp
// 008db86e  8908                 mov dword ptr [eax], ecx
// 008db870  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008db874  895004               mov dword ptr [eax + 4], edx
// 008db877  8b542438             mov edx, dword ptr [esp + 0x38]
// 008db87b  894808               mov dword ptr [eax + 8], ecx
// 008db87e  89500c               mov dword ptr [eax + 0xc], edx
// 008db881  8b442478             mov eax, dword ptr [esp + 0x78]
// 008db885  50                   push eax
// 008db886  e865e0ffff           call 0x8d98f0
// 008db88b  83c420               add esp, 0x20
// 008db88e  8b442454             mov eax, dword ptr [esp + 0x54]
// 008db892  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008db896  8b542424             mov edx, dword ptr [esp + 0x24]
// 008db89a  5f                   pop edi
// 008db89b  8908                 mov dword ptr [eax], ecx
// 008db89d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008db8a1  895004               mov dword ptr [eax + 4], edx
// 008db8a4  8b542428             mov edx, dword ptr [esp + 0x28]
// 008db8a8  5e                   pop esi
// 008db8a9  5d                   pop ebp
// 008db8aa  894808               mov dword ptr [eax + 8], ecx
// 008db8ad  89500c               mov dword ptr [eax + 0xc], edx
// 008db8b0  5b                   pop ebx
// 008db8b1  83c440               add esp, 0x40
// 008db8b4  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
