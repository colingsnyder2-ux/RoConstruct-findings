// roc 2009-12 00805e80  unit: CXTPControlComboBoxPopupBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805e80
//
// 00805e80  56                   push esi
// 00805e81  57                   push edi
// 00805e82  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00805e86  8d44240c             lea eax, [esp + 0xc]
// 00805e8a  50                   push eax
// 00805e8b  8bf1                 mov esi, ecx
// 00805e8d  c70700000000         mov dword ptr [edi], 0
// 00805e93  e8085b0300           call 0x83b9a0
// 00805e98  8bd0                 mov edx, eax
// 00805e9a  85d2                 test edx, edx
// 00805e9c  7e22                 jle 0x805ec0
// 00805e9e  8d4ea4               lea ecx, [esi - 0x5c]
// 00805ea1  e8aaf3ffff           call 0x805250
// 00805ea6  3bd0                 cmp edx, eax
// 00805ea8  7f16                 jg 0x805ec0
// 00805eaa  4a                   dec edx
// 00805eab  52                   push edx
// 00805eac  e8aff3ffff           call 0x805260
// 00805eb1  85c0                 test eax, eax
// 00805eb3  740b                 je 0x805ec0
// 00805eb5  6a01                 push 1
// 00805eb7  8bc8                 mov ecx, eax
// 00805eb9  e878051200           call 0x926436
// 00805ebe  8907                 mov dword ptr [edi], eax
// 00805ec0  5f                   pop edi
// 00805ec1  33c0                 xor eax, eax
// 00805ec3  5e                   pop esi
// 00805ec4  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleChild@CXTPCommandBar@@MAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp