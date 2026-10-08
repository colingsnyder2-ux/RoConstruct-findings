// roc 2007-08 005adb10  unit: P8CRenderSettings::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005adb10
//
// 005adb10  51                   push ecx
// 005adb11  6a18                 push 0x18
// 005adb13  c744240400000000     mov dword ptr [esp + 4], 0
// 005adb1b  e8d6230800           call 0x62fef6
// 005adb20  83c404               add esp, 4
// 005adb23  85c0                 test eax, eax
// 005adb25  7424                 je 0x5adb4b
// 005adb27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005adb2b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005adb2f  894808               mov dword ptr [eax + 8], ecx
// 005adb32  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005adb36  89500c               mov dword ptr [eax + 0xc], edx
// 005adb39  8b542418             mov edx, dword ptr [esp + 0x18]
// 005adb3d  c700ec597b00         mov dword ptr [eax], 0x7b59ec
// 005adb43  894810               mov dword ptr [eax + 0x10], ecx
// 005adb46  895014               mov dword ptr [eax + 0x14], edx
// 005adb49  eb02                 jmp 0x5adb4d
// 005adb4b  33c0                 xor eax, eax
// 005adb4d  56                   push esi
// 005adb4e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005adb52  6a00                 push 0
// 005adb54  c744240800000000     mov dword ptr [esp + 8], 0
// 005adb5c  8906                 mov dword ptr [esi], eax
// 005adb5e  e8ff200800           call 0x62fc62
// 005adb63  83c404               add esp, 4
// 005adb66  8bc6                 mov eax, esi
// 005adb68  5e                   pop esi
// 005adb69  59                   pop ecx
// 005adb6a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
