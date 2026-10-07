// roc 2011-06 004a5630  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a5630
//
// 004a5630  51                   push ecx
// 004a5631  6a18                 push 0x18
// 004a5633  c744240400000000     mov dword ptr [esp + 4], 0
// 004a563b  e81e4a3600           call 0x80a05e
// 004a5640  83c404               add esp, 4
// 004a5643  85c0                 test eax, eax
// 004a5645  742c                 je 0x4a5673
// 004a5647  c700f86ba700         mov dword ptr [eax], 0xa76bf8
// 004a564d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a5651  894808               mov dword ptr [eax + 8], ecx
// 004a5654  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a5658  89500c               mov dword ptr [eax + 0xc], edx
// 004a565b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a565f  894810               mov dword ptr [eax + 0x10], ecx
// 004a5662  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a5666  8b542418             mov edx, dword ptr [esp + 0x18]
// 004a566a  895014               mov dword ptr [eax + 0x14], edx
// 004a566d  8901                 mov dword ptr [ecx], eax
// 004a566f  8bc1                 mov eax, ecx
// 004a5671  59                   pop ecx
// 004a5672  c3                   ret 
// 004a5673  8b442408             mov eax, dword ptr [esp + 8]
// 004a5677  33c9                 xor ecx, ecx
// 004a5679  8908                 mov dword ptr [eax], ecx
// 004a567b  59                   pop ecx
// 004a567c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
