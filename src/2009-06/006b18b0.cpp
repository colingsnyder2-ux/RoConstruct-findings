// roc 2009-06 006b18b0  unit: RBX::BlockBlockContact  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b18b0
//
// 006b18b0  6aff                 push -1
// 006b18b2  6848098600           push 0x860948
// 006b18b7  64a100000000         mov eax, dword ptr fs:[0]
// 006b18bd  50                   push eax
// 006b18be  64892500000000       mov dword ptr fs:[0], esp
// 006b18c5  83ec0c               sub esp, 0xc
// 006b18c8  33c0                 xor eax, eax
// 006b18ca  56                   push esi
// 006b18cb  8bf1                 mov esi, ecx
// 006b18cd  89442408             mov dword ptr [esp + 8], eax
// 006b18d1  8944240c             mov dword ptr [esp + 0xc], eax
// 006b18d5  89442404             mov dword ptr [esp + 4], eax
// 006b18d9  89442418             mov dword ptr [esp + 0x18], eax
// 006b18dd  8b442424             mov eax, dword ptr [esp + 0x24]
// 006b18e1  50                   push eax
// 006b18e2  8d4c2408             lea ecx, [esp + 8]
// 006b18e6  e855f9ffff           call 0x6b1240
// 006b18eb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006b18ef  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006b18f3  8b442428             mov eax, dword ptr [esp + 0x28]
// 006b18f7  51                   push ecx
// 006b18f8  52                   push edx
// 006b18f9  8b542428             mov edx, dword ptr [esp + 0x28]
// 006b18fd  50                   push eax
// 006b18fe  8d4c2410             lea ecx, [esp + 0x10]
// 006b1902  51                   push ecx
// 006b1903  52                   push edx
// 006b1904  8bce                 mov ecx, esi
// 006b1906  e805feffff           call 0x6b1710
// 006b190b  8bf0                 mov esi, eax
// 006b190d  8b442404             mov eax, dword ptr [esp + 4]
// 006b1911  50                   push eax
// 006b1912  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006b191a  e87199ebff           call 0x56b290
// 006b191f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b1923  83c404               add esp, 4
// 006b1926  8bc6                 mov eax, esi
// 006b1928  5e                   pop esi
// 006b1929  64890d00000000       mov dword ptr fs:[0], ecx
// 006b1930  83c418               add esp, 0x18
// 006b1933  c21400               ret 0x14
// library rbxgs/v8world\ContactManager.cpp (function ?getHit@ContactManager@RBX@@QBEPAVPrimitive@2@ABVRay@G3D@@PBV?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@PBVHitTestFilter@2@AAVVector3@5@AA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
