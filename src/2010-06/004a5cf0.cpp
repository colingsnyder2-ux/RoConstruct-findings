// roc 2010-06 004a5cf0  unit: RBX::VBrickColor::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a5cf0
//
// 004a5cf0  51                   push ecx
// 004a5cf1  6a18                 push 0x18
// 004a5cf3  c744240400000000     mov dword ptr [esp + 4], 0
// 004a5cfb  e8a01c3000           call 0x7a79a0
// 004a5d00  83c404               add esp, 4
// 004a5d03  85c0                 test eax, eax
// 004a5d05  7424                 je 0x4a5d2b
// 004a5d07  c7001c7ea100         mov dword ptr [eax], 0xa17e1c
// 004a5d0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a5d11  894808               mov dword ptr [eax + 8], ecx
// 004a5d14  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a5d18  89500c               mov dword ptr [eax + 0xc], edx
// 004a5d1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a5d1f  894810               mov dword ptr [eax + 0x10], ecx
// 004a5d22  8b542418             mov edx, dword ptr [esp + 0x18]
// 004a5d26  895014               mov dword ptr [eax + 0x14], edx
// 004a5d29  eb02                 jmp 0x4a5d2d
// 004a5d2b  33c0                 xor eax, eax
// 004a5d2d  56                   push esi
// 004a5d2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a5d32  6a00                 push 0
// 004a5d34  8906                 mov dword ptr [esi], eax
// 004a5d36  e85f1c3000           call 0x7a799a
// 004a5d3b  83c404               add esp, 4
// 004a5d3e  8bc6                 mov eax, esi
// 004a5d40  5e                   pop esi
// 004a5d41  59                   pop ecx
// 004a5d42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
