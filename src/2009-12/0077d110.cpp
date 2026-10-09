// roc 2009-12 0077d110  unit: RBX::BallBallContact  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0077d110
//
// 0077d110  6aff                 push -1
// 0077d112  68e8369500           push 0x9536e8
// 0077d117  64a100000000         mov eax, dword ptr fs:[0]
// 0077d11d  50                   push eax
// 0077d11e  64892500000000       mov dword ptr fs:[0], esp
// 0077d125  83ec0c               sub esp, 0xc
// 0077d128  33c0                 xor eax, eax
// 0077d12a  56                   push esi
// 0077d12b  8bf1                 mov esi, ecx
// 0077d12d  89442408             mov dword ptr [esp + 8], eax
// 0077d131  8944240c             mov dword ptr [esp + 0xc], eax
// 0077d135  89442404             mov dword ptr [esp + 4], eax
// 0077d139  89442418             mov dword ptr [esp + 0x18], eax
// 0077d13d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0077d141  50                   push eax
// 0077d142  8d4c2408             lea ecx, [esp + 8]
// 0077d146  e8c5f1ffff           call 0x77c310
// 0077d14b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0077d14f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0077d153  8b442428             mov eax, dword ptr [esp + 0x28]
// 0077d157  51                   push ecx
// 0077d158  52                   push edx
// 0077d159  8b542428             mov edx, dword ptr [esp + 0x28]
// 0077d15d  50                   push eax
// 0077d15e  8d4c2410             lea ecx, [esp + 0x10]
// 0077d162  51                   push ecx
// 0077d163  52                   push edx
// 0077d164  8bce                 mov ecx, esi
// 0077d166  e8b5fdffff           call 0x77cf20
// 0077d16b  8bf0                 mov esi, eax
// 0077d16d  8b442404             mov eax, dword ptr [esp + 4]
// 0077d171  50                   push eax
// 0077d172  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0077d17a  e861d2e6ff           call 0x5ea3e0
// 0077d17f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0077d183  83c404               add esp, 4
// 0077d186  8bc6                 mov eax, esi
// 0077d188  5e                   pop esi
// 0077d189  64890d00000000       mov dword ptr fs:[0], ecx
// 0077d190  83c418               add esp, 0x18
// 0077d193  c21400               ret 0x14
// library rbxgs/v8world\ContactManager.cpp (function ?getHit@ContactManager@RBX@@QBEPAVPrimitive@2@ABVRay@G3D@@PBV?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@PBVHitTestFilter@2@AAVVector3@5@AA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
