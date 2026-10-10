// roc 2008-06 006ab5f0  unit: CPatchedControlComboBox  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab5f0
//
// 006ab5f0  56                   push esi
// 006ab5f1  8bf1                 mov esi, ecx
// 006ab5f3  57                   push edi
// 006ab5f4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006ab5f8  8d4c240c             lea ecx, [esp + 0xc]
// 006ab5fc  33c0                 xor eax, eax
// 006ab5fe  51                   push ecx
// 006ab5ff  8bce                 mov ecx, esi
// 006ab601  668907               mov word ptr [edi], ax
// 006ab604  e897cc0300           call 0x6e82a0
// 006ab609  85c0                 test eax, eax
// 006ab60b  754e                 jne 0x6ab65b
// 006ab60d  ba03000000           mov edx, 3
// 006ab612  668917               mov word ptr [edi], dx
// 006ab615  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 006ab61b  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 006ab621  83f801               cmp eax, 1
// 006ab624  7413                 je 0x6ab639
// 006ab626  3bc2                 cmp eax, edx
// 006ab628  740f                 je 0x6ab639
// 006ab62a  b80c000000           mov eax, 0xc
// 006ab62f  894708               mov dword ptr [edi + 8], eax
// 006ab632  5f                   pop edi
// 006ab633  33c0                 xor eax, eax
// 006ab635  5e                   pop esi
// 006ab636  c21400               ret 0x14
// 006ab639  8b56e0               mov edx, dword ptr [esi - 0x20]
// 006ab63c  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 006ab642  8d4ee0               lea ecx, [esi - 0x20]
// 006ab645  ffd0                 call eax
// 006ab647  f7d8                 neg eax
// 006ab649  1bc0                 sbb eax, eax
// 006ab64b  83e00e               and eax, 0xe
// 006ab64e  83c02b               add eax, 0x2b
// 006ab651  894708               mov dword ptr [edi + 8], eax
// 006ab654  5f                   pop edi
// 006ab655  33c0                 xor eax, eax
// 006ab657  5e                   pop esi
// 006ab658  c21400               ret 0x14
// 006ab65b  5f                   pop edi
// 006ab65c  b857000780           mov eax, 0x80070057
// 006ab661  5e                   pop esi
// 006ab662  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControl.cpp (function ?GetAccessibleRole@CXTPControl@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp
