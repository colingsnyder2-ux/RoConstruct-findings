// roc 2009-12 00752cc0  unit: RBX::VSelectionBox::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00752cc0
//
// 00752cc0  51                   push ecx
// 00752cc1  6a18                 push 0x18
// 00752cc3  c744240400000000     mov dword ptr [esp + 4], 0
// 00752ccb  e8900b0a00           call 0x7f3860
// 00752cd0  83c404               add esp, 4
// 00752cd3  85c0                 test eax, eax
// 00752cd5  7424                 je 0x752cfb
// 00752cd7  c70074459e00         mov dword ptr [eax], 0x9e4574
// 00752cdd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00752ce1  894808               mov dword ptr [eax + 8], ecx
// 00752ce4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00752ce8  89500c               mov dword ptr [eax + 0xc], edx
// 00752ceb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00752cef  894810               mov dword ptr [eax + 0x10], ecx
// 00752cf2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00752cf6  895014               mov dword ptr [eax + 0x14], edx
// 00752cf9  eb02                 jmp 0x752cfd
// 00752cfb  33c0                 xor eax, eax
// 00752cfd  56                   push esi
// 00752cfe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00752d02  6a00                 push 0
// 00752d04  8906                 mov dword ptr [esi], eax
// 00752d06  e84f0b0a00           call 0x7f385a
// 00752d0b  83c404               add esp, 4
// 00752d0e  8bc6                 mov eax, esi
// 00752d10  5e                   pop esi
// 00752d11  59                   pop ecx
// 00752d12  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
