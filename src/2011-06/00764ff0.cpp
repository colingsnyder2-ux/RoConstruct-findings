// roc 2011-06 00764ff0  unit: RBX::Lua::LuaArguments  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00764ff0
//
// 00764ff0  51                   push ecx
// 00764ff1  56                   push esi
// 00764ff2  8b742414             mov esi, dword ptr [esp + 0x14]
// 00764ff6  57                   push edi
// 00764ff7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00764ffb  56                   push esi
// 00764ffc  57                   push edi
// 00764ffd  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00765005  e846d5ffff           call 0x762550
// 0076500a  83c408               add esp, 8
// 0076500d  85c0                 test eax, eax
// 0076500f  7515                 jne 0x765026
// 00765011  8b442410             mov eax, dword ptr [esp + 0x10]
// 00765015  5f                   pop edi
// 00765016  c70000000000         mov dword ptr [eax], 0
// 0076501c  c7400400000000       mov dword ptr [eax + 4], 0
// 00765023  5e                   pop esi
// 00765024  59                   pop ecx
// 00765025  c3                   ret 
// 00765026  a178e7c800           mov eax, dword ptr [0xc8e778]
// 0076502b  50                   push eax
// 0076502c  56                   push esi
// 0076502d  57                   push edi
// 0076502e  e84df0ffff           call 0x764080
// 00765033  8b08                 mov ecx, dword ptr [eax]
// 00765035  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00765039  890a                 mov dword ptr [edx], ecx
// 0076503b  8b4804               mov ecx, dword ptr [eax + 4]
// 0076503e  83c40c               add esp, 0xc
// 00765041  894a04               mov dword ptr [edx + 4], ecx
// 00765044  85c9                 test ecx, ecx
// 00765046  740c                 je 0x765054
// 00765048  83c104               add ecx, 4
// 0076504b  b801000000           mov eax, 1
// 00765050  f00fc101             lock xadd dword ptr [ecx], eax
// 00765054  5f                   pop edi
// 00765055  8bc2                 mov eax, edx
// 00765057  5e                   pop esi
// 00765058  59                   pop ecx
// 00765059  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getPtr@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA?AV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
