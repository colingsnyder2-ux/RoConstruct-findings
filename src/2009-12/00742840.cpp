// roc 2009-12 00742840  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00742840
//
// 00742840  51                   push ecx
// 00742841  6a18                 push 0x18
// 00742843  c744240400000000     mov dword ptr [esp + 4], 0
// 0074284b  e810100b00           call 0x7f3860
// 00742850  83c404               add esp, 4
// 00742853  85c0                 test eax, eax
// 00742855  7424                 je 0x74287b
// 00742857  c7002c2b9e00         mov dword ptr [eax], 0x9e2b2c
// 0074285d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00742861  894808               mov dword ptr [eax + 8], ecx
// 00742864  8b542410             mov edx, dword ptr [esp + 0x10]
// 00742868  89500c               mov dword ptr [eax + 0xc], edx
// 0074286b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074286f  894810               mov dword ptr [eax + 0x10], ecx
// 00742872  8b542418             mov edx, dword ptr [esp + 0x18]
// 00742876  895014               mov dword ptr [eax + 0x14], edx
// 00742879  eb02                 jmp 0x74287d
// 0074287b  33c0                 xor eax, eax
// 0074287d  56                   push esi
// 0074287e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00742882  6a00                 push 0
// 00742884  8906                 mov dword ptr [esi], eax
// 00742886  e8cf0f0b00           call 0x7f385a
// 0074288b  83c404               add esp, 4
// 0074288e  8bc6                 mov eax, esi
// 00742890  5e                   pop esi
// 00742891  59                   pop ecx
// 00742892  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
