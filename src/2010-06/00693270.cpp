// roc 2010-06 00693270  unit: RBX::P8Lighting::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00693270
//
// 00693270  51                   push ecx
// 00693271  6a18                 push 0x18
// 00693273  c744240400000000     mov dword ptr [esp + 4], 0
// 0069327b  e820471100           call 0x7a79a0
// 00693280  83c404               add esp, 4
// 00693283  85c0                 test eax, eax
// 00693285  7424                 je 0x6932ab
// 00693287  c70084dea300         mov dword ptr [eax], 0xa3de84
// 0069328d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00693291  894808               mov dword ptr [eax + 8], ecx
// 00693294  8b542410             mov edx, dword ptr [esp + 0x10]
// 00693298  89500c               mov dword ptr [eax + 0xc], edx
// 0069329b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069329f  894810               mov dword ptr [eax + 0x10], ecx
// 006932a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006932a6  895014               mov dword ptr [eax + 0x14], edx
// 006932a9  eb02                 jmp 0x6932ad
// 006932ab  33c0                 xor eax, eax
// 006932ad  56                   push esi
// 006932ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006932b2  6a00                 push 0
// 006932b4  8906                 mov dword ptr [esi], eax
// 006932b6  e8df461100           call 0x7a799a
// 006932bb  83c404               add esp, 4
// 006932be  8bc6                 mov eax, esi
// 006932c0  5e                   pop esi
// 006932c1  59                   pop ecx
// 006932c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
