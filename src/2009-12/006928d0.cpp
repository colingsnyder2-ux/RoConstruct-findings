// roc 2009-12 006928d0  unit: RBX::Tool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006928d0
//
// 006928d0  51                   push ecx
// 006928d1  6a18                 push 0x18
// 006928d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006928db  e8800f1600           call 0x7f3860
// 006928e0  83c404               add esp, 4
// 006928e3  85c0                 test eax, eax
// 006928e5  7424                 je 0x69290b
// 006928e7  c700101c9d00         mov dword ptr [eax], 0x9d1c10
// 006928ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006928f1  894808               mov dword ptr [eax + 8], ecx
// 006928f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006928f8  89500c               mov dword ptr [eax + 0xc], edx
// 006928fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006928ff  894810               mov dword ptr [eax + 0x10], ecx
// 00692902  8b542418             mov edx, dword ptr [esp + 0x18]
// 00692906  895014               mov dword ptr [eax + 0x14], edx
// 00692909  eb02                 jmp 0x69290d
// 0069290b  33c0                 xor eax, eax
// 0069290d  56                   push esi
// 0069290e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00692912  6a00                 push 0
// 00692914  8906                 mov dword ptr [esi], eax
// 00692916  e83f0f1600           call 0x7f385a
// 0069291b  83c404               add esp, 4
// 0069291e  8bc6                 mov eax, esi
// 00692920  5e                   pop esi
// 00692921  59                   pop ecx
// 00692922  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
