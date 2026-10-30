// roc 2009-12 007f62f0  unit: CPatchedControlComboBox  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f62f0
//
// 007f62f0  56                   push esi
// 007f62f1  8bf1                 mov esi, ecx
// 007f62f3  57                   push edi
// 007f62f4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007f62f8  8d4c240c             lea ecx, [esp + 0xc]
// 007f62fc  33c0                 xor eax, eax
// 007f62fe  51                   push ecx
// 007f62ff  8bce                 mov ecx, esi
// 007f6301  668907               mov word ptr [edi], ax
// 007f6304  e897560400           call 0x83b9a0
// 007f6309  85c0                 test eax, eax
// 007f630b  754e                 jne 0x7f635b
// 007f630d  ba03000000           mov edx, 3
// 007f6312  668917               mov word ptr [edi], dx
// 007f6315  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 007f631b  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 007f6321  83f801               cmp eax, 1
// 007f6324  7413                 je 0x7f6339
// 007f6326  3bc2                 cmp eax, edx
// 007f6328  740f                 je 0x7f6339
// 007f632a  b80c000000           mov eax, 0xc
// 007f632f  894708               mov dword ptr [edi + 8], eax
// 007f6332  5f                   pop edi
// 007f6333  33c0                 xor eax, eax
// 007f6335  5e                   pop esi
// 007f6336  c21400               ret 0x14
// 007f6339  8b56e0               mov edx, dword ptr [esi - 0x20]
// 007f633c  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 007f6342  8d4ee0               lea ecx, [esi - 0x20]
// 007f6345  ffd0                 call eax
// 007f6347  f7d8                 neg eax
// 007f6349  1bc0                 sbb eax, eax
// 007f634b  83e00e               and eax, 0xe
// 007f634e  83c02b               add eax, 0x2b
// 007f6351  894708               mov dword ptr [edi + 8], eax
// 007f6354  5f                   pop edi
// 007f6355  33c0                 xor eax, eax
// 007f6357  5e                   pop esi
// 007f6358  c21400               ret 0x14
// 007f635b  5f                   pop edi
// 007f635c  b857000780           mov eax, 0x80070057
// 007f6361  5e                   pop esi
// 007f6362  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleRole@CXTPControl@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp