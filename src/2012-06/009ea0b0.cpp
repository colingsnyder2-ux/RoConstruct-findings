// roc 2012-06 009ea0b0  unit: CInstanceRecord::CNameItem  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ea0b0
//
// 009ea0b0  55                   push ebp
// 009ea0b1  56                   push esi
// 009ea0b2  57                   push edi
// 009ea0b3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009ea0b7  8bf7                 mov esi, edi
// 009ea0b9  c1e604               shl esi, 4
// 009ea0bc  f7d6                 not esi
// 009ea0be  81e600000200         and esi, 0x20000
// 009ea0c4  81ce20080000         or esi, 0x820
// 009ea0ca  8be9                 mov ebp, ecx
// 009ea0cc  f7c600000200         test esi, 0x20000
// 009ea0d2  7416                 je 0x9ea0ea
// 009ea0d4  e8b7f4fdff           call 0x9c9590
// 009ea0d9  8bc8                 mov ecx, eax
// 009ea0db  e8a0fdfdff           call 0x9c9e80
// 009ea0e0  84c0                 test al, al
// 009ea0e2  7506                 jne 0x9ea0ea
// 009ea0e4  81e6fffffdff         and esi, 0xfffdffff
// 009ea0ea  8b442410             mov eax, dword ptr [esp + 0x10]
// 009ea0ee  53                   push ebx
// 009ea0ef  85c0                 test eax, eax
// 009ea0f1  7504                 jne 0x9ea0f7
// 009ea0f3  33db                 xor ebx, ebx
// 009ea0f5  eb03                 jmp 0x9ea0fa
// 009ea0f7  8b5820               mov ebx, dword ptr [eax + 0x20]
// 009ea0fa  e8d382f9ff           call 0x9823d2
// 009ea0ff  68007f0000           push 0x7f00
// 009ea104  6a00                 push 0
// 009ea106  ff159c3ab200         call dword ptr [0xb23a9c]
// 009ea10c  6a00                 push 0
// 009ea10e  6a00                 push 0
// 009ea110  53                   push ebx
// 009ea111  6800000080           push 0x80000000
// 009ea116  6800000080           push 0x80000000
// 009ea11b  6800000080           push 0x80000000
// 009ea120  6800000080           push 0x80000000
// 009ea125  81cf00000080         or edi, 0x80000000
// 009ea12b  57                   push edi
// 009ea12c  6a00                 push 0
// 009ea12e  6a00                 push 0
// 009ea130  6a00                 push 0
// 009ea132  50                   push eax
// 009ea133  56                   push esi
// 009ea134  e87789f9ff           call 0x982ab0
// 009ea139  50                   push eax
// 009ea13a  6880000000           push 0x80
// 009ea13f  8bcd                 mov ecx, ebp
// 009ea141  e84c80f9ff           call 0x982192
// 009ea146  5b                   pop ebx
// 009ea147  85c0                 test eax, eax
// 009ea149  7419                 je 0x9ea164
// 009ea14b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ea14f  85c9                 test ecx, ecx
// 009ea151  740c                 je 0x9ea15f
// 009ea153  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 009ea156  5f                   pop edi
// 009ea157  5e                   pop esi
// 009ea158  894d38               mov dword ptr [ebp + 0x38], ecx
// 009ea15b  5d                   pop ebp
// 009ea15c  c20800               ret 8
// 009ea15f  33c9                 xor ecx, ecx
// 009ea161  894d38               mov dword ptr [ebp + 0x38], ecx
// 009ea164  5f                   pop edi
// 009ea165  5e                   pop esi
// 009ea166  5d                   pop ebp
// 009ea167  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?Create@CXTPToolTipContextToolTip@@QAEHPAVCWnd@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
