// roc 2010-06 0082d7d0  unit: CXTPRibbonTheme  size: 649 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082d7d0
//
// 0082d7d0  6aff                 push -1
// 0082d7d2  68a15e9b00           push 0x9b5ea1
// 0082d7d7  64a100000000         mov eax, dword ptr fs:[0]
// 0082d7dd  50                   push eax
// 0082d7de  83ec68               sub esp, 0x68
// 0082d7e1  53                   push ebx
// 0082d7e2  55                   push ebp
// 0082d7e3  56                   push esi
// 0082d7e4  57                   push edi
// 0082d7e5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0082d7ea  33c4                 xor eax, esp
// 0082d7ec  50                   push eax
// 0082d7ed  8d44247c             lea eax, [esp + 0x7c]
// 0082d7f1  64a300000000         mov dword ptr fs:[0], eax
// 0082d7f7  8be9                 mov ebp, ecx
// 0082d7f9  896c2418             mov dword ptr [esp + 0x18], ebp
// 0082d7fd  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 0082d804  8b7740               mov esi, dword ptr [edi + 0x40]
// 0082d807  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0082d80a  8b573c               mov edx, dword ptr [edi + 0x3c]
// 0082d80d  8b5f38               mov ebx, dword ptr [edi + 0x38]
// 0082d810  8bc6                 mov eax, esi
// 0082d812  2b8560060000         sub eax, dword ptr [ebp + 0x660]
// 0082d818  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0082d81c  89442448             mov dword ptr [esp + 0x48], eax
// 0082d820  89442420             mov dword ptr [esp + 0x20], eax
// 0082d824  8b4770               mov eax, dword ptr [edi + 0x70]
// 0082d827  895c2440             mov dword ptr [esp + 0x40], ebx
// 0082d82b  89542444             mov dword ptr [esp + 0x44], edx
// 0082d82f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0082d833  89542424             mov dword ptr [esp + 0x24], edx
// 0082d837  89742428             mov dword ptr [esp + 0x28], esi
// 0082d83b  85c0                 test eax, eax
// 0082d83d  0f8500020000         jne 0x82da43
// 0082d843  8bcf                 mov ecx, edi
// 0082d845  e8c60a0700           call 0x89e310
// 0082d84a  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 0082d851  8bcd                 mov ecx, ebp
// 0082d853  7511                 jne 0x82d866
// 0082d855  68345ca600           push 0xa65c34
// 0082d85a  e8a1490000           call 0x832200
// 0082d85f  68205ca600           push 0xa65c20
// 0082d864  eb0f                 jmp 0x82d875
// 0082d866  68085ca600           push 0xa65c08
// 0082d86b  e890490000           call 0x832200
// 0082d870  68f05ba600           push 0xa65bf0
// 0082d875  8bcd                 mov ecx, ebp
// 0082d877  8bd8                 mov ebx, eax
// 0082d879  e882490000           call 0x832200
// 0082d87e  8bcf                 mov ecx, edi
// 0082d880  89442414             mov dword ptr [esp + 0x14], eax
// 0082d884  e8970a0700           call 0x89e320
// 0082d889  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 0082d890  8bf0                 mov esi, eax
// 0082d892  f7de                 neg esi
// 0082d894  1bf6                 sbb esi, esi
// 0082d896  f7de                 neg esi
// 0082d898  85db                 test ebx, ebx
// 0082d89a  744c                 je 0x82d8e8
// 0082d89c  6a02                 push 2
// 0082d89e  56                   push esi
// 0082d89f  8d442454             lea eax, [esp + 0x54]
// 0082d8a3  50                   push eax
// 0082d8a4  8bcb                 mov ecx, ebx
// 0082d8a6  e885720600           call 0x894b30
// 0082d8ab  83ec10               sub esp, 0x10
// 0082d8ae  8bcc                 mov ecx, esp
// 0082d8b0  ba05000000           mov edx, 5
// 0082d8b5  8911                 mov dword ptr [ecx], edx
// 0082d8b7  895104               mov dword ptr [ecx + 4], edx
// 0082d8ba  895108               mov dword ptr [ecx + 8], edx
// 0082d8bd  89510c               mov dword ptr [ecx + 0xc], edx
// 0082d8c0  8b10                 mov edx, dword ptr [eax]
// 0082d8c2  83ec10               sub esp, 0x10
// 0082d8c5  8bcc                 mov ecx, esp
// 0082d8c7  8911                 mov dword ptr [ecx], edx
// 0082d8c9  8b5004               mov edx, dword ptr [eax + 4]
// 0082d8cc  895104               mov dword ptr [ecx + 4], edx
// 0082d8cf  8b5008               mov edx, dword ptr [eax + 8]
// 0082d8d2  8b400c               mov eax, dword ptr [eax + 0xc]
// 0082d8d5  895108               mov dword ptr [ecx + 8], edx
// 0082d8d8  89410c               mov dword ptr [ecx + 0xc], eax
// 0082d8db  8d4c245c             lea ecx, [esp + 0x5c]
// 0082d8df  51                   push ecx
// 0082d8e0  55                   push ebp
// 0082d8e1  8bcb                 mov ecx, ebx
// 0082d8e3  e8186b0600           call 0x894400
// 0082d8e8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082d8ec  85c9                 test ecx, ecx
// 0082d8ee  7452                 je 0x82d942
// 0082d8f0  6a02                 push 2
// 0082d8f2  56                   push esi
// 0082d8f3  8d542474             lea edx, [esp + 0x74]
// 0082d8f7  bb05000000           mov ebx, 5
// 0082d8fc  52                   push edx
// 0082d8fd  895c2464             mov dword ptr [esp + 0x64], ebx
// 0082d901  e82a720600           call 0x894b30
// 0082d906  83ec10               sub esp, 0x10
// 0082d909  8bcc                 mov ecx, esp
// 0082d90b  8919                 mov dword ptr [ecx], ebx
// 0082d90d  8bd3                 mov edx, ebx
// 0082d90f  895104               mov dword ptr [ecx + 4], edx
// 0082d912  895108               mov dword ptr [ecx + 8], edx
// 0082d915  89510c               mov dword ptr [ecx + 0xc], edx
// 0082d918  8b10                 mov edx, dword ptr [eax]
// 0082d91a  83ec10               sub esp, 0x10
// 0082d91d  8bcc                 mov ecx, esp
// 0082d91f  8911                 mov dword ptr [ecx], edx
// 0082d921  8b5004               mov edx, dword ptr [eax + 4]
// 0082d924  895104               mov dword ptr [ecx + 4], edx
// 0082d927  8b5008               mov edx, dword ptr [eax + 8]
// 0082d92a  8b400c               mov eax, dword ptr [eax + 0xc]
// 0082d92d  895108               mov dword ptr [ecx + 8], edx
// 0082d930  89410c               mov dword ptr [ecx + 0xc], eax
// 0082d933  8d4c243c             lea ecx, [esp + 0x3c]
// 0082d937  51                   push ecx
// 0082d938  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0082d93c  55                   push ebp
// 0082d93d  e8be6a0600           call 0x894400
// 0082d942  8d942490000000       lea edx, [esp + 0x90]
// 0082d949  52                   push edx
// 0082d94a  8bcf                 mov ecx, edi
// 0082d94c  e8ef470500           call 0x882140
// 0082d951  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 0082d95c  e89f39fdff           call 0x801300
// 0082d961  8d842490000000       lea eax, [esp + 0x90]
// 0082d968  50                   push eax
// 0082d969  e8f209fdff           call 0x7fe360
// 0082d96e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0082d972  83c404               add esp, 4
// 0082d975  8d8e54060000         lea ecx, [esi + 0x654]
// 0082d97b  51                   push ecx
// 0082d97c  55                   push ebp
// 0082d97d  8d4c2464             lea ecx, [esp + 0x64]
// 0082d981  e81a1dfdff           call 0x7ff6a0
// 0082d986  8b442420             mov eax, dword ptr [esp + 0x20]
// 0082d98a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0082d98e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0082d992  6aff                 push -1
// 0082d994  89442434             mov dword ptr [esp + 0x34], eax
// 0082d998  89542430             mov dword ptr [esp + 0x30], edx
// 0082d99c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0082d9a0  6a00                 push 0
// 0082d9a2  8d442434             lea eax, [esp + 0x34]
// 0082d9a6  50                   push eax
// 0082d9a7  c684249000000001     mov byte ptr [esp + 0x90], 1
// 0082d9af  894c2440             mov dword ptr [esp + 0x40], ecx
// 0082d9b3  89542444             mov dword ptr [esp + 0x44], edx
// 0082d9b7  ff1540bc9e00         call dword ptr [0x9ebc40]
// 0082d9bd  8bcf                 mov ecx, edi
// 0082d9bf  e88c090700           call 0x89e350
// 0082d9c4  85c0                 test eax, eax
// 0082d9c6  740d                 je 0x82d9d5
// 0082d9c8  83c9ff               or ecx, 0xffffffff
// 0082d9cb  2b8e60060000         sub ecx, dword ptr [esi + 0x660]
// 0082d9d1  014c2434             add dword ptr [esp + 0x34], ecx
// 0082d9d5  6afe                 push -2
// 0082d9d7  6afe                 push -2
// 0082d9d9  8d542434             lea edx, [esp + 0x34]
// 0082d9dd  52                   push edx
// 0082d9de  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 0082d9e4  8b8e74060000         mov ecx, dword ptr [esi + 0x674]
// 0082d9ea  8b4500               mov eax, dword ptr [ebp]
// 0082d9ed  8b5038               mov edx, dword ptr [eax + 0x38]
// 0082d9f0  51                   push ecx
// 0082d9f1  8bcd                 mov ecx, ebp
// 0082d9f3  ffd2                 call edx
// 0082d9f5  8b7500               mov esi, dword ptr [ebp]
// 0082d9f8  6825880000           push 0x8825
// 0082d9fd  8d442430             lea eax, [esp + 0x30]
// 0082da01  50                   push eax
// 0082da02  8d8c2498000000       lea ecx, [esp + 0x98]
// 0082da09  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0082da0f  50                   push eax
// 0082da10  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0082da17  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0082da1d  8b5670               mov edx, dword ptr [esi + 0x70]
// 0082da20  50                   push eax
// 0082da21  8bcd                 mov ecx, ebp
// 0082da23  ffd2                 call edx
// 0082da25  8d4c245c             lea ecx, [esp + 0x5c]
// 0082da29  c684248400000000     mov byte ptr [esp + 0x84], 0
// 0082da31  e8ea1cfdff           call 0x7ff720
// 0082da36  8d8c2490000000       lea ecx, [esp + 0x90]
// 0082da3d  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0082da43  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0082da47  64890d00000000       mov dword ptr fs:[0], ecx
// 0082da4e  59                   pop ecx
// 0082da4f  5f                   pop edi
// 0082da50  5e                   pop esi
// 0082da51  5d                   pop ebp
// 0082da52  5b                   pop ebx
// 0082da53  83c474               add esp, 0x74
// 0082da56  c20800               ret 8
// copied from an identical function in another client (function ?DrawGroup@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonGroup@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp