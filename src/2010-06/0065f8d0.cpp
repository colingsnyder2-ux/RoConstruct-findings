// roc 2010-06 0065f8d0  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065f8d0
//
// 0065f8d0  51                   push ecx
// 0065f8d1  6a18                 push 0x18
// 0065f8d3  c744240400000000     mov dword ptr [esp + 4], 0
// 0065f8db  e8c0801400           call 0x7a79a0
// 0065f8e0  83c404               add esp, 4
// 0065f8e3  85c0                 test eax, eax
// 0065f8e5  7424                 je 0x65f90b
// 0065f8e7  c700f4a6a300         mov dword ptr [eax], 0xa3a6f4
// 0065f8ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065f8f1  894808               mov dword ptr [eax + 8], ecx
// 0065f8f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065f8f8  89500c               mov dword ptr [eax + 0xc], edx
// 0065f8fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065f8ff  894810               mov dword ptr [eax + 0x10], ecx
// 0065f902  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065f906  895014               mov dword ptr [eax + 0x14], edx
// 0065f909  eb02                 jmp 0x65f90d
// 0065f90b  33c0                 xor eax, eax
// 0065f90d  56                   push esi
// 0065f90e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065f912  6a00                 push 0
// 0065f914  8906                 mov dword ptr [esi], eax
// 0065f916  e87f801400           call 0x7a799a
// 0065f91b  83c404               add esp, 4
// 0065f91e  8bc6                 mov eax, esi
// 0065f920  5e                   pop esi
// 0065f921  59                   pop ecx
// 0065f922  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
