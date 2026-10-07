// roc 2008-06 0059f140  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059f140
//
// 0059f140  51                   push ecx
// 0059f141  6a18                 push 0x18
// 0059f143  c744240400000000     mov dword ptr [esp + 4], 0
// 0059f14b  e8d0171000           call 0x6a0920
// 0059f150  83c404               add esp, 4
// 0059f153  85c0                 test eax, eax
// 0059f155  742c                 je 0x59f183
// 0059f157  c70004338300         mov dword ptr [eax], 0x833304
// 0059f15d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059f161  894808               mov dword ptr [eax + 8], ecx
// 0059f164  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059f168  89500c               mov dword ptr [eax + 0xc], edx
// 0059f16b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059f16f  894810               mov dword ptr [eax + 0x10], ecx
// 0059f172  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059f176  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f17a  895014               mov dword ptr [eax + 0x14], edx
// 0059f17d  8901                 mov dword ptr [ecx], eax
// 0059f17f  8bc1                 mov eax, ecx
// 0059f181  59                   pop ecx
// 0059f182  c3                   ret 
// 0059f183  8b442408             mov eax, dword ptr [esp + 8]
// 0059f187  33c9                 xor ecx, ecx
// 0059f189  8908                 mov dword ptr [eax], ecx
// 0059f18b  59                   pop ecx
// 0059f18c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
