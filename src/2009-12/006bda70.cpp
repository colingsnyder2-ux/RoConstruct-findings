// roc 2009-12 006bda70  unit: CPropGrid::UpdateItemsJob  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bda70
//
// 006bda70  64a100000000         mov eax, dword ptr fs:[0]
// 006bda76  8b542404             mov edx, dword ptr [esp + 4]
// 006bda7a  6aff                 push -1
// 006bda7c  6812699500           push 0x956912
// 006bda81  50                   push eax
// 006bda82  64892500000000       mov dword ptr fs:[0], esp
// 006bda89  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006bda8c  83ec44               sub esp, 0x44
// 006bda8f  56                   push esi
// 006bda90  be24499204           mov esi, 0x4924924
// 006bda95  2bf0                 sub esi, eax
// 006bda97  3bf2                 cmp esi, edx
// 006bda99  5e                   pop esi
// 006bda9a  7358                 jae 0x6bdaf4
// 006bda9c  6884389a00           push 0x9a3884
// 006bdaa1  8d4c2404             lea ecx, [esp + 4]
// 006bdaa5  ff15f4b69800         call dword ptr [0x98b6f4]
// 006bdaab  8d4c241c             lea ecx, [esp + 0x1c]
// 006bdaaf  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 006bdab7  ff1554b79800         call dword ptr [0x98b754]
// 006bdabd  8d0424               lea eax, [esp]
// 006bdac0  50                   push eax
// 006bdac1  8d4c242c             lea ecx, [esp + 0x2c]
// 006bdac5  c644245001           mov byte ptr [esp + 0x50], 1
// 006bdaca  c744242084f49900     mov dword ptr [esp + 0x20], 0x99f484
// 006bdad2  ff15f0b69800         call dword ptr [0x98b6f0]
// 006bdad8  68e4efa800           push 0xa8efe4
// 006bdadd  8d4c2420             lea ecx, [esp + 0x20]
// 006bdae1  51                   push ecx
// 006bdae2  c644245400           mov byte ptr [esp + 0x54], 0
// 006bdae7  c744242490f49900     mov dword ptr [esp + 0x24], 0x99f490
// 006bdaef  e8846d1300           call 0x7f4878
// 006bdaf4  03c2                 add eax, edx
// 006bdaf6  894118               mov dword ptr [ecx + 0x18], eax
// 006bdaf9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006bdafd  64890d00000000       mov dword ptr fs:[0], ecx
// 006bdb04  83c450               add esp, 0x50
// 006bdb07  c20400               ret 4
// copied from an identical function in another client (function ?_Incsize@?$list@UProfileHistory@Profiler@Ogre@@V?$allocator@UProfileHistory@Profiler@Ogre@@@std@@@std@@IAEXI@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreProfiler.cpp