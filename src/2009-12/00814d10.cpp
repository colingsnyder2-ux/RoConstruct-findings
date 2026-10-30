// roc 2009-12 00814d10  unit: CXTPCommandBarKeyboardTip  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814d10
//
// 00814d10  8b442404             mov eax, dword ptr [esp + 4]
// 00814d14  53                   push ebx
// 00814d15  56                   push esi
// 00814d16  50                   push eax
// 00814d17  8bd9                 mov ebx, ecx
// 00814d19  e8c2ffffff           call 0x814ce0
// 00814d1e  8bf0                 mov esi, eax
// 00814d20  85f6                 test esi, esi
// 00814d22  742d                 je 0x814d51
// 00814d24  57                   push edi
// 00814d25  8b3e                 mov edi, dword ptr [esi]
// 00814d27  8b9768010000         mov edx, dword ptr [edi + 0x168]
// 00814d2d  8bce                 mov ecx, esi
// 00814d2f  ffd2                 call edx
// 00814d31  f7d8                 neg eax
// 00814d33  1bc0                 sbb eax, eax
// 00814d35  40                   inc eax
// 00814d36  50                   push eax
// 00814d37  8b8764010000         mov eax, dword ptr [edi + 0x164]
// 00814d3d  8bce                 mov ecx, esi
// 00814d3f  ffd0                 call eax
// 00814d41  8b4b74               mov ecx, dword ptr [ebx + 0x74]
// 00814d44  5f                   pop edi
// 00814d45  5e                   pop esi
// 00814d46  c7414c01000000       mov dword ptr [ecx + 0x4c], 1
// 00814d4d  5b                   pop ebx
// 00814d4e  c20400               ret 4
// 00814d51  8b5374               mov edx, dword ptr [ebx + 0x74]
// 00814d54  5e                   pop esi
// 00814d55  c7424c01000000       mov dword ptr [edx + 0x4c], 1
// 00814d5c  5b                   pop ebx
// 00814d5d  c20400               ret 4
// copied from an identical function in another client (function ?ToggleVisible@CXTPCommandBars@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp