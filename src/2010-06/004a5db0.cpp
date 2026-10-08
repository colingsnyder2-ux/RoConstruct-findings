// roc 2010-06 004a5db0  unit: RBX::VBrickColor::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a5db0
//
// 004a5db0  51                   push ecx
// 004a5db1  6a18                 push 0x18
// 004a5db3  c744240400000000     mov dword ptr [esp + 4], 0
// 004a5dbb  e8e01b3000           call 0x7a79a0
// 004a5dc0  83c404               add esp, 4
// 004a5dc3  85c0                 test eax, eax
// 004a5dc5  7424                 je 0x4a5deb
// 004a5dc7  c700547da100         mov dword ptr [eax], 0xa17d54
// 004a5dcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a5dd1  894808               mov dword ptr [eax + 8], ecx
// 004a5dd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a5dd8  89500c               mov dword ptr [eax + 0xc], edx
// 004a5ddb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a5ddf  894810               mov dword ptr [eax + 0x10], ecx
// 004a5de2  8b542418             mov edx, dword ptr [esp + 0x18]
// 004a5de6  895014               mov dword ptr [eax + 0x14], edx
// 004a5de9  eb02                 jmp 0x4a5ded
// 004a5deb  33c0                 xor eax, eax
// 004a5ded  56                   push esi
// 004a5dee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a5df2  6a00                 push 0
// 004a5df4  8906                 mov dword ptr [esi], eax
// 004a5df6  e89f1b3000           call 0x7a799a
// 004a5dfb  83c404               add esp, 4
// 004a5dfe  8bc6                 mov eax, esi
// 004a5e00  5e                   pop esi
// 004a5e01  59                   pop ecx
// 004a5e02  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
