// roc 2009-12 0088c120  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088c120
//
// 0088c120  56                   push esi
// 0088c121  8bf1                 mov esi, ecx
// 0088c123  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0088c126  e8859df6ff           call 0x7f5eb0
// 0088c12b  85c0                 test eax, eax
// 0088c12d  7448                 je 0x88c177
// 0088c12f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0088c132  8d44240c             lea eax, [esp + 0xc]
// 0088c136  50                   push eax
// 0088c137  51                   push ecx
// 0088c138  ff1554cc9800         call dword ptr [0x98cc54]
// 0088c13e  8b4660               mov eax, dword ptr [esi + 0x60]
// 0088c141  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0088c147  8d54240c             lea edx, [esp + 0xc]
// 0088c14b  52                   push edx
// 0088c14c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0088c14f  52                   push edx
// 0088c150  ff1534cc9800         call dword ptr [0x98cc34]
// 0088c156  8b442410             mov eax, dword ptr [esp + 0x10]
// 0088c15a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088c15e  8b542408             mov edx, dword ptr [esp + 8]
// 0088c162  50                   push eax
// 0088c163  8b4660               mov eax, dword ptr [esi + 0x60]
// 0088c166  51                   push ecx
// 0088c167  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0088c16d  52                   push edx
// 0088c16e  e85db2f7ff           call 0x8073d0
// 0088c173  5e                   pop esi
// 0088c174  c20c00               ret 0xc
// 0088c177  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0088c17a  8b11                 mov edx, dword ptr [ecx]
// 0088c17c  8b4270               mov eax, dword ptr [edx + 0x70]
// 0088c17f  6a01                 push 1
// 0088c181  ffd0                 call eax
// 0088c183  8b442410             mov eax, dword ptr [esp + 0x10]
// 0088c187  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088c18b  8b16                 mov edx, dword ptr [esi]
// 0088c18d  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 0088c193  50                   push eax
// 0088c194  8b4660               mov eax, dword ptr [esi + 0x60]
// 0088c197  51                   push ecx
// 0088c198  50                   push eax
// 0088c199  8bce                 mov ecx, esi
// 0088c19b  ffd2                 call edx
// 0088c19d  85c0                 test eax, eax
// 0088c19f  7507                 jne 0x88c1a8
// 0088c1a1  8bce                 mov ecx, esi
// 0088c1a3  e8887cf6ff           call 0x7f3e30
// 0088c1a8  5e                   pop esi
// 0088c1a9  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnRButtonDown@CXTPControlEditCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp