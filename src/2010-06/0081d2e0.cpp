// roc 2010-06 0081d2e0  unit: CXTPPropertyGridView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081d2e0
//
// 0081d2e0  56                   push esi
// 0081d2e1  8bf1                 mov esi, ecx
// 0081d2e3  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 0081d2ea  7437                 je 0x81d323
// 0081d2ec  e87ff4ffff           call 0x81c770
// 0081d2f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0081d2f5  8d50fc               lea edx, [eax - 4]
// 0081d2f8  3bca                 cmp ecx, edx
// 0081d2fa  7e27                 jle 0x81d323
// 0081d2fc  83c002               add eax, 2
// 0081d2ff  3bc8                 cmp ecx, eax
// 0081d301  7f20                 jg 0x81d323
// 0081d303  8b4620               mov eax, dword ptr [esi + 0x20]
// 0081d306  6a00                 push 0
// 0081d308  6a00                 push 0
// 0081d30a  688b010000           push 0x18b
// 0081d30f  50                   push eax
// 0081d310  ff1554ba9e00         call dword ptr [0x9eba54]
// 0081d316  85c0                 test eax, eax
// 0081d318  7e09                 jle 0x81d323
// 0081d31a  b800010000           mov eax, 0x100
// 0081d31f  5e                   pop esi
// 0081d320  c20800               ret 8
// 0081d323  83c8ff               or eax, 0xffffffff
// 0081d326  5e                   pop esi
// 0081d327  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?HitTest@CXTPPropertyGridView@@ABEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
