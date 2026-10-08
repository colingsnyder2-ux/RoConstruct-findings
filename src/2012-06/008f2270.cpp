// roc 2012-06 008f2270  unit: RBX::Joint  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f2270
//
// 008f2270  d905f479b900         fld dword ptr [0xb979f4]
// 008f2276  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f227a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f227e  8b542408             mov edx, dword ptr [esp + 8]
// 008f2282  83ec08               sub esp, 8
// 008f2285  d9542404             fst dword ptr [esp + 4]
// 008f2289  d91c24               fstp dword ptr [esp]
// 008f228c  50                   push eax
// 008f228d  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f2291  51                   push ecx
// 008f2292  52                   push edx
// 008f2293  50                   push eax
// 008f2294  e887fdffff           call 0x8f2020
// 008f2299  83c418               add esp, 0x18
// 008f229c  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointTight@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
