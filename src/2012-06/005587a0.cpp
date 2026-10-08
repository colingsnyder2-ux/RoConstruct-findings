// roc 2012-06 005587a0  unit: XVCrashReporter::XV?$mf0::V?$bind_t::?$thread_data  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005587a0
//
// 005587a0  51                   push ecx
// 005587a1  6a18                 push 0x18
// 005587a3  c744240400000000     mov dword ptr [esp + 4], 0
// 005587ab  e86a994200           call 0x98211a
// 005587b0  83c404               add esp, 4
// 005587b3  85c0                 test eax, eax
// 005587b5  7424                 je 0x5587db
// 005587b7  c7000c30b700         mov dword ptr [eax], 0xb7300c
// 005587bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005587c1  894808               mov dword ptr [eax + 8], ecx
// 005587c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005587c8  89500c               mov dword ptr [eax + 0xc], edx
// 005587cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005587cf  894810               mov dword ptr [eax + 0x10], ecx
// 005587d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005587d6  895014               mov dword ptr [eax + 0x14], edx
// 005587d9  eb02                 jmp 0x5587dd
// 005587db  33c0                 xor eax, eax
// 005587dd  56                   push esi
// 005587de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005587e2  6a00                 push 0
// 005587e4  8906                 mov dword ptr [esi], eax
// 005587e6  e829994200           call 0x982114
// 005587eb  83c404               add esp, 4
// 005587ee  8bc6                 mov eax, esi
// 005587f0  5e                   pop esi
// 005587f1  59                   pop ecx
// 005587f2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
