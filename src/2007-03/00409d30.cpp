// roc 2007-03 00409d30  unit: seg_00400000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00409d30
//
// 00409d30  56                   push esi
// 00409d31  8b742408             mov esi, dword ptr [esp + 8]
// 00409d35  57                   push edi
// 00409d36  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00409d3a  3bf7                 cmp esi, edi
// 00409d3c  7411                 je 0x409d4f
// 00409d3e  8bff                 mov edi, edi
// 00409d40  8bce                 mov ecx, esi
// 00409d42  ff158ce77700         call dword ptr [0x77e78c]
// 00409d48  83c61c               add esi, 0x1c
// 00409d4b  3bf7                 cmp esi, edi
// 00409d4d  75f1                 jne 0x409d40
// 00409d4f  5f                   pop edi
// 00409d50  5e                   pop esi
// 00409d51  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?_Destroy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
