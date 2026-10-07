// roc 2011-06 00714090  unit: RBX::VSparkles::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00714090
//
// 00714090  51                   push ecx
// 00714091  6a18                 push 0x18
// 00714093  c744240400000000     mov dword ptr [esp + 4], 0
// 0071409b  e8be5f0f00           call 0x80a05e
// 007140a0  83c404               add esp, 4
// 007140a3  85c0                 test eax, eax
// 007140a5  742c                 je 0x7140d3
// 007140a7  c700c8f3aa00         mov dword ptr [eax], 0xaaf3c8
// 007140ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007140b1  894808               mov dword ptr [eax + 8], ecx
// 007140b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007140b8  89500c               mov dword ptr [eax + 0xc], edx
// 007140bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007140bf  894810               mov dword ptr [eax + 0x10], ecx
// 007140c2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007140c6  8b542418             mov edx, dword ptr [esp + 0x18]
// 007140ca  895014               mov dword ptr [eax + 0x14], edx
// 007140cd  8901                 mov dword ptr [ecx], eax
// 007140cf  8bc1                 mov eax, ecx
// 007140d1  59                   pop ecx
// 007140d2  c3                   ret 
// 007140d3  8b442408             mov eax, dword ptr [esp + 8]
// 007140d7  33c9                 xor ecx, ecx
// 007140d9  8908                 mov dword ptr [eax], ecx
// 007140db  59                   pop ecx
// 007140dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
