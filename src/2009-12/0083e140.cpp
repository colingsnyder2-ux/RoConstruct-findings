// roc 2009-12 0083e140  unit: CXTPCustomizeSheet  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083e140
//
// 0083e140  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0083e146  56                   push esi
// 0083e147  8b7058               mov esi, dword ptr [eax + 0x58]
// 0083e14a  85f6                 test esi, esi
// 0083e14c  743a                 je 0x83e188
// 0083e14e  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 0083e155  7f1d                 jg 0x83e174
// 0083e157  8d8edc000000         lea ecx, [esi + 0xdc]
// 0083e15d  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0083e163  84c0                 test al, al
// 0083e165  740d                 je 0x83e174
// 0083e167  83be4c010000ff       cmp dword ptr [esi + 0x14c], -1
// 0083e16e  7504                 jne 0x83e174
// 0083e170  33c0                 xor eax, eax
// 0083e172  eb05                 jmp 0x83e179
// 0083e174  b801000000           mov eax, 1
// 0083e179  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0083e17d  8b11                 mov edx, dword ptr [ecx]
// 0083e17f  5e                   pop esi
// 0083e180  89442404             mov dword ptr [esp + 4], eax
// 0083e184  8b02                 mov eax, dword ptr [edx]
// 0083e186  ffe0                 jmp eax
// 0083e188  5e                   pop esi
// 0083e189  c20400               ret 4
// copied from an identical function in another client (function ?OnUpdateCustomizeReset@CXTPCustomizeSheet@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals-string-calls Source\CommandBars\XTPCustomizeSheet.cpp