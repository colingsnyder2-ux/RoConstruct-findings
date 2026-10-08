// roc 2008-06 0060db10  unit: RBX::BlockBlockContact  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060db10
//
// 0060db10  6aff                 push -1
// 0060db12  68a88d7d00           push 0x7d8da8
// 0060db17  64a100000000         mov eax, dword ptr fs:[0]
// 0060db1d  50                   push eax
// 0060db1e  64892500000000       mov dword ptr fs:[0], esp
// 0060db25  83ec0c               sub esp, 0xc
// 0060db28  33c0                 xor eax, eax
// 0060db2a  56                   push esi
// 0060db2b  8bf1                 mov esi, ecx
// 0060db2d  89442408             mov dword ptr [esp + 8], eax
// 0060db31  8944240c             mov dword ptr [esp + 0xc], eax
// 0060db35  89442404             mov dword ptr [esp + 4], eax
// 0060db39  89442418             mov dword ptr [esp + 0x18], eax
// 0060db3d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0060db41  50                   push eax
// 0060db42  8d4c2408             lea ecx, [esp + 8]
// 0060db46  e8b5f6ffff           call 0x60d200
// 0060db4b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0060db4f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0060db53  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060db57  51                   push ecx
// 0060db58  52                   push edx
// 0060db59  8b542428             mov edx, dword ptr [esp + 0x28]
// 0060db5d  50                   push eax
// 0060db5e  8d4c2410             lea ecx, [esp + 0x10]
// 0060db62  51                   push ecx
// 0060db63  52                   push edx
// 0060db64  8bce                 mov ecx, esi
// 0060db66  e875fbffff           call 0x60d6e0
// 0060db6b  8bf0                 mov esi, eax
// 0060db6d  8b442404             mov eax, dword ptr [esp + 4]
// 0060db71  50                   push eax
// 0060db72  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0060db7a  e8a1a1efff           call 0x507d20
// 0060db7f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060db83  83c404               add esp, 4
// 0060db86  8bc6                 mov eax, esi
// 0060db88  5e                   pop esi
// 0060db89  64890d00000000       mov dword ptr fs:[0], ecx
// 0060db90  83c418               add esp, 0x18
// 0060db93  c21400               ret 0x14
// library rbxgs/v8world\ContactManager.cpp (function ?getHit@ContactManager@RBX@@QBEPAVPrimitive@2@ABVRay@G3D@@PBV?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@PBVHitTestFilter@2@AAVVector3@5@AA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
