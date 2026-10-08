// roc 2007-03 005bb650  unit: seg_005b0000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bb650
//
// 005bb650  83ec08               sub esp, 8
// 005bb653  56                   push esi
// 005bb654  8bf1                 mov esi, ecx
// 005bb656  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bb65a  8b4608               mov eax, dword ptr [esi + 8]
// 005bb65d  51                   push ecx
// 005bb65e  8d542408             lea edx, [esp + 8]
// 005bb662  52                   push edx
// 005bb663  8d482c               lea ecx, [eax + 0x2c]
// 005bb666  e825f6ffff           call 0x5bac90
// 005bb66b  8bc8                 mov ecx, eax
// 005bb66d  8b442410             mov eax, dword ptr [esp + 0x10]
// 005bb671  8b11                 mov edx, dword ptr [ecx]
// 005bb673  8b4904               mov ecx, dword ptr [ecx + 4]
// 005bb676  897004               mov dword ptr [eax + 4], esi
// 005bb679  c70000000000         mov dword ptr [eax], 0
// 005bb67f  895008               mov dword ptr [eax + 8], edx
// 005bb682  89480c               mov dword ptr [eax + 0xc], ecx
// 005bb685  5e                   pop esi
// 005bb686  83c408               add esp, 8
// 005bb689  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ?findSignal@DescribedBase@Reflection@RBX@@QAE?AVIterator@?$MemberDescriptorContainer@VSignalDescriptor@Reflection@RBX@@@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
