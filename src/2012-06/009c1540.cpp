// roc 2012-06 009c1540  unit: CRobloxTreeCtrl  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1540
//
// 009c1540  8b442404             mov eax, dword ptr [esp + 4]
// 009c1544  53                   push ebx
// 009c1545  56                   push esi
// 009c1546  8bf1                 mov esi, ecx
// 009c1548  8b5e04               mov ebx, dword ptr [esi + 4]
// 009c154b  894604               mov dword ptr [esi + 4], eax
// 009c154e  85c0                 test eax, eax
// 009c1550  754e                 jne 0x9c15a0
// 009c1552  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c1555  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c1558  57                   push edi
// 009c1559  6a00                 push 0
// 009c155b  6a09                 push 9
// 009c155d  680a110000           push 0x110a
// 009c1562  50                   push eax
// 009c1563  ff15043cb200         call dword ptr [0xb23c04]
// 009c1569  8bf8                 mov edi, eax
// 009c156b  85ff                 test edi, edi
// 009c156d  7411                 je 0x9c1580
// 009c156f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c1572  6a02                 push 2
// 009c1574  57                   push edi
// 009c1575  e898820d00           call 0xa99812
// 009c157a  a802                 test al, 2
// 009c157c  7502                 jne 0x9c1580
// 009c157e  33ff                 xor edi, edi
// 009c1580  8b16                 mov edx, dword ptr [esi]
// 009c1582  8b4250               mov eax, dword ptr [edx + 0x50]
// 009c1585  57                   push edi
// 009c1586  6a00                 push 0
// 009c1588  8bce                 mov ecx, esi
// 009c158a  ffd0                 call eax
// 009c158c  85ff                 test edi, edi
// 009c158e  7408                 je 0x9c1598
// 009c1590  57                   push edi
// 009c1591  8bce                 mov ecx, esi
// 009c1593  e8c8edffff           call 0x9c0360
// 009c1598  5f                   pop edi
// 009c1599  5e                   pop esi
// 009c159a  8bc3                 mov eax, ebx
// 009c159c  5b                   pop ebx
// 009c159d  c20400               ret 4
// 009c15a0  5e                   pop esi
// 009c15a1  8bc3                 mov eax, ebx
// 009c15a3  5b                   pop ebx
// 009c15a4  c20400               ret 4
// copied from an identical function in another client (function ?EnableMultiSelect@CXTTreeBase@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp