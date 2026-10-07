// roc 2011-06 0059ee20  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059ee20
//
// 0059ee20  51                   push ecx
// 0059ee21  6a18                 push 0x18
// 0059ee23  c744240400000000     mov dword ptr [esp + 4], 0
// 0059ee2b  e82eb22600           call 0x80a05e
// 0059ee30  83c404               add esp, 4
// 0059ee33  85c0                 test eax, eax
// 0059ee35  742c                 je 0x59ee63
// 0059ee37  c70038c6a800         mov dword ptr [eax], 0xa8c638
// 0059ee3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059ee41  894808               mov dword ptr [eax + 8], ecx
// 0059ee44  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059ee48  89500c               mov dword ptr [eax + 0xc], edx
// 0059ee4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059ee4f  894810               mov dword ptr [eax + 0x10], ecx
// 0059ee52  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059ee56  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059ee5a  895014               mov dword ptr [eax + 0x14], edx
// 0059ee5d  8901                 mov dword ptr [ecx], eax
// 0059ee5f  8bc1                 mov eax, ecx
// 0059ee61  59                   pop ecx
// 0059ee62  c3                   ret 
// 0059ee63  8b442408             mov eax, dword ptr [esp + 8]
// 0059ee67  33c9                 xor ecx, ecx
// 0059ee69  8908                 mov dword ptr [eax], ecx
// 0059ee6b  59                   pop ecx
// 0059ee6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
