// roc 2007-03 005b2b00  unit: seg_005b0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b2b00
//
// 005b2b00  8b01                 mov eax, dword ptr [ecx]
// 005b2b02  8b500c               mov edx, dword ptr [eax + 0xc]
// 005b2b05  ffd2                 call edx
// 005b2b07  32c0                 xor al, al
// 005b2b09  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?setStringValue@RefPropertyDescriptor@Reflection@RBX@@MBE_NPAVDescribedBase@23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
