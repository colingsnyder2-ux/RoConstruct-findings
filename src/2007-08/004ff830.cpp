// from server: 100% by tester
// roc 2007-03 004f33a0  unit: seg_004f0000  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f33a0
//
// 004f33a0  6aff                 push -1
// 004f33a2  68f0f97400           push 0x74f9f0
// 004f33a7  64a100000000         mov eax, dword ptr fs:[0]
// 004f33ad  50                   push eax
// 004f33ae  81ec8c000000         sub esp, 0x8c
// 004f33b4  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f33b9  33c4                 xor eax, esp
// 004f33bb  50                   push eax
// 004f33bc  8d842490000000       lea eax, [esp + 0x90]
// 004f33c3  64a300000000         mov dword ptr fs:[0], eax
// 004f33c9  68ac497800           push 0x7849ac
// 004f33ce  8d4c2478             lea ecx, [esp + 0x78]
// 004f33d2  ff1578e77700         call dword ptr [0x77e778]
// 004f33d8  68ac497800           push 0x7849ac
// 004f33dd  8d4c2440             lea ecx, [esp + 0x40]
// 004f33e1  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 004f33ec  ff1578e77700         call dword ptr [0x77e778]
// 004f33f2  68ac497800           push 0x7849ac
// 004f33f7  8d4c2408             lea ecx, [esp + 8]
// 004f33fb  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 004f3403  ff1578e77700         call dword ptr [0x77e778]
// 004f3409  68ac497800           push 0x7849ac
// 004f340e  8d4c245c             lea ecx, [esp + 0x5c]
// 004f3412  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 004f341a  ff1578e77700         call dword ptr [0x77e778]
// 004f3420  6820617800           push 0x786120
// 004f3425  8d4c2424             lea ecx, [esp + 0x24]
// 004f3429  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 004f3431  ff1578e77700         call dword ptr [0x77e778]
// 004f3437  8d442474             lea eax, [esp + 0x74]
// 004f343b  50                   push eax
// 004f343c  8d4c2440             lea ecx, [esp + 0x40]
// 004f3440  51                   push ecx
// 004f3441  8d54240c             lea edx, [esp + 0xc]
// 004f3445  52                   push edx
// 004f3446  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 004f344d  8d442464             lea eax, [esp + 0x64]
// 004f3451  50                   push eax
// 004f3452  8d4c2430             lea ecx, [esp + 0x30]
// 004f3456  51                   push ecx
// 004f3457  52                   push edx
// 004f3458  8bce                 mov ecx, esi
// 004f345a  c68424b000000004     mov byte ptr [esp + 0xb0], 4
// 004f3462  e859b30000           call 0x4fe7c0
// 004f3467  8d4c2420             lea ecx, [esp + 0x20]
// 004f346b  c684249800000003     mov byte ptr [esp + 0x98], 3
// 004f3473  ff158ce77700         call dword ptr [0x77e78c]
// 004f3479  8d4c2458             lea ecx, [esp + 0x58]
// 004f347d  c684249800000002     mov byte ptr [esp + 0x98], 2
// 004f3485  ff158ce77700         call dword ptr [0x77e78c]
// 004f348b  8d4c2404             lea ecx, [esp + 4]
// 004f348f  c684249800000001     mov byte ptr [esp + 0x98], 1
// 004f3497  ff158ce77700         call dword ptr [0x77e78c]
// 004f349d  8d4c243c             lea ecx, [esp + 0x3c]
// 004f34a1  c684249800000000     mov byte ptr [esp + 0x98], 0
// 004f34a9  ff158ce77700         call dword ptr [0x77e78c]
// 004f34af  8d4c2474             lea ecx, [esp + 0x74]
// 004f34b3  c7842498000000ffffffff mov dword ptr [esp + 0x98], 0xffffffff
// 004f34be  ff158ce77700         call dword ptr [0x77e78c]
// 004f34c4  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 004f34cb  50                   push eax
// 004f34cc  8bce                 mov ecx, esi
// 004f34ce  e8fdb10000           call 0x4fe6d0
// 004f34d3  8bce                 mov ecx, esi
// 004f34d5  e866ad0000           call 0x4fe240
// 004f34da  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 004f34e1  64890d00000000       mov dword ptr fs:[0], ecx
// 004f34e8  59                   pop ecx
// 004f34e9  81c498000000         add esp, 0x98
// 004f34ef  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
