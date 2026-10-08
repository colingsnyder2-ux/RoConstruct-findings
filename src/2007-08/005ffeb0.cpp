// roc 2007-08 005ffeb0  unit: RBX::BallBallContact  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ffeb0
//
// 005ffeb0  6aff                 push -1
// 005ffeb2  6888937500           push 0x759388
// 005ffeb7  64a100000000         mov eax, dword ptr fs:[0]
// 005ffebd  50                   push eax
// 005ffebe  64892500000000       mov dword ptr fs:[0], esp
// 005ffec5  83ec0c               sub esp, 0xc
// 005ffec8  33c0                 xor eax, eax
// 005ffeca  56                   push esi
// 005ffecb  8bf1                 mov esi, ecx
// 005ffecd  89442408             mov dword ptr [esp + 8], eax
// 005ffed1  8944240c             mov dword ptr [esp + 0xc], eax
// 005ffed5  89442404             mov dword ptr [esp + 4], eax
// 005ffed9  89442418             mov dword ptr [esp + 0x18], eax
// 005ffedd  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ffee1  50                   push eax
// 005ffee2  8d4c2408             lea ecx, [esp + 8]
// 005ffee6  e8d5faffff           call 0x5ff9c0
// 005ffeeb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005ffeef  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005ffef3  8b442428             mov eax, dword ptr [esp + 0x28]
// 005ffef7  51                   push ecx
// 005ffef8  52                   push edx
// 005ffef9  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ffefd  50                   push eax
// 005ffefe  8d4c2410             lea ecx, [esp + 0x10]
// 005fff02  51                   push ecx
// 005fff03  52                   push edx
// 005fff04  8bce                 mov ecx, esi
// 005fff06  e895fdffff           call 0x5ffca0
// 005fff0b  8bf0                 mov esi, eax
// 005fff0d  8b442404             mov eax, dword ptr [esp + 4]
// 005fff11  50                   push eax
// 005fff12  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005fff1a  e8f1f8efff           call 0x4ff810
// 005fff1f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fff23  83c404               add esp, 4
// 005fff26  8bc6                 mov eax, esi
// 005fff28  5e                   pop esi
// 005fff29  64890d00000000       mov dword ptr fs:[0], ecx
// 005fff30  83c418               add esp, 0x18
// 005fff33  c21400               ret 0x14
// library rbxgs/v8world\ContactManager.cpp (function ?getHit@ContactManager@RBX@@QBEPAVPrimitive@2@ABVRay@G3D@@PBV?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@PBVHitTestFilter@2@AAVVector3@5@AA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
