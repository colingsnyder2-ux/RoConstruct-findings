// roc 2009-06 0078e2c0  unit: CXTPPropertyGridView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078e2c0
//
// 0078e2c0  56                   push esi
// 0078e2c1  8bf1                 mov esi, ecx
// 0078e2c3  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 0078e2ca  7437                 je 0x78e303
// 0078e2cc  e87ff4ffff           call 0x78d750
// 0078e2d1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0078e2d5  8d50fc               lea edx, [eax - 4]
// 0078e2d8  3bca                 cmp ecx, edx
// 0078e2da  7e27                 jle 0x78e303
// 0078e2dc  83c002               add eax, 2
// 0078e2df  3bc8                 cmp ecx, eax
// 0078e2e1  7f20                 jg 0x78e303
// 0078e2e3  8b4620               mov eax, dword ptr [esi + 0x20]
// 0078e2e6  6a00                 push 0
// 0078e2e8  6a00                 push 0
// 0078e2ea  688b010000           push 0x18b
// 0078e2ef  50                   push eax
// 0078e2f0  ff1590ee8900         call dword ptr [0x89ee90]
// 0078e2f6  85c0                 test eax, eax
// 0078e2f8  7e09                 jle 0x78e303
// 0078e2fa  b800010000           mov eax, 0x100
// 0078e2ff  5e                   pop esi
// 0078e300  c20800               ret 8
// 0078e303  83c8ff               or eax, 0xffffffff
// 0078e306  5e                   pop esi
// 0078e307  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?HitTest@CXTPPropertyGridView@@ABEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
