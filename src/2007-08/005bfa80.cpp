// roc 2007-08 005bfa80  unit: RBX::Lua::LuaArguments  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bfa80
//
// 005bfa80  51                   push ecx
// 005bfa81  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 005bfa84  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005bfa88  8b01                 mov eax, dword ptr [ecx]
// 005bfa8a  8b4004               mov eax, dword ptr [eax + 4]
// 005bfa8d  56                   push esi
// 005bfa8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bfa92  52                   push edx
// 005bfa93  56                   push esi
// 005bfa94  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005bfa9c  ffd0                 call eax
// 005bfa9e  8bc6                 mov eax, esi
// 005bfaa0  5e                   pop esi
// 005bfaa1  59                   pop ecx
// 005bfaa2  c20800               ret 8
// library rbxgs/script\Script.cpp (function ?getValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
