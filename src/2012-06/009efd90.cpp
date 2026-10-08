// roc 2012-06 009efd90  unit: CXTPPropertyGridView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009efd90
//
// 009efd90  56                   push esi
// 009efd91  8bf1                 mov esi, ecx
// 009efd93  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 009efd9a  7437                 je 0x9efdd3
// 009efd9c  e87ff4ffff           call 0x9ef220
// 009efda1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009efda5  8d50fc               lea edx, [eax - 4]
// 009efda8  3bca                 cmp ecx, edx
// 009efdaa  7e27                 jle 0x9efdd3
// 009efdac  83c002               add eax, 2
// 009efdaf  3bc8                 cmp ecx, eax
// 009efdb1  7f20                 jg 0x9efdd3
// 009efdb3  8b4620               mov eax, dword ptr [esi + 0x20]
// 009efdb6  6a00                 push 0
// 009efdb8  6a00                 push 0
// 009efdba  688b010000           push 0x18b
// 009efdbf  50                   push eax
// 009efdc0  ff15043cb200         call dword ptr [0xb23c04]
// 009efdc6  85c0                 test eax, eax
// 009efdc8  7e09                 jle 0x9efdd3
// 009efdca  b800010000           mov eax, 0x100
// 009efdcf  5e                   pop esi
// 009efdd0  c20800               ret 8
// 009efdd3  83c8ff               or eax, 0xffffffff
// 009efdd6  5e                   pop esi
// 009efdd7  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?HitTest@CXTPPropertyGridView@@ABEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
