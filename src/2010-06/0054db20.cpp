// from server: 100% by auto
// roc 2010-06 0054db20  unit: G3D::Shader  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054db20
//
// 0054db20  6aff                 push -1
// 0054db22  6840099900           push 0x990940
// 0054db27  64a100000000         mov eax, dword ptr fs:[0]
// 0054db2d  50                   push eax
// 0054db2e  64892500000000       mov dword ptr fs:[0], esp
// 0054db35  81ec8c000000         sub esp, 0x8c
// 0054db3b  68fe08a000           push 0xa008fe
// 0054db40  8d4c2474             lea ecx, [esp + 0x74]
// 0054db44  ff1510a49e00         call dword ptr [0x9ea410]
// 0054db4a  68fe08a000           push 0xa008fe
// 0054db4f  8d4c243c             lea ecx, [esp + 0x3c]
// 0054db53  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 0054db5e  ff1510a49e00         call dword ptr [0x9ea410]
// 0054db64  68fe08a000           push 0xa008fe
// 0054db69  8d4c2404             lea ecx, [esp + 4]
// 0054db6d  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0054db75  ff1510a49e00         call dword ptr [0x9ea410]
// 0054db7b  80bc24a000000000     cmp byte ptr [esp + 0xa0], 0
// 0054db83  c684249400000002     mov byte ptr [esp + 0x94], 2
// 0054db8b  b86068a100           mov eax, 0xa16860
// 0054db90  7505                 jne 0x54db97
// 0054db92  b85c68a100           mov eax, 0xa1685c
// 0054db97  50                   push eax
// 0054db98  8d4c2458             lea ecx, [esp + 0x58]
// 0054db9c  ff1510a49e00         call dword ptr [0x9ea410]
// 0054dba2  685868a100           push 0xa16858
// 0054dba7  8d4c2420             lea ecx, [esp + 0x20]
// 0054dbab  c684249800000003     mov byte ptr [esp + 0x98], 3
// 0054dbb3  ff1510a49e00         call dword ptr [0x9ea410]
// 0054dbb9  8d442470             lea eax, [esp + 0x70]
// 0054dbbd  50                   push eax
// 0054dbbe  8d4c243c             lea ecx, [esp + 0x3c]
// 0054dbc2  51                   push ecx
// 0054dbc3  8d542408             lea edx, [esp + 8]
// 0054dbc7  52                   push edx
// 0054dbc8  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 0054dbcf  8d442460             lea eax, [esp + 0x60]
// 0054dbd3  50                   push eax
// 0054dbd4  8d4c242c             lea ecx, [esp + 0x2c]
// 0054dbd8  51                   push ecx
// 0054dbd9  52                   push edx
// 0054dbda  8bce                 mov ecx, esi
// 0054dbdc  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 0054dbe4  e857a70000           call 0x558340
// 0054dbe9  8d4c241c             lea ecx, [esp + 0x1c]
// 0054dbed  c684249400000003     mov byte ptr [esp + 0x94], 3
// 0054dbf5  ff1500a49e00         call dword ptr [0x9ea400]
// 0054dbfb  8d4c2454             lea ecx, [esp + 0x54]
// 0054dbff  c684249400000002     mov byte ptr [esp + 0x94], 2
// 0054dc07  ff1500a49e00         call dword ptr [0x9ea400]
// 0054dc0d  8d0c24               lea ecx, [esp]
// 0054dc10  c684249400000001     mov byte ptr [esp + 0x94], 1
// 0054dc18  ff1500a49e00         call dword ptr [0x9ea400]
// 0054dc1e  8d4c2438             lea ecx, [esp + 0x38]
// 0054dc22  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0054dc2a  ff1500a49e00         call dword ptr [0x9ea400]
// 0054dc30  8d4c2470             lea ecx, [esp + 0x70]
// 0054dc34  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 0054dc3f  ff1500a49e00         call dword ptr [0x9ea400]
// 0054dc45  8bce                 mov ecx, esi
// 0054dc47  e804a20000           call 0x557e50
// 0054dc4c  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0054dc53  64890d00000000       mov dword ptr fs:[0], ecx
// 0054dc5a  81c498000000         add esp, 0x98
// 0054dc60  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
