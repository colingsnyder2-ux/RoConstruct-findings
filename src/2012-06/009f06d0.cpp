// roc 2012-06 009f06d0  unit: CXTPPropertyGridView  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f06d0
//
// 009f06d0  56                   push esi
// 009f06d1  57                   push edi
// 009f06d2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 009f06d6  8d44240c             lea eax, [esp + 0xc]
// 009f06da  50                   push eax
// 009f06db  8bf1                 mov esi, ecx
// 009f06dd  c70700000000         mov dword ptr [edi], 0
// 009f06e3  e80891fdff           call 0x9c97f0
// 009f06e8  85c0                 test eax, eax
// 009f06ea  7f0a                 jg 0x9f06f6
// 009f06ec  5f                   pop edi
// 009f06ed  b857000780           mov eax, 0x80070057
// 009f06f2  5e                   pop esi
// 009f06f3  c21400               ret 0x14
// 009f06f6  48                   dec eax
// 009f06f7  50                   push eax
// 009f06f8  8d4eac               lea ecx, [esi - 0x54]
// 009f06fb  e8c0edffff           call 0x9ef4c0
// 009f0700  85c0                 test eax, eax
// 009f0702  74e8                 je 0x9f06ec
// 009f0704  6a01                 push 1
// 009f0706  8bc8                 mov ecx, eax
// 009f0708  e86b8e0a00           call 0xa99578
// 009f070d  8907                 mov dword ptr [edi], eax
// 009f070f  5f                   pop edi
// 009f0710  33c0                 xor eax, eax
// 009f0712  5e                   pop esi
// 009f0713  c21400               ret 0x14
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleChild@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
