// roc 2009-12 005ea540  unit: G3D::Shader  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ea540
//
// 005ea540  6aff                 push -1
// 005ea542  68a0eb9300           push 0x93eba0
// 005ea547  64a100000000         mov eax, dword ptr fs:[0]
// 005ea54d  50                   push eax
// 005ea54e  64892500000000       mov dword ptr fs:[0], esp
// 005ea555  81ec8c000000         sub esp, 0x8c
// 005ea55b  6856fd9900           push 0x99fd56
// 005ea560  8d4c2474             lea ecx, [esp + 0x74]
// 005ea564  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea56a  6856fd9900           push 0x99fd56
// 005ea56f  8d4c243c             lea ecx, [esp + 0x3c]
// 005ea573  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 005ea57e  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea584  6856fd9900           push 0x99fd56
// 005ea589  8d4c2404             lea ecx, [esp + 4]
// 005ea58d  c684249800000001     mov byte ptr [esp + 0x98], 1
// 005ea595  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea59b  80bc24a000000000     cmp byte ptr [esp + 0xa0], 0
// 005ea5a3  c684249400000002     mov byte ptr [esp + 0x94], 2
// 005ea5ab  b890589b00           mov eax, 0x9b5890
// 005ea5b0  7505                 jne 0x5ea5b7
// 005ea5b2  b88c589b00           mov eax, 0x9b588c
// 005ea5b7  50                   push eax
// 005ea5b8  8d4c2458             lea ecx, [esp + 0x58]
// 005ea5bc  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea5c2  6888589b00           push 0x9b5888
// 005ea5c7  8d4c2420             lea ecx, [esp + 0x20]
// 005ea5cb  c684249800000003     mov byte ptr [esp + 0x98], 3
// 005ea5d3  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea5d9  8d442470             lea eax, [esp + 0x70]
// 005ea5dd  50                   push eax
// 005ea5de  8d4c243c             lea ecx, [esp + 0x3c]
// 005ea5e2  51                   push ecx
// 005ea5e3  8d542408             lea edx, [esp + 8]
// 005ea5e7  52                   push edx
// 005ea5e8  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 005ea5ef  8d442460             lea eax, [esp + 0x60]
// 005ea5f3  50                   push eax
// 005ea5f4  8d4c242c             lea ecx, [esp + 0x2c]
// 005ea5f8  51                   push ecx
// 005ea5f9  52                   push edx
// 005ea5fa  8bce                 mov ecx, esi
// 005ea5fc  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 005ea604  e897010100           call 0x5fa7a0
// 005ea609  8d4c241c             lea ecx, [esp + 0x1c]
// 005ea60d  c684249400000003     mov byte ptr [esp + 0x94], 3
// 005ea615  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea61b  8d4c2454             lea ecx, [esp + 0x54]
// 005ea61f  c684249400000002     mov byte ptr [esp + 0x94], 2
// 005ea627  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea62d  8d0c24               lea ecx, [esp]
// 005ea630  c684249400000001     mov byte ptr [esp + 0x94], 1
// 005ea638  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea63e  8d4c2438             lea ecx, [esp + 0x38]
// 005ea642  c684249400000000     mov byte ptr [esp + 0x94], 0
// 005ea64a  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea650  8d4c2470             lea ecx, [esp + 0x70]
// 005ea654  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 005ea65f  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea665  8bce                 mov ecx, esi
// 005ea667  e844fc0000           call 0x5fa2b0
// 005ea66c  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 005ea673  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea67a  81c498000000         add esp, 0x98
// 005ea680  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
