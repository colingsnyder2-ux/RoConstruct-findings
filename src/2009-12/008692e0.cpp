// roc 2009-12 008692e0  unit: CXTPPropertyGridView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008692e0
//
// 008692e0  56                   push esi
// 008692e1  8bf1                 mov esi, ecx
// 008692e3  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 008692ea  7437                 je 0x869323
// 008692ec  e86ff4ffff           call 0x868760
// 008692f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008692f5  8d50fc               lea edx, [eax - 4]
// 008692f8  3bca                 cmp ecx, edx
// 008692fa  7e27                 jle 0x869323
// 008692fc  83c002               add eax, 2
// 008692ff  3bc8                 cmp ecx, eax
// 00869301  7f20                 jg 0x869323
// 00869303  8b4620               mov eax, dword ptr [esi + 0x20]
// 00869306  6a00                 push 0
// 00869308  6a00                 push 0
// 0086930a  688b010000           push 0x18b
// 0086930f  50                   push eax
// 00869310  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00869316  85c0                 test eax, eax
// 00869318  7e09                 jle 0x869323
// 0086931a  b800010000           mov eax, 0x100
// 0086931f  5e                   pop esi
// 00869320  c20800               ret 8
// 00869323  83c8ff               or eax, 0xffffffff
// 00869326  5e                   pop esi
// 00869327  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?HitTest@CXTPPropertyGridView@@ABEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
