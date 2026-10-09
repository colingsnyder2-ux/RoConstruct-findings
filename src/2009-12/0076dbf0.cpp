// roc 2009-12 0076dbf0  unit: RBX::VFrame::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076dbf0
//
// 0076dbf0  51                   push ecx
// 0076dbf1  6a18                 push 0x18
// 0076dbf3  c744240400000000     mov dword ptr [esp + 4], 0
// 0076dbfb  e8605c0800           call 0x7f3860
// 0076dc00  83c404               add esp, 4
// 0076dc03  85c0                 test eax, eax
// 0076dc05  7424                 je 0x76dc2b
// 0076dc07  c7009c829e00         mov dword ptr [eax], 0x9e829c
// 0076dc0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076dc11  894808               mov dword ptr [eax + 8], ecx
// 0076dc14  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076dc18  89500c               mov dword ptr [eax + 0xc], edx
// 0076dc1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076dc1f  894810               mov dword ptr [eax + 0x10], ecx
// 0076dc22  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076dc26  895014               mov dword ptr [eax + 0x14], edx
// 0076dc29  eb02                 jmp 0x76dc2d
// 0076dc2b  33c0                 xor eax, eax
// 0076dc2d  56                   push esi
// 0076dc2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076dc32  6a00                 push 0
// 0076dc34  8906                 mov dword ptr [esi], eax
// 0076dc36  e81f5c0800           call 0x7f385a
// 0076dc3b  83c404               add esp, 4
// 0076dc3e  8bc6                 mov eax, esi
// 0076dc40  5e                   pop esi
// 0076dc41  59                   pop ecx
// 0076dc42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
