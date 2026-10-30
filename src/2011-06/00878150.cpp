// from server: 100% by auto
// roc 2011-06 00878150  unit: CXTPPropertyGridView  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00878150
//
// 00878150  56                   push esi
// 00878151  57                   push edi
// 00878152  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00878156  8d44240c             lea eax, [esp + 0xc]
// 0087815a  50                   push eax
// 0087815b  8bf1                 mov esi, ecx
// 0087815d  c70700000000         mov dword ptr [edi], 0
// 00878163  e8c891fdff           call 0x851330
// 00878168  85c0                 test eax, eax
// 0087816a  7f0a                 jg 0x878176
// 0087816c  5f                   pop edi
// 0087816d  b857000780           mov eax, 0x80070057
// 00878172  5e                   pop esi
// 00878173  c21400               ret 0x14
// 00878176  48                   dec eax
// 00878177  50                   push eax
// 00878178  8d4eac               lea ecx, [esi - 0x54]
// 0087817b  e8c0edffff           call 0x876f40
// 00878180  85c0                 test eax, eax
// 00878182  74e8                 je 0x87816c
// 00878184  6a01                 push 1
// 00878186  8bc8                 mov ecx, eax
// 00878188  e831441500           call 0x9cc5be
// 0087818d  8907                 mov dword ptr [edi], eax
// 0087818f  5f                   pop edi
// 00878190  33c0                 xor eax, eax
// 00878192  5e                   pop esi
// 00878193  c21400               ret 0x14
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleChild@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
