// roc 2011-06 006a86f0  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a86f0
//
// 006a86f0  51                   push ecx
// 006a86f1  6a18                 push 0x18
// 006a86f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006a86fb  e85e191600           call 0x80a05e
// 006a8700  83c404               add esp, 4
// 006a8703  85c0                 test eax, eax
// 006a8705  742c                 je 0x6a8733
// 006a8707  c7000c30aa00         mov dword ptr [eax], 0xaa300c
// 006a870d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a8711  894808               mov dword ptr [eax + 8], ecx
// 006a8714  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a8718  89500c               mov dword ptr [eax + 0xc], edx
// 006a871b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a871f  894810               mov dword ptr [eax + 0x10], ecx
// 006a8722  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a8726  8b542418             mov edx, dword ptr [esp + 0x18]
// 006a872a  895014               mov dword ptr [eax + 0x14], edx
// 006a872d  8901                 mov dword ptr [ecx], eax
// 006a872f  8bc1                 mov eax, ecx
// 006a8731  59                   pop ecx
// 006a8732  c3                   ret 
// 006a8733  8b442408             mov eax, dword ptr [esp + 8]
// 006a8737  33c9                 xor ecx, ecx
// 006a8739  8908                 mov dword ptr [eax], ecx
// 006a873b  59                   pop ecx
// 006a873c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
