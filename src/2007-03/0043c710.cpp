// roc 2007-03 0043c710  unit: seg_00430000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043c710
//
// 0043c710  8b442408             mov eax, dword ptr [esp + 8]
// 0043c714  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043c718  50                   push eax
// 0043c719  51                   push ecx
// 0043c71a  ff15ece67700         call dword ptr [0x77e6ec]
// 0043c720  83c408               add esp, 8
// 0043c723  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ??R?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
