// roc 2009-12 0083e0b0  unit: CXTPCustomizeSheet  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083e0b0
//
// 0083e0b0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0083e0b6  8b4058               mov eax, dword ptr [eax + 0x58]
// 0083e0b9  85c0                 test eax, eax
// 0083e0bb  744c                 je 0x83e109
// 0083e0bd  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 0083e0c3  56                   push esi
// 0083e0c4  83f802               cmp eax, 2
// 0083e0c7  7413                 je 0x83e0dc
// 0083e0c9  83f803               cmp eax, 3
// 0083e0cc  740e                 je 0x83e0dc
// 0083e0ce  83f804               cmp eax, 4
// 0083e0d1  7409                 je 0x83e0dc
// 0083e0d3  83f801               cmp eax, 1
// 0083e0d6  7404                 je 0x83e0dc
// 0083e0d8  33f6                 xor esi, esi
// 0083e0da  eb05                 jmp 0x83e0e1
// 0083e0dc  be01000000           mov esi, 1
// 0083e0e1  6a02                 push 2
// 0083e0e3  ff1514cc9800         call dword ptr [0x98cc14]
// 0083e0e9  85c0                 test eax, eax
// 0083e0eb  740b                 je 0x83e0f8
// 0083e0ed  85f6                 test esi, esi
// 0083e0ef  7407                 je 0x83e0f8
// 0083e0f1  b801000000           mov eax, 1
// 0083e0f6  eb02                 jmp 0x83e0fa
// 0083e0f8  33c0                 xor eax, eax
// 0083e0fa  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0083e0fe  8b11                 mov edx, dword ptr [ecx]
// 0083e100  5e                   pop esi
// 0083e101  89442404             mov dword ptr [esp + 4], eax
// 0083e105  8b02                 mov eax, dword ptr [edx]
// 0083e107  ffe0                 jmp eax
// 0083e109  c20400               ret 4
// copied from an identical function in another client (function ?OnUpdateCustomizePasteImage@CXTPCustomizeSheet@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp