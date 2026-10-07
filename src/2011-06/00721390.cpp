// roc 2011-06 00721390  unit: RBX::VInstance::?$NonFactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00721390
//
// 00721390  51                   push ecx
// 00721391  6a18                 push 0x18
// 00721393  c744240400000000     mov dword ptr [esp + 4], 0
// 0072139b  e8be8c0e00           call 0x80a05e
// 007213a0  83c404               add esp, 4
// 007213a3  85c0                 test eax, eax
// 007213a5  742c                 je 0x7213d3
// 007213a7  c7006c25ab00         mov dword ptr [eax], 0xab256c
// 007213ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007213b1  894808               mov dword ptr [eax + 8], ecx
// 007213b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007213b8  89500c               mov dword ptr [eax + 0xc], edx
// 007213bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007213bf  894810               mov dword ptr [eax + 0x10], ecx
// 007213c2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007213c6  8b542418             mov edx, dword ptr [esp + 0x18]
// 007213ca  895014               mov dword ptr [eax + 0x14], edx
// 007213cd  8901                 mov dword ptr [ecx], eax
// 007213cf  8bc1                 mov eax, ecx
// 007213d1  59                   pop ecx
// 007213d2  c3                   ret 
// 007213d3  8b442408             mov eax, dword ptr [esp + 8]
// 007213d7  33c9                 xor ecx, ecx
// 007213d9  8908                 mov dword ptr [eax], ecx
// 007213db  59                   pop ecx
// 007213dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
