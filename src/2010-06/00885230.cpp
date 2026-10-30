// roc 2010-06 00885230  unit: CXTPTabPaintManager  size: 881 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00885230
//
// 00885230  6aff                 push -1
// 00885232  6848b09b00           push 0x9bb048
// 00885237  64a100000000         mov eax, dword ptr fs:[0]
// 0088523d  50                   push eax
// 0088523e  83ec18               sub esp, 0x18
// 00885241  53                   push ebx
// 00885242  55                   push ebp
// 00885243  56                   push esi
// 00885244  57                   push edi
// 00885245  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0088524a  33c4                 xor eax, esp
// 0088524c  50                   push eax
// 0088524d  8d44242c             lea eax, [esp + 0x2c]
// 00885251  64a300000000         mov dword ptr fs:[0], eax
// 00885257  8bf1                 mov esi, ecx
// 00885259  89742414             mov dword ptr [esp + 0x14], esi
// 0088525d  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00885261  6a00                 push 0
// 00885263  6a5c                 push 0x5c
// 00885265  8bcd                 mov ecx, ebp
// 00885267  ff1578c69e00         call dword ptr [0x9ec678]
// 0088526d  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00885271  83f8ff               cmp eax, -1
// 00885274  7431                 je 0x8852a7
// 00885276  8b442454             mov eax, dword ptr [esp + 0x54]
// 0088527a  8b37                 mov esi, dword ptr [edi]
// 0088527c  0d00400000           or eax, 0x4000
// 00885281  50                   push eax
// 00885282  8d4c2448             lea ecx, [esp + 0x48]
// 00885286  51                   push ecx
// 00885287  8bcd                 mov ecx, ebp
// 00885289  83c670               add esi, 0x70
// 0088528c  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00885292  50                   push eax
// 00885293  8bcd                 mov ecx, ebp
// 00885295  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0088529b  8b16                 mov edx, dword ptr [esi]
// 0088529d  50                   push eax
// 0088529e  8bcf                 mov ecx, edi
// 008852a0  ffd2                 call edx
// 008852a2  e9e4020000           jmp 0x88558b
// 008852a7  8b4f08               mov ecx, dword ptr [edi + 8]
// 008852aa  8d44241c             lea eax, [esp + 0x1c]
// 008852ae  50                   push eax
// 008852af  6a03                 push 3
// 008852b1  68a8dda400           push 0xa4dda8
// 008852b6  51                   push ecx
// 008852b7  ff1594a19e00         call dword ptr [0x9ea194]
// 008852bd  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008852c1  53                   push ebx
// 008852c2  55                   push ebp
// 008852c3  57                   push edi
// 008852c4  8bce                 mov ecx, esi
// 008852c6  e895feffff           call 0x885160
// 008852cb  8bf0                 mov esi, eax
// 008852cd  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008852d1  2b442444             sub eax, dword ptr [esp + 0x44]
// 008852d5  3bf0                 cmp esi, eax
// 008852d7  7f28                 jg 0x885301
// 008852d9  8b37                 mov esi, dword ptr [edi]
// 008852db  53                   push ebx
// 008852dc  8d542448             lea edx, [esp + 0x48]
// 008852e0  52                   push edx
// 008852e1  8bcd                 mov ecx, ebp
// 008852e3  83c670               add esi, 0x70
// 008852e6  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008852ec  50                   push eax
// 008852ed  8bcd                 mov ecx, ebp
// 008852ef  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008852f5  50                   push eax
// 008852f6  8b06                 mov eax, dword ptr [esi]
// 008852f8  8bcf                 mov ecx, edi
// 008852fa  ffd0                 call eax
// 008852fc  e98a020000           jmp 0x88558b
// 00885301  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00885305  3bc1                 cmp eax, ecx
// 00885307  7f1b                 jg 0x885324
// 00885309  8b17                 mov edx, dword ptr [edi]
// 0088530b  8b5270               mov edx, dword ptr [edx + 0x70]
// 0088530e  53                   push ebx
// 0088530f  8d442448             lea eax, [esp + 0x48]
// 00885313  50                   push eax
// 00885314  6a03                 push 3
// 00885316  68a8dda400           push 0xa4dda8
// 0088531b  8bcf                 mov ecx, edi
// 0088531d  ffd2                 call edx
// 0088531f  e967020000           jmp 0x88558b
// 00885324  2bc1                 sub eax, ecx
// 00885326  8bd8                 mov ebx, eax
// 00885328  8bcd                 mov ecx, ebp
// 0088532a  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0088532e  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00885334  0fafc3               imul eax, ebx
// 00885337  99                   cdq 
// 00885338  f7fe                 idiv esi
// 0088533a  8d4c2418             lea ecx, [esp + 0x18]
// 0088533e  8bf0                 mov esi, eax
// 00885340  99                   cdq 
// 00885341  2bc2                 sub eax, edx
// 00885343  8bd8                 mov ebx, eax
// 00885345  d1fb                 sar ebx, 1
// 00885347  8bc6                 mov eax, esi
// 00885349  2bc3                 sub eax, ebx
// 0088534b  50                   push eax
// 0088534c  51                   push ecx
// 0088534d  8bcd                 mov ecx, ebp
// 0088534f  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 00885355  53                   push ebx
// 00885356  8d542444             lea edx, [esp + 0x44]
// 0088535a  52                   push edx
// 0088535b  8bcd                 mov ecx, ebp
// 0088535d  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00885365  ff15a0c89e00         call dword ptr [0x9ec8a0]
// 0088536b  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0088536f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00885373  53                   push ebx
// 00885374  8d442444             lea eax, [esp + 0x44]
// 00885378  50                   push eax
// 00885379  57                   push edi
// 0088537a  c644244001           mov byte ptr [esp + 0x40], 1
// 0088537f  e8dcfdffff           call 0x885160
// 00885384  53                   push ebx
// 00885385  8d4c241c             lea ecx, [esp + 0x1c]
// 00885389  51                   push ecx
// 0088538a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088538e  57                   push edi
// 0088538f  89442428             mov dword ptr [esp + 0x28], eax
// 00885393  e8c8fdffff           call 0x885160
// 00885398  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088539c  03c8                 add ecx, eax
// 0088539e  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 008853a2  0f8da0000000         jge 0x885448
// 008853a8  46                   inc esi
// 008853a9  8bc6                 mov eax, esi
// 008853ab  99                   cdq 
// 008853ac  2bc2                 sub eax, edx
// 008853ae  8bd8                 mov ebx, eax
// 008853b0  d1fb                 sar ebx, 1
// 008853b2  8bd6                 mov edx, esi
// 008853b4  2bd3                 sub edx, ebx
// 008853b6  52                   push edx
// 008853b7  8d442420             lea eax, [esp + 0x20]
// 008853bb  50                   push eax
// 008853bc  8bcd                 mov ecx, ebp
// 008853be  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 008853c4  50                   push eax
// 008853c5  8d4c241c             lea ecx, [esp + 0x1c]
// 008853c9  c644243802           mov byte ptr [esp + 0x38], 2
// 008853ce  ff1580c59e00         call dword ptr [0x9ec580]
// 008853d4  8d4c241c             lea ecx, [esp + 0x1c]
// 008853d8  c644243401           mov byte ptr [esp + 0x34], 1
// 008853dd  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008853e3  53                   push ebx
// 008853e4  8d4c2428             lea ecx, [esp + 0x28]
// 008853e8  51                   push ecx
// 008853e9  8bcd                 mov ecx, ebp
// 008853eb  ff15a0c89e00         call dword ptr [0x9ec8a0]
// 008853f1  50                   push eax
// 008853f2  8d4c2444             lea ecx, [esp + 0x44]
// 008853f6  c644243803           mov byte ptr [esp + 0x38], 3
// 008853fb  ff1580c59e00         call dword ptr [0x9ec580]
// 00885401  8d4c2424             lea ecx, [esp + 0x24]
// 00885405  c644243401           mov byte ptr [esp + 0x34], 1
// 0088540a  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00885410  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00885414  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00885418  53                   push ebx
// 00885419  8d542444             lea edx, [esp + 0x44]
// 0088541d  52                   push edx
// 0088541e  57                   push edi
// 0088541f  e83cfdffff           call 0x885160
// 00885424  53                   push ebx
// 00885425  8d4c241c             lea ecx, [esp + 0x1c]
// 00885429  51                   push ecx
// 0088542a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088542e  57                   push edi
// 0088542f  89442434             mov dword ptr [esp + 0x34], eax
// 00885433  e828fdffff           call 0x885160
// 00885438  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088543c  03c8                 add ecx, eax
// 0088543e  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 00885442  0f8c60ffffff         jl 0x8853a8
// 00885448  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0088544c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00885450  53                   push ebx
// 00885451  8d542444             lea edx, [esp + 0x44]
// 00885455  52                   push edx
// 00885456  57                   push edi
// 00885457  e804fdffff           call 0x885160
// 0088545c  53                   push ebx
// 0088545d  8d4c241c             lea ecx, [esp + 0x1c]
// 00885461  51                   push ecx
// 00885462  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00885466  57                   push edi
// 00885467  89442434             mov dword ptr [esp + 0x34], eax
// 0088546b  e8f0fcffff           call 0x885160
// 00885470  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00885474  03c8                 add ecx, eax
// 00885476  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 0088547a  0f8ea0000000         jle 0x885520
// 00885480  4e                   dec esi
// 00885481  8bc6                 mov eax, esi
// 00885483  99                   cdq 
// 00885484  2bc2                 sub eax, edx
// 00885486  8bd8                 mov ebx, eax
// 00885488  d1fb                 sar ebx, 1
// 0088548a  8bd6                 mov edx, esi
// 0088548c  2bd3                 sub edx, ebx
// 0088548e  52                   push edx
// 0088548f  8d44242c             lea eax, [esp + 0x2c]
// 00885493  50                   push eax
// 00885494  8bcd                 mov ecx, ebp
// 00885496  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 0088549c  50                   push eax
// 0088549d  8d4c241c             lea ecx, [esp + 0x1c]
// 008854a1  c644243804           mov byte ptr [esp + 0x38], 4
// 008854a6  ff1580c59e00         call dword ptr [0x9ec580]
// 008854ac  8d4c2428             lea ecx, [esp + 0x28]
// 008854b0  c644243401           mov byte ptr [esp + 0x34], 1
// 008854b5  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008854bb  53                   push ebx
// 008854bc  8d4c2428             lea ecx, [esp + 0x28]
// 008854c0  51                   push ecx
// 008854c1  8bcd                 mov ecx, ebp
// 008854c3  ff15a0c89e00         call dword ptr [0x9ec8a0]
// 008854c9  50                   push eax
// 008854ca  8d4c2444             lea ecx, [esp + 0x44]
// 008854ce  c644243805           mov byte ptr [esp + 0x38], 5
// 008854d3  ff1580c59e00         call dword ptr [0x9ec580]
// 008854d9  8d4c2424             lea ecx, [esp + 0x24]
// 008854dd  c644243401           mov byte ptr [esp + 0x34], 1
// 008854e2  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008854e8  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008854ec  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008854f0  53                   push ebx
// 008854f1  8d542444             lea edx, [esp + 0x44]
// 008854f5  52                   push edx
// 008854f6  57                   push edi
// 008854f7  e864fcffff           call 0x885160
// 008854fc  53                   push ebx
// 008854fd  8d4c241c             lea ecx, [esp + 0x1c]
// 00885501  51                   push ecx
// 00885502  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00885506  57                   push edi
// 00885507  89442428             mov dword ptr [esp + 0x28], eax
// 0088550b  e850fcffff           call 0x885160
// 00885510  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00885514  03c8                 add ecx, eax
// 00885516  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 0088551a  0f8f60ffffff         jg 0x885480
// 00885520  68a8dda400           push 0xa4dda8
// 00885525  8d54241c             lea edx, [esp + 0x1c]
// 00885529  52                   push edx
// 0088552a  8d44242c             lea eax, [esp + 0x2c]
// 0088552e  50                   push eax
// 0088552f  e8dc7db8ff           call 0x40d310
// 00885534  8d4c244c             lea ecx, [esp + 0x4c]
// 00885538  51                   push ecx
// 00885539  50                   push eax
// 0088553a  8d54243c             lea edx, [esp + 0x3c]
// 0088553e  52                   push edx
// 0088553f  c644244c06           mov byte ptr [esp + 0x4c], 6
// 00885544  e827bdbdff           call 0x461270
// 00885549  83c418               add esp, 0x18
// 0088554c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00885550  51                   push ecx
// 00885551  8d542448             lea edx, [esp + 0x48]
// 00885555  52                   push edx
// 00885556  50                   push eax
// 00885557  8bcf                 mov ecx, edi
// 00885559  c644244007           mov byte ptr [esp + 0x40], 7
// 0088555e  e87d87f2ff           call 0x7adce0
// 00885563  8d4c2428             lea ecx, [esp + 0x28]
// 00885567  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0088556d  8d4c2424             lea ecx, [esp + 0x24]
// 00885571  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00885577  8d4c2440             lea ecx, [esp + 0x40]
// 0088557b  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00885581  8d4c2418             lea ecx, [esp + 0x18]
// 00885585  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0088558b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088558f  64890d00000000       mov dword ptr fs:[0], ecx
// 00885596  59                   pop ecx
// 00885597  5f                   pop edi
// 00885598  5e                   pop esi
// 00885599  5d                   pop ebp
// 0088559a  5b                   pop ebx
// 0088559b  83c424               add esp, 0x24
// 0088559e  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawTextPathEllipsis@CXTPTabPaintManager@@IAEXPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp