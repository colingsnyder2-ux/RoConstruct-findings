// roc 2007-08 004ff980  unit: G3D::Shader  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff980
//
// 004ff980  6aff                 push -1
// 004ff982  6840eb7400           push 0x74eb40
// 004ff987  64a100000000         mov eax, dword ptr fs:[0]
// 004ff98d  50                   push eax
// 004ff98e  81ec8c000000         sub esp, 0x8c
// 004ff994  a188518b00           mov eax, dword ptr [0x8b5188]
// 004ff999  33c4                 xor eax, esp
// 004ff99b  50                   push eax
// 004ff99c  8d842490000000       lea eax, [esp + 0x90]
// 004ff9a3  64a300000000         mov dword ptr fs:[0], eax
// 004ff9a9  6854597800           push 0x785954
// 004ff9ae  8d4c2478             lea ecx, [esp + 0x78]
// 004ff9b2  ff1598e67700         call dword ptr [0x77e698]
// 004ff9b8  6854597800           push 0x785954
// 004ff9bd  8d4c2440             lea ecx, [esp + 0x40]
// 004ff9c1  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 004ff9cc  ff1598e67700         call dword ptr [0x77e698]
// 004ff9d2  6854597800           push 0x785954
// 004ff9d7  8d4c2408             lea ecx, [esp + 8]
// 004ff9db  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 004ff9e3  ff1598e67700         call dword ptr [0x77e698]
// 004ff9e9  80bc24a400000000     cmp byte ptr [esp + 0xa4], 0
// 004ff9f1  c684249800000002     mov byte ptr [esp + 0x98], 2
// 004ff9f9  b89c7c7900           mov eax, 0x797c9c
// 004ff9fe  7505                 jne 0x4ffa05
// 004ffa00  b8987c7900           mov eax, 0x797c98
// 004ffa05  50                   push eax
// 004ffa06  8d4c245c             lea ecx, [esp + 0x5c]
// 004ffa0a  ff1598e67700         call dword ptr [0x77e698]
// 004ffa10  6870707800           push 0x787070
// 004ffa15  8d4c2424             lea ecx, [esp + 0x24]
// 004ffa19  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 004ffa21  ff1598e67700         call dword ptr [0x77e698]
// 004ffa27  8d442474             lea eax, [esp + 0x74]
// 004ffa2b  50                   push eax
// 004ffa2c  8d4c2440             lea ecx, [esp + 0x40]
// 004ffa30  51                   push ecx
// 004ffa31  8d54240c             lea edx, [esp + 0xc]
// 004ffa35  52                   push edx
// 004ffa36  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 004ffa3d  8d442464             lea eax, [esp + 0x64]
// 004ffa41  50                   push eax
// 004ffa42  8d4c2430             lea ecx, [esp + 0x30]
// 004ffa46  51                   push ecx
// 004ffa47  52                   push edx
// 004ffa48  8bce                 mov ecx, esi
// 004ffa4a  c68424b000000004     mov byte ptr [esp + 0xb0], 4
// 004ffa52  e8b9990000           call 0x509410
// 004ffa57  8d4c2420             lea ecx, [esp + 0x20]
// 004ffa5b  c684249800000003     mov byte ptr [esp + 0x98], 3
// 004ffa63  ff15ace67700         call dword ptr [0x77e6ac]
// 004ffa69  8d4c2458             lea ecx, [esp + 0x58]
// 004ffa6d  c684249800000002     mov byte ptr [esp + 0x98], 2
// 004ffa75  ff15ace67700         call dword ptr [0x77e6ac]
// 004ffa7b  8d4c2404             lea ecx, [esp + 4]
// 004ffa7f  c684249800000001     mov byte ptr [esp + 0x98], 1
// 004ffa87  ff15ace67700         call dword ptr [0x77e6ac]
// 004ffa8d  8d4c243c             lea ecx, [esp + 0x3c]
// 004ffa91  c684249800000000     mov byte ptr [esp + 0x98], 0
// 004ffa99  ff15ace67700         call dword ptr [0x77e6ac]
// 004ffa9f  8d4c2474             lea ecx, [esp + 0x74]
// 004ffaa3  c7842498000000ffffffff mov dword ptr [esp + 0x98], 0xffffffff
// 004ffaae  ff15ace67700         call dword ptr [0x77e6ac]
// 004ffab4  8bce                 mov ecx, esi
// 004ffab6  e8d5930000           call 0x508e90
// 004ffabb  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 004ffac2  64890d00000000       mov dword ptr fs:[0], ecx
// 004ffac9  59                   pop ecx
// 004ffaca  81c498000000         add esp, 0x98
// 004ffad0  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
