// roc 2012-06 009c0eb0  unit: CXTTreeBase  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0eb0
//
// 009c0eb0  56                   push esi
// 009c0eb1  8bf1                 mov esi, ecx
// 009c0eb3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0eb6  e817870d00           call 0xa995d2
// 009c0ebb  a900020000           test eax, 0x200
// 009c0ec0  741e                 je 0x9c0ee0
// 009c0ec2  837e1400             cmp dword ptr [esi + 0x14], 0
// 009c0ec6  7418                 je 0x9c0ee0
// 009c0ec8  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c0ecb  6a00                 push 0
// 009c0ecd  c7461400000000       mov dword ptr [esi + 0x14], 0
// 009c0ed4  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c0ed7  6a00                 push 0
// 009c0ed9  51                   push ecx
// 009c0eda  ff15ec3bb200         call dword ptr [0xb23bec]
// 009c0ee0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0ee3  e8f617fcff           call 0x9826de
// 009c0ee8  5e                   pop esi
// 009c0ee9  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnNcMouseMove@CXTPTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
