// roc 2009-12 008f15e0  unit: CXTPRibbonControlTab  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f15e0
//
// 008f15e0  56                   push esi
// 008f15e1  8d442408             lea eax, [esp + 8]
// 008f15e5  50                   push eax
// 008f15e6  8bf1                 mov esi, ecx
// 008f15e8  e8b3a3f4ff           call 0x83b9a0
// 008f15ed  85c0                 test eax, eax
// 008f15ef  754a                 jne 0x8f163b
// 008f15f1  57                   push edi
// 008f15f2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008f15f6  b903000000           mov ecx, 3
// 008f15fb  66890f               mov word ptr [edi], cx
// 008f15fe  c7470800001000       mov dword ptr [edi + 8], 0x100000
// 008f1605  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 008f160b  8b11                 mov edx, dword ptr [ecx]
// 008f160d  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 008f1613  ffd0                 call eax
// 008f1615  85c0                 test eax, eax
// 008f1617  7414                 je 0x8f162d
// 008f1619  8b56e0               mov edx, dword ptr [esi - 0x20]
// 008f161c  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008f1622  8d4ee0               lea ecx, [esi - 0x20]
// 008f1625  6a00                 push 0
// 008f1627  ffd0                 call eax
// 008f1629  85c0                 test eax, eax
// 008f162b  7507                 jne 0x8f1634
// 008f162d  814f0800800000       or dword ptr [edi + 8], 0x8000
// 008f1634  5f                   pop edi
// 008f1635  33c0                 xor eax, eax
// 008f1637  5e                   pop esi
// 008f1638  c21400               ret 0x14
// 008f163b  83c0ff               add eax, -1
// 008f163e  7815                 js 0x8f1655
// 008f1640  3b86c0010000         cmp eax, dword ptr [esi + 0x1c0]
// 008f1646  7d0d                 jge 0x8f1655
// 008f1648  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 008f164e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008f1651  85c0                 test eax, eax
// 008f1653  7509                 jne 0x8f165e
// 008f1655  b857000780           mov eax, 0x80070057
// 008f165a  5e                   pop esi
// 008f165b  c21400               ret 0x14
// 008f165e  8b742418             mov esi, dword ptr [esp + 0x18]
// 008f1662  ba03000000           mov edx, 3
// 008f1667  668916               mov word ptr [esi], dx
// 008f166a  c7460800003000       mov dword ptr [esi + 8], 0x300000
// 008f1671  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008f1674  394104               cmp dword ptr [ecx + 4], eax
// 008f1677  7507                 jne 0x8f1680
// 008f1679  c7460806003000       mov dword ptr [esi + 8], 0x300006
// 008f1680  8bc8                 mov ecx, eax
// 008f1682  e8691de8ff           call 0x7733f0
// 008f1687  85c0                 test eax, eax
// 008f1689  7507                 jne 0x8f1692
// 008f168b  814e0800800000       or dword ptr [esi + 8], 0x8000
// 008f1692  33c0                 xor eax, eax
// 008f1694  5e                   pop esi
// 008f1695  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleState@CXTPRibbonControlTab@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp