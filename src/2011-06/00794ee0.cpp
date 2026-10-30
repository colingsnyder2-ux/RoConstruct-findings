// roc 2011-06 00794ee0  unit: seg_00790000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00794ee0
//
// 00794ee0  64a100000000         mov eax, dword ptr fs:[0]
// 00794ee6  8b542404             mov edx, dword ptr [esp + 4]
// 00794eea  6aff                 push -1
// 00794eec  68221b9d00           push 0x9d1b22
// 00794ef1  50                   push eax
// 00794ef2  64892500000000       mov dword ptr fs:[0], esp
// 00794ef9  8b4108               mov eax, dword ptr [ecx + 8]
// 00794efc  83ec44               sub esp, 0x44
// 00794eff  56                   push esi
// 00794f00  be24499204           mov esi, 0x4924924
// 00794f05  2bf0                 sub esi, eax
// 00794f07  3bf2                 cmp esi, edx
// 00794f09  5e                   pop esi
// 00794f0a  7358                 jae 0x794f64
// 00794f0c  688457a600           push 0xa65784
// 00794f11  8d4c2404             lea ecx, [esp + 4]
// 00794f15  ff15c404a400         call dword ptr [0xa404c4]
// 00794f1b  8d4c241c             lea ecx, [esp + 0x1c]
// 00794f1f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00794f27  ff15600aa400         call dword ptr [0xa40a60]
// 00794f2d  8d0424               lea eax, [esp]
// 00794f30  50                   push eax
// 00794f31  8d4c242c             lea ecx, [esp + 0x2c]
// 00794f35  c644245001           mov byte ptr [esp + 0x50], 1
// 00794f3a  c7442420c0b5a500     mov dword ptr [esp + 0x20], 0xa5b5c0
// 00794f42  ff15c804a400         call dword ptr [0xa404c8]
// 00794f48  687073b800           push 0xb87370
// 00794f4d  8d4c2420             lea ecx, [esp + 0x20]
// 00794f51  51                   push ecx
// 00794f52  c644245400           mov byte ptr [esp + 0x54], 0
// 00794f57  c7442424ccb5a500     mov dword ptr [esp + 0x24], 0xa5b5cc
// 00794f5f  e848610700           call 0x80b0ac
// 00794f64  03c2                 add eax, edx
// 00794f66  894108               mov dword ptr [ecx + 8], eax
// 00794f69  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00794f6d  64890d00000000       mov dword ptr fs:[0], ecx
// 00794f74  83c450               add esp, 0x50
// 00794f77  c20400               ret 4
// copied from an identical function in another client (function ?_Incsize@?$list@UProfileHistory@Profiler@Ogre@@V?$allocator@UProfileHistory@Profiler@Ogre@@@std@@@std@@IAEXI@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreProfiler.cpp