// roc 2007-08 005adab0  unit: P8CRenderSettings::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005adab0
//
// 005adab0  51                   push ecx
// 005adab1  6a18                 push 0x18
// 005adab3  c744240400000000     mov dword ptr [esp + 4], 0
// 005adabb  e836240800           call 0x62fef6
// 005adac0  83c404               add esp, 4
// 005adac3  85c0                 test eax, eax
// 005adac5  7424                 je 0x5adaeb
// 005adac7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005adacb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005adacf  894808               mov dword ptr [eax + 8], ecx
// 005adad2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005adad6  89500c               mov dword ptr [eax + 0xc], edx
// 005adad9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005adadd  c700dc597b00         mov dword ptr [eax], 0x7b59dc
// 005adae3  894810               mov dword ptr [eax + 0x10], ecx
// 005adae6  895014               mov dword ptr [eax + 0x14], edx
// 005adae9  eb02                 jmp 0x5adaed
// 005adaeb  33c0                 xor eax, eax
// 005adaed  56                   push esi
// 005adaee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005adaf2  6a00                 push 0
// 005adaf4  c744240800000000     mov dword ptr [esp + 8], 0
// 005adafc  8906                 mov dword ptr [esi], eax
// 005adafe  e85f210800           call 0x62fc62
// 005adb03  83c404               add esp, 4
// 005adb06  8bc6                 mov eax, esi
// 005adb08  5e                   pop esi
// 005adb09  59                   pop ecx
// 005adb0a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
