// roc 2009-12 00891910  unit: CXTPDockBar  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00891910
//
// 00891910  56                   push esi
// 00891911  8bf1                 mov esi, ecx
// 00891913  e838f6ffff           call 0x890f50
// 00891918  85c0                 test eax, eax
// 0089191a  7548                 jne 0x891964
// 0089191c  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0089191f  8b01                 mov eax, dword ptr [ecx]
// 00891921  8b5058               mov edx, dword ptr [eax + 0x58]
// 00891924  ffd2                 call edx
// 00891926  85c0                 test eax, eax
// 00891928  743a                 je 0x891964
// 0089192a  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0089192d  8b01                 mov eax, dword ptr [ecx]
// 0089192f  8b5058               mov edx, dword ptr [eax + 0x58]
// 00891932  ffd2                 call edx
// 00891934  8b10                 mov edx, dword ptr [eax]
// 00891936  8bc8                 mov ecx, eax
// 00891938  8b829c010000         mov eax, dword ptr [edx + 0x19c]
// 0089193e  ffd0                 call eax
// 00891940  85c0                 test eax, eax
// 00891942  7420                 je 0x891964
// 00891944  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00891947  8b11                 mov edx, dword ptr [ecx]
// 00891949  8b4258               mov eax, dword ptr [edx + 0x58]
// 0089194c  6aff                 push -1
// 0089194e  ffd0                 call eax
// 00891950  50                   push eax
// 00891951  8bce                 mov ecx, esi
// 00891953  e8f8fcffff           call 0x891650
// 00891958  83f8ff               cmp eax, -1
// 0089195b  7407                 je 0x891964
// 0089195d  83c8ff               or eax, 0xffffffff
// 00891960  5e                   pop esi
// 00891961  c20800               ret 8
// 00891964  8bce                 mov ecx, esi
// 00891966  e8c524f6ff           call 0x7f3e30
// 0089196b  5e                   pop esi
// 0089196c  c20800               ret 8
// copied from an identical function in another client (function ?OnNcHitTest@CXTPDockBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp