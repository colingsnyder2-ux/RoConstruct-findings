// roc 2011-06 00720de0  unit: RBX::VInstance::?$NonFactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00720de0
//
// 00720de0  51                   push ecx
// 00720de1  6a18                 push 0x18
// 00720de3  c744240400000000     mov dword ptr [esp + 4], 0
// 00720deb  e86e920e00           call 0x80a05e
// 00720df0  83c404               add esp, 4
// 00720df3  85c0                 test eax, eax
// 00720df5  742c                 je 0x720e23
// 00720df7  c700b023ab00         mov dword ptr [eax], 0xab23b0
// 00720dfd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00720e01  894808               mov dword ptr [eax + 8], ecx
// 00720e04  8b542410             mov edx, dword ptr [esp + 0x10]
// 00720e08  89500c               mov dword ptr [eax + 0xc], edx
// 00720e0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00720e0f  894810               mov dword ptr [eax + 0x10], ecx
// 00720e12  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00720e16  8b542418             mov edx, dword ptr [esp + 0x18]
// 00720e1a  895014               mov dword ptr [eax + 0x14], edx
// 00720e1d  8901                 mov dword ptr [ecx], eax
// 00720e1f  8bc1                 mov eax, ecx
// 00720e21  59                   pop ecx
// 00720e22  c3                   ret 
// 00720e23  8b442408             mov eax, dword ptr [esp + 8]
// 00720e27  33c9                 xor ecx, ecx
// 00720e29  8908                 mov dword ptr [eax], ecx
// 00720e2b  59                   pop ecx
// 00720e2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
