// roc 2009-12 006c5d90  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c5d90
//
// 006c5d90  51                   push ecx
// 006c5d91  6a18                 push 0x18
// 006c5d93  c744240400000000     mov dword ptr [esp + 4], 0
// 006c5d9b  e8c0da1200           call 0x7f3860
// 006c5da0  83c404               add esp, 4
// 006c5da3  85c0                 test eax, eax
// 006c5da5  7424                 je 0x6c5dcb
// 006c5da7  c700fc6e9d00         mov dword ptr [eax], 0x9d6efc
// 006c5dad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c5db1  894808               mov dword ptr [eax + 8], ecx
// 006c5db4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c5db8  89500c               mov dword ptr [eax + 0xc], edx
// 006c5dbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c5dbf  894810               mov dword ptr [eax + 0x10], ecx
// 006c5dc2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c5dc6  895014               mov dword ptr [eax + 0x14], edx
// 006c5dc9  eb02                 jmp 0x6c5dcd
// 006c5dcb  33c0                 xor eax, eax
// 006c5dcd  56                   push esi
// 006c5dce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c5dd2  6a00                 push 0
// 006c5dd4  8906                 mov dword ptr [esi], eax
// 006c5dd6  e87fda1200           call 0x7f385a
// 006c5ddb  83c404               add esp, 4
// 006c5dde  8bc6                 mov eax, esi
// 006c5de0  5e                   pop esi
// 006c5de1  59                   pop ecx
// 006c5de2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
