// roc 2007-08 005c03d0  unit: RBX::Lua::LuaArguments  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c03d0
//
// 005c03d0  83ec08               sub esp, 8
// 005c03d3  56                   push esi
// 005c03d4  8bf1                 mov esi, ecx
// 005c03d6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c03da  8b4608               mov eax, dword ptr [esi + 8]
// 005c03dd  51                   push ecx
// 005c03de  8d542408             lea edx, [esp + 8]
// 005c03e2  52                   push edx
// 005c03e3  8d482c               lea ecx, [eax + 0x2c]
// 005c03e6  e8c5f6ffff           call 0x5bfab0
// 005c03eb  8bc8                 mov ecx, eax
// 005c03ed  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c03f1  8b11                 mov edx, dword ptr [ecx]
// 005c03f3  8b4904               mov ecx, dword ptr [ecx + 4]
// 005c03f6  897004               mov dword ptr [eax + 4], esi
// 005c03f9  c70000000000         mov dword ptr [eax], 0
// 005c03ff  895008               mov dword ptr [eax + 8], edx
// 005c0402  89480c               mov dword ptr [eax + 0xc], ecx
// 005c0405  5e                   pop esi
// 005c0406  83c408               add esp, 8
// 005c0409  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ?findSignal@DescribedBase@Reflection@RBX@@QAE?AVIterator@?$MemberDescriptorContainer@VSignalDescriptor@Reflection@RBX@@@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
