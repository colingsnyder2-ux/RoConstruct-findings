// roc 2009-06 00795f00  unit: CXTPRibbonTheme  size: 649 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00795f00
//
// 00795f00  6aff                 push -1
// 00795f02  6881ba8700           push 0x87ba81
// 00795f07  64a100000000         mov eax, dword ptr fs:[0]
// 00795f0d  50                   push eax
// 00795f0e  83ec68               sub esp, 0x68
// 00795f11  53                   push ebx
// 00795f12  55                   push ebp
// 00795f13  56                   push esi
// 00795f14  57                   push edi
// 00795f15  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00795f1a  33c4                 xor eax, esp
// 00795f1c  50                   push eax
// 00795f1d  8d44247c             lea eax, [esp + 0x7c]
// 00795f21  64a300000000         mov dword ptr fs:[0], eax
// 00795f27  8be9                 mov ebp, ecx
// 00795f29  896c2418             mov dword ptr [esp + 0x18], ebp
// 00795f2d  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 00795f34  8b7740               mov esi, dword ptr [edi + 0x40]
// 00795f37  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00795f3a  8b573c               mov edx, dword ptr [edi + 0x3c]
// 00795f3d  8b5f38               mov ebx, dword ptr [edi + 0x38]
// 00795f40  8bc6                 mov eax, esi
// 00795f42  2b8560060000         sub eax, dword ptr [ebp + 0x660]
// 00795f48  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00795f4c  89442448             mov dword ptr [esp + 0x48], eax
// 00795f50  89442420             mov dword ptr [esp + 0x20], eax
// 00795f54  8b4770               mov eax, dword ptr [edi + 0x70]
// 00795f57  895c2440             mov dword ptr [esp + 0x40], ebx
// 00795f5b  89542444             mov dword ptr [esp + 0x44], edx
// 00795f5f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00795f63  89542424             mov dword ptr [esp + 0x24], edx
// 00795f67  89742428             mov dword ptr [esp + 0x28], esi
// 00795f6b  85c0                 test eax, eax
// 00795f6d  0f8500020000         jne 0x796173
// 00795f73  8bcf                 mov ecx, edi
// 00795f75  e8968a0700           call 0x80ea10
// 00795f7a  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00795f81  8bcd                 mov ecx, ebp
// 00795f83  7511                 jne 0x795f96
// 00795f85  6814079000           push 0x900714
// 00795f8a  e831de0000           call 0x7a3dc0
// 00795f8f  6800079000           push 0x900700
// 00795f94  eb0f                 jmp 0x795fa5
// 00795f96  68e8069000           push 0x9006e8
// 00795f9b  e820de0000           call 0x7a3dc0
// 00795fa0  68d0069000           push 0x9006d0
// 00795fa5  8bcd                 mov ecx, ebp
// 00795fa7  8bd8                 mov ebx, eax
// 00795fa9  e812de0000           call 0x7a3dc0
// 00795fae  8bcf                 mov ecx, edi
// 00795fb0  89442414             mov dword ptr [esp + 0x14], eax
// 00795fb4  e8678a0700           call 0x80ea20
// 00795fb9  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00795fc0  8bf0                 mov esi, eax
// 00795fc2  f7de                 neg esi
// 00795fc4  1bf6                 sbb esi, esi
// 00795fc6  f7de                 neg esi
// 00795fc8  85db                 test ebx, ebx
// 00795fca  744c                 je 0x796018
// 00795fcc  6a02                 push 2
// 00795fce  56                   push esi
// 00795fcf  8d442454             lea eax, [esp + 0x54]
// 00795fd3  50                   push eax
// 00795fd4  8bcb                 mov ecx, ebx
// 00795fd6  e8e5fd0600           call 0x805dc0
// 00795fdb  83ec10               sub esp, 0x10
// 00795fde  8bcc                 mov ecx, esp
// 00795fe0  ba05000000           mov edx, 5
// 00795fe5  8911                 mov dword ptr [ecx], edx
// 00795fe7  895104               mov dword ptr [ecx + 4], edx
// 00795fea  895108               mov dword ptr [ecx + 8], edx
// 00795fed  89510c               mov dword ptr [ecx + 0xc], edx
// 00795ff0  8b10                 mov edx, dword ptr [eax]
// 00795ff2  83ec10               sub esp, 0x10
// 00795ff5  8bcc                 mov ecx, esp
// 00795ff7  8911                 mov dword ptr [ecx], edx
// 00795ff9  8b5004               mov edx, dword ptr [eax + 4]
// 00795ffc  895104               mov dword ptr [ecx + 4], edx
// 00795fff  8b5008               mov edx, dword ptr [eax + 8]
// 00796002  8b400c               mov eax, dword ptr [eax + 0xc]
// 00796005  895108               mov dword ptr [ecx + 8], edx
// 00796008  89410c               mov dword ptr [ecx + 0xc], eax
// 0079600b  8d4c245c             lea ecx, [esp + 0x5c]
// 0079600f  51                   push ecx
// 00796010  55                   push ebp
// 00796011  8bcb                 mov ecx, ebx
// 00796013  e878f60600           call 0x805690
// 00796018  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079601c  85c9                 test ecx, ecx
// 0079601e  7452                 je 0x796072
// 00796020  6a02                 push 2
// 00796022  56                   push esi
// 00796023  8d542474             lea edx, [esp + 0x74]
// 00796027  bb05000000           mov ebx, 5
// 0079602c  52                   push edx
// 0079602d  895c2464             mov dword ptr [esp + 0x64], ebx
// 00796031  e88afd0600           call 0x805dc0
// 00796036  83ec10               sub esp, 0x10
// 00796039  8bcc                 mov ecx, esp
// 0079603b  8919                 mov dword ptr [ecx], ebx
// 0079603d  8bd3                 mov edx, ebx
// 0079603f  895104               mov dword ptr [ecx + 4], edx
// 00796042  895108               mov dword ptr [ecx + 8], edx
// 00796045  89510c               mov dword ptr [ecx + 0xc], edx
// 00796048  8b10                 mov edx, dword ptr [eax]
// 0079604a  83ec10               sub esp, 0x10
// 0079604d  8bcc                 mov ecx, esp
// 0079604f  8911                 mov dword ptr [ecx], edx
// 00796051  8b5004               mov edx, dword ptr [eax + 4]
// 00796054  895104               mov dword ptr [ecx + 4], edx
// 00796057  8b5008               mov edx, dword ptr [eax + 8]
// 0079605a  8b400c               mov eax, dword ptr [eax + 0xc]
// 0079605d  895108               mov dword ptr [ecx + 8], edx
// 00796060  89410c               mov dword ptr [ecx + 0xc], eax
// 00796063  8d4c243c             lea ecx, [esp + 0x3c]
// 00796067  51                   push ecx
// 00796068  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0079606c  55                   push ebp
// 0079606d  e81ef60600           call 0x805690
// 00796072  8d942490000000       lea edx, [esp + 0x90]
// 00796079  52                   push edx
// 0079607a  8bcf                 mov ecx, edi
// 0079607c  e8dfe5ffff           call 0x794660
// 00796081  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 0079608c  e8dfc4fdff           call 0x772570
// 00796091  8d842490000000       lea eax, [esp + 0x90]
// 00796098  50                   push eax
// 00796099  e89294fdff           call 0x76f530
// 0079609e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007960a2  83c404               add esp, 4
// 007960a5  8d8e54060000         lea ecx, [esi + 0x654]
// 007960ab  51                   push ecx
// 007960ac  55                   push ebp
// 007960ad  8d4c2464             lea ecx, [esp + 0x64]
// 007960b1  e8aaa7fdff           call 0x770860
// 007960b6  8b442420             mov eax, dword ptr [esp + 0x20]
// 007960ba  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007960be  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007960c2  6aff                 push -1
// 007960c4  89442434             mov dword ptr [esp + 0x34], eax
// 007960c8  89542430             mov dword ptr [esp + 0x30], edx
// 007960cc  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007960d0  6a00                 push 0
// 007960d2  8d442434             lea eax, [esp + 0x34]
// 007960d6  50                   push eax
// 007960d7  c684249000000001     mov byte ptr [esp + 0x90], 1
// 007960df  894c2440             mov dword ptr [esp + 0x40], ecx
// 007960e3  89542444             mov dword ptr [esp + 0x44], edx
// 007960e7  ff15f8ed8900         call dword ptr [0x89edf8]
// 007960ed  8bcf                 mov ecx, edi
// 007960ef  e85c890700           call 0x80ea50
// 007960f4  85c0                 test eax, eax
// 007960f6  740d                 je 0x796105
// 007960f8  83c9ff               or ecx, 0xffffffff
// 007960fb  2b8e60060000         sub ecx, dword ptr [esi + 0x660]
// 00796101  014c2434             add dword ptr [esp + 0x34], ecx
// 00796105  6afe                 push -2
// 00796107  6afe                 push -2
// 00796109  8d542434             lea edx, [esp + 0x34]
// 0079610d  52                   push edx
// 0079610e  ff15bced8900         call dword ptr [0x89edbc]
// 00796114  8b8e74060000         mov ecx, dword ptr [esi + 0x674]
// 0079611a  8b4500               mov eax, dword ptr [ebp]
// 0079611d  8b5038               mov edx, dword ptr [eax + 0x38]
// 00796120  51                   push ecx
// 00796121  8bcd                 mov ecx, ebp
// 00796123  ffd2                 call edx
// 00796125  8b7500               mov esi, dword ptr [ebp]
// 00796128  6825880000           push 0x8825
// 0079612d  8d442430             lea eax, [esp + 0x30]
// 00796131  50                   push eax
// 00796132  8d8c2498000000       lea ecx, [esp + 0x98]
// 00796139  ff1554fb8900         call dword ptr [0x89fb54]
// 0079613f  50                   push eax
// 00796140  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00796147  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0079614d  8b5670               mov edx, dword ptr [esi + 0x70]
// 00796150  50                   push eax
// 00796151  8bcd                 mov ecx, ebp
// 00796153  ffd2                 call edx
// 00796155  8d4c245c             lea ecx, [esp + 0x5c]
// 00796159  c684248400000000     mov byte ptr [esp + 0x84], 0
// 00796161  e87aa7fdff           call 0x7708e0
// 00796166  8d8c2490000000       lea ecx, [esp + 0x90]
// 0079616d  ff1510fd8900         call dword ptr [0x89fd10]
// 00796173  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00796177  64890d00000000       mov dword ptr fs:[0], ecx
// 0079617e  59                   pop ecx
// 0079617f  5f                   pop edi
// 00796180  5e                   pop esi
// 00796181  5d                   pop ebp
// 00796182  5b                   pop ebx
// 00796183  83c474               add esp, 0x74
// 00796186  c20800               ret 8
// copied from an identical function in another client (function ?DrawGroup@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonGroup@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp