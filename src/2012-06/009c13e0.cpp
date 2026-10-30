// from server: 100% by auto
// roc 2012-06 009c13e0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c13e0
//
// 009c13e0  53                   push ebx
// 009c13e1  8bd9                 mov ebx, ecx
// 009c13e3  837b0400             cmp dword ptr [ebx + 4], 0
// 009c13e7  7458                 je 0x9c1441
// 009c13e9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009c13ed  57                   push edi
// 009c13ee  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009c13f2  c70000000000         mov dword ptr [eax], 0
// 009c13f8  8b470c               mov eax, dword ptr [edi + 0xc]
// 009c13fb  83f801               cmp eax, 1
// 009c13fe  7407                 je 0x9c1407
// 009c1400  3d00800000           cmp eax, 0x8000
// 009c1405  7539                 jne 0x9c1440
// 009c1407  8b473c               mov eax, dword ptr [edi + 0x3c]
// 009c140a  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 009c140d  56                   push esi
// 009c140e  6a02                 push 2
// 009c1410  50                   push eax
// 009c1411  e8fc830d00           call 0xa99812
// 009c1416  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 009c1419  6a01                 push 1
// 009c141b  8bf0                 mov esi, eax
// 009c141d  6a00                 push 0
// 009c141f  51                   push ecx
// 009c1420  d1ee                 shr esi, 1
// 009c1422  8bcb                 mov ecx, ebx
// 009c1424  83e601               and esi, 1
// 009c1427  e8d4f6ffff           call 0x9c0b00
// 009c142c  85c0                 test eax, eax
// 009c142e  740f                 je 0x9c143f
// 009c1430  85f6                 test esi, esi
// 009c1432  750b                 jne 0x9c143f
// 009c1434  8b573c               mov edx, dword ptr [edi + 0x3c]
// 009c1437  52                   push edx
// 009c1438  8bcb                 mov ecx, ebx
// 009c143a  e861efffff           call 0x9c03a0
// 009c143f  5e                   pop esi
// 009c1440  5f                   pop edi
// 009c1441  33c0                 xor eax, eax
// 009c1443  5b                   pop ebx
// 009c1444  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnItemExpanding@CXTPTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
