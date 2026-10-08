// roc 2009-12 005ea400  unit: G3D::Shader  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ea400
//
// 005ea400  6aff                 push -1
// 005ea402  68a0eb9300           push 0x93eba0
// 005ea407  64a100000000         mov eax, dword ptr fs:[0]
// 005ea40d  50                   push eax
// 005ea40e  64892500000000       mov dword ptr fs:[0], esp
// 005ea415  81ec8c000000         sub esp, 0x8c
// 005ea41b  6856fd9900           push 0x99fd56
// 005ea420  8d4c2474             lea ecx, [esp + 0x74]
// 005ea424  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea42a  6856fd9900           push 0x99fd56
// 005ea42f  8d4c243c             lea ecx, [esp + 0x3c]
// 005ea433  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 005ea43e  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea444  6856fd9900           push 0x99fd56
// 005ea449  8d4c2404             lea ecx, [esp + 4]
// 005ea44d  c684249800000001     mov byte ptr [esp + 0x98], 1
// 005ea455  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea45b  6856fd9900           push 0x99fd56
// 005ea460  8d4c2458             lea ecx, [esp + 0x58]
// 005ea464  c684249800000002     mov byte ptr [esp + 0x98], 2
// 005ea46c  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea472  6888589b00           push 0x9b5888
// 005ea477  8d4c2420             lea ecx, [esp + 0x20]
// 005ea47b  c684249800000003     mov byte ptr [esp + 0x98], 3
// 005ea483  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea489  8d442470             lea eax, [esp + 0x70]
// 005ea48d  50                   push eax
// 005ea48e  8d4c243c             lea ecx, [esp + 0x3c]
// 005ea492  51                   push ecx
// 005ea493  8d542408             lea edx, [esp + 8]
// 005ea497  52                   push edx
// 005ea498  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 005ea49f  8d442460             lea eax, [esp + 0x60]
// 005ea4a3  50                   push eax
// 005ea4a4  8d4c242c             lea ecx, [esp + 0x2c]
// 005ea4a8  51                   push ecx
// 005ea4a9  52                   push edx
// 005ea4aa  8bce                 mov ecx, esi
// 005ea4ac  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 005ea4b4  e8e7020100           call 0x5fa7a0
// 005ea4b9  8d4c241c             lea ecx, [esp + 0x1c]
// 005ea4bd  c684249400000003     mov byte ptr [esp + 0x94], 3
// 005ea4c5  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea4cb  8d4c2454             lea ecx, [esp + 0x54]
// 005ea4cf  c684249400000002     mov byte ptr [esp + 0x94], 2
// 005ea4d7  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea4dd  8d0c24               lea ecx, [esp]
// 005ea4e0  c684249400000001     mov byte ptr [esp + 0x94], 1
// 005ea4e8  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea4ee  8d4c2438             lea ecx, [esp + 0x38]
// 005ea4f2  c684249400000000     mov byte ptr [esp + 0x94], 0
// 005ea4fa  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea500  8d4c2470             lea ecx, [esp + 0x70]
// 005ea504  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 005ea50f  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea515  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 005ea51c  50                   push eax
// 005ea51d  8bce                 mov ecx, esi
// 005ea51f  e8dc010100           call 0x5fa700
// 005ea524  8bce                 mov ecx, esi
// 005ea526  e885fd0000           call 0x5fa2b0
// 005ea52b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 005ea532  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea539  81c498000000         add esp, 0x98
// 005ea53f  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
