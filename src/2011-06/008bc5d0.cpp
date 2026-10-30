// roc 2011-06 008bc5d0  unit: CXTPDockingPaneAutoHidePanel::PAVCAutoHidePanelTabManager::?$CArray  size: 852 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bc5d0
//
// 008bc5d0  6aff                 push -1
// 008bc5d2  68a8bba000           push 0xa0bba8
// 008bc5d7  64a100000000         mov eax, dword ptr fs:[0]
// 008bc5dd  50                   push eax
// 008bc5de  83ec5c               sub esp, 0x5c
// 008bc5e1  53                   push ebx
// 008bc5e2  55                   push ebp
// 008bc5e3  56                   push esi
// 008bc5e4  57                   push edi
// 008bc5e5  a12058c900           mov eax, dword ptr [0xc95820]
// 008bc5ea  33c4                 xor eax, esp
// 008bc5ec  50                   push eax
// 008bc5ed  8d442470             lea eax, [esp + 0x70]
// 008bc5f1  64a300000000         mov dword ptr fs:[0], eax
// 008bc5f7  8bf1                 mov esi, ecx
// 008bc5f9  89742414             mov dword ptr [esp + 0x14], esi
// 008bc5fd  e860071100           call 0x9ccd62
// 008bc602  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 008bc609  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008bc610  33c9                 xor ecx, ecx
// 008bc612  894c2478             mov dword ptr [esp + 0x78], ecx
// 008bc616  c706fc52ad00         mov dword ptr [esi], 0xad52fc
// 008bc61c  899ef8000000         mov dword ptr [esi + 0xf8], ebx
// 008bc622  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 008bc628  3bd9                 cmp ebx, ecx
// 008bc62a  0f84cc020000         je 0x8bc8fc
// 008bc630  398ba4010000         cmp dword ptr [ebx + 0x1a4], ecx
// 008bc636  0f84c0020000         je 0x8bc8fc
// 008bc63c  898e28010000         mov dword ptr [esi + 0x128], ecx
// 008bc642  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 008bc648  898600010000         mov dword ptr [esi + 0x100], eax
// 008bc64e  83f802               cmp eax, 2
// 008bc651  7409                 je 0x8bc65c
// 008bc653  83f803               cmp eax, 3
// 008bc656  7404                 je 0x8bc65c
// 008bc658  33c0                 xor eax, eax
// 008bc65a  eb05                 jmp 0x8bc661
// 008bc65c  b801000000           mov eax, 1
// 008bc661  8bce                 mov ecx, esi
// 008bc663  898604010000         mov dword ptr [esi + 0x104], eax
// 008bc669  e822e8ffff           call 0x8bae90
// 008bc66e  8bf8                 mov edi, eax
// 008bc670  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 008bc676  8bcf                 mov ecx, edi
// 008bc678  89842484000000       mov dword ptr [esp + 0x84], eax
// 008bc67f  e86c1af9ff           call 0x84e0f0
// 008bc684  8d4c2418             lea ecx, [esp + 0x18]
// 008bc688  51                   push ecx
// 008bc689  8bc8                 mov ecx, eax
// 008bc68b  e830560000           call 0x8c1cc0
// 008bc690  6a01                 push 1
// 008bc692  8d54244c             lea edx, [esp + 0x4c]
// 008bc696  52                   push edx
// 008bc697  8bce                 mov ecx, esi
// 008bc699  e8d2e9ffff           call 0x8bb070
// 008bc69e  8b8ba4010000         mov ecx, dword ptr [ebx + 0x1a4]
// 008bc6a4  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008bc6a7  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008bc6ab  83c004               add eax, 4
// 008bc6ae  3bd0                 cmp edx, eax
// 008bc6b0  8bda                 mov ebx, edx
// 008bc6b2  7c02                 jl 0x8bc6b6
// 008bc6b4  8bd8                 mov ebx, eax
// 008bc6b6  395c2464             cmp dword ptr [esp + 0x64], ebx
// 008bc6ba  7e06                 jle 0x8bc6c2
// 008bc6bc  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 008bc6c0  eb08                 jmp 0x8bc6ca
// 008bc6c2  3bd0                 cmp edx, eax
// 008bc6c4  8bea                 mov ebp, edx
// 008bc6c6  7c02                 jl 0x8bc6ca
// 008bc6c8  8be8                 mov ebp, eax
// 008bc6ca  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 008bc6cd  8d4104               lea eax, [ecx + 4]
// 008bc6d0  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008bc6d4  3bc8                 cmp ecx, eax
// 008bc6d6  8bd1                 mov edx, ecx
// 008bc6d8  7c02                 jl 0x8bc6dc
// 008bc6da  8bd0                 mov edx, eax
// 008bc6dc  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 008bc6e0  3bda                 cmp ebx, edx
// 008bc6e2  7f08                 jg 0x8bc6ec
// 008bc6e4  3bc8                 cmp ecx, eax
// 008bc6e6  8bd9                 mov ebx, ecx
// 008bc6e8  7c02                 jl 0x8bc6ec
// 008bc6ea  8bd8                 mov ebx, eax
// 008bc6ec  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008bc6f2  50                   push eax
// 008bc6f3  8bcf                 mov ecx, edi
// 008bc6f5  e8461af9ff           call 0x84e140
// 008bc6fa  83f803               cmp eax, 3
// 008bc6fd  7735                 ja 0x8bc734
// 008bc6ff  ff248514c98b00       jmp dword ptr [eax*4 + 0x8bc914]
// 008bc706  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008bc70a  03d9                 add ebx, ecx
// 008bc70c  895c2420             mov dword ptr [esp + 0x20], ebx
// 008bc710  eb22                 jmp 0x8bc734
// 008bc712  8b542420             mov edx, dword ptr [esp + 0x20]
// 008bc716  2bd3                 sub edx, ebx
// 008bc718  89542418             mov dword ptr [esp + 0x18], edx
// 008bc71c  eb16                 jmp 0x8bc734
// 008bc71e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008bc722  03e8                 add ebp, eax
// 008bc724  896c2424             mov dword ptr [esp + 0x24], ebp
// 008bc728  eb0a                 jmp 0x8bc734
// 008bc72a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008bc72e  2bcd                 sub ecx, ebp
// 008bc730  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008bc734  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 008bc73b  8d542418             lea edx, [esp + 0x18]
// 008bc73f  52                   push edx
// 008bc740  8bcb                 mov ecx, ebx
// 008bc742  e8bfe8f4ff           call 0x80b006
// 008bc747  8d442428             lea eax, [esp + 0x28]
// 008bc74b  50                   push eax
// 008bc74c  8d4c243c             lea ecx, [esp + 0x3c]
// 008bc750  51                   push ecx
// 008bc751  8bce                 mov ecx, esi
// 008bc753  e868f2ffff           call 0x8bb9c0
// 008bc758  85c0                 test eax, eax
// 008bc75a  742b                 je 0x8bc787
// 008bc75c  83bff400000000       cmp dword ptr [edi + 0xf4], 0
// 008bc763  7522                 jne 0x8bc787
// 008bc765  e8d637fcff           call 0x87ff40
// 008bc76a  8b10                 mov edx, dword ptr [eax]
// 008bc76c  8b5218               mov edx, dword ptr [edx + 0x18]
// 008bc76f  33c9                 xor ecx, ecx
// 008bc771  398e04010000         cmp dword ptr [esi + 0x104], ecx
// 008bc777  0f95c1               setne cl
// 008bc77a  81c1f2260000         add ecx, 0x26f2
// 008bc780  51                   push ecx
// 008bc781  8bc8                 mov ecx, eax
// 008bc783  ffd2                 call edx
// 008bc785  eb12                 jmp 0x8bc799
// 008bc787  e890dbf4ff           call 0x80a31c
// 008bc78c  68007f0000           push 0x7f00
// 008bc791  6a00                 push 0
// 008bc793  ff15081aa400         call dword ptr [0xa41a08]
// 008bc799  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008bc79d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008bc7a1  6a00                 push 0
// 008bc7a3  898e14010000         mov dword ptr [esi + 0x114], ecx
// 008bc7a9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008bc7ad  53                   push ebx
// 008bc7ae  899618010000         mov dword ptr [esi + 0x118], edx
// 008bc7b4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008bc7b8  898e1c010000         mov dword ptr [esi + 0x11c], ecx
// 008bc7be  8d4c2420             lea ecx, [esp + 0x20]
// 008bc7c2  51                   push ecx
// 008bc7c3  6800000046           push 0x46000000
// 008bc7c8  68cabea500           push 0xa5beca
// 008bc7cd  6a00                 push 0
// 008bc7cf  6a00                 push 0
// 008bc7d1  50                   push eax
// 008bc7d2  6a00                 push 0
// 008bc7d4  899620010000         mov dword ptr [esi + 0x120], edx
// 008bc7da  e84be2f4ff           call 0x80aa2a
// 008bc7df  50                   push eax
// 008bc7e0  8bcb                 mov ecx, ebx
// 008bc7e2  e837fe1000           call 0x9cc61e
// 008bc7e7  2500004000           and eax, 0x400000
// 008bc7ec  50                   push eax
// 008bc7ed  8bce                 mov ecx, esi
// 008bc7ef  e868051100           call 0x9ccd5c
// 008bc7f4  d9ee                 fldz 
// 008bc7f6  bb01000000           mov ebx, 1
// 008bc7fb  d9c0                 fld st(0)
// 008bc7fd  c7860801000000000000 mov dword ptr [esi + 0x108], 0
// 008bc807  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 008bc80d  dd052093c900         fld qword ptr [0xc99320]
// 008bc813  dde1                 fucom st(1)
// 008bc815  dfe0                 fnstsw ax
// 008bc817  ddd9                 fstp st(1)
// 008bc819  f6c444               test ah, 0x44
// 008bc81c  7b76                 jnp 0x8bc894
// 008bc81e  8b0d2893c900         mov ecx, dword ptr [0xc99328]
// 008bc824  85c9                 test ecx, ecx
// 008bc826  746c                 je 0x8bc894
// 008bc828  d8d1                 fcom st(1)
// 008bc82a  dfe0                 fnstsw ax
// 008bc82c  ddd9                 fstp st(1)
// 008bc82e  f6c441               test ah, 0x41
// 008bc831  7551                 jne 0x8bc884
// 008bc833  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 008bc83a  7415                 je 0x8bc851
// 008bc83c  8b961c010000         mov edx, dword ptr [esi + 0x11c]
// 008bc842  2b9614010000         sub edx, dword ptr [esi + 0x114]
// 008bc848  89942484000000       mov dword ptr [esp + 0x84], edx
// 008bc84f  eb13                 jmp 0x8bc864
// 008bc851  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008bc857  2b8618010000         sub eax, dword ptr [esi + 0x118]
// 008bc85d  89842484000000       mov dword ptr [esp + 0x84], eax
// 008bc864  da8c2484000000       fimul dword ptr [esp + 0x84]
// 008bc86b  dc0da088a800         fmul qword ptr [0xa888a0]
// 008bc871  da352893c900         fidiv dword ptr [0xc99328]
// 008bc877  e8b4ecf4ff           call 0x80b530
// 008bc87c  89860c010000         mov dword ptr [esi + 0x10c], eax
// 008bc882  eb14                 jmp 0x8bc898
// 008bc884  a12c93c900           mov eax, dword ptr [0xc9932c]
// 008bc889  99                   cdq 
// 008bc88a  f7f9                 idiv ecx
// 008bc88c  89860c010000         mov dword ptr [esi + 0x10c], eax
// 008bc892  eb02                 jmp 0x8bc896
// 008bc894  ddd8                 fstp st(0)
// 008bc896  ddd8                 fstp st(0)
// 008bc898  399e0c010000         cmp dword ptr [esi + 0x10c], ebx
// 008bc89e  7d06                 jge 0x8bc8a6
// 008bc8a0  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 008bc8a6  399e0c010000         cmp dword ptr [esi + 0x10c], ebx
// 008bc8ac  8b3d741ca400         mov edi, dword ptr [0xa41c74]
// 008bc8b2  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 008bc8bc  7e11                 jle 0x8bc8cf
// 008bc8be  8b0d2893c900         mov ecx, dword ptr [0xc99328]
// 008bc8c4  8b5620               mov edx, dword ptr [esi + 0x20]
// 008bc8c7  6a00                 push 0
// 008bc8c9  51                   push ecx
// 008bc8ca  6a02                 push 2
// 008bc8cc  52                   push edx
// 008bc8cd  ffd7                 call edi
// 008bc8cf  8bce                 mov ecx, esi
// 008bc8d1  e83ae8ffff           call 0x8bb110
// 008bc8d6  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 008bc8dc  6a05                 push 5
// 008bc8de  e863daf4ff           call 0x80a346
// 008bc8e3  a13893c900           mov eax, dword ptr [0xc99338]
// 008bc8e8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008bc8eb  6a00                 push 0
// 008bc8ed  50                   push eax
// 008bc8ee  53                   push ebx
// 008bc8ef  51                   push ecx
// 008bc8f0  ffd7                 call edi
// 008bc8f2  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 008bc8fc  8bc6                 mov eax, esi
// 008bc8fe  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008bc902  64890d00000000       mov dword ptr fs:[0], ecx
// 008bc909  59                   pop ecx
// 008bc90a  5f                   pop edi
// 008bc90b  5e                   pop esi
// 008bc90c  5d                   pop ebp
// 008bc90d  5b                   pop ebx
// 008bc90e  83c468               add esp, 0x68
// 008bc911  c20800               ret 8
// 008bc914  06                   push es
// copied from an identical function in another client (function ??0CXTPDockingPaneAutoHideWnd@@AAE@PAVCXTPDockingPaneAutoHidePanel@@PAVCXTPDockingPaneTabbedContainer@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp