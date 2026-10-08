// roc 2012-06 0051e740  unit: RBX::Network::P8Player::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0051e740
//
// 0051e740  51                   push ecx
// 0051e741  6a18                 push 0x18
// 0051e743  c744240400000000     mov dword ptr [esp + 4], 0
// 0051e74b  e8ca394600           call 0x98211a
// 0051e750  83c404               add esp, 4
// 0051e753  85c0                 test eax, eax
// 0051e755  7424                 je 0x51e77b
// 0051e757  c700b4f8b600         mov dword ptr [eax], 0xb6f8b4
// 0051e75d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051e761  894808               mov dword ptr [eax + 8], ecx
// 0051e764  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051e768  89500c               mov dword ptr [eax + 0xc], edx
// 0051e76b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0051e76f  894810               mov dword ptr [eax + 0x10], ecx
// 0051e772  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051e776  895014               mov dword ptr [eax + 0x14], edx
// 0051e779  eb02                 jmp 0x51e77d
// 0051e77b  33c0                 xor eax, eax
// 0051e77d  56                   push esi
// 0051e77e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051e782  6a00                 push 0
// 0051e784  8906                 mov dword ptr [esi], eax
// 0051e786  e889394600           call 0x982114
// 0051e78b  83c404               add esp, 4
// 0051e78e  8bc6                 mov eax, esi
// 0051e790  5e                   pop esi
// 0051e791  59                   pop ecx
// 0051e792  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
