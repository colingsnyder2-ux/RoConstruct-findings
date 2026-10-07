// roc 2008-06 005e02d0  unit: RBX::P8Lighting::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e02d0
//
// 005e02d0  51                   push ecx
// 005e02d1  6a18                 push 0x18
// 005e02d3  c744240400000000     mov dword ptr [esp + 4], 0
// 005e02db  e840060c00           call 0x6a0920
// 005e02e0  83c404               add esp, 4
// 005e02e3  85c0                 test eax, eax
// 005e02e5  742c                 je 0x5e0313
// 005e02e7  c70028dc8300         mov dword ptr [eax], 0x83dc28
// 005e02ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e02f1  894808               mov dword ptr [eax + 8], ecx
// 005e02f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e02f8  89500c               mov dword ptr [eax + 0xc], edx
// 005e02fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e02ff  894810               mov dword ptr [eax + 0x10], ecx
// 005e0302  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e0306  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e030a  895014               mov dword ptr [eax + 0x14], edx
// 005e030d  8901                 mov dword ptr [ecx], eax
// 005e030f  8bc1                 mov eax, ecx
// 005e0311  59                   pop ecx
// 005e0312  c3                   ret 
// 005e0313  8b442408             mov eax, dword ptr [esp + 8]
// 005e0317  33c9                 xor ecx, ecx
// 005e0319  8908                 mov dword ptr [eax], ecx
// 005e031b  59                   pop ecx
// 005e031c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
