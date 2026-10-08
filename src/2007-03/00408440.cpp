// roc 2007-03 00408440  unit: seg_00400000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00408440
//
// 00408440  8b4104               mov eax, dword ptr [ecx + 4]
// 00408443  85c0                 test eax, eax
// 00408445  7501                 jne 0x408448
// 00408447  c3                   ret 
// 00408448  8b4908               mov ecx, dword ptr [ecx + 8]
// 0040844b  2bc8                 sub ecx, eax
// 0040844d  b893244992           mov eax, 0x92492493
// 00408452  f7e9                 imul ecx
// 00408454  03d1                 add edx, ecx
// 00408456  c1fa04               sar edx, 4
// 00408459  8bc2                 mov eax, edx
// 0040845b  c1e81f               shr eax, 0x1f
// 0040845e  03c2                 add eax, edx
// 00408460  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?size@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
