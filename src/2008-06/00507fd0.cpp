// from server: 100% by auto
// roc 2008-06 00507fd0  unit: G3D::Shader  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507fd0
//
// 00507fd0  6aff                 push -1
// 00507fd2  68e0b97c00           push 0x7cb9e0
// 00507fd7  64a100000000         mov eax, dword ptr fs:[0]
// 00507fdd  50                   push eax
// 00507fde  64892500000000       mov dword ptr fs:[0], esp
// 00507fe5  81ec8c000000         sub esp, 0x8c
// 00507feb  6816b78000           push 0x80b716
// 00507ff0  8d4c2474             lea ecx, [esp + 0x74]
// 00507ff4  ff1558248000         call dword ptr [0x802458]
// 00507ffa  6816b78000           push 0x80b716
// 00507fff  8d4c243c             lea ecx, [esp + 0x3c]
// 00508003  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 0050800e  ff1558248000         call dword ptr [0x802458]
// 00508014  6816b78000           push 0x80b716
// 00508019  8d4c2404             lea ecx, [esp + 4]
// 0050801d  c684249800000001     mov byte ptr [esp + 0x98], 1
// 00508025  ff1558248000         call dword ptr [0x802458]
// 0050802b  6816b78000           push 0x80b716
// 00508030  8d4c2458             lea ecx, [esp + 0x58]
// 00508034  c684249800000002     mov byte ptr [esp + 0x98], 2
// 0050803c  ff1558248000         call dword ptr [0x802458]
// 00508042  68e0e48100           push 0x81e4e0
// 00508047  8d4c2420             lea ecx, [esp + 0x20]
// 0050804b  c684249800000003     mov byte ptr [esp + 0x98], 3
// 00508053  ff1558248000         call dword ptr [0x802458]
// 00508059  8d442470             lea eax, [esp + 0x70]
// 0050805d  50                   push eax
// 0050805e  8d4c243c             lea ecx, [esp + 0x3c]
// 00508062  51                   push ecx
// 00508063  8d542408             lea edx, [esp + 8]
// 00508067  52                   push edx
// 00508068  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 0050806f  8d442460             lea eax, [esp + 0x60]
// 00508073  50                   push eax
// 00508074  8d4c242c             lea ecx, [esp + 0x2c]
// 00508078  51                   push ecx
// 00508079  52                   push edx
// 0050807a  8bce                 mov ecx, esi
// 0050807c  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 00508084  e8e7ae0000           call 0x512f70
// 00508089  8d4c241c             lea ecx, [esp + 0x1c]
// 0050808d  c684249400000003     mov byte ptr [esp + 0x94], 3
// 00508095  ff1568248000         call dword ptr [0x802468]
// 0050809b  8d4c2454             lea ecx, [esp + 0x54]
// 0050809f  c684249400000002     mov byte ptr [esp + 0x94], 2
// 005080a7  ff1568248000         call dword ptr [0x802468]
// 005080ad  8d0c24               lea ecx, [esp]
// 005080b0  c684249400000001     mov byte ptr [esp + 0x94], 1
// 005080b8  ff1568248000         call dword ptr [0x802468]
// 005080be  8d4c2438             lea ecx, [esp + 0x38]
// 005080c2  c684249400000000     mov byte ptr [esp + 0x94], 0
// 005080ca  ff1568248000         call dword ptr [0x802468]
// 005080d0  8d4c2470             lea ecx, [esp + 0x70]
// 005080d4  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 005080df  ff1568248000         call dword ptr [0x802468]
// 005080e5  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 005080ec  50                   push eax
// 005080ed  8bce                 mov ecx, esi
// 005080ef  e85cae0000           call 0x512f50
// 005080f4  8bce                 mov ecx, esi
// 005080f6  e885a90000           call 0x512a80
// 005080fb  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00508102  64890d00000000       mov dword ptr fs:[0], ecx
// 00508109  81c498000000         add esp, 0x98
// 0050810f  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
