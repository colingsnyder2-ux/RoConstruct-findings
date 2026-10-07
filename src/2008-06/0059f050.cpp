// roc 2008-06 0059f050  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059f050
//
// 0059f050  51                   push ecx
// 0059f051  6a18                 push 0x18
// 0059f053  c744240400000000     mov dword ptr [esp + 4], 0
// 0059f05b  e8c0181000           call 0x6a0920
// 0059f060  83c404               add esp, 4
// 0059f063  85c0                 test eax, eax
// 0059f065  742c                 je 0x59f093
// 0059f067  c700c8328300         mov dword ptr [eax], 0x8332c8
// 0059f06d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059f071  894808               mov dword ptr [eax + 8], ecx
// 0059f074  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059f078  89500c               mov dword ptr [eax + 0xc], edx
// 0059f07b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059f07f  894810               mov dword ptr [eax + 0x10], ecx
// 0059f082  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059f086  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f08a  895014               mov dword ptr [eax + 0x14], edx
// 0059f08d  8901                 mov dword ptr [ecx], eax
// 0059f08f  8bc1                 mov eax, ecx
// 0059f091  59                   pop ecx
// 0059f092  c3                   ret 
// 0059f093  8b442408             mov eax, dword ptr [esp + 8]
// 0059f097  33c9                 xor ecx, ecx
// 0059f099  8908                 mov dword ptr [eax], ecx
// 0059f09b  59                   pop ecx
// 0059f09c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
