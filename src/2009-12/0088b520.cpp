// roc 2009-12 0088b520  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b520
//
// 0088b520  51                   push ecx
// 0088b521  56                   push esi
// 0088b522  8bf1                 mov esi, ecx
// 0088b524  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088b52a  c744240400000000     mov dword ptr [esp + 4], 0
// 0088b532  85c9                 test ecx, ecx
// 0088b534  7425                 je 0x88b55b
// 0088b536  83792000             cmp dword ptr [ecx + 0x20], 0
// 0088b53a  741f                 je 0x88b55b
// 0088b53c  83be9c01000000       cmp dword ptr [esi + 0x19c], 0
// 0088b543  7416                 je 0x88b55b
// 0088b545  8d8698010000         lea eax, [esi + 0x198]
// 0088b54b  50                   push eax
// 0088b54c  e87fdaf6ff           call 0x7f8fd0
// 0088b551  c7869c01000000000000 mov dword ptr [esi + 0x19c], 0
// 0088b55b  81c698010000         add esi, 0x198
// 0088b561  56                   push esi
// 0088b562  8b742410             mov esi, dword ptr [esp + 0x10]
// 0088b566  8bce                 mov ecx, esi
// 0088b568  ff1594de9800         call dword ptr [0x98de94]
// 0088b56e  8bc6                 mov eax, esi
// 0088b570  5e                   pop esi
// 0088b571  59                   pop ecx
// 0088b572  c20400               ret 4
// copied from an identical function in another client (function ?_GetEditText@CXTPControlEdit@@IBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp