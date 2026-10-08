// roc 2012-06 008e7fd0  unit: RBX::P8TextureTrail::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e7fd0
//
// 008e7fd0  51                   push ecx
// 008e7fd1  6a18                 push 0x18
// 008e7fd3  c744240400000000     mov dword ptr [esp + 4], 0
// 008e7fdb  e83aa10900           call 0x98211a
// 008e7fe0  83c404               add esp, 4
// 008e7fe3  85c0                 test eax, eax
// 008e7fe5  7424                 je 0x8e800b
// 008e7fe7  c700a4d3be00         mov dword ptr [eax], 0xbed3a4
// 008e7fed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e7ff1  894808               mov dword ptr [eax + 8], ecx
// 008e7ff4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e7ff8  89500c               mov dword ptr [eax + 0xc], edx
// 008e7ffb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e7fff  894810               mov dword ptr [eax + 0x10], ecx
// 008e8002  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e8006  895014               mov dword ptr [eax + 0x14], edx
// 008e8009  eb02                 jmp 0x8e800d
// 008e800b  33c0                 xor eax, eax
// 008e800d  56                   push esi
// 008e800e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e8012  6a00                 push 0
// 008e8014  8906                 mov dword ptr [esi], eax
// 008e8016  e8f9a00900           call 0x982114
// 008e801b  83c404               add esp, 4
// 008e801e  8bc6                 mov eax, esi
// 008e8020  5e                   pop esi
// 008e8021  59                   pop ecx
// 008e8022  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
