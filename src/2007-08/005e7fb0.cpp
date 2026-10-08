// roc 2007-08 005e7fb0  unit: RBX::Explosion  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e7fb0
//
// 005e7fb0  51                   push ecx
// 005e7fb1  6a18                 push 0x18
// 005e7fb3  c744240400000000     mov dword ptr [esp + 4], 0
// 005e7fbb  e8367f0400           call 0x62fef6
// 005e7fc0  83c404               add esp, 4
// 005e7fc3  85c0                 test eax, eax
// 005e7fc5  7424                 je 0x5e7feb
// 005e7fc7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e7fcb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e7fcf  894808               mov dword ptr [eax + 8], ecx
// 005e7fd2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e7fd6  89500c               mov dword ptr [eax + 0xc], edx
// 005e7fd9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e7fdd  c70034d97b00         mov dword ptr [eax], 0x7bd934
// 005e7fe3  894810               mov dword ptr [eax + 0x10], ecx
// 005e7fe6  895014               mov dword ptr [eax + 0x14], edx
// 005e7fe9  eb02                 jmp 0x5e7fed
// 005e7feb  33c0                 xor eax, eax
// 005e7fed  56                   push esi
// 005e7fee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e7ff2  6a00                 push 0
// 005e7ff4  c744240800000000     mov dword ptr [esp + 8], 0
// 005e7ffc  8906                 mov dword ptr [esi], eax
// 005e7ffe  e85f7c0400           call 0x62fc62
// 005e8003  83c404               add esp, 4
// 005e8006  8bc6                 mov eax, esi
// 005e8008  5e                   pop esi
// 005e8009  59                   pop ecx
// 005e800a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
