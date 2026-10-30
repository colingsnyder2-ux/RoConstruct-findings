// roc 2009-12 008e1620  unit: CXTPOffice2007Image  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1620
//
// 008e1620  6aff                 push -1
// 008e1622  687c5c9600           push 0x965c7c
// 008e1627  64a100000000         mov eax, dword ptr fs:[0]
// 008e162d  50                   push eax
// 008e162e  51                   push ecx
// 008e162f  56                   push esi
// 008e1630  57                   push edi
// 008e1631  a10052b600           mov eax, dword ptr [0xb65200]
// 008e1636  33c4                 xor eax, esp
// 008e1638  50                   push eax
// 008e1639  8d442410             lea eax, [esp + 0x10]
// 008e163d  64a300000000         mov dword ptr fs:[0], eax
// 008e1643  8bf9                 mov edi, ecx
// 008e1645  51                   push ecx
// 008e1646  8d442424             lea eax, [esp + 0x24]
// 008e164a  8bcc                 mov ecx, esp
// 008e164c  89642410             mov dword ptr [esp + 0x10], esp
// 008e1650  50                   push eax
// 008e1651  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008e1659  ff1594de9800         call dword ptr [0x98de94]
// 008e165f  8d4c2410             lea ecx, [esp + 0x10]
// 008e1663  51                   push ecx
// 008e1664  8bcf                 mov ecx, edi
// 008e1666  e8c5feffff           call 0x8e1530
// 008e166b  50                   push eax
// 008e166c  8d4c2424             lea ecx, [esp + 0x24]
// 008e1670  c644241c01           mov byte ptr [esp + 0x1c], 1
// 008e1675  ff1538d59800         call dword ptr [0x98d538]
// 008e167b  8d4c240c             lea ecx, [esp + 0xc]
// 008e167f  c644241800           mov byte ptr [esp + 0x18], 0
// 008e1684  ff15c0de9800         call dword ptr [0x98dec0]
// 008e168a  6a38                 push 0x38
// 008e168c  e8cf21f1ff           call 0x7f3860
// 008e1691  83c404               add esp, 4
// 008e1694  8944240c             mov dword ptr [esp + 0xc], eax
// 008e1698  c644241802           mov byte ptr [esp + 0x18], 2
// 008e169d  85c0                 test eax, eax
// 008e169f  740b                 je 0x8e16ac
// 008e16a1  8bc8                 mov ecx, eax
// 008e16a3  e848e7ffff           call 0x8dfdf0
// 008e16a8  8bf0                 mov esi, eax
// 008e16aa  eb02                 jmp 0x8e16ae
// 008e16ac  33f6                 xor esi, esi
// 008e16ae  8d4c2420             lea ecx, [esp + 0x20]
// 008e16b2  c644241800           mov byte ptr [esp + 0x18], 0
// 008e16b7  ff1580de9800         call dword ptr [0x98de80]
// 008e16bd  8b5704               mov edx, dword ptr [edi + 4]
// 008e16c0  50                   push eax
// 008e16c1  52                   push edx
// 008e16c2  8bce                 mov ecx, esi
// 008e16c4  e877e7ffff           call 0x8dfe40
// 008e16c9  85c0                 test eax, eax
// 008e16cb  752f                 jne 0x8e16fc
// 008e16cd  85f6                 test esi, esi
// 008e16cf  740b                 je 0x8e16dc
// 008e16d1  8b06                 mov eax, dword ptr [esi]
// 008e16d3  8b5004               mov edx, dword ptr [eax + 4]
// 008e16d6  6a01                 push 1
// 008e16d8  8bce                 mov ecx, esi
// 008e16da  ffd2                 call edx
// 008e16dc  8d4c2420             lea ecx, [esp + 0x20]
// 008e16e0  ff15c0de9800         call dword ptr [0x98dec0]
// 008e16e6  33c0                 xor eax, eax
// 008e16e8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e16ec  64890d00000000       mov dword ptr fs:[0], ecx
// 008e16f3  59                   pop ecx
// 008e16f4  5f                   pop edi
// 008e16f5  5e                   pop esi
// 008e16f6  83c410               add esp, 0x10
// 008e16f9  c20400               ret 4
// 008e16fc  8d4c2420             lea ecx, [esp + 0x20]
// 008e1700  ff15c0de9800         call dword ptr [0x98dec0]
// 008e1706  8bc6                 mov eax, esi
// 008e1708  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e170c  64890d00000000       mov dword ptr fs:[0], ecx
// 008e1713  59                   pop ecx
// 008e1714  5f                   pop edi
// 008e1715  5e                   pop esi
// 008e1716  83c410               add esp, 0x10
// 008e1719  c20400               ret 4
// copied from an identical function in another client (function ?LoadImageA@CXTPOffice2007Images@@IAEPAVCXTPOffice2007Image@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPOffice2007Image.cpp