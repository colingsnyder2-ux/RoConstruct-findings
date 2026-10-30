// roc 2010-06 00818900  unit: CXTPPropertyGridItem  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00818900
//
// 00818900  6aff                 push -1
// 00818902  68b94c9b00           push 0x9b4cb9
// 00818907  64a100000000         mov eax, dword ptr fs:[0]
// 0081890d  50                   push eax
// 0081890e  51                   push ecx
// 0081890f  56                   push esi
// 00818910  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00818915  33c4                 xor eax, esp
// 00818917  50                   push eax
// 00818918  8d44240c             lea eax, [esp + 0xc]
// 0081891c  64a300000000         mov dword ptr fs:[0], eax
// 00818922  8bf1                 mov esi, ecx
// 00818924  8d442408             lea eax, [esp + 8]
// 00818928  50                   push eax
// 00818929  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00818931  e80ab1c1ff           call 0x433a40
// 00818936  83bef400000000       cmp dword ptr [esi + 0xf4], 0
// 0081893d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00818945  7421                 je 0x818968
// 00818947  8d4c2408             lea ecx, [esp + 8]
// 0081894b  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00818951  0fb68ef0000000       movzx ecx, byte ptr [esi + 0xf0]
// 00818958  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0081895c  50                   push eax
// 0081895d  51                   push ecx
// 0081895e  8bce                 mov ecx, esi
// 00818960  ff15f0ca9e00         call dword ptr [0x9ecaf0]
// 00818966  eb11                 jmp 0x818979
// 00818968  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0081896c  8d542408             lea edx, [esp + 8]
// 00818970  52                   push edx
// 00818971  8bce                 mov ecx, esi
// 00818973  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 00818979  8d4c2408             lea ecx, [esp + 8]
// 0081897d  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00818983  8bc6                 mov eax, esi
// 00818985  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00818989  64890d00000000       mov dword ptr fs:[0], ecx
// 00818990  59                   pop ecx
// 00818991  5e                   pop esi
// 00818992  83c410               add esp, 0x10
// 00818995  c20400               ret 4
// copied from an identical function in another client (function ?GetViewValue@CXTPPropertyGridItem@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp