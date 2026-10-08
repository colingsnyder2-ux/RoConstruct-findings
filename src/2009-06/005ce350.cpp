// roc 2009-06 005ce350  unit: RBX::P8Instance::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ce350
//
// 005ce350  51                   push ecx
// 005ce351  6a18                 push 0x18
// 005ce353  c744240400000000     mov dword ptr [esp + 4], 0
// 005ce35b  e8d8a61400           call 0x718a38
// 005ce360  83c404               add esp, 4
// 005ce363  85c0                 test eax, eax
// 005ce365  7424                 je 0x5ce38b
// 005ce367  c700ac4e8d00         mov dword ptr [eax], 0x8d4eac
// 005ce36d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ce371  894808               mov dword ptr [eax + 8], ecx
// 005ce374  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ce378  89500c               mov dword ptr [eax + 0xc], edx
// 005ce37b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ce37f  894810               mov dword ptr [eax + 0x10], ecx
// 005ce382  8b542418             mov edx, dword ptr [esp + 0x18]
// 005ce386  895014               mov dword ptr [eax + 0x14], edx
// 005ce389  eb02                 jmp 0x5ce38d
// 005ce38b  33c0                 xor eax, eax
// 005ce38d  56                   push esi
// 005ce38e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ce392  6a00                 push 0
// 005ce394  8906                 mov dword ptr [esi], eax
// 005ce396  e897a61400           call 0x718a32
// 005ce39b  83c404               add esp, 4
// 005ce39e  8bc6                 mov eax, esi
// 005ce3a0  5e                   pop esi
// 005ce3a1  59                   pop ecx
// 005ce3a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
