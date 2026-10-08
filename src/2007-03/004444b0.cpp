// roc 2007-03 004444b0  unit: seg_00440000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004444b0
//
// 004444b0  8b442408             mov eax, dword ptr [esp + 8]
// 004444b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004444b8  50                   push eax
// 004444b9  51                   push ecx
// 004444ba  ff15e0e67700         call dword ptr [0x77e6e0]
// 004444c0  83c408               add esp, 8
// 004444c3  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ??R?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
