// roc 2010-06 0069f7a0  unit: RBX::VDataModelMesh::?$NonFactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069f7a0
//
// 0069f7a0  51                   push ecx
// 0069f7a1  6a18                 push 0x18
// 0069f7a3  c744240400000000     mov dword ptr [esp + 4], 0
// 0069f7ab  e8f0811000           call 0x7a79a0
// 0069f7b0  83c404               add esp, 4
// 0069f7b3  85c0                 test eax, eax
// 0069f7b5  7424                 je 0x69f7db
// 0069f7b7  c7007407a400         mov dword ptr [eax], 0xa40774
// 0069f7bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069f7c1  894808               mov dword ptr [eax + 8], ecx
// 0069f7c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0069f7c8  89500c               mov dword ptr [eax + 0xc], edx
// 0069f7cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069f7cf  894810               mov dword ptr [eax + 0x10], ecx
// 0069f7d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069f7d6  895014               mov dword ptr [eax + 0x14], edx
// 0069f7d9  eb02                 jmp 0x69f7dd
// 0069f7db  33c0                 xor eax, eax
// 0069f7dd  56                   push esi
// 0069f7de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069f7e2  6a00                 push 0
// 0069f7e4  8906                 mov dword ptr [esi], eax
// 0069f7e6  e8af811000           call 0x7a799a
// 0069f7eb  83c404               add esp, 4
// 0069f7ee  8bc6                 mov eax, esi
// 0069f7f0  5e                   pop esi
// 0069f7f1  59                   pop ecx
// 0069f7f2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
