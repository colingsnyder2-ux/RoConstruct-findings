// roc 2010-06 006bb010  unit: RBX::P8BillboardGui::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bb010
//
// 006bb010  51                   push ecx
// 006bb011  6a18                 push 0x18
// 006bb013  c744240400000000     mov dword ptr [esp + 4], 0
// 006bb01b  e880c90e00           call 0x7a79a0
// 006bb020  83c404               add esp, 4
// 006bb023  85c0                 test eax, eax
// 006bb025  7424                 je 0x6bb04b
// 006bb027  c700dc2ba400         mov dword ptr [eax], 0xa42bdc
// 006bb02d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006bb031  894808               mov dword ptr [eax + 8], ecx
// 006bb034  8b542410             mov edx, dword ptr [esp + 0x10]
// 006bb038  89500c               mov dword ptr [eax + 0xc], edx
// 006bb03b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006bb03f  894810               mov dword ptr [eax + 0x10], ecx
// 006bb042  8b542418             mov edx, dword ptr [esp + 0x18]
// 006bb046  895014               mov dword ptr [eax + 0x14], edx
// 006bb049  eb02                 jmp 0x6bb04d
// 006bb04b  33c0                 xor eax, eax
// 006bb04d  56                   push esi
// 006bb04e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bb052  6a00                 push 0
// 006bb054  8906                 mov dword ptr [esi], eax
// 006bb056  e83fc90e00           call 0x7a799a
// 006bb05b  83c404               add esp, 4
// 006bb05e  8bc6                 mov eax, esi
// 006bb060  5e                   pop esi
// 006bb061  59                   pop ecx
// 006bb062  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
