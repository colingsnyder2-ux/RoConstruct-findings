// roc 2009-12 005ea690  unit: G3D::Shader  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ea690
//
// 005ea690  6aff                 push -1
// 005ea692  68a0eb9300           push 0x93eba0
// 005ea697  64a100000000         mov eax, dword ptr fs:[0]
// 005ea69d  50                   push eax
// 005ea69e  64892500000000       mov dword ptr fs:[0], esp
// 005ea6a5  81ec8c000000         sub esp, 0x8c
// 005ea6ab  6856fd9900           push 0x99fd56
// 005ea6b0  8d4c2474             lea ecx, [esp + 0x74]
// 005ea6b4  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea6ba  6856fd9900           push 0x99fd56
// 005ea6bf  8d4c243c             lea ecx, [esp + 0x3c]
// 005ea6c3  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 005ea6ce  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea6d4  6856fd9900           push 0x99fd56
// 005ea6d9  8d4c2404             lea ecx, [esp + 4]
// 005ea6dd  c684249800000001     mov byte ptr [esp + 0x98], 1
// 005ea6e5  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea6eb  6856fd9900           push 0x99fd56
// 005ea6f0  8d4c2458             lea ecx, [esp + 0x58]
// 005ea6f4  c684249800000002     mov byte ptr [esp + 0x98], 2
// 005ea6fc  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea702  6888589b00           push 0x9b5888
// 005ea707  8d4c2420             lea ecx, [esp + 0x20]
// 005ea70b  c684249800000003     mov byte ptr [esp + 0x98], 3
// 005ea713  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea719  8d442470             lea eax, [esp + 0x70]
// 005ea71d  50                   push eax
// 005ea71e  8d4c243c             lea ecx, [esp + 0x3c]
// 005ea722  51                   push ecx
// 005ea723  8d542408             lea edx, [esp + 8]
// 005ea727  52                   push edx
// 005ea728  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 005ea72f  8d442460             lea eax, [esp + 0x60]
// 005ea733  50                   push eax
// 005ea734  8d4c242c             lea ecx, [esp + 0x2c]
// 005ea738  51                   push ecx
// 005ea739  52                   push edx
// 005ea73a  8bce                 mov ecx, esi
// 005ea73c  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 005ea744  e857000100           call 0x5fa7a0
// 005ea749  8d4c241c             lea ecx, [esp + 0x1c]
// 005ea74d  c684249400000003     mov byte ptr [esp + 0x94], 3
// 005ea755  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea75b  8d4c2454             lea ecx, [esp + 0x54]
// 005ea75f  c684249400000002     mov byte ptr [esp + 0x94], 2
// 005ea767  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea76d  8d0c24               lea ecx, [esp]
// 005ea770  c684249400000001     mov byte ptr [esp + 0x94], 1
// 005ea778  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea77e  8d4c2438             lea ecx, [esp + 0x38]
// 005ea782  c684249400000000     mov byte ptr [esp + 0x94], 0
// 005ea78a  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea790  8d4c2470             lea ecx, [esp + 0x70]
// 005ea794  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 005ea79f  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea7a5  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 005ea7ac  50                   push eax
// 005ea7ad  8bce                 mov ecx, esi
// 005ea7af  e8ccff0000           call 0x5fa780
// 005ea7b4  8bce                 mov ecx, esi
// 005ea7b6  e8f5fa0000           call 0x5fa2b0
// 005ea7bb  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 005ea7c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea7c9  81c498000000         add esp, 0x98
// 005ea7cf  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
