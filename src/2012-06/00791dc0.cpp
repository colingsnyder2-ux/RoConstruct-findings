// roc 2012-06 00791dc0  unit: RBX::FileMesh  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00791dc0
//
// 00791dc0  51                   push ecx
// 00791dc1  6a18                 push 0x18
// 00791dc3  c744240400000000     mov dword ptr [esp + 4], 0
// 00791dcb  e84a031f00           call 0x98211a
// 00791dd0  83c404               add esp, 4
// 00791dd3  85c0                 test eax, eax
// 00791dd5  7424                 je 0x791dfb
// 00791dd7  c7000c25bb00         mov dword ptr [eax], 0xbb250c
// 00791ddd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00791de1  894808               mov dword ptr [eax + 8], ecx
// 00791de4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00791de8  89500c               mov dword ptr [eax + 0xc], edx
// 00791deb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00791def  894810               mov dword ptr [eax + 0x10], ecx
// 00791df2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00791df6  895014               mov dword ptr [eax + 0x14], edx
// 00791df9  eb02                 jmp 0x791dfd
// 00791dfb  33c0                 xor eax, eax
// 00791dfd  56                   push esi
// 00791dfe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00791e02  6a00                 push 0
// 00791e04  8906                 mov dword ptr [esi], eax
// 00791e06  e809031f00           call 0x982114
// 00791e0b  83c404               add esp, 4
// 00791e0e  8bc6                 mov eax, esi
// 00791e10  5e                   pop esi
// 00791e11  59                   pop ecx
// 00791e12  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
