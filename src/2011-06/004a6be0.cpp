// roc 2011-06 004a6be0  unit: RBX::VBrickColor::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a6be0
//
// 004a6be0  51                   push ecx
// 004a6be1  6a18                 push 0x18
// 004a6be3  c744240400000000     mov dword ptr [esp + 4], 0
// 004a6beb  e86e343600           call 0x80a05e
// 004a6bf0  83c404               add esp, 4
// 004a6bf3  85c0                 test eax, eax
// 004a6bf5  742c                 je 0x4a6c23
// 004a6bf7  c700b06da700         mov dword ptr [eax], 0xa76db0
// 004a6bfd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a6c01  894808               mov dword ptr [eax + 8], ecx
// 004a6c04  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a6c08  89500c               mov dword ptr [eax + 0xc], edx
// 004a6c0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a6c0f  894810               mov dword ptr [eax + 0x10], ecx
// 004a6c12  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a6c16  8b542418             mov edx, dword ptr [esp + 0x18]
// 004a6c1a  895014               mov dword ptr [eax + 0x14], edx
// 004a6c1d  8901                 mov dword ptr [ecx], eax
// 004a6c1f  8bc1                 mov eax, ecx
// 004a6c21  59                   pop ecx
// 004a6c22  c3                   ret 
// 004a6c23  8b442408             mov eax, dword ptr [esp + 8]
// 004a6c27  33c9                 xor ecx, ecx
// 004a6c29  8908                 mov dword ptr [eax], ecx
// 004a6c2b  59                   pop ecx
// 004a6c2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
