// roc 2010-06 00713100  unit: RBX::BallBallContact  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00713100
//
// 00713100  6aff                 push -1
// 00713102  68e8829a00           push 0x9a82e8
// 00713107  64a100000000         mov eax, dword ptr fs:[0]
// 0071310d  50                   push eax
// 0071310e  64892500000000       mov dword ptr fs:[0], esp
// 00713115  83ec0c               sub esp, 0xc
// 00713118  33c0                 xor eax, eax
// 0071311a  56                   push esi
// 0071311b  8bf1                 mov esi, ecx
// 0071311d  89442408             mov dword ptr [esp + 8], eax
// 00713121  8944240c             mov dword ptr [esp + 0xc], eax
// 00713125  89442404             mov dword ptr [esp + 4], eax
// 00713129  89442418             mov dword ptr [esp + 0x18], eax
// 0071312d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00713131  50                   push eax
// 00713132  8d4c2408             lea ecx, [esp + 8]
// 00713136  e895f1ffff           call 0x7122d0
// 0071313b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0071313f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00713143  8b442428             mov eax, dword ptr [esp + 0x28]
// 00713147  51                   push ecx
// 00713148  52                   push edx
// 00713149  8b542428             mov edx, dword ptr [esp + 0x28]
// 0071314d  50                   push eax
// 0071314e  8d4c2410             lea ecx, [esp + 0x10]
// 00713152  51                   push ecx
// 00713153  52                   push edx
// 00713154  8bce                 mov ecx, esi
// 00713156  e855fdffff           call 0x712eb0
// 0071315b  8bf0                 mov esi, eax
// 0071315d  8b442404             mov eax, dword ptr [esp + 4]
// 00713161  50                   push eax
// 00713162  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0071316a  e851a8e3ff           call 0x54d9c0
// 0071316f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00713173  83c404               add esp, 4
// 00713176  8bc6                 mov eax, esi
// 00713178  5e                   pop esi
// 00713179  64890d00000000       mov dword ptr fs:[0], ecx
// 00713180  83c418               add esp, 0x18
// 00713183  c21400               ret 0x14
// library rbxgs/v8world\ContactManager.cpp (function ?getHit@ContactManager@RBX@@QBEPAVPrimitive@2@ABVRay@G3D@@PBV?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@PBVHitTestFilter@2@AAVVector3@5@AA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
