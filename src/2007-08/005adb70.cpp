// roc 2007-08 005adb70  unit: P8CRenderSettings::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005adb70
//
// 005adb70  51                   push ecx
// 005adb71  6a18                 push 0x18
// 005adb73  c744240400000000     mov dword ptr [esp + 4], 0
// 005adb7b  e876230800           call 0x62fef6
// 005adb80  83c404               add esp, 4
// 005adb83  85c0                 test eax, eax
// 005adb85  7424                 je 0x5adbab
// 005adb87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005adb8b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005adb8f  894808               mov dword ptr [eax + 8], ecx
// 005adb92  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005adb96  89500c               mov dword ptr [eax + 0xc], edx
// 005adb99  8b542418             mov edx, dword ptr [esp + 0x18]
// 005adb9d  c700fc597b00         mov dword ptr [eax], 0x7b59fc
// 005adba3  894810               mov dword ptr [eax + 0x10], ecx
// 005adba6  895014               mov dword ptr [eax + 0x14], edx
// 005adba9  eb02                 jmp 0x5adbad
// 005adbab  33c0                 xor eax, eax
// 005adbad  56                   push esi
// 005adbae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005adbb2  6a00                 push 0
// 005adbb4  c744240800000000     mov dword ptr [esp + 8], 0
// 005adbbc  8906                 mov dword ptr [esi], eax
// 005adbbe  e89f200800           call 0x62fc62
// 005adbc3  83c404               add esp, 4
// 005adbc6  8bc6                 mov eax, esi
// 005adbc8  5e                   pop esi
// 005adbc9  59                   pop ecx
// 005adbca  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
