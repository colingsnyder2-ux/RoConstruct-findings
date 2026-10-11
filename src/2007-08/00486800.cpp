// roc 2007-08 00486800  unit: G3D::GWindow  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486800
//
// 00486800  51                   push ecx
// 00486801  8b01                 mov eax, dword ptr [ecx]
// 00486803  8b500c               mov edx, dword ptr [eax + 0xc]
// 00486806  56                   push esi
// 00486807  c744240400000000     mov dword ptr [esp + 4], 0
// 0048680f  ffd2                 call edx
// 00486811  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00486815  6854597800           push 0x785954
// 0048681a  8bce                 mov ecx, esi
// 0048681c  ff1598e67700         call dword ptr [0x77e698]
// 00486822  8bc6                 mov eax, esi
// 00486824  5e                   pop esi
// 00486825  59                   pop ecx
// 00486826  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?getStringValue@PropertyDescriptor@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
