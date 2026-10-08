// roc 2007-08 004877e0  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004877e0
//
// 004877e0  51                   push ecx
// 004877e1  6a18                 push 0x18
// 004877e3  c744240400000000     mov dword ptr [esp + 4], 0
// 004877eb  e806871a00           call 0x62fef6
// 004877f0  83c404               add esp, 4
// 004877f3  85c0                 test eax, eax
// 004877f5  7424                 je 0x48781b
// 004877f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004877fb  8b542410             mov edx, dword ptr [esp + 0x10]
// 004877ff  894808               mov dword ptr [eax + 8], ecx
// 00487802  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00487806  89500c               mov dword ptr [eax + 0xc], edx
// 00487809  8b542418             mov edx, dword ptr [esp + 0x18]
// 0048780d  c700e4ad7900         mov dword ptr [eax], 0x79ade4
// 00487813  894810               mov dword ptr [eax + 0x10], ecx
// 00487816  895014               mov dword ptr [eax + 0x14], edx
// 00487819  eb02                 jmp 0x48781d
// 0048781b  33c0                 xor eax, eax
// 0048781d  56                   push esi
// 0048781e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00487822  6a00                 push 0
// 00487824  c744240800000000     mov dword ptr [esp + 8], 0
// 0048782c  8906                 mov dword ptr [esi], eax
// 0048782e  e82f841a00           call 0x62fc62
// 00487833  83c404               add esp, 4
// 00487836  8bc6                 mov eax, esi
// 00487838  5e                   pop esi
// 00487839  59                   pop ecx
// 0048783a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
