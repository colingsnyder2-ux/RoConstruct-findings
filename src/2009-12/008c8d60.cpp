// roc 2009-12 008c8d60  unit: CXTPPropertyGridInplaceEdit  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c8d60
//
// 008c8d60  56                   push esi
// 008c8d61  8bf1                 mov esi, ecx
// 008c8d63  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008c8d67  741f                 je 0x8c8d88
// 008c8d69  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c8d6d  7419                 je 0x8c8d88
// 008c8d6f  e8fed60500           call 0x926472
// 008c8d74  a900080000           test eax, 0x800
// 008c8d79  750d                 jne 0x8c8d88
// 008c8d7b  8d4e70               lea ecx, [esi + 0x70]
// 008c8d7e  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008c8d84  84c0                 test al, al
// 008c8d86  7417                 je 0x8c8d9f
// 008c8d88  8b06                 mov eax, dword ptr [esi]
// 008c8d8a  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 008c8d90  6a00                 push 0
// 008c8d92  6a00                 push 0
// 008c8d94  6800030000           push 0x300
// 008c8d99  8bce                 mov ecx, esi
// 008c8d9b  ffd2                 call edx
// 008c8d9d  5e                   pop esi
// 008c8d9e  c3                   ret 
// 008c8d9f  8bce                 mov ecx, esi
// 008c8da1  e82af4ffff           call 0x8c81d0
// 008c8da6  8bce                 mov ecx, esi
// 008c8da8  e833faffff           call 0x8c87e0
// 008c8dad  b801000000           mov eax, 1
// 008c8db2  5e                   pop esi
// 008c8db3  c3                   ret 
// copied from an identical function in another client (function ?MaskCut@?$CXTMaskEditT@VCEdit@@@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp