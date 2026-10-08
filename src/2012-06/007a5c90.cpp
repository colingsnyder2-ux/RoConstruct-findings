// roc 2012-06 007a5c90  unit: RBX::VPose::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a5c90
//
// 007a5c90  51                   push ecx
// 007a5c91  6a18                 push 0x18
// 007a5c93  c744240400000000     mov dword ptr [esp + 4], 0
// 007a5c9b  e87ac41d00           call 0x98211a
// 007a5ca0  83c404               add esp, 4
// 007a5ca3  85c0                 test eax, eax
// 007a5ca5  7424                 je 0x7a5ccb
// 007a5ca7  c7001463bb00         mov dword ptr [eax], 0xbb6314
// 007a5cad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007a5cb1  894808               mov dword ptr [eax + 8], ecx
// 007a5cb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a5cb8  89500c               mov dword ptr [eax + 0xc], edx
// 007a5cbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a5cbf  894810               mov dword ptr [eax + 0x10], ecx
// 007a5cc2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a5cc6  895014               mov dword ptr [eax + 0x14], edx
// 007a5cc9  eb02                 jmp 0x7a5ccd
// 007a5ccb  33c0                 xor eax, eax
// 007a5ccd  56                   push esi
// 007a5cce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007a5cd2  6a00                 push 0
// 007a5cd4  8906                 mov dword ptr [esi], eax
// 007a5cd6  e839c41d00           call 0x982114
// 007a5cdb  83c404               add esp, 4
// 007a5cde  8bc6                 mov eax, esi
// 007a5ce0  5e                   pop esi
// 007a5ce1  59                   pop ecx
// 007a5ce2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
