// roc 2008-06 00799650  unit: CXTPRibbonControlTab  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00799650
//
// 00799650  57                   push edi
// 00799651  8bf9                 mov edi, ecx
// 00799653  8b877cffffff         mov eax, dword ptr [edi - 0x84]
// 00799659  85c0                 test eax, eax
// 0079965b  7406                 je 0x799663
// 0079965d  83782000             cmp dword ptr [eax + 0x20], 0
// 00799661  750e                 jne 0x799671
// 00799663  8b442408             mov eax, dword ptr [esp + 8]
// 00799667  50                   push eax
// 00799668  e8d324feff           call 0x77bb40
// 0079966d  5f                   pop edi
// 0079966e  c20400               ret 4
// 00799671  8b977cfeffff         mov edx, dword ptr [edi - 0x184]
// 00799677  8b4274               mov eax, dword ptr [edx + 0x74]
// 0079967a  53                   push ebx
// 0079967b  55                   push ebp
// 0079967c  8daf7cfeffff         lea ebp, [edi - 0x184]
// 00799682  8bcd                 mov ecx, ebp
// 00799684  ffd0                 call eax
// 00799686  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0079968a  85c0                 test eax, eax
// 0079968c  7525                 jne 0x7996b3
// 0079968e  85db                 test ebx, ebx
// 00799690  7421                 je 0x7996b3
// 00799692  8b8f7cffffff         mov ecx, dword ptr [edi - 0x84]
// 00799698  e8938ff8ff           call 0x722630
// 0079969d  85c0                 test eax, eax
// 0079969f  7512                 jne 0x7996b3
// 007996a1  8b8f7cffffff         mov ecx, dword ptr [edi - 0x84]
// 007996a7  e864b7f1ff           call 0x6b4e10
// 007996ac  8bc8                 mov ecx, eax
// 007996ae  e89db2f0ff           call 0x6a4950
// 007996b3  395f04               cmp dword ptr [edi + 4], ebx
// 007996b6  0f84e9000000         je 0x7997a5
// 007996bc  8b8f7cffffff         mov ecx, dword ptr [edi - 0x84]
// 007996c2  e849b7f1ff           call 0x6b4e10
// 007996c7  83784401             cmp dword ptr [eax + 0x44], 1
// 007996cb  7e12                 jle 0x7996df
// 007996cd  8b8f7cffffff         mov ecx, dword ptr [edi - 0x84]
// 007996d3  e838b7f1ff           call 0x6b4e10
// 007996d8  8bc8                 mov ecx, eax
// 007996da  e861aef0ff           call 0x6a4540
// 007996df  56                   push esi
// 007996e0  8bb77cffffff         mov esi, dword ptr [edi - 0x84]
// 007996e6  8b16                 mov edx, dword ptr [esi]
// 007996e8  8b8238020000         mov eax, dword ptr [edx + 0x238]
// 007996ee  53                   push ebx
// 007996ef  8bce                 mov ecx, esi
// 007996f1  ffd0                 call eax
// 007996f3  85c0                 test eax, eax
// 007996f5  0f85a9000000         jne 0x7997a4
// 007996fb  ff8660010000         inc dword ptr [esi + 0x160]
// 00799701  53                   push ebx
// 00799702  8bce                 mov ecx, esi
// 00799704  e8579cf8ff           call 0x723360
// 00799709  53                   push ebx
// 0079970a  8bcf                 mov ecx, edi
// 0079970c  e82f24feff           call 0x77bb40
// 00799711  8b16                 mov edx, dword ptr [esi]
// 00799713  8b82f4010000         mov eax, dword ptr [edx + 0x1f4]
// 00799719  6a00                 push 0
// 0079971b  6a00                 push 0
// 0079971d  8bce                 mov ecx, esi
// 0079971f  ffd0                 call eax
// 00799721  838660010000ff       add dword ptr [esi + 0x160], -1
// 00799728  7519                 jne 0x799743
// 0079972a  f686e800000002       test byte ptr [esi + 0xe8], 2
// 00799731  7410                 je 0x799743
// 00799733  8b16                 mov edx, dword ptr [esi]
// 00799735  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 0079973b  6a01                 push 1
// 0079973d  6a00                 push 0
// 0079973f  8bce                 mov ecx, esi
// 00799741  ffd0                 call eax
// 00799743  8b16                 mov edx, dword ptr [esi]
// 00799745  8b823c020000         mov eax, dword ptr [edx + 0x23c]
// 0079974b  53                   push ebx
// 0079974c  8bce                 mov ecx, esi
// 0079974e  ffd0                 call eax
// 00799750  8bce                 mov ecx, esi
// 00799752  e8d98ef8ff           call 0x722630
// 00799757  85c0                 test eax, eax
// 00799759  7412                 je 0x79976d
// 0079975b  85db                 test ebx, ebx
// 0079975d  740e                 je 0x79976d
// 0079975f  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 00799765  51                   push ecx
// 00799766  8bcd                 mov ecx, ebp
// 00799768  e863fbffff           call 0x7992d0
// 0079976d  6a64                 push 0x64
// 0079976f  8bcd                 mov ecx, ebp
// 00799771  e8ca3ff1ff           call 0x6ad740
// 00799776  85db                 test ebx, ebx
// 00799778  742a                 je 0x7997a4
// 0079977a  8b877cffffff         mov eax, dword ptr [edi - 0x84]
// 00799780  8b5b2c               mov ebx, dword ptr [ebx + 0x2c]
// 00799783  8b8f00ffffff         mov ecx, dword ptr [edi - 0x100]
// 00799789  85c0                 test eax, eax
// 0079978b  7403                 je 0x799790
// 0079978d  8b4020               mov eax, dword ptr [eax + 0x20]
// 00799790  43                   inc ebx
// 00799791  53                   push ebx
// 00799792  51                   push ecx
// 00799793  50                   push eax
// 00799794  6805800000           push 0x8005
// 00799799  8d8f9cfeffff         lea ecx, [edi - 0x164]
// 0079979f  e8eceaf4ff           call 0x6e8290
// 007997a4  5e                   pop esi
// 007997a5  5d                   pop ebp
// 007997a6  5b                   pop ebx
// 007997a7  5f                   pop edi
// 007997a8  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonControlTab.cpp (function ?SetSelectedItem@CXTPRibbonControlTab@@UAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp
