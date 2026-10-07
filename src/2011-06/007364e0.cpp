// roc 2011-06 007364e0  unit: RBX::TextureContentProvider  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007364e0
//
// 007364e0  51                   push ecx
// 007364e1  6a18                 push 0x18
// 007364e3  c744240400000000     mov dword ptr [esp + 4], 0
// 007364eb  e86e3b0d00           call 0x80a05e
// 007364f0  83c404               add esp, 4
// 007364f3  85c0                 test eax, eax
// 007364f5  742c                 je 0x736523
// 007364f7  c700343fab00         mov dword ptr [eax], 0xab3f34
// 007364fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00736501  894808               mov dword ptr [eax + 8], ecx
// 00736504  8b542410             mov edx, dword ptr [esp + 0x10]
// 00736508  89500c               mov dword ptr [eax + 0xc], edx
// 0073650b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073650f  894810               mov dword ptr [eax + 0x10], ecx
// 00736512  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00736516  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073651a  895014               mov dword ptr [eax + 0x14], edx
// 0073651d  8901                 mov dword ptr [ecx], eax
// 0073651f  8bc1                 mov eax, ecx
// 00736521  59                   pop ecx
// 00736522  c3                   ret 
// 00736523  8b442408             mov eax, dword ptr [esp + 8]
// 00736527  33c9                 xor ecx, ecx
// 00736529  8908                 mov dword ptr [eax], ecx
// 0073652b  59                   pop ecx
// 0073652c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
