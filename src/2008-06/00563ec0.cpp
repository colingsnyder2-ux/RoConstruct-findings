// roc 2008-06 00563ec0  unit: boost::any::N::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563ec0
//
// 00563ec0  51                   push ecx
// 00563ec1  6a18                 push 0x18
// 00563ec3  c744240400000000     mov dword ptr [esp + 4], 0
// 00563ecb  e850ca1300           call 0x6a0920
// 00563ed0  83c404               add esp, 4
// 00563ed3  85c0                 test eax, eax
// 00563ed5  742c                 je 0x563f03
// 00563ed7  c70010e18200         mov dword ptr [eax], 0x82e110
// 00563edd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00563ee1  894808               mov dword ptr [eax + 8], ecx
// 00563ee4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00563ee8  89500c               mov dword ptr [eax + 0xc], edx
// 00563eeb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00563eef  894810               mov dword ptr [eax + 0x10], ecx
// 00563ef2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00563ef6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00563efa  895014               mov dword ptr [eax + 0x14], edx
// 00563efd  8901                 mov dword ptr [ecx], eax
// 00563eff  8bc1                 mov eax, ecx
// 00563f01  59                   pop ecx
// 00563f02  c3                   ret 
// 00563f03  8b442408             mov eax, dword ptr [esp + 8]
// 00563f07  33c9                 xor ecx, ecx
// 00563f09  8908                 mov dword ptr [eax], ecx
// 00563f0b  59                   pop ecx
// 00563f0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
