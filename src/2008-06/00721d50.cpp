// roc 2008-06 00721d50  unit: CXTPMenuBar  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00721d50
//
// 00721d50  56                   push esi
// 00721d51  8bf1                 mov esi, ecx
// 00721d53  8b06                 mov eax, dword ptr [esi]
// 00721d55  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 00721d5b  ffd2                 call edx
// 00721d5d  85c0                 test eax, eax
// 00721d5f  7504                 jne 0x721d65
// 00721d61  33c0                 xor eax, eax
// 00721d63  5e                   pop esi
// 00721d64  c3                   ret 
// 00721d65  8bce                 mov ecx, esi
// 00721d67  e844ffffff           call 0x721cb0
// 00721d6c  85c0                 test eax, eax
// 00721d6e  7514                 jne 0x721d84
// 00721d70  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00721d76  39413c               cmp dword ptr [ecx + 0x3c], eax
// 00721d79  7409                 je 0x721d84
// 00721d7b  e8b016fdff           call 0x6f3430
// 00721d80  85c0                 test eax, eax
// 00721d82  74dd                 je 0x721d61
// 00721d84  b801000000           mov eax, 1
// 00721d89  5e                   pop esi
// 00721d8a  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPMenuBar.cpp (function ?ShouldSerializeBar@CXTPMenuBar@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp
