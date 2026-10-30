// roc 2009-12 008bdb50  unit: CXTPDockingPaneContext  size: 566 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bdb50
//
// 008bdb50  6aff                 push -1
// 008bdb52  68083c9600           push 0x963c08
// 008bdb57  64a100000000         mov eax, dword ptr fs:[0]
// 008bdb5d  50                   push eax
// 008bdb5e  83ec2c               sub esp, 0x2c
// 008bdb61  53                   push ebx
// 008bdb62  55                   push ebp
// 008bdb63  56                   push esi
// 008bdb64  57                   push edi
// 008bdb65  a10052b600           mov eax, dword ptr [0xb65200]
// 008bdb6a  33c4                 xor eax, esp
// 008bdb6c  50                   push eax
// 008bdb6d  8d442440             lea eax, [esp + 0x40]
// 008bdb71  64a300000000         mov dword ptr fs:[0], eax
// 008bdb77  8bf1                 mov esi, ecx
// 008bdb79  83c8ff               or eax, 0xffffffff
// 008bdb7c  33db                 xor ebx, ebx
// 008bdb7e  39442454             cmp dword ptr [esp + 0x54], eax
// 008bdb82  750b                 jne 0x8bdb8f
// 008bdb84  39442458             cmp dword ptr [esp + 0x58], eax
// 008bdb88  7505                 jne 0x8bdb8f
// 008bdb8a  8d4301               lea eax, [ebx + 1]
// 008bdb8d  eb02                 jmp 0x8bdb91
// 008bdb8f  33c0                 xor eax, eax
// 008bdb91  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 008bdb95  898624010000         mov dword ptr [esi + 0x124], eax
// 008bdb9b  8d442414             lea eax, [esp + 0x14]
// 008bdb9f  50                   push eax
// 008bdba0  8bcd                 mov ecx, ebp
// 008bdba2  e8f92bffff           call 0x8b07a0
// 008bdba7  399e24010000         cmp dword ptr [esi + 0x124], ebx
// 008bdbad  7427                 je 0x8bdbd6
// 008bdbaf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008bdbb3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008bdbb7  8d040a               lea eax, [edx + ecx]
// 008bdbba  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008bdbbe  99                   cdq 
// 008bdbbf  83c10f               add ecx, 0xf
// 008bdbc2  2bc2                 sub eax, edx
// 008bdbc4  d1f8                 sar eax, 1
// 008bdbc6  51                   push ecx
// 008bdbc7  50                   push eax
// 008bdbc8  8944245c             mov dword ptr [esp + 0x5c], eax
// 008bdbcc  894c2460             mov dword ptr [esp + 0x60], ecx
// 008bdbd0  ff1524ca9800         call dword ptr [0x98ca24]
// 008bdbd6  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008bdbda  8b442454             mov eax, dword ptr [esp + 0x54]
// 008bdbde  51                   push ecx
// 008bdbdf  50                   push eax
// 008bdbe0  8986ec000000         mov dword ptr [esi + 0xec], eax
// 008bdbe6  8986f4000000         mov dword ptr [esi + 0xf4], eax
// 008bdbec  8d44241c             lea eax, [esp + 0x1c]
// 008bdbf0  50                   push eax
// 008bdbf1  898ef0000000         mov dword ptr [esi + 0xf0], ecx
// 008bdbf7  898ef8000000         mov dword ptr [esi + 0xf8], ecx
// 008bdbfd  e84ee5ffff           call 0x8bc150
// 008bdc02  8b442420             mov eax, dword ptr [esp + 0x20]
// 008bdc06  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008bdc0a  8b542428             mov edx, dword ptr [esp + 0x28]
// 008bdc0e  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008bdc12  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 008bdc18  89860c010000         mov dword ptr [esi + 0x10c], eax
// 008bdc1e  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008bdc24  898e00010000         mov dword ptr [esi + 0x100], ecx
// 008bdc2a  898e10010000         mov dword ptr [esi + 0x110], ecx
// 008bdc30  899604010000         mov dword ptr [esi + 0x104], edx
// 008bdc36  899614010000         mov dword ptr [esi + 0x114], edx
// 008bdc3c  ba01000000           mov edx, 1
// 008bdc41  83c40c               add esp, 0xc
// 008bdc44  89ae20010000         mov dword ptr [esi + 0x120], ebp
// 008bdc4a  89be08010000         mov dword ptr [esi + 0x108], edi
// 008bdc50  89be18010000         mov dword ptr [esi + 0x118], edi
// 008bdc56  899e8c010000         mov dword ptr [esi + 0x18c], ebx
// 008bdc5c  899e2c010000         mov dword ptr [esi + 0x12c], ebx
// 008bdc62  899e40010000         mov dword ptr [esi + 0x140], ebx
// 008bdc68  899e44010000         mov dword ptr [esi + 0x144], ebx
// 008bdc6e  899648010000         mov dword ptr [esi + 0x148], edx
// 008bdc74  89964c010000         mov dword ptr [esi + 0x14c], edx
// 008bdc7a  3998f8000000         cmp dword ptr [eax + 0xf8], ebx
// 008bdc80  740c                 je 0x8bdc8e
// 008bdc82  399eac000000         cmp dword ptr [esi + 0xac], ebx
// 008bdc88  7404                 je 0x8bdc8e
// 008bdc8a  8bca                 mov ecx, edx
// 008bdc8c  eb02                 jmp 0x8bdc90
// 008bdc8e  33c9                 xor ecx, ecx
// 008bdc90  898eb4000000         mov dword ptr [esi + 0xb4], ecx
// 008bdc96  3998fc000000         cmp dword ptr [eax + 0xfc], ebx
// 008bdc9c  7408                 je 0x8bdca6
// 008bdc9e  3bcb                 cmp ecx, ebx
// 008bdca0  7404                 je 0x8bdca6
// 008bdca2  8bc2                 mov eax, edx
// 008bdca4  eb02                 jmp 0x8bdca8
// 008bdca6  33c0                 xor eax, eax
// 008bdca8  6a0a                 push 0xa
// 008bdcaa  8d4c2428             lea ecx, [esp + 0x28]
// 008bdcae  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 008bdcb4  e807baf7ff           call 0x8396c0
// 008bdcb9  8b5500               mov edx, dword ptr [ebp]
// 008bdcbc  8b520c               mov edx, dword ptr [edx + 0xc]
// 008bdcbf  8d442424             lea eax, [esp + 0x24]
// 008bdcc3  50                   push eax
// 008bdcc4  53                   push ebx
// 008bdcc5  8bcd                 mov ecx, ebp
// 008bdcc7  895c2450             mov dword ptr [esp + 0x50], ebx
// 008bdccb  ffd2                 call edx
// 008bdccd  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008bdcd1  3beb                 cmp ebp, ebx
// 008bdcd3  7452                 je 0x8bdd27
// 008bdcd5  8bc5                 mov eax, ebp
// 008bdcd7  8b4008               mov eax, dword ptr [eax + 8]
// 008bdcda  8b6d00               mov ebp, dword ptr [ebp]
// 008bdcdd  3bc3                 cmp eax, ebx
// 008bdcdf  7405                 je 0x8bdce6
// 008bdce1  8d78e0               lea edi, [eax - 0x20]
// 008bdce4  eb02                 jmp 0x8bdce8
// 008bdce6  33ff                 xor edi, edi
// 008bdce8  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008bdcee  53                   push ebx
// 008bdcef  53                   push ebx
// 008bdcf0  57                   push edi
// 008bdcf1  53                   push ebx
// 008bdcf2  e829a8f7ff           call 0x838520
// 008bdcf7  85c0                 test eax, eax
// 008bdcf9  7406                 je 0x8bdd01
// 008bdcfb  899e48010000         mov dword ptr [esi + 0x148], ebx
// 008bdd01  8bcf                 mov ecx, edi
// 008bdd03  e878eef9ff           call 0x85cb80
// 008bdd08  a804                 test al, 4
// 008bdd0a  7406                 je 0x8bdd12
// 008bdd0c  899e48010000         mov dword ptr [esi + 0x148], ebx
// 008bdd12  8bcf                 mov ecx, edi
// 008bdd14  e867eef9ff           call 0x85cb80
// 008bdd19  a820                 test al, 0x20
// 008bdd1b  7406                 je 0x8bdd23
// 008bdd1d  899e4c010000         mov dword ptr [esi + 0x14c], ebx
// 008bdd23  3beb                 cmp ebp, ebx
// 008bdd25  75ae                 jne 0x8bdcd5
// 008bdd27  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008bdd2d  3998bc000000         cmp dword ptr [eax + 0xbc], ebx
// 008bdd33  7418                 je 0x8bdd4d
// 008bdd35  e8e45df3ff           call 0x7f3b1e
// 008bdd3a  68867f0000           push 0x7f86
// 008bdd3f  53                   push ebx
// 008bdd40  ff1548ca9800         call dword ptr [0x98ca48]
// 008bdd46  50                   push eax
// 008bdd47  ff1520ca9800         call dword ptr [0x98ca20]
// 008bdd4d  8b16                 mov edx, dword ptr [esi]
// 008bdd4f  8b4214               mov eax, dword ptr [edx + 0x14]
// 008bdd52  8bce                 mov ecx, esi
// 008bdd54  ffd0                 call eax
// 008bdd56  8b16                 mov edx, dword ptr [esi]
// 008bdd58  8b420c               mov eax, dword ptr [edx + 0xc]
// 008bdd5b  8bce                 mov ecx, esi
// 008bdd5d  ffd0                 call eax
// 008bdd5f  8d4c2424             lea ecx, [esp + 0x24]
// 008bdd63  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008bdd6b  e880b9f7ff           call 0x8396f0
// 008bdd70  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008bdd74  64890d00000000       mov dword ptr fs:[0], ecx
// 008bdd7b  59                   pop ecx
// 008bdd7c  5f                   pop edi
// 008bdd7d  5e                   pop esi
// 008bdd7e  5d                   pop ebp
// 008bdd7f  5b                   pop ebx
// 008bdd80  83c438               add esp, 0x38
// 008bdd83  c20c00               ret 0xc
// copied from an identical function in another client (function ?Drag@CXTPDockingPaneContext@@UAEXPAVCXTPDockingPaneBase@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneContext.cpp