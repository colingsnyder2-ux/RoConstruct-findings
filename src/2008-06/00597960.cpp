// roc 2008-06 00597960  unit: RBX::VDecal::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597960
//
// 00597960  51                   push ecx
// 00597961  6a18                 push 0x18
// 00597963  c744240400000000     mov dword ptr [esp + 4], 0
// 0059796b  e8b08f1000           call 0x6a0920
// 00597970  83c404               add esp, 4
// 00597973  85c0                 test eax, eax
// 00597975  742c                 je 0x5979a3
// 00597977  c7006c248300         mov dword ptr [eax], 0x83246c
// 0059797d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00597981  894808               mov dword ptr [eax + 8], ecx
// 00597984  8b542410             mov edx, dword ptr [esp + 0x10]
// 00597988  89500c               mov dword ptr [eax + 0xc], edx
// 0059798b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059798f  894810               mov dword ptr [eax + 0x10], ecx
// 00597992  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00597996  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059799a  895014               mov dword ptr [eax + 0x14], edx
// 0059799d  8901                 mov dword ptr [ecx], eax
// 0059799f  8bc1                 mov eax, ecx
// 005979a1  59                   pop ecx
// 005979a2  c3                   ret 
// 005979a3  8b442408             mov eax, dword ptr [esp + 8]
// 005979a7  33c9                 xor ecx, ecx
// 005979a9  8908                 mov dword ptr [eax], ecx
// 005979ab  59                   pop ecx
// 005979ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
