// roc 2008-06 0060aa20  unit: RBX::VHole::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060aa20
//
// 0060aa20  51                   push ecx
// 0060aa21  6a18                 push 0x18
// 0060aa23  c744240400000000     mov dword ptr [esp + 4], 0
// 0060aa2b  e8f05e0900           call 0x6a0920
// 0060aa30  83c404               add esp, 4
// 0060aa33  85c0                 test eax, eax
// 0060aa35  742c                 je 0x60aa63
// 0060aa37  c700b82b8400         mov dword ptr [eax], 0x842bb8
// 0060aa3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060aa41  894808               mov dword ptr [eax + 8], ecx
// 0060aa44  8b542410             mov edx, dword ptr [esp + 0x10]
// 0060aa48  89500c               mov dword ptr [eax + 0xc], edx
// 0060aa4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060aa4f  894810               mov dword ptr [eax + 0x10], ecx
// 0060aa52  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060aa56  8b542418             mov edx, dword ptr [esp + 0x18]
// 0060aa5a  895014               mov dword ptr [eax + 0x14], edx
// 0060aa5d  8901                 mov dword ptr [ecx], eax
// 0060aa5f  8bc1                 mov eax, ecx
// 0060aa61  59                   pop ecx
// 0060aa62  c3                   ret 
// 0060aa63  8b442408             mov eax, dword ptr [esp + 8]
// 0060aa67  33c9                 xor ecx, ecx
// 0060aa69  8908                 mov dword ptr [eax], ecx
// 0060aa6b  59                   pop ecx
// 0060aa6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
