// roc 2012-06 008e7f10  unit: RBX::P8TextureTrail::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e7f10
//
// 008e7f10  51                   push ecx
// 008e7f11  6a18                 push 0x18
// 008e7f13  c744240400000000     mov dword ptr [esp + 4], 0
// 008e7f1b  e8faa10900           call 0x98211a
// 008e7f20  83c404               add esp, 4
// 008e7f23  85c0                 test eax, eax
// 008e7f25  7424                 je 0x8e7f4b
// 008e7f27  c7007cd3be00         mov dword ptr [eax], 0xbed37c
// 008e7f2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e7f31  894808               mov dword ptr [eax + 8], ecx
// 008e7f34  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e7f38  89500c               mov dword ptr [eax + 0xc], edx
// 008e7f3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e7f3f  894810               mov dword ptr [eax + 0x10], ecx
// 008e7f42  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e7f46  895014               mov dword ptr [eax + 0x14], edx
// 008e7f49  eb02                 jmp 0x8e7f4d
// 008e7f4b  33c0                 xor eax, eax
// 008e7f4d  56                   push esi
// 008e7f4e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e7f52  6a00                 push 0
// 008e7f54  8906                 mov dword ptr [esi], eax
// 008e7f56  e8b9a10900           call 0x982114
// 008e7f5b  83c404               add esp, 4
// 008e7f5e  8bc6                 mov eax, esi
// 008e7f60  5e                   pop esi
// 008e7f61  59                   pop ecx
// 008e7f62  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
