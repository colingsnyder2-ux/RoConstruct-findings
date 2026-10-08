// roc 2007-03 004f3650  unit: seg_004f0000  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3650
//
// 004f3650  6aff                 push -1
// 004f3652  68f0f97400           push 0x74f9f0
// 004f3657  64a100000000         mov eax, dword ptr fs:[0]
// 004f365d  50                   push eax
// 004f365e  81ec8c000000         sub esp, 0x8c
// 004f3664  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f3669  33c4                 xor eax, esp
// 004f366b  50                   push eax
// 004f366c  8d842490000000       lea eax, [esp + 0x90]
// 004f3673  64a300000000         mov dword ptr fs:[0], eax
// 004f3679  68ac497800           push 0x7849ac
// 004f367e  8d4c2478             lea ecx, [esp + 0x78]
// 004f3682  ff1578e77700         call dword ptr [0x77e778]
// 004f3688  68ac497800           push 0x7849ac
// 004f368d  8d4c2440             lea ecx, [esp + 0x40]
// 004f3691  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 004f369c  ff1578e77700         call dword ptr [0x77e778]
// 004f36a2  68ac497800           push 0x7849ac
// 004f36a7  8d4c2408             lea ecx, [esp + 8]
// 004f36ab  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 004f36b3  ff1578e77700         call dword ptr [0x77e778]
// 004f36b9  68ac497800           push 0x7849ac
// 004f36be  8d4c245c             lea ecx, [esp + 0x5c]
// 004f36c2  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 004f36ca  ff1578e77700         call dword ptr [0x77e778]
// 004f36d0  6820617800           push 0x786120
// 004f36d5  8d4c2424             lea ecx, [esp + 0x24]
// 004f36d9  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 004f36e1  ff1578e77700         call dword ptr [0x77e778]
// 004f36e7  8d442474             lea eax, [esp + 0x74]
// 004f36eb  50                   push eax
// 004f36ec  8d4c2440             lea ecx, [esp + 0x40]
// 004f36f0  51                   push ecx
// 004f36f1  8d54240c             lea edx, [esp + 0xc]
// 004f36f5  52                   push edx
// 004f36f6  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 004f36fd  8d442464             lea eax, [esp + 0x64]
// 004f3701  50                   push eax
// 004f3702  8d4c2430             lea ecx, [esp + 0x30]
// 004f3706  51                   push ecx
// 004f3707  52                   push edx
// 004f3708  8bce                 mov ecx, esi
// 004f370a  c68424b000000004     mov byte ptr [esp + 0xb0], 4
// 004f3712  e8a9b00000           call 0x4fe7c0
// 004f3717  8d4c2420             lea ecx, [esp + 0x20]
// 004f371b  c684249800000003     mov byte ptr [esp + 0x98], 3
// 004f3723  ff158ce77700         call dword ptr [0x77e78c]
// 004f3729  8d4c2458             lea ecx, [esp + 0x58]
// 004f372d  c684249800000002     mov byte ptr [esp + 0x98], 2
// 004f3735  ff158ce77700         call dword ptr [0x77e78c]
// 004f373b  8d4c2404             lea ecx, [esp + 4]
// 004f373f  c684249800000001     mov byte ptr [esp + 0x98], 1
// 004f3747  ff158ce77700         call dword ptr [0x77e78c]
// 004f374d  8d4c243c             lea ecx, [esp + 0x3c]
// 004f3751  c684249800000000     mov byte ptr [esp + 0x98], 0
// 004f3759  ff158ce77700         call dword ptr [0x77e78c]
// 004f375f  8d4c2474             lea ecx, [esp + 0x74]
// 004f3763  c7842498000000ffffffff mov dword ptr [esp + 0x98], 0xffffffff
// 004f376e  ff158ce77700         call dword ptr [0x77e78c]
// 004f3774  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 004f377b  50                   push eax
// 004f377c  8bce                 mov ecx, esi
// 004f377e  e8ddaf0000           call 0x4fe760
// 004f3783  8bce                 mov ecx, esi
// 004f3785  e8b6aa0000           call 0x4fe240
// 004f378a  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 004f3791  64890d00000000       mov dword ptr fs:[0], ecx
// 004f3798  59                   pop ecx
// 004f3799  81c498000000         add esp, 0x98
// 004f379f  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
