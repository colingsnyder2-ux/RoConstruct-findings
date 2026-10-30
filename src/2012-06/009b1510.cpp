// roc 2012-06 009b1510  unit: CXTPReportControl  size: 595 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b1510
//
// 009b1510  6aff                 push -1
// 009b1512  681ce5ad00           push 0xade51c
// 009b1517  64a100000000         mov eax, dword ptr fs:[0]
// 009b151d  50                   push eax
// 009b151e  83ec3c               sub esp, 0x3c
// 009b1521  53                   push ebx
// 009b1522  55                   push ebp
// 009b1523  56                   push esi
// 009b1524  57                   push edi
// 009b1525  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009b152a  33c4                 xor eax, esp
// 009b152c  50                   push eax
// 009b152d  8d442450             lea eax, [esp + 0x50]
// 009b1531  64a300000000         mov dword ptr fs:[0], eax
// 009b1537  8be9                 mov ebp, ecx
// 009b1539  8b85ec000000         mov eax, dword ptr [ebp + 0xec]
// 009b153f  33f6                 xor esi, esi
// 009b1541  3bc6                 cmp eax, esi
// 009b1543  0f846c010000         je 0x9b16b5
// 009b1549  8d4c243c             lea ecx, [esp + 0x3c]
// 009b154d  e878820e00           call 0xa997ca
// 009b1552  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 009b1556  8d44243c             lea eax, [esp + 0x3c]
// 009b155a  50                   push eax
// 009b155b  6880abb500           push 0xb5ab80
// 009b1560  51                   push ecx
// 009b1561  89742464             mov dword ptr [esp + 0x64], esi
// 009b1565  e886a4ffff           call 0x9ab9f0
// 009b156a  8b5500               mov edx, dword ptr [ebp]
// 009b156d  8b92fc010000         mov edx, dword ptr [edx + 0x1fc]
// 009b1573  83c40c               add esp, 0xc
// 009b1576  8d442414             lea eax, [esp + 0x14]
// 009b157a  50                   push eax
// 009b157b  8d4c2440             lea ecx, [esp + 0x40]
// 009b157f  51                   push ecx
// 009b1580  8bcd                 mov ecx, ebp
// 009b1582  8974241c             mov dword ptr [esp + 0x1c], esi
// 009b1586  ffd2                 call edx
// 009b1588  3bc6                 cmp eax, esi
// 009b158a  0f85a1010000         jne 0x9b1731
// 009b1590  39742414             cmp dword ptr [esp + 0x14], esi
// 009b1594  0f8597010000         jne 0x9b1731
// 009b159a  6a54                 push 0x54
// 009b159c  e89f73a7ff           call 0x428940
// 009b15a1  89442460             mov dword ptr [esp + 0x60], eax
// 009b15a5  c644245801           mov byte ptr [esp + 0x58], 1
// 009b15aa  3bc6                 cmp eax, esi
// 009b15ac  7409                 je 0x9b15b7
// 009b15ae  8bc8                 mov ecx, eax
// 009b15b0  e89b780000           call 0x9b8e50
// 009b15b5  eb02                 jmp 0x9b15b9
// 009b15b7  33c0                 xor eax, eax
// 009b15b9  c644245800           mov byte ptr [esp + 0x58], 0
// 009b15be  89442414             mov dword ptr [esp + 0x14], eax
// 009b15c2  3bc6                 cmp eax, esi
// 009b15c4  0f84da000000         je 0x9b16a4
// 009b15ca  8b85ec000000         mov eax, dword ptr [ebp + 0xec]
// 009b15d0  8b7830               mov edi, dword ptr [eax + 0x30]
// 009b15d3  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 009b15d7  895c2460             mov dword ptr [esp + 0x60], ebx
// 009b15db  85ff                 test edi, edi
// 009b15dd  7e6d                 jle 0x9b164c
// 009b15df  b302                 mov bl, 2
// 009b15e1  33c0                 xor eax, eax
// 009b15e3  68e83bb400           push 0xb43be8
// 009b15e8  8d4c2420             lea ecx, [esp + 0x20]
// 009b15ec  6689442420           mov word ptr [esp + 0x20], ax
// 009b15f1  e8a4810e00           call 0xa9979a
// 009b15f6  688c000000           push 0x8c
// 009b15fb  885c245c             mov byte ptr [esp + 0x5c], bl
// 009b15ff  e83c73a7ff           call 0x428940
// 009b1604  89442418             mov dword ptr [esp + 0x18], eax
// 009b1608  c644245803           mov byte ptr [esp + 0x58], 3
// 009b160d  85c0                 test eax, eax
// 009b160f  740e                 je 0x9b161f
// 009b1611  8d4c241c             lea ecx, [esp + 0x1c]
// 009b1615  51                   push ecx
// 009b1616  8bc8                 mov ecx, eax
// 009b1618  e883880000           call 0x9b9ea0
// 009b161d  eb02                 jmp 0x9b1621
// 009b161f  33c0                 xor eax, eax
// 009b1621  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009b1625  885c2458             mov byte ptr [esp + 0x58], bl
// 009b1629  85c0                 test eax, eax
// 009b162b  745b                 je 0x9b1688
// 009b162d  50                   push eax
// 009b162e  e8bd780000           call 0x9b8ef0
// 009b1633  8d54241c             lea edx, [esp + 0x1c]
// 009b1637  52                   push edx
// 009b1638  c644245c00           mov byte ptr [esp + 0x5c], 0
// 009b163d  ff152c2bb200         call dword ptr [0xb22b2c]
// 009b1643  46                   inc esi
// 009b1644  3bf7                 cmp esi, edi
// 009b1646  7c99                 jl 0x9b15e1
// 009b1648  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 009b164c  8b8dec000000         mov ecx, dword ptr [ebp + 0xec]
// 009b1652  e8f9470400           call 0x9f5e50
// 009b1657  8bf8                 mov edi, eax
// 009b1659  33f6                 xor esi, esi
// 009b165b  85ff                 test edi, edi
// 009b165d  0f8ece000000         jle 0x9b1731
// 009b1663  3bf3                 cmp esi, ebx
// 009b1665  7d55                 jge 0x9b16bc
// 009b1667  85f6                 test esi, esi
// 009b1669  0f8cef000000         jl 0x9b175e
// 009b166f  3b742444             cmp esi, dword ptr [esp + 0x44]
// 009b1673  0f8de5000000         jge 0x9b175e
// 009b1679  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 009b167d  8d0cb1               lea ecx, [ecx + esi*4]
// 009b1680  ff159847b200         call dword ptr [0xb24798]
// 009b1686  eb39                 jmp 0x9b16c1
// 009b1688  85c9                 test ecx, ecx
// 009b168a  740d                 je 0x9b1699
// 009b168c  e8f90ffdff           call 0x98268a
// 009b1691  c744241400000000     mov dword ptr [esp + 0x14], 0
// 009b1699  8d44241c             lea eax, [esp + 0x1c]
// 009b169d  50                   push eax
// 009b169e  ff152c2bb200         call dword ptr [0xb22b2c]
// 009b16a4  8d4c243c             lea ecx, [esp + 0x3c]
// 009b16a8  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 009b16b0  e80f810e00           call 0xa997c4
// 009b16b5  33c0                 xor eax, eax
// 009b16b7  e98c000000           jmp 0x9b1748
// 009b16bc  b8e83bb400           mov eax, 0xb43be8
// 009b16c1  33d2                 xor edx, edx
// 009b16c3  50                   push eax
// 009b16c4  8d4c2430             lea ecx, [esp + 0x30]
// 009b16c8  6689542430           mov word ptr [esp + 0x30], dx
// 009b16cd  e8c8800e00           call 0xa9979a
// 009b16d2  8b8dec000000         mov ecx, dword ptr [ebp + 0xec]
// 009b16d8  56                   push esi
// 009b16d9  c644245c04           mov byte ptr [esp + 0x5c], 4
// 009b16de  e86d480400           call 0x9f5f50
// 009b16e3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009b16e7  50                   push eax
// 009b16e8  e8d3760000           call 0x9b8dc0
// 009b16ed  85c0                 test eax, eax
// 009b16ef  7507                 jne 0x9b16f8
// 009b16f1  8d44242c             lea eax, [esp + 0x2c]
// 009b16f5  50                   push eax
// 009b16f6  eb25                 jmp 0x9b171d
// 009b16f8  50                   push eax
// 009b16f9  e852810000           call 0x9b9850
// 009b16fe  50                   push eax
// 009b16ff  e8e20dfdff           call 0x9824e6
// 009b1704  83c408               add esp, 8
// 009b1707  85c0                 test eax, eax
// 009b1709  740d                 je 0x9b1718
// 009b170b  8d4c242c             lea ecx, [esp + 0x2c]
// 009b170f  51                   push ecx
// 009b1710  8d487c               lea ecx, [eax + 0x7c]
// 009b1713  e8be800e00           call 0xa997d6
// 009b1718  8d54242c             lea edx, [esp + 0x2c]
// 009b171c  52                   push edx
// 009b171d  c644245c00           mov byte ptr [esp + 0x5c], 0
// 009b1722  ff152c2bb200         call dword ptr [0xb22b2c]
// 009b1728  46                   inc esi
// 009b1729  3bf7                 cmp esi, edi
// 009b172b  0f8c32ffffff         jl 0x9b1663
// 009b1731  8b742414             mov esi, dword ptr [esp + 0x14]
// 009b1735  8d4c243c             lea ecx, [esp + 0x3c]
// 009b1739  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 009b1741  e87e800e00           call 0xa997c4
// 009b1746  8bc6                 mov eax, esi
// 009b1748  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 009b174c  64890d00000000       mov dword ptr fs:[0], ecx
// 009b1753  59                   pop ecx
// 009b1754  5f                   pop edi
// 009b1755  5e                   pop esi
// 009b1756  5d                   pop ebp
// 009b1757  5b                   pop ebx
// 009b1758  83c448               add esp, 0x48
// 009b175b  c20400               ret 4
// 009b175e  e85d0cfdff           call 0x9823c0
// copied from an identical function in another client (function ?_CreateRecodFromText@CXTPReportControl@@MAEPAVCXTPReportRecord@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp