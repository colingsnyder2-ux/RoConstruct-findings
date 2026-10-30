// roc 2011-06 008f15f0  unit: CXTCaptionTheme  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f15f0
//
// 008f15f0  6aff                 push -1
// 008f15f2  6898eea000           push 0xa0ee98
// 008f15f7  64a100000000         mov eax, dword ptr fs:[0]
// 008f15fd  50                   push eax
// 008f15fe  83ec20               sub esp, 0x20
// 008f1601  53                   push ebx
// 008f1602  56                   push esi
// 008f1603  57                   push edi
// 008f1604  a12058c900           mov eax, dword ptr [0xc95820]
// 008f1609  33c4                 xor eax, esp
// 008f160b  50                   push eax
// 008f160c  8d442430             lea eax, [esp + 0x30]
// 008f1610  64a300000000         mov dword ptr fs:[0], eax
// 008f1616  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008f161a  8d9fd0000000         lea ebx, [edi + 0xd0]
// 008f1620  8bcb                 mov ecx, ebx
// 008f1622  ff15b026a400         call dword ptr [0xa426b0]
// 008f1628  84c0                 test al, al
// 008f162a  0f8581000000         jne 0x8f16b1
// 008f1630  8b07                 mov eax, dword ptr [edi]
// 008f1632  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 008f1638  8d4c2410             lea ecx, [esp + 0x10]
// 008f163c  51                   push ecx
// 008f163d  8bcf                 mov ecx, edi
// 008f163f  ffd2                 call edx
// 008f1641  8b4720               mov eax, dword ptr [edi + 0x20]
// 008f1644  6a00                 push 0
// 008f1646  6a00                 push 0
// 008f1648  6a31                 push 0x31
// 008f164a  50                   push eax
// 008f164b  ff15c019a400         call dword ptr [0xa419c0]
// 008f1651  50                   push eax
// 008f1652  e81195f1ff           call 0x80ab68
// 008f1657  8b742440             mov esi, dword ptr [esp + 0x40]
// 008f165b  50                   push eax
// 008f165c  56                   push esi
// 008f165d  8d4c2428             lea ecx, [esp + 0x28]
// 008f1661  e8babaf6ff           call 0x85d120
// 008f1666  8b16                 mov edx, dword ptr [esi]
// 008f1668  8b4778               mov eax, dword ptr [edi + 0x78]
// 008f166b  8b5238               mov edx, dword ptr [edx + 0x38]
// 008f166e  50                   push eax
// 008f166f  8bce                 mov ecx, esi
// 008f1671  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008f1679  ffd2                 call edx
// 008f167b  8b3e                 mov edi, dword ptr [esi]
// 008f167d  6825880000           push 0x8825
// 008f1682  8d442414             lea eax, [esp + 0x14]
// 008f1686  50                   push eax
// 008f1687  8bcb                 mov ecx, ebx
// 008f1689  ff15a826a400         call dword ptr [0xa426a8]
// 008f168f  50                   push eax
// 008f1690  8bcb                 mov ecx, ebx
// 008f1692  ff15c82da400         call dword ptr [0xa42dc8]
// 008f1698  8b5770               mov edx, dword ptr [edi + 0x70]
// 008f169b  50                   push eax
// 008f169c  8bce                 mov ecx, esi
// 008f169e  ffd2                 call edx
// 008f16a0  8d4c2420             lea ecx, [esp + 0x20]
// 008f16a4  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008f16ac  e8efbaf6ff           call 0x85d1a0
// 008f16b1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008f16b5  64890d00000000       mov dword ptr fs:[0], ecx
// 008f16bc  59                   pop ecx
// 008f16bd  5f                   pop edi
// 008f16be  5e                   pop esi
// 008f16bf  5b                   pop ebx
// 008f16c0  83c42c               add esp, 0x2c
// 008f16c3  c20800               ret 8
// copied from an identical function in another client (function ?DrawCaptionText@CXTCaptionTheme@@UAEXPAVCDC@@PAVCXTCaption@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTCaptionTheme.cpp