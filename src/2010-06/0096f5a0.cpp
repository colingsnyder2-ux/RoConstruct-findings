// roc 2010-06 0096f5a0  unit: seg_00960000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0096f5a0
//
// 0096f5a0  64a100000000         mov eax, dword ptr fs:[0]
// 0096f5a6  8b542404             mov edx, dword ptr [esp + 4]
// 0096f5aa  6aff                 push -1
// 0096f5ac  68e22f9a00           push 0x9a2fe2
// 0096f5b1  50                   push eax
// 0096f5b2  64892500000000       mov dword ptr fs:[0], esp
// 0096f5b9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0096f5bc  83ec44               sub esp, 0x44
// 0096f5bf  56                   push esi
// 0096f5c0  be0b59c802           mov esi, 0x2c8590b
// 0096f5c5  2bf0                 sub esi, eax
// 0096f5c7  3bf2                 cmp esi, edx
// 0096f5c9  5e                   pop esi
// 0096f5ca  7358                 jae 0x96f624
// 0096f5cc  68e845a000           push 0xa045e8
// 0096f5d1  8d4c2404             lea ecx, [esp + 4]
// 0096f5d5  ff1510a49e00         call dword ptr [0x9ea410]
// 0096f5db  8d4c241c             lea ecx, [esp + 0x1c]
// 0096f5df  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0096f5e7  ff1518a99e00         call dword ptr [0x9ea918]
// 0096f5ed  8d0424               lea eax, [esp]
// 0096f5f0  50                   push eax
// 0096f5f1  8d4c242c             lea ecx, [esp + 0x2c]
// 0096f5f5  c644245001           mov byte ptr [esp + 0x50], 1
// 0096f5fa  c74424202c00a000     mov dword ptr [esp + 0x20], 0xa0002c
// 0096f602  ff150ca49e00         call dword ptr [0x9ea40c]
// 0096f608  68601bb000           push 0xb01b60
// 0096f60d  8d4c2420             lea ecx, [esp + 0x20]
// 0096f611  51                   push ecx
// 0096f612  c644245400           mov byte ptr [esp + 0x54], 0
// 0096f617  c74424243800a000     mov dword ptr [esp + 0x24], 0xa00038
// 0096f61f  e88e93e3ff           call 0x7a89b2
// 0096f624  03c2                 add eax, edx
// 0096f626  894118               mov dword ptr [ecx + 0x18], eax
// 0096f629  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0096f62d  64890d00000000       mov dword ptr fs:[0], ecx
// 0096f634  83c450               add esp, 0x50
// 0096f637  c20400               ret 4
// copied from an identical function in another client (function ?_Incsize@?$list@UResourceDeclaration@ResourceGroupManager@Ogre@@V?$allocator@UResourceDeclaration@ResourceGroupManager@Ogre@@@std@@@std@@IAEXI@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreResourceGroupManager.cpp