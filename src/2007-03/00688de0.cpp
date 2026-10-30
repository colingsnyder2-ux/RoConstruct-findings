// roc 2007-03 00688de0  unit: seg_00680000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00688de0
//
// 00688de0  56                   push esi
// 00688de1  57                   push edi
// 00688de2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00688de6  8d44240c             lea eax, [esp + 0xc]
// 00688dea  50                   push eax
// 00688deb  8bf1                 mov esi, ecx
// 00688ded  c70700000000         mov dword ptr [edi], 0
// 00688df3  e8b8d1ffff           call 0x685fb0
// 00688df8  85c0                 test eax, eax
// 00688dfa  7f0a                 jg 0x688e06
// 00688dfc  5f                   pop edi
// 00688dfd  b857000780           mov eax, 0x80070057
// 00688e02  5e                   pop esi
// 00688e03  c21400               ret 0x14
// 00688e06  83c0ff               add eax, -1
// 00688e09  50                   push eax
// 00688e0a  8d4eac               lea ecx, [esi - 0x54]
// 00688e0d  e8eef0ffff           call 0x687f00
// 00688e12  85c0                 test eax, eax
// 00688e14  74e6                 je 0x688dfc
// 00688e16  6a01                 push 1
// 00688e18  8bc8                 mov ecx, eax
// 00688e1a  e8751d0b00           call 0x73ab94
// 00688e1f  8907                 mov dword ptr [edi], eax
// 00688e21  5f                   pop edi
// 00688e22  33c0                 xor eax, eax
// 00688e24  5e                   pop esi
// 00688e25  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleChild@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
