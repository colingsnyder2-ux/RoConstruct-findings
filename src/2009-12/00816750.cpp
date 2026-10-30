// roc 2009-12 00816750  unit: MyXTPCommandBars  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00816750
//
// 00816750  57                   push edi
// 00816751  8bf9                 mov edi, ecx
// 00816753  837f5c00             cmp dword ptr [edi + 0x5c], 0
// 00816757  0f8589000000         jne 0x8167e6
// 0081675d  8b07                 mov eax, dword ptr [edi]
// 0081675f  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00816762  56                   push esi
// 00816763  ffd2                 call edx
// 00816765  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 0081676b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0081676e  8bf0                 mov esi, eax
// 00816770  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00816774  56                   push esi
// 00816775  50                   push eax
// 00816776  685c280000           push 0x285c
// 0081677b  52                   push edx
// 0081677c  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00816782  85f6                 test esi, esi
// 00816784  745f                 je 0x8167e5
// 00816786  8bce                 mov ecx, esi
// 00816788  e8c3eafeff           call 0x805250
// 0081678d  85c0                 test eax, eax
// 0081678f  7e4d                 jle 0x8167de
// 00816791  8bcf                 mov ecx, edi
// 00816793  e808dcffff           call 0x8143a0
// 00816798  f7d8                 neg eax
// 0081679a  1bc0                 sbb eax, eax
// 0081679c  f7d8                 neg eax
// 0081679e  8bcf                 mov ecx, edi
// 008167a0  89869c010000         mov dword ptr [esi + 0x19c], eax
// 008167a6  e835f7ffff           call 0x815ee0
// 008167ab  8b442414             mov eax, dword ptr [esp + 0x14]
// 008167af  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008167b3  6a00                 push 0
// 008167b5  50                   push eax
// 008167b6  51                   push ecx
// 008167b7  8bce                 mov ecx, esi
// 008167b9  e802ce0200           call 0x8435c0
// 008167be  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 008167c5  7417                 je 0x8167de
// 008167c7  e84ad8fdff           call 0x7f4016
// 008167cc  8b10                 mov edx, dword ptr [eax]
// 008167ce  8bc8                 mov ecx, eax
// 008167d0  8b4264               mov eax, dword ptr [edx + 0x64]
// 008167d3  ffd0                 call eax
// 008167d5  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 008167dc  75e9                 jne 0x8167c7
// 008167de  8bce                 mov ecx, esi
// 008167e0  e8f7d5fdff           call 0x7f3ddc
// 008167e5  5e                   pop esi
// 008167e6  5f                   pop edi
// 008167e7  c20c00               ret 0xc
// copied from an identical function in another client (function ?ContextMenu@CXTPCommandBars@@UAEXPAVCXTPToolBar@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp