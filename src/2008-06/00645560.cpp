// roc 2008-06 00645560  unit: RBX::HUMAN::Climbing  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645560
//
// 00645560  d9058c748200         fld dword ptr [0x82748c]
// 00645566  8b442410             mov eax, dword ptr [esp + 0x10]
// 0064556a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064556e  8b542408             mov edx, dword ptr [esp + 8]
// 00645572  83ec08               sub esp, 8
// 00645575  d9542404             fst dword ptr [esp + 4]
// 00645579  d91c24               fstp dword ptr [esp]
// 0064557c  50                   push eax
// 0064557d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00645581  51                   push ecx
// 00645582  52                   push edx
// 00645583  50                   push eax
// 00645584  e827ffffff           call 0x6454b0
// 00645589  83c418               add esp, 0x18
// 0064558c  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointTight@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
