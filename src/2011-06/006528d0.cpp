// roc 2011-06 006528d0  unit: RBX::Soundscape::P8SoundChannel::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006528d0
//
// 006528d0  51                   push ecx
// 006528d1  6a18                 push 0x18
// 006528d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006528db  e87e771b00           call 0x80a05e
// 006528e0  83c404               add esp, 4
// 006528e3  85c0                 test eax, eax
// 006528e5  742c                 je 0x652913
// 006528e7  c70064a3a900         mov dword ptr [eax], 0xa9a364
// 006528ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006528f1  894808               mov dword ptr [eax + 8], ecx
// 006528f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006528f8  89500c               mov dword ptr [eax + 0xc], edx
// 006528fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006528ff  894810               mov dword ptr [eax + 0x10], ecx
// 00652902  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00652906  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065290a  895014               mov dword ptr [eax + 0x14], edx
// 0065290d  8901                 mov dword ptr [ecx], eax
// 0065290f  8bc1                 mov eax, ecx
// 00652911  59                   pop ecx
// 00652912  c3                   ret 
// 00652913  8b442408             mov eax, dword ptr [esp + 8]
// 00652917  33c9                 xor ecx, ecx
// 00652919  8908                 mov dword ptr [eax], ecx
// 0065291b  59                   pop ecx
// 0065291c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
