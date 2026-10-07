// roc 2010-06 0054dc70  unit: G3D::Shader  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054dc70
//
// 0054dc70  6aff                 push -1
// 0054dc72  6840099900           push 0x990940
// 0054dc77  64a100000000         mov eax, dword ptr fs:[0]
// 0054dc7d  50                   push eax
// 0054dc7e  64892500000000       mov dword ptr fs:[0], esp
// 0054dc85  81ec8c000000         sub esp, 0x8c
// 0054dc8b  68fe08a000           push 0xa008fe
// 0054dc90  8d4c2474             lea ecx, [esp + 0x74]
// 0054dc94  ff1510a49e00         call dword ptr [0x9ea410]
// 0054dc9a  68fe08a000           push 0xa008fe
// 0054dc9f  8d4c243c             lea ecx, [esp + 0x3c]
// 0054dca3  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 0054dcae  ff1510a49e00         call dword ptr [0x9ea410]
// 0054dcb4  68fe08a000           push 0xa008fe
// 0054dcb9  8d4c2404             lea ecx, [esp + 4]
// 0054dcbd  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0054dcc5  ff1510a49e00         call dword ptr [0x9ea410]
// 0054dccb  68fe08a000           push 0xa008fe
// 0054dcd0  8d4c2458             lea ecx, [esp + 0x58]
// 0054dcd4  c684249800000002     mov byte ptr [esp + 0x98], 2
// 0054dcdc  ff1510a49e00         call dword ptr [0x9ea410]
// 0054dce2  685868a100           push 0xa16858
// 0054dce7  8d4c2420             lea ecx, [esp + 0x20]
// 0054dceb  c684249800000003     mov byte ptr [esp + 0x98], 3
// 0054dcf3  ff1510a49e00         call dword ptr [0x9ea410]
// 0054dcf9  8d442470             lea eax, [esp + 0x70]
// 0054dcfd  50                   push eax
// 0054dcfe  8d4c243c             lea ecx, [esp + 0x3c]
// 0054dd02  51                   push ecx
// 0054dd03  8d542408             lea edx, [esp + 8]
// 0054dd07  52                   push edx
// 0054dd08  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 0054dd0f  8d442460             lea eax, [esp + 0x60]
// 0054dd13  50                   push eax
// 0054dd14  8d4c242c             lea ecx, [esp + 0x2c]
// 0054dd18  51                   push ecx
// 0054dd19  52                   push edx
// 0054dd1a  8bce                 mov ecx, esi
// 0054dd1c  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 0054dd24  e817a60000           call 0x558340
// 0054dd29  8d4c241c             lea ecx, [esp + 0x1c]
// 0054dd2d  c684249400000003     mov byte ptr [esp + 0x94], 3
// 0054dd35  ff1500a49e00         call dword ptr [0x9ea400]
// 0054dd3b  8d4c2454             lea ecx, [esp + 0x54]
// 0054dd3f  c684249400000002     mov byte ptr [esp + 0x94], 2
// 0054dd47  ff1500a49e00         call dword ptr [0x9ea400]
// 0054dd4d  8d0c24               lea ecx, [esp]
// 0054dd50  c684249400000001     mov byte ptr [esp + 0x94], 1
// 0054dd58  ff1500a49e00         call dword ptr [0x9ea400]
// 0054dd5e  8d4c2438             lea ecx, [esp + 0x38]
// 0054dd62  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0054dd6a  ff1500a49e00         call dword ptr [0x9ea400]
// 0054dd70  8d4c2470             lea ecx, [esp + 0x70]
// 0054dd74  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 0054dd7f  ff1500a49e00         call dword ptr [0x9ea400]
// 0054dd85  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0054dd8c  50                   push eax
// 0054dd8d  8bce                 mov ecx, esi
// 0054dd8f  e88ca50000           call 0x558320
// 0054dd94  8bce                 mov ecx, esi
// 0054dd96  e8b5a00000           call 0x557e50
// 0054dd9b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0054dda2  64890d00000000       mov dword ptr fs:[0], ecx
// 0054dda9  81c498000000         add esp, 0x98
// 0054ddaf  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
