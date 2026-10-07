// roc 2008-06 0061bb30  unit: RBX::Lua::LuaArguments  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061bb30
//
// 0061bb30  83ec08               sub esp, 8
// 0061bb33  56                   push esi
// 0061bb34  8bf1                 mov esi, ecx
// 0061bb36  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061bb3a  8b4608               mov eax, dword ptr [esi + 8]
// 0061bb3d  51                   push ecx
// 0061bb3e  8d542408             lea edx, [esp + 8]
// 0061bb42  52                   push edx
// 0061bb43  8d483c               lea ecx, [eax + 0x3c]
// 0061bb46  e8c5feffff           call 0x61ba10
// 0061bb4b  8bc8                 mov ecx, eax
// 0061bb4d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061bb51  8b11                 mov edx, dword ptr [ecx]
// 0061bb53  8b4904               mov ecx, dword ptr [ecx + 4]
// 0061bb56  8930                 mov dword ptr [eax], esi
// 0061bb58  895004               mov dword ptr [eax + 4], edx
// 0061bb5b  894808               mov dword ptr [eax + 8], ecx
// 0061bb5e  5e                   pop esi
// 0061bb5f  83c408               add esp, 8
// 0061bb62  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ?findSignal@DescribedBase@Reflection@RBX@@QAE?AVIterator@?$MemberDescriptorContainer@VSignalDescriptor@Reflection@RBX@@@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
