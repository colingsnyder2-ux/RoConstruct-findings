// roc 2011-06 0073f130  unit: RBX::Scale9Frame  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0073f130
//
// 0073f130  51                   push ecx
// 0073f131  6a18                 push 0x18
// 0073f133  c744240400000000     mov dword ptr [esp + 4], 0
// 0073f13b  e81eaf0c00           call 0x80a05e
// 0073f140  83c404               add esp, 4
// 0073f143  85c0                 test eax, eax
// 0073f145  742c                 je 0x73f173
// 0073f147  c700b445ab00         mov dword ptr [eax], 0xab45b4
// 0073f14d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073f151  894808               mov dword ptr [eax + 8], ecx
// 0073f154  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073f158  89500c               mov dword ptr [eax + 0xc], edx
// 0073f15b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073f15f  894810               mov dword ptr [eax + 0x10], ecx
// 0073f162  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0073f166  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073f16a  895014               mov dword ptr [eax + 0x14], edx
// 0073f16d  8901                 mov dword ptr [ecx], eax
// 0073f16f  8bc1                 mov eax, ecx
// 0073f171  59                   pop ecx
// 0073f172  c3                   ret 
// 0073f173  8b442408             mov eax, dword ptr [esp + 8]
// 0073f177  33c9                 xor ecx, ecx
// 0073f179  8908                 mov dword ptr [eax], ecx
// 0073f17b  59                   pop ecx
// 0073f17c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
