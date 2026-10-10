// from server: 100% by tester
// roc 2007-03 004f34f0  unit: seg_004f0000  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f34f0
//
// 004f34f0  6aff                 push -1
// 004f34f2  68f0f97400           push 0x74f9f0
// 004f34f7  64a100000000         mov eax, dword ptr fs:[0]
// 004f34fd  50                   push eax
// 004f34fe  81ec8c000000         sub esp, 0x8c
// 004f3504  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f3509  33c4                 xor eax, esp
// 004f350b  50                   push eax
// 004f350c  8d842490000000       lea eax, [esp + 0x90]
// 004f3513  64a300000000         mov dword ptr fs:[0], eax
// 004f3519  68ac497800           push 0x7849ac
// 004f351e  8d4c2478             lea ecx, [esp + 0x78]
// 004f3522  ff1578e77700         call dword ptr [0x77e778]
// 004f3528  68ac497800           push 0x7849ac
// 004f352d  8d4c2440             lea ecx, [esp + 0x40]
// 004f3531  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 004f353c  ff1578e77700         call dword ptr [0x77e778]
// 004f3542  68ac497800           push 0x7849ac
// 004f3547  8d4c2408             lea ecx, [esp + 8]
// 004f354b  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 004f3553  ff1578e77700         call dword ptr [0x77e778]
// 004f3559  80bc24a400000000     cmp byte ptr [esp + 0xa4], 0
// 004f3561  c684249800000002     mov byte ptr [esp + 0x98], 2
// 004f3569  b88c707900           mov eax, 0x79708c
// 004f356e  7505                 jne 0x4f3575
// 004f3570  b888707900           mov eax, 0x797088
// 004f3575  50                   push eax
// 004f3576  8d4c245c             lea ecx, [esp + 0x5c]
// 004f357a  ff1578e77700         call dword ptr [0x77e778]
// 004f3580  6820617800           push 0x786120
// 004f3585  8d4c2424             lea ecx, [esp + 0x24]
// 004f3589  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 004f3591  ff1578e77700         call dword ptr [0x77e778]
// 004f3597  8d442474             lea eax, [esp + 0x74]
// 004f359b  50                   push eax
// 004f359c  8d4c2440             lea ecx, [esp + 0x40]
// 004f35a0  51                   push ecx
// 004f35a1  8d54240c             lea edx, [esp + 0xc]
// 004f35a5  52                   push edx
// 004f35a6  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 004f35ad  8d442464             lea eax, [esp + 0x64]
// 004f35b1  50                   push eax
// 004f35b2  8d4c2430             lea ecx, [esp + 0x30]
// 004f35b6  51                   push ecx
// 004f35b7  52                   push edx
// 004f35b8  8bce                 mov ecx, esi
// 004f35ba  c68424b000000004     mov byte ptr [esp + 0xb0], 4
// 004f35c2  e8f9b10000           call 0x4fe7c0
// 004f35c7  8d4c2420             lea ecx, [esp + 0x20]
// 004f35cb  c684249800000003     mov byte ptr [esp + 0x98], 3
// 004f35d3  ff158ce77700         call dword ptr [0x77e78c]
// 004f35d9  8d4c2458             lea ecx, [esp + 0x58]
// 004f35dd  c684249800000002     mov byte ptr [esp + 0x98], 2
// 004f35e5  ff158ce77700         call dword ptr [0x77e78c]
// 004f35eb  8d4c2404             lea ecx, [esp + 4]
// 004f35ef  c684249800000001     mov byte ptr [esp + 0x98], 1
// 004f35f7  ff158ce77700         call dword ptr [0x77e78c]
// 004f35fd  8d4c243c             lea ecx, [esp + 0x3c]
// 004f3601  c684249800000000     mov byte ptr [esp + 0x98], 0
// 004f3609  ff158ce77700         call dword ptr [0x77e78c]
// 004f360f  8d4c2474             lea ecx, [esp + 0x74]
// 004f3613  c7842498000000ffffffff mov dword ptr [esp + 0x98], 0xffffffff
// 004f361e  ff158ce77700         call dword ptr [0x77e78c]
// 004f3624  8bce                 mov ecx, esi
// 004f3626  e815ac0000           call 0x4fe240
// 004f362b  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 004f3632  64890d00000000       mov dword ptr fs:[0], ecx
// 004f3639  59                   pop ecx
// 004f363a  81c498000000         add esp, 0x98
// 004f3640  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
