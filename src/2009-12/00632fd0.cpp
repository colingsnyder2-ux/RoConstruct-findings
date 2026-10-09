// roc 2009-12 00632fd0  unit: RBX::Object  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00632fd0
//
// 00632fd0  51                   push ecx
// 00632fd1  6a18                 push 0x18
// 00632fd3  c744240400000000     mov dword ptr [esp + 4], 0
// 00632fdb  e880081c00           call 0x7f3860
// 00632fe0  83c404               add esp, 4
// 00632fe3  85c0                 test eax, eax
// 00632fe5  7424                 je 0x63300b
// 00632fe7  c700f8bc9c00         mov dword ptr [eax], 0x9cbcf8
// 00632fed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00632ff1  894808               mov dword ptr [eax + 8], ecx
// 00632ff4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00632ff8  89500c               mov dword ptr [eax + 0xc], edx
// 00632ffb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00632fff  894810               mov dword ptr [eax + 0x10], ecx
// 00633002  8b542418             mov edx, dword ptr [esp + 0x18]
// 00633006  895014               mov dword ptr [eax + 0x14], edx
// 00633009  eb02                 jmp 0x63300d
// 0063300b  33c0                 xor eax, eax
// 0063300d  56                   push esi
// 0063300e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00633012  6a00                 push 0
// 00633014  8906                 mov dword ptr [esi], eax
// 00633016  e83f081c00           call 0x7f385a
// 0063301b  83c404               add esp, 4
// 0063301e  8bc6                 mov eax, esi
// 00633020  5e                   pop esi
// 00633021  59                   pop ecx
// 00633022  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
