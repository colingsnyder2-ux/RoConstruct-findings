// roc 2010-06 0065b5f0  unit: RBX::ScriptInformationProvider  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065b5f0
//
// 0065b5f0  64a100000000         mov eax, dword ptr fs:[0]
// 0065b5f6  8b542404             mov edx, dword ptr [esp + 4]
// 0065b5fa  6aff                 push -1
// 0065b5fc  68e22f9a00           push 0x9a2fe2
// 0065b601  50                   push eax
// 0065b602  64892500000000       mov dword ptr fs:[0], esp
// 0065b609  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0065b60c  83ec44               sub esp, 0x44
// 0065b60f  56                   push esi
// 0065b610  be24499204           mov esi, 0x4924924
// 0065b615  2bf0                 sub esi, eax
// 0065b617  3bf2                 cmp esi, edx
// 0065b619  5e                   pop esi
// 0065b61a  7358                 jae 0x65b674
// 0065b61c  68e845a000           push 0xa045e8
// 0065b621  8d4c2404             lea ecx, [esp + 4]
// 0065b625  ff1510a49e00         call dword ptr [0x9ea410]
// 0065b62b  8d4c241c             lea ecx, [esp + 0x1c]
// 0065b62f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0065b637  ff1518a99e00         call dword ptr [0x9ea918]
// 0065b63d  8d0424               lea eax, [esp]
// 0065b640  50                   push eax
// 0065b641  8d4c242c             lea ecx, [esp + 0x2c]
// 0065b645  c644245001           mov byte ptr [esp + 0x50], 1
// 0065b64a  c74424202c00a000     mov dword ptr [esp + 0x20], 0xa0002c
// 0065b652  ff150ca49e00         call dword ptr [0x9ea40c]
// 0065b658  68601bb000           push 0xb01b60
// 0065b65d  8d4c2420             lea ecx, [esp + 0x20]
// 0065b661  51                   push ecx
// 0065b662  c644245400           mov byte ptr [esp + 0x54], 0
// 0065b667  c74424243800a000     mov dword ptr [esp + 0x24], 0xa00038
// 0065b66f  e83ed31400           call 0x7a89b2
// 0065b674  03c2                 add eax, edx
// 0065b676  894118               mov dword ptr [ecx + 0x18], eax
// 0065b679  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0065b67d  64890d00000000       mov dword ptr fs:[0], ecx
// 0065b684  83c450               add esp, 0x50
// 0065b687  c20400               ret 4
// copied from an identical function in another client (function ?_Incsize@?$list@UProfileHistory@Profiler@Ogre@@V?$allocator@UProfileHistory@Profiler@Ogre@@@std@@@std@@IAEXI@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreProfiler.cpp