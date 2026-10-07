// roc 2011-06 006de750  unit: RBX::VPhysicsService::?$EventDesc  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006de750
//
// 006de750  51                   push ecx
// 006de751  6a18                 push 0x18
// 006de753  c744240400000000     mov dword ptr [esp + 4], 0
// 006de75b  e8feb81200           call 0x80a05e
// 006de760  83c404               add esp, 4
// 006de763  85c0                 test eax, eax
// 006de765  742c                 je 0x6de793
// 006de767  c700ec77aa00         mov dword ptr [eax], 0xaa77ec
// 006de76d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006de771  894808               mov dword ptr [eax + 8], ecx
// 006de774  8b542410             mov edx, dword ptr [esp + 0x10]
// 006de778  89500c               mov dword ptr [eax + 0xc], edx
// 006de77b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006de77f  894810               mov dword ptr [eax + 0x10], ecx
// 006de782  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006de786  8b542418             mov edx, dword ptr [esp + 0x18]
// 006de78a  895014               mov dword ptr [eax + 0x14], edx
// 006de78d  8901                 mov dword ptr [ecx], eax
// 006de78f  8bc1                 mov eax, ecx
// 006de791  59                   pop ecx
// 006de792  c3                   ret 
// 006de793  8b442408             mov eax, dword ptr [esp + 8]
// 006de797  33c9                 xor ecx, ecx
// 006de799  8908                 mov dword ptr [eax], ecx
// 006de79b  59                   pop ecx
// 006de79c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
