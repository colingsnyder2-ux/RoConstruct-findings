// roc 2012-06 00747800  unit: RBX::VDecal::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00747800
//
// 00747800  51                   push ecx
// 00747801  6a18                 push 0x18
// 00747803  c744240400000000     mov dword ptr [esp + 4], 0
// 0074780b  e80aa92300           call 0x98211a
// 00747810  83c404               add esp, 4
// 00747813  85c0                 test eax, eax
// 00747815  7424                 je 0x74783b
// 00747817  c700e0adba00         mov dword ptr [eax], 0xbaade0
// 0074781d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00747821  894808               mov dword ptr [eax + 8], ecx
// 00747824  8b542410             mov edx, dword ptr [esp + 0x10]
// 00747828  89500c               mov dword ptr [eax + 0xc], edx
// 0074782b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074782f  894810               mov dword ptr [eax + 0x10], ecx
// 00747832  8b542418             mov edx, dword ptr [esp + 0x18]
// 00747836  895014               mov dword ptr [eax + 0x14], edx
// 00747839  eb02                 jmp 0x74783d
// 0074783b  33c0                 xor eax, eax
// 0074783d  56                   push esi
// 0074783e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00747842  6a00                 push 0
// 00747844  8906                 mov dword ptr [esi], eax
// 00747846  e8c9a82300           call 0x982114
// 0074784b  83c404               add esp, 4
// 0074784e  8bc6                 mov eax, esi
// 00747850  5e                   pop esi
// 00747851  59                   pop ecx
// 00747852  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
