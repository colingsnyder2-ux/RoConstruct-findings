// roc 2011-06 00720e30  unit: RBX::VInstance::?$NonFactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00720e30
//
// 00720e30  51                   push ecx
// 00720e31  6a18                 push 0x18
// 00720e33  c744240400000000     mov dword ptr [esp + 4], 0
// 00720e3b  e81e920e00           call 0x80a05e
// 00720e40  83c404               add esp, 4
// 00720e43  85c0                 test eax, eax
// 00720e45  742c                 je 0x720e73
// 00720e47  c700c423ab00         mov dword ptr [eax], 0xab23c4
// 00720e4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00720e51  894808               mov dword ptr [eax + 8], ecx
// 00720e54  8b542410             mov edx, dword ptr [esp + 0x10]
// 00720e58  89500c               mov dword ptr [eax + 0xc], edx
// 00720e5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00720e5f  894810               mov dword ptr [eax + 0x10], ecx
// 00720e62  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00720e66  8b542418             mov edx, dword ptr [esp + 0x18]
// 00720e6a  895014               mov dword ptr [eax + 0x14], edx
// 00720e6d  8901                 mov dword ptr [ecx], eax
// 00720e6f  8bc1                 mov eax, ecx
// 00720e71  59                   pop ecx
// 00720e72  c3                   ret 
// 00720e73  8b442408             mov eax, dword ptr [esp + 8]
// 00720e77  33c9                 xor ecx, ecx
// 00720e79  8908                 mov dword ptr [eax], ecx
// 00720e7b  59                   pop ecx
// 00720e7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
