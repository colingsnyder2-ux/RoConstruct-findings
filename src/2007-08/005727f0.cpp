// roc 2007-08 005727f0  unit: RBX::VDecal::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005727f0
//
// 005727f0  51                   push ecx
// 005727f1  6a18                 push 0x18
// 005727f3  c744240400000000     mov dword ptr [esp + 4], 0
// 005727fb  e8f6d60b00           call 0x62fef6
// 00572800  83c404               add esp, 4
// 00572803  85c0                 test eax, eax
// 00572805  7424                 je 0x57282b
// 00572807  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057280b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057280f  894808               mov dword ptr [eax + 8], ecx
// 00572812  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00572816  89500c               mov dword ptr [eax + 0xc], edx
// 00572819  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057281d  c70074a27a00         mov dword ptr [eax], 0x7aa274
// 00572823  894810               mov dword ptr [eax + 0x10], ecx
// 00572826  895014               mov dword ptr [eax + 0x14], edx
// 00572829  eb02                 jmp 0x57282d
// 0057282b  33c0                 xor eax, eax
// 0057282d  56                   push esi
// 0057282e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00572832  6a00                 push 0
// 00572834  c744240800000000     mov dword ptr [esp + 8], 0
// 0057283c  8906                 mov dword ptr [esi], eax
// 0057283e  e81fd40b00           call 0x62fc62
// 00572843  83c404               add esp, 4
// 00572846  8bc6                 mov eax, esi
// 00572848  5e                   pop esi
// 00572849  59                   pop ecx
// 0057284a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
