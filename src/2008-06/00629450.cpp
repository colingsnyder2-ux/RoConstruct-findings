// roc 2008-06 00629450  unit: RBX::VClickDetector::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00629450
//
// 00629450  51                   push ecx
// 00629451  6a18                 push 0x18
// 00629453  c744240400000000     mov dword ptr [esp + 4], 0
// 0062945b  e8c0740700           call 0x6a0920
// 00629460  83c404               add esp, 4
// 00629463  85c0                 test eax, eax
// 00629465  742c                 je 0x629493
// 00629467  c70050598400         mov dword ptr [eax], 0x845950
// 0062946d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00629471  894808               mov dword ptr [eax + 8], ecx
// 00629474  8b542410             mov edx, dword ptr [esp + 0x10]
// 00629478  89500c               mov dword ptr [eax + 0xc], edx
// 0062947b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062947f  894810               mov dword ptr [eax + 0x10], ecx
// 00629482  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00629486  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062948a  895014               mov dword ptr [eax + 0x14], edx
// 0062948d  8901                 mov dword ptr [ecx], eax
// 0062948f  8bc1                 mov eax, ecx
// 00629491  59                   pop ecx
// 00629492  c3                   ret 
// 00629493  8b442408             mov eax, dword ptr [esp + 8]
// 00629497  33c9                 xor ecx, ecx
// 00629499  8908                 mov dword ptr [eax], ecx
// 0062949b  59                   pop ecx
// 0062949c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
