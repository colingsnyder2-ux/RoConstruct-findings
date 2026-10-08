// roc 2010-06 0088a7a0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088a7a0
//
// 0088a7a0  83ec40               sub esp, 0x40
// 0088a7a3  53                   push ebx
// 0088a7a4  55                   push ebp
// 0088a7a5  56                   push esi
// 0088a7a6  57                   push edi
// 0088a7a7  8bf1                 mov esi, ecx
// 0088a7a9  e8c2b20000           call 0x895a70
// 0088a7ae  8bc8                 mov ecx, eax
// 0088a7b0  e89b990000           call 0x894150
// 0088a7b5  85c0                 test eax, eax
// 0088a7b7  7518                 jne 0x88a7d1
// 0088a7b9  8b742454             mov esi, dword ptr [esp + 0x54]
// 0088a7bd  50                   push eax
// 0088a7be  56                   push esi
// 0088a7bf  ff1548bc9e00         call dword ptr [0x9ebc48]
// 0088a7c5  8bc6                 mov eax, esi
// 0088a7c7  5f                   pop edi
// 0088a7c8  5e                   pop esi
// 0088a7c9  5d                   pop ebp
// 0088a7ca  5b                   pop ebx
// 0088a7cb  83c440               add esp, 0x40
// 0088a7ce  c21c00               ret 0x1c
// 0088a7d1  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 0088a7d5  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0088a7d9  8b16                 mov edx, dword ptr [esi]
// 0088a7db  8b5208               mov edx, dword ptr [edx + 8]
// 0088a7de  53                   push ebx
// 0088a7df  83ec10               sub esp, 0x10
// 0088a7e2  8bc4                 mov eax, esp
// 0088a7e4  8908                 mov dword ptr [eax], ecx
// 0088a7e6  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0088a7ea  894804               mov dword ptr [eax + 4], ecx
// 0088a7ed  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0088a7f1  894808               mov dword ptr [eax + 8], ecx
// 0088a7f4  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0088a7fb  89480c               mov dword ptr [eax + 0xc], ecx
// 0088a7fe  8d442434             lea eax, [esp + 0x34]
// 0088a802  50                   push eax
// 0088a803  8bce                 mov ecx, esi
// 0088a805  ffd2                 call edx
// 0088a807  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0088a80a  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 0088a810  bd08000000           mov ebp, 8
// 0088a815  8b4c2808             mov ecx, dword ptr [eax + ebp + 8]
// 0088a819  03c5                 add eax, ebp
// 0088a81b  83f9ff               cmp ecx, -1
// 0088a81e  7505                 jne 0x88a825
// 0088a820  8b4004               mov eax, dword ptr [eax + 4]
// 0088a823  eb02                 jmp 0x88a827
// 0088a825  8bc1                 mov eax, ecx
// 0088a827  50                   push eax
// 0088a828  8d4c2424             lea ecx, [esp + 0x24]
// 0088a82c  51                   push ecx
// 0088a82d  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0088a831  e808dff1ff           call 0x7a873e
// 0088a836  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0088a83a  8b16                 mov edx, dword ptr [esi]
// 0088a83c  8b520c               mov edx, dword ptr [edx + 0xc]
// 0088a83f  53                   push ebx
// 0088a840  83ec10               sub esp, 0x10
// 0088a843  8bc4                 mov eax, esp
// 0088a845  8908                 mov dword ptr [eax], ecx
// 0088a847  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0088a84b  894804               mov dword ptr [eax + 4], ecx
// 0088a84e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0088a852  894808               mov dword ptr [eax + 8], ecx
// 0088a855  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0088a85c  89480c               mov dword ptr [eax + 0xc], ecx
// 0088a85f  8d442424             lea eax, [esp + 0x24]
// 0088a863  50                   push eax
// 0088a864  8bce                 mov ecx, esi
// 0088a866  ffd2                 call edx
// 0088a868  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0088a86b  83783800             cmp dword ptr [eax + 0x38], 0
// 0088a86f  756f                 jne 0x88a8e0
// 0088a871  68cc5ba600           push 0xa65bcc
// 0088a876  e8f5b10000           call 0x895a70
// 0088a87b  8bc8                 mov ecx, eax
// 0088a87d  e80eb10000           call 0x895990
// 0088a882  8bf8                 mov edi, eax
// 0088a884  85ff                 test edi, edi
// 0088a886  7458                 je 0x88a8e0
// 0088a888  6a01                 push 1
// 0088a88a  6a00                 push 0
// 0088a88c  8d4c2448             lea ecx, [esp + 0x48]
// 0088a890  51                   push ecx
// 0088a891  8bcf                 mov ecx, edi
// 0088a893  8bdd                 mov ebx, ebp
// 0088a895  896c2448             mov dword ptr [esp + 0x48], ebp
// 0088a899  e892a20000           call 0x894b30
// 0088a89e  83ec10               sub esp, 0x10
// 0088a8a1  8bcc                 mov ecx, esp
// 0088a8a3  8919                 mov dword ptr [ecx], ebx
// 0088a8a5  896904               mov dword ptr [ecx + 4], ebp
// 0088a8a8  8bd3                 mov edx, ebx
// 0088a8aa  895108               mov dword ptr [ecx + 8], edx
// 0088a8ad  89510c               mov dword ptr [ecx + 0xc], edx
// 0088a8b0  8b10                 mov edx, dword ptr [eax]
// 0088a8b2  83ec10               sub esp, 0x10
// 0088a8b5  8bcc                 mov ecx, esp
// 0088a8b7  8911                 mov dword ptr [ecx], edx
// 0088a8b9  8b5004               mov edx, dword ptr [eax + 4]
// 0088a8bc  895104               mov dword ptr [ecx + 4], edx
// 0088a8bf  8b5008               mov edx, dword ptr [eax + 8]
// 0088a8c2  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088a8c5  895108               mov dword ptr [ecx + 8], edx
// 0088a8c8  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0088a8cc  89410c               mov dword ptr [ecx + 0xc], eax
// 0088a8cf  8d4c2430             lea ecx, [esp + 0x30]
// 0088a8d3  51                   push ecx
// 0088a8d4  52                   push edx
// 0088a8d5  8bcf                 mov ecx, edi
// 0088a8d7  e8249b0000           call 0x894400
// 0088a8dc  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 0088a8e0  8b761c               mov esi, dword ptr [esi + 0x1c]
// 0088a8e3  837e3801             cmp dword ptr [esi + 0x38], 1
// 0088a8e7  7565                 jne 0x88a94e
// 0088a8e9  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0088a8ef  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 0088a8f5  83f9ff               cmp ecx, -1
// 0088a8f8  7506                 jne 0x88a900
// 0088a8fa  8b8830010000         mov ecx, dword ptr [eax + 0x130]
// 0088a900  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 0088a906  83faff               cmp edx, -1
// 0088a909  7508                 jne 0x88a913
// 0088a90b  8b8030010000         mov eax, dword ptr [eax + 0x130]
// 0088a911  eb02                 jmp 0x88a915
// 0088a913  8bc2                 mov eax, edx
// 0088a915  51                   push ecx
// 0088a916  50                   push eax
// 0088a917  8b03                 mov eax, dword ptr [ebx]
// 0088a919  8b5048               mov edx, dword ptr [eax + 0x48]
// 0088a91c  8bcb                 mov ecx, ebx
// 0088a91e  ffd2                 call edx
// 0088a920  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088a924  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088a928  50                   push eax
// 0088a929  83ec10               sub esp, 0x10
// 0088a92c  8bc4                 mov eax, esp
// 0088a92e  8908                 mov dword ptr [eax], ecx
// 0088a930  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088a934  895004               mov dword ptr [eax + 4], edx
// 0088a937  8b542438             mov edx, dword ptr [esp + 0x38]
// 0088a93b  894808               mov dword ptr [eax + 8], ecx
// 0088a93e  89500c               mov dword ptr [eax + 0xc], edx
// 0088a941  8b442478             mov eax, dword ptr [esp + 0x78]
// 0088a945  50                   push eax
// 0088a946  e825e0ffff           call 0x888970
// 0088a94b  83c420               add esp, 0x20
// 0088a94e  8b442454             mov eax, dword ptr [esp + 0x54]
// 0088a952  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088a956  8b542424             mov edx, dword ptr [esp + 0x24]
// 0088a95a  5f                   pop edi
// 0088a95b  8908                 mov dword ptr [eax], ecx
// 0088a95d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088a961  895004               mov dword ptr [eax + 4], edx
// 0088a964  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088a968  5e                   pop esi
// 0088a969  5d                   pop ebp
// 0088a96a  894808               mov dword ptr [eax + 8], ecx
// 0088a96d  89500c               mov dword ptr [eax + 0xc], edx
// 0088a970  5b                   pop ebx
// 0088a971  83c440               add esp, 0x40
// 0088a974  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
