// roc 2007-08 004ffae0  unit: G3D::Shader  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ffae0
//
// 004ffae0  6aff                 push -1
// 004ffae2  6840eb7400           push 0x74eb40
// 004ffae7  64a100000000         mov eax, dword ptr fs:[0]
// 004ffaed  50                   push eax
// 004ffaee  81ec8c000000         sub esp, 0x8c
// 004ffaf4  a188518b00           mov eax, dword ptr [0x8b5188]
// 004ffaf9  33c4                 xor eax, esp
// 004ffafb  50                   push eax
// 004ffafc  8d842490000000       lea eax, [esp + 0x90]
// 004ffb03  64a300000000         mov dword ptr fs:[0], eax
// 004ffb09  6854597800           push 0x785954
// 004ffb0e  8d4c2478             lea ecx, [esp + 0x78]
// 004ffb12  ff1598e67700         call dword ptr [0x77e698]
// 004ffb18  6854597800           push 0x785954
// 004ffb1d  8d4c2440             lea ecx, [esp + 0x40]
// 004ffb21  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 004ffb2c  ff1598e67700         call dword ptr [0x77e698]
// 004ffb32  6854597800           push 0x785954
// 004ffb37  8d4c2408             lea ecx, [esp + 8]
// 004ffb3b  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 004ffb43  ff1598e67700         call dword ptr [0x77e698]
// 004ffb49  6854597800           push 0x785954
// 004ffb4e  8d4c245c             lea ecx, [esp + 0x5c]
// 004ffb52  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 004ffb5a  ff1598e67700         call dword ptr [0x77e698]
// 004ffb60  6870707800           push 0x787070
// 004ffb65  8d4c2424             lea ecx, [esp + 0x24]
// 004ffb69  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 004ffb71  ff1598e67700         call dword ptr [0x77e698]
// 004ffb77  8d442474             lea eax, [esp + 0x74]
// 004ffb7b  50                   push eax
// 004ffb7c  8d4c2440             lea ecx, [esp + 0x40]
// 004ffb80  51                   push ecx
// 004ffb81  8d54240c             lea edx, [esp + 0xc]
// 004ffb85  52                   push edx
// 004ffb86  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 004ffb8d  8d442464             lea eax, [esp + 0x64]
// 004ffb91  50                   push eax
// 004ffb92  8d4c2430             lea ecx, [esp + 0x30]
// 004ffb96  51                   push ecx
// 004ffb97  52                   push edx
// 004ffb98  8bce                 mov ecx, esi
// 004ffb9a  c68424b000000004     mov byte ptr [esp + 0xb0], 4
// 004ffba2  e869980000           call 0x509410
// 004ffba7  8d4c2420             lea ecx, [esp + 0x20]
// 004ffbab  c684249800000003     mov byte ptr [esp + 0x98], 3
// 004ffbb3  ff15ace67700         call dword ptr [0x77e6ac]
// 004ffbb9  8d4c2458             lea ecx, [esp + 0x58]
// 004ffbbd  c684249800000002     mov byte ptr [esp + 0x98], 2
// 004ffbc5  ff15ace67700         call dword ptr [0x77e6ac]
// 004ffbcb  8d4c2404             lea ecx, [esp + 4]
// 004ffbcf  c684249800000001     mov byte ptr [esp + 0x98], 1
// 004ffbd7  ff15ace67700         call dword ptr [0x77e6ac]
// 004ffbdd  8d4c243c             lea ecx, [esp + 0x3c]
// 004ffbe1  c684249800000000     mov byte ptr [esp + 0x98], 0
// 004ffbe9  ff15ace67700         call dword ptr [0x77e6ac]
// 004ffbef  8d4c2474             lea ecx, [esp + 0x74]
// 004ffbf3  c7842498000000ffffffff mov dword ptr [esp + 0x98], 0xffffffff
// 004ffbfe  ff15ace67700         call dword ptr [0x77e6ac]
// 004ffc04  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 004ffc0b  50                   push eax
// 004ffc0c  8bce                 mov ecx, esi
// 004ffc0e  e89d970000           call 0x5093b0
// 004ffc13  8bce                 mov ecx, esi
// 004ffc15  e876920000           call 0x508e90
// 004ffc1a  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 004ffc21  64890d00000000       mov dword ptr fs:[0], ecx
// 004ffc28  59                   pop ecx
// 004ffc29  81c498000000         add esp, 0x98
// 004ffc2f  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
