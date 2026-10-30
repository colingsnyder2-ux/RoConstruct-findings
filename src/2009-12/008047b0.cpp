// roc 2009-12 008047b0  unit: CXTPControlComboBoxPopupBar  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008047b0
//
// 008047b0  56                   push esi
// 008047b1  8bf1                 mov esi, ecx
// 008047b3  57                   push edi
// 008047b4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008047b8  8d4c240c             lea ecx, [esp + 0xc]
// 008047bc  33c0                 xor eax, eax
// 008047be  51                   push ecx
// 008047bf  8bce                 mov ecx, esi
// 008047c1  668907               mov word ptr [edi], ax
// 008047c4  e8d7710300           call 0x83b9a0
// 008047c9  85c0                 test eax, eax
// 008047cb  7538                 jne 0x804805
// 008047cd  ba03000000           mov edx, 3
// 008047d2  668917               mov word ptr [edi], dx
// 008047d5  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008047db  85c0                 test eax, eax
// 008047dd  750f                 jne 0x8047ee
// 008047df  b802000000           mov eax, 2
// 008047e4  894708               mov dword ptr [edi + 8], eax
// 008047e7  5f                   pop edi
// 008047e8  33c0                 xor eax, eax
// 008047ea  5e                   pop esi
// 008047eb  c21400               ret 0x14
// 008047ee  83e802               sub eax, 2
// 008047f1  f7d8                 neg eax
// 008047f3  1bc0                 sbb eax, eax
// 008047f5  83e00b               and eax, 0xb
// 008047f8  83c00b               add eax, 0xb
// 008047fb  894708               mov dword ptr [edi + 8], eax
// 008047fe  5f                   pop edi
// 008047ff  33c0                 xor eax, eax
// 00804801  5e                   pop esi
// 00804802  c21400               ret 0x14
// 00804805  7e16                 jle 0x80481d
// 00804807  b803000000           mov eax, 3
// 0080480c  668907               mov word ptr [edi], ax
// 0080480f  c747080c000000       mov dword ptr [edi + 8], 0xc
// 00804816  5f                   pop edi
// 00804817  33c0                 xor eax, eax
// 00804819  5e                   pop esi
// 0080481a  c21400               ret 0x14
// 0080481d  5f                   pop edi
// 0080481e  b857000780           mov eax, 0x80070057
// 00804823  5e                   pop esi
// 00804824  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleRole@CXTPCommandBar@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp