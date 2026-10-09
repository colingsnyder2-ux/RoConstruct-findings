// roc 2009-12 0071dac0  unit: RBX::VDataModelMesh::?$NonFactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071dac0
//
// 0071dac0  51                   push ecx
// 0071dac1  6a18                 push 0x18
// 0071dac3  c744240400000000     mov dword ptr [esp + 4], 0
// 0071dacb  e8905d0d00           call 0x7f3860
// 0071dad0  83c404               add esp, 4
// 0071dad3  85c0                 test eax, eax
// 0071dad5  7424                 je 0x71dafb
// 0071dad7  c7007cfb9d00         mov dword ptr [eax], 0x9dfb7c
// 0071dadd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071dae1  894808               mov dword ptr [eax + 8], ecx
// 0071dae4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071dae8  89500c               mov dword ptr [eax + 0xc], edx
// 0071daeb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071daef  894810               mov dword ptr [eax + 0x10], ecx
// 0071daf2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071daf6  895014               mov dword ptr [eax + 0x14], edx
// 0071daf9  eb02                 jmp 0x71dafd
// 0071dafb  33c0                 xor eax, eax
// 0071dafd  56                   push esi
// 0071dafe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0071db02  6a00                 push 0
// 0071db04  8906                 mov dword ptr [esi], eax
// 0071db06  e84f5d0d00           call 0x7f385a
// 0071db0b  83c404               add esp, 4
// 0071db0e  8bc6                 mov eax, esi
// 0071db10  5e                   pop esi
// 0071db11  59                   pop ecx
// 0071db12  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
