// roc 2009-06 00698fc0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00698fc0
//
// 00698fc0  51                   push ecx
// 00698fc1  6a18                 push 0x18
// 00698fc3  c744240400000000     mov dword ptr [esp + 4], 0
// 00698fcb  e868fa0700           call 0x718a38
// 00698fd0  83c404               add esp, 4
// 00698fd3  85c0                 test eax, eax
// 00698fd5  7424                 je 0x698ffb
// 00698fd7  c700b0808e00         mov dword ptr [eax], 0x8e80b0
// 00698fdd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00698fe1  894808               mov dword ptr [eax + 8], ecx
// 00698fe4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00698fe8  89500c               mov dword ptr [eax + 0xc], edx
// 00698feb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00698fef  894810               mov dword ptr [eax + 0x10], ecx
// 00698ff2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00698ff6  895014               mov dword ptr [eax + 0x14], edx
// 00698ff9  eb02                 jmp 0x698ffd
// 00698ffb  33c0                 xor eax, eax
// 00698ffd  56                   push esi
// 00698ffe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00699002  6a00                 push 0
// 00699004  8906                 mov dword ptr [esi], eax
// 00699006  e827fa0700           call 0x718a32
// 0069900b  83c404               add esp, 4
// 0069900e  8bc6                 mov eax, esi
// 00699010  5e                   pop esi
// 00699011  59                   pop ecx
// 00699012  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
