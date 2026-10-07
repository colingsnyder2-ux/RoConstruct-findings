// roc 2008-06 00715b20  unit: CXTPPropertyGridView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00715b20
//
// 00715b20  56                   push esi
// 00715b21  8bf1                 mov esi, ecx
// 00715b23  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 00715b2a  7437                 je 0x715b63
// 00715b2c  e87ff4ffff           call 0x714fb0
// 00715b31  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00715b35  8d50fc               lea edx, [eax - 4]
// 00715b38  3bca                 cmp ecx, edx
// 00715b3a  7e27                 jle 0x715b63
// 00715b3c  83c002               add eax, 2
// 00715b3f  3bc8                 cmp ecx, eax
// 00715b41  7f20                 jg 0x715b63
// 00715b43  8b4620               mov eax, dword ptr [esi + 0x20]
// 00715b46  6a00                 push 0
// 00715b48  6a00                 push 0
// 00715b4a  688b010000           push 0x18b
// 00715b4f  50                   push eax
// 00715b50  ff15142e8000         call dword ptr [0x802e14]
// 00715b56  85c0                 test eax, eax
// 00715b58  7e09                 jle 0x715b63
// 00715b5a  b800010000           mov eax, 0x100
// 00715b5f  5e                   pop esi
// 00715b60  c20800               ret 8
// 00715b63  83c8ff               or eax, 0xffffffff
// 00715b66  5e                   pop esi
// 00715b67  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?HitTest@CXTPPropertyGridView@@ABEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
