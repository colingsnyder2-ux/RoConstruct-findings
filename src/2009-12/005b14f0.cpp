// roc 2009-12 005b14f0  unit: RBX::BrickBuilder  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005b14f0
//
// 005b14f0  64a100000000         mov eax, dword ptr fs:[0]
// 005b14f6  8b542404             mov edx, dword ptr [esp + 4]
// 005b14fa  6aff                 push -1
// 005b14fc  6812699500           push 0x956912
// 005b1501  50                   push eax
// 005b1502  64892500000000       mov dword ptr fs:[0], esp
// 005b1509  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005b150c  83ec44               sub esp, 0x44
// 005b150f  56                   push esi
// 005b1510  be0b59c802           mov esi, 0x2c8590b
// 005b1515  2bf0                 sub esi, eax
// 005b1517  3bf2                 cmp esi, edx
// 005b1519  5e                   pop esi
// 005b151a  7358                 jae 0x5b1574
// 005b151c  6884389a00           push 0x9a3884
// 005b1521  8d4c2404             lea ecx, [esp + 4]
// 005b1525  ff15f4b69800         call dword ptr [0x98b6f4]
// 005b152b  8d4c241c             lea ecx, [esp + 0x1c]
// 005b152f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 005b1537  ff1554b79800         call dword ptr [0x98b754]
// 005b153d  8d0424               lea eax, [esp]
// 005b1540  50                   push eax
// 005b1541  8d4c242c             lea ecx, [esp + 0x2c]
// 005b1545  c644245001           mov byte ptr [esp + 0x50], 1
// 005b154a  c744242084f49900     mov dword ptr [esp + 0x20], 0x99f484
// 005b1552  ff15f0b69800         call dword ptr [0x98b6f0]
// 005b1558  68e4efa800           push 0xa8efe4
// 005b155d  8d4c2420             lea ecx, [esp + 0x20]
// 005b1561  51                   push ecx
// 005b1562  c644245400           mov byte ptr [esp + 0x54], 0
// 005b1567  c744242490f49900     mov dword ptr [esp + 0x24], 0x99f490
// 005b156f  e804332400           call 0x7f4878
// 005b1574  03c2                 add eax, edx
// 005b1576  894118               mov dword ptr [ecx + 0x18], eax
// 005b1579  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005b157d  64890d00000000       mov dword ptr fs:[0], ecx
// 005b1584  83c450               add esp, 0x50
// 005b1587  c20400               ret 4
// copied from an identical function in another client (function ?_Incsize@?$list@UResourceDeclaration@ResourceGroupManager@Ogre@@V?$allocator@UResourceDeclaration@ResourceGroupManager@Ogre@@@std@@@std@@IAEXI@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreResourceGroupManager.cpp