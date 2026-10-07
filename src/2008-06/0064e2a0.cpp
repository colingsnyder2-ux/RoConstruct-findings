// roc 2008-06 0064e2a0  unit: RBX::P8Camera::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064e2a0
//
// 0064e2a0  51                   push ecx
// 0064e2a1  6a18                 push 0x18
// 0064e2a3  c744240400000000     mov dword ptr [esp + 4], 0
// 0064e2ab  e870260500           call 0x6a0920
// 0064e2b0  83c404               add esp, 4
// 0064e2b3  85c0                 test eax, eax
// 0064e2b5  742c                 je 0x64e2e3
// 0064e2b7  c700a8b28400         mov dword ptr [eax], 0x84b2a8
// 0064e2bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064e2c1  894808               mov dword ptr [eax + 8], ecx
// 0064e2c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064e2c8  89500c               mov dword ptr [eax + 0xc], edx
// 0064e2cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064e2cf  894810               mov dword ptr [eax + 0x10], ecx
// 0064e2d2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064e2d6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064e2da  895014               mov dword ptr [eax + 0x14], edx
// 0064e2dd  8901                 mov dword ptr [ecx], eax
// 0064e2df  8bc1                 mov eax, ecx
// 0064e2e1  59                   pop ecx
// 0064e2e2  c3                   ret 
// 0064e2e3  8b442408             mov eax, dword ptr [esp + 8]
// 0064e2e7  33c9                 xor ecx, ecx
// 0064e2e9  8908                 mov dword ptr [eax], ecx
// 0064e2eb  59                   pop ecx
// 0064e2ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
