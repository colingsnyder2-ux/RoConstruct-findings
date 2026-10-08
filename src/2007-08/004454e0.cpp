// roc 2007-08 004454e0  unit: VCRenderSettings::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004454e0
//
// 004454e0  51                   push ecx
// 004454e1  6a18                 push 0x18
// 004454e3  c744240400000000     mov dword ptr [esp + 4], 0
// 004454eb  e806aa1e00           call 0x62fef6
// 004454f0  83c404               add esp, 4
// 004454f3  85c0                 test eax, eax
// 004454f5  7424                 je 0x44551b
// 004454f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004454fb  8b542410             mov edx, dword ptr [esp + 0x10]
// 004454ff  894808               mov dword ptr [eax + 8], ecx
// 00445502  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00445506  89500c               mov dword ptr [eax + 0xc], edx
// 00445509  8b542418             mov edx, dword ptr [esp + 0x18]
// 0044550d  c7003cfc7800         mov dword ptr [eax], 0x78fc3c
// 00445513  894810               mov dword ptr [eax + 0x10], ecx
// 00445516  895014               mov dword ptr [eax + 0x14], edx
// 00445519  eb02                 jmp 0x44551d
// 0044551b  33c0                 xor eax, eax
// 0044551d  56                   push esi
// 0044551e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00445522  6a00                 push 0
// 00445524  c744240800000000     mov dword ptr [esp + 8], 0
// 0044552c  8906                 mov dword ptr [esi], eax
// 0044552e  e82fa71e00           call 0x62fc62
// 00445533  83c404               add esp, 4
// 00445536  8bc6                 mov eax, esi
// 00445538  5e                   pop esi
// 00445539  59                   pop ecx
// 0044553a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
