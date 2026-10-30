// roc 2009-12 008d65f0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d65f0
//
// 008d65f0  83ec40               sub esp, 0x40
// 008d65f3  53                   push ebx
// 008d65f4  55                   push ebp
// 008d65f5  56                   push esi
// 008d65f6  57                   push edi
// 008d65f7  8bf1                 mov esi, ecx
// 008d65f9  e802b20000           call 0x8e1800
// 008d65fe  8bc8                 mov ecx, eax
// 008d6600  e8db980000           call 0x8dfee0
// 008d6605  85c0                 test eax, eax
// 008d6607  7518                 jne 0x8d6621
// 008d6609  8b742454             mov esi, dword ptr [esp + 0x54]
// 008d660d  50                   push eax
// 008d660e  56                   push esi
// 008d660f  ff1564cc9800         call dword ptr [0x98cc64]
// 008d6615  8bc6                 mov eax, esi
// 008d6617  5f                   pop edi
// 008d6618  5e                   pop esi
// 008d6619  5d                   pop ebp
// 008d661a  5b                   pop ebx
// 008d661b  83c440               add esp, 0x40
// 008d661e  c21c00               ret 0x1c
// 008d6621  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 008d6625  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008d6629  8b16                 mov edx, dword ptr [esi]
// 008d662b  8b5208               mov edx, dword ptr [edx + 8]
// 008d662e  53                   push ebx
// 008d662f  83ec10               sub esp, 0x10
// 008d6632  8bc4                 mov eax, esp
// 008d6634  8908                 mov dword ptr [eax], ecx
// 008d6636  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008d663a  894804               mov dword ptr [eax + 4], ecx
// 008d663d  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008d6641  894808               mov dword ptr [eax + 8], ecx
// 008d6644  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008d664b  89480c               mov dword ptr [eax + 0xc], ecx
// 008d664e  8d442434             lea eax, [esp + 0x34]
// 008d6652  50                   push eax
// 008d6653  8bce                 mov ecx, esi
// 008d6655  ffd2                 call edx
// 008d6657  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d665a  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d6660  bd08000000           mov ebp, 8
// 008d6665  8b4c2808             mov ecx, dword ptr [eax + ebp + 8]
// 008d6669  03c5                 add eax, ebp
// 008d666b  83f9ff               cmp ecx, -1
// 008d666e  7505                 jne 0x8d6675
// 008d6670  8b4004               mov eax, dword ptr [eax + 4]
// 008d6673  eb02                 jmp 0x8d6677
// 008d6675  8bc1                 mov eax, ecx
// 008d6677  50                   push eax
// 008d6678  8d4c2424             lea ecx, [esp + 0x24]
// 008d667c  51                   push ecx
// 008d667d  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008d6681  e878dff1ff           call 0x7f45fe
// 008d6686  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008d668a  8b16                 mov edx, dword ptr [esi]
// 008d668c  8b520c               mov edx, dword ptr [edx + 0xc]
// 008d668f  53                   push ebx
// 008d6690  83ec10               sub esp, 0x10
// 008d6693  8bc4                 mov eax, esp
// 008d6695  8908                 mov dword ptr [eax], ecx
// 008d6697  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008d669b  894804               mov dword ptr [eax + 4], ecx
// 008d669e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008d66a2  894808               mov dword ptr [eax + 8], ecx
// 008d66a5  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008d66ac  89480c               mov dword ptr [eax + 0xc], ecx
// 008d66af  8d442424             lea eax, [esp + 0x24]
// 008d66b3  50                   push eax
// 008d66b4  8bce                 mov ecx, esi
// 008d66b6  ffd2                 call edx
// 008d66b8  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d66bb  83783800             cmp dword ptr [eax + 0x38], 0
// 008d66bf  756f                 jne 0x8d6730
// 008d66c1  688c12a000           push 0xa0128c
// 008d66c6  e835b10000           call 0x8e1800
// 008d66cb  8bc8                 mov ecx, eax
// 008d66cd  e84eb00000           call 0x8e1720
// 008d66d2  8bf8                 mov edi, eax
// 008d66d4  85ff                 test edi, edi
// 008d66d6  7458                 je 0x8d6730
// 008d66d8  6a01                 push 1
// 008d66da  6a00                 push 0
// 008d66dc  8d4c2448             lea ecx, [esp + 0x48]
// 008d66e0  51                   push ecx
// 008d66e1  8bcf                 mov ecx, edi
// 008d66e3  8bdd                 mov ebx, ebp
// 008d66e5  896c2448             mov dword ptr [esp + 0x48], ebp
// 008d66e9  e8d2a10000           call 0x8e08c0
// 008d66ee  83ec10               sub esp, 0x10
// 008d66f1  8bcc                 mov ecx, esp
// 008d66f3  8919                 mov dword ptr [ecx], ebx
// 008d66f5  896904               mov dword ptr [ecx + 4], ebp
// 008d66f8  8bd3                 mov edx, ebx
// 008d66fa  895108               mov dword ptr [ecx + 8], edx
// 008d66fd  89510c               mov dword ptr [ecx + 0xc], edx
// 008d6700  8b10                 mov edx, dword ptr [eax]
// 008d6702  83ec10               sub esp, 0x10
// 008d6705  8bcc                 mov ecx, esp
// 008d6707  8911                 mov dword ptr [ecx], edx
// 008d6709  8b5004               mov edx, dword ptr [eax + 4]
// 008d670c  895104               mov dword ptr [ecx + 4], edx
// 008d670f  8b5008               mov edx, dword ptr [eax + 8]
// 008d6712  8b400c               mov eax, dword ptr [eax + 0xc]
// 008d6715  895108               mov dword ptr [ecx + 8], edx
// 008d6718  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008d671c  89410c               mov dword ptr [ecx + 0xc], eax
// 008d671f  8d4c2430             lea ecx, [esp + 0x30]
// 008d6723  51                   push ecx
// 008d6724  52                   push edx
// 008d6725  8bcf                 mov ecx, edi
// 008d6727  e8649a0000           call 0x8e0190
// 008d672c  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 008d6730  8b761c               mov esi, dword ptr [esi + 0x1c]
// 008d6733  837e3801             cmp dword ptr [esi + 0x38], 1
// 008d6737  7565                 jne 0x8d679e
// 008d6739  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 008d673f  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 008d6745  83f9ff               cmp ecx, -1
// 008d6748  7506                 jne 0x8d6750
// 008d674a  8b8830010000         mov ecx, dword ptr [eax + 0x130]
// 008d6750  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 008d6756  83faff               cmp edx, -1
// 008d6759  7508                 jne 0x8d6763
// 008d675b  8b8030010000         mov eax, dword ptr [eax + 0x130]
// 008d6761  eb02                 jmp 0x8d6765
// 008d6763  8bc2                 mov eax, edx
// 008d6765  51                   push ecx
// 008d6766  50                   push eax
// 008d6767  8b03                 mov eax, dword ptr [ebx]
// 008d6769  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d676c  8bcb                 mov ecx, ebx
// 008d676e  ffd2                 call edx
// 008d6770  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d6774  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d6778  50                   push eax
// 008d6779  83ec10               sub esp, 0x10
// 008d677c  8bc4                 mov eax, esp
// 008d677e  8908                 mov dword ptr [eax], ecx
// 008d6780  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008d6784  895004               mov dword ptr [eax + 4], edx
// 008d6787  8b542438             mov edx, dword ptr [esp + 0x38]
// 008d678b  894808               mov dword ptr [eax + 8], ecx
// 008d678e  89500c               mov dword ptr [eax + 0xc], edx
// 008d6791  8b442478             mov eax, dword ptr [esp + 0x78]
// 008d6795  50                   push eax
// 008d6796  e825e0ffff           call 0x8d47c0
// 008d679b  83c420               add esp, 0x20
// 008d679e  8b442454             mov eax, dword ptr [esp + 0x54]
// 008d67a2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d67a6  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d67aa  5f                   pop edi
// 008d67ab  8908                 mov dword ptr [eax], ecx
// 008d67ad  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d67b1  895004               mov dword ptr [eax + 4], edx
// 008d67b4  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d67b8  5e                   pop esi
// 008d67b9  5d                   pop ebp
// 008d67ba  894808               mov dword ptr [eax + 8], ecx
// 008d67bd  89500c               mov dword ptr [eax + 0xc], edx
// 008d67c0  5b                   pop ebx
// 008d67c1  83c440               add esp, 0x40
// 008d67c4  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
