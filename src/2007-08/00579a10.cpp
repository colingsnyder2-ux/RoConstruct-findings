// roc 2007-08 00579a10  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579a10
//
// 00579a10  51                   push ecx
// 00579a11  6a18                 push 0x18
// 00579a13  c744240400000000     mov dword ptr [esp + 4], 0
// 00579a1b  e8d6640b00           call 0x62fef6
// 00579a20  83c404               add esp, 4
// 00579a23  85c0                 test eax, eax
// 00579a25  7424                 je 0x579a4b
// 00579a27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00579a2b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00579a2f  894808               mov dword ptr [eax + 8], ecx
// 00579a32  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00579a36  89500c               mov dword ptr [eax + 0xc], edx
// 00579a39  8b542418             mov edx, dword ptr [esp + 0x18]
// 00579a3d  c700b4b17a00         mov dword ptr [eax], 0x7ab1b4
// 00579a43  894810               mov dword ptr [eax + 0x10], ecx
// 00579a46  895014               mov dword ptr [eax + 0x14], edx
// 00579a49  eb02                 jmp 0x579a4d
// 00579a4b  33c0                 xor eax, eax
// 00579a4d  56                   push esi
// 00579a4e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00579a52  6a00                 push 0
// 00579a54  c744240800000000     mov dword ptr [esp + 8], 0
// 00579a5c  8906                 mov dword ptr [esi], eax
// 00579a5e  e8ff610b00           call 0x62fc62
// 00579a63  83c404               add esp, 4
// 00579a66  8bc6                 mov eax, esi
// 00579a68  5e                   pop esi
// 00579a69  59                   pop ecx
// 00579a6a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
