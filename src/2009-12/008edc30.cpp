// roc 2009-12 008edc30  unit: PAVCXTPRibbonGroup::?$CArray  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008edc30
//
// 008edc30  56                   push esi
// 008edc31  8bf1                 mov esi, ecx
// 008edc33  e80a880300           call 0x926442
// 008edc38  8d4e20               lea ecx, [esi + 0x20]
// 008edc3b  c7066cdaa000         mov dword ptr [esi], 0xa0da6c
// 008edc41  e8dafeffff           call 0x8edb20
// 008edc46  33c0                 xor eax, eax
// 008edc48  894634               mov dword ptr [esi + 0x34], eax
// 008edc4b  894638               mov dword ptr [esi + 0x38], eax
// 008edc4e  8bc6                 mov eax, esi
// 008edc50  5e                   pop esi
// 008edc51  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRibbonGroups@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp