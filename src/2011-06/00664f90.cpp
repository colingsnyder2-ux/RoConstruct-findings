// roc 2011-06 00664f90  unit: RBX::Camera  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00664f90
//
// 00664f90  51                   push ecx
// 00664f91  6a18                 push 0x18
// 00664f93  c744240400000000     mov dword ptr [esp + 4], 0
// 00664f9b  e8be501a00           call 0x80a05e
// 00664fa0  83c404               add esp, 4
// 00664fa3  85c0                 test eax, eax
// 00664fa5  742c                 je 0x664fd3
// 00664fa7  c70010bea900         mov dword ptr [eax], 0xa9be10
// 00664fad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00664fb1  894808               mov dword ptr [eax + 8], ecx
// 00664fb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00664fb8  89500c               mov dword ptr [eax + 0xc], edx
// 00664fbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00664fbf  894810               mov dword ptr [eax + 0x10], ecx
// 00664fc2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00664fc6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00664fca  895014               mov dword ptr [eax + 0x14], edx
// 00664fcd  8901                 mov dword ptr [ecx], eax
// 00664fcf  8bc1                 mov eax, ecx
// 00664fd1  59                   pop ecx
// 00664fd2  c3                   ret 
// 00664fd3  8b442408             mov eax, dword ptr [esp + 8]
// 00664fd7  33c9                 xor ecx, ecx
// 00664fd9  8908                 mov dword ptr [eax], ecx
// 00664fdb  59                   pop ecx
// 00664fdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
