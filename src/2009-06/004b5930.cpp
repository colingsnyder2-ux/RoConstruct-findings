// roc 2009-06 004b5930  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b5930
//
// 004b5930  51                   push ecx
// 004b5931  6a18                 push 0x18
// 004b5933  c744240400000000     mov dword ptr [esp + 4], 0
// 004b593b  e8f8302600           call 0x718a38
// 004b5940  83c404               add esp, 4
// 004b5943  85c0                 test eax, eax
// 004b5945  7424                 je 0x4b596b
// 004b5947  c700f4448c00         mov dword ptr [eax], 0x8c44f4
// 004b594d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b5951  894808               mov dword ptr [eax + 8], ecx
// 004b5954  8b542410             mov edx, dword ptr [esp + 0x10]
// 004b5958  89500c               mov dword ptr [eax + 0xc], edx
// 004b595b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b595f  894810               mov dword ptr [eax + 0x10], ecx
// 004b5962  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b5966  895014               mov dword ptr [eax + 0x14], edx
// 004b5969  eb02                 jmp 0x4b596d
// 004b596b  33c0                 xor eax, eax
// 004b596d  56                   push esi
// 004b596e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b5972  6a00                 push 0
// 004b5974  8906                 mov dword ptr [esi], eax
// 004b5976  e8b7302600           call 0x718a32
// 004b597b  83c404               add esp, 4
// 004b597e  8bc6                 mov eax, esi
// 004b5980  5e                   pop esi
// 004b5981  59                   pop ecx
// 004b5982  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
