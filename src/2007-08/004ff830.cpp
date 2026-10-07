// roc 2007-08 004ff830  unit: G3D::Shader  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff830
//
// 004ff830  6aff                 push -1
// 004ff832  6840eb7400           push 0x74eb40
// 004ff837  64a100000000         mov eax, dword ptr fs:[0]
// 004ff83d  50                   push eax
// 004ff83e  81ec8c000000         sub esp, 0x8c
// 004ff844  a188518b00           mov eax, dword ptr [0x8b5188]
// 004ff849  33c4                 xor eax, esp
// 004ff84b  50                   push eax
// 004ff84c  8d842490000000       lea eax, [esp + 0x90]
// 004ff853  64a300000000         mov dword ptr fs:[0], eax
// 004ff859  6854597800           push 0x785954
// 004ff85e  8d4c2478             lea ecx, [esp + 0x78]
// 004ff862  ff1598e67700         call dword ptr [0x77e698]
// 004ff868  6854597800           push 0x785954
// 004ff86d  8d4c2440             lea ecx, [esp + 0x40]
// 004ff871  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 004ff87c  ff1598e67700         call dword ptr [0x77e698]
// 004ff882  6854597800           push 0x785954
// 004ff887  8d4c2408             lea ecx, [esp + 8]
// 004ff88b  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 004ff893  ff1598e67700         call dword ptr [0x77e698]
// 004ff899  6854597800           push 0x785954
// 004ff89e  8d4c245c             lea ecx, [esp + 0x5c]
// 004ff8a2  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 004ff8aa  ff1598e67700         call dword ptr [0x77e698]
// 004ff8b0  6870707800           push 0x787070
// 004ff8b5  8d4c2424             lea ecx, [esp + 0x24]
// 004ff8b9  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 004ff8c1  ff1598e67700         call dword ptr [0x77e698]
// 004ff8c7  8d442474             lea eax, [esp + 0x74]
// 004ff8cb  50                   push eax
// 004ff8cc  8d4c2440             lea ecx, [esp + 0x40]
// 004ff8d0  51                   push ecx
// 004ff8d1  8d54240c             lea edx, [esp + 0xc]
// 004ff8d5  52                   push edx
// 004ff8d6  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 004ff8dd  8d442464             lea eax, [esp + 0x64]
// 004ff8e1  50                   push eax
// 004ff8e2  8d4c2430             lea ecx, [esp + 0x30]
// 004ff8e6  51                   push ecx
// 004ff8e7  52                   push edx
// 004ff8e8  8bce                 mov ecx, esi
// 004ff8ea  c68424b000000004     mov byte ptr [esp + 0xb0], 4
// 004ff8f2  e8199b0000           call 0x509410
// 004ff8f7  8d4c2420             lea ecx, [esp + 0x20]
// 004ff8fb  c684249800000003     mov byte ptr [esp + 0x98], 3
// 004ff903  ff15ace67700         call dword ptr [0x77e6ac]
// 004ff909  8d4c2458             lea ecx, [esp + 0x58]
// 004ff90d  c684249800000002     mov byte ptr [esp + 0x98], 2
// 004ff915  ff15ace67700         call dword ptr [0x77e6ac]
// 004ff91b  8d4c2404             lea ecx, [esp + 4]
// 004ff91f  c684249800000001     mov byte ptr [esp + 0x98], 1
// 004ff927  ff15ace67700         call dword ptr [0x77e6ac]
// 004ff92d  8d4c243c             lea ecx, [esp + 0x3c]
// 004ff931  c684249800000000     mov byte ptr [esp + 0x98], 0
// 004ff939  ff15ace67700         call dword ptr [0x77e6ac]
// 004ff93f  8d4c2474             lea ecx, [esp + 0x74]
// 004ff943  c7842498000000ffffffff mov dword ptr [esp + 0x98], 0xffffffff
// 004ff94e  ff15ace67700         call dword ptr [0x77e6ac]
// 004ff954  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 004ff95b  50                   push eax
// 004ff95c  8bce                 mov ecx, esi
// 004ff95e  e8bd990000           call 0x509320
// 004ff963  8bce                 mov ecx, esi
// 004ff965  e826950000           call 0x508e90
// 004ff96a  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 004ff971  64890d00000000       mov dword ptr fs:[0], ecx
// 004ff978  59                   pop ecx
// 004ff979  81c498000000         add esp, 0x98
// 004ff97f  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
