// from server: 100% by auto
// roc 2010-06 0054d9e0  unit: G3D::Shader  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054d9e0
//
// 0054d9e0  6aff                 push -1
// 0054d9e2  6840099900           push 0x990940
// 0054d9e7  64a100000000         mov eax, dword ptr fs:[0]
// 0054d9ed  50                   push eax
// 0054d9ee  64892500000000       mov dword ptr fs:[0], esp
// 0054d9f5  81ec8c000000         sub esp, 0x8c
// 0054d9fb  68fe08a000           push 0xa008fe
// 0054da00  8d4c2474             lea ecx, [esp + 0x74]
// 0054da04  ff1510a49e00         call dword ptr [0x9ea410]
// 0054da0a  68fe08a000           push 0xa008fe
// 0054da0f  8d4c243c             lea ecx, [esp + 0x3c]
// 0054da13  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 0054da1e  ff1510a49e00         call dword ptr [0x9ea410]
// 0054da24  68fe08a000           push 0xa008fe
// 0054da29  8d4c2404             lea ecx, [esp + 4]
// 0054da2d  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0054da35  ff1510a49e00         call dword ptr [0x9ea410]
// 0054da3b  68fe08a000           push 0xa008fe
// 0054da40  8d4c2458             lea ecx, [esp + 0x58]
// 0054da44  c684249800000002     mov byte ptr [esp + 0x98], 2
// 0054da4c  ff1510a49e00         call dword ptr [0x9ea410]
// 0054da52  685868a100           push 0xa16858
// 0054da57  8d4c2420             lea ecx, [esp + 0x20]
// 0054da5b  c684249800000003     mov byte ptr [esp + 0x98], 3
// 0054da63  ff1510a49e00         call dword ptr [0x9ea410]
// 0054da69  8d442470             lea eax, [esp + 0x70]
// 0054da6d  50                   push eax
// 0054da6e  8d4c243c             lea ecx, [esp + 0x3c]
// 0054da72  51                   push ecx
// 0054da73  8d542408             lea edx, [esp + 8]
// 0054da77  52                   push edx
// 0054da78  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 0054da7f  8d442460             lea eax, [esp + 0x60]
// 0054da83  50                   push eax
// 0054da84  8d4c242c             lea ecx, [esp + 0x2c]
// 0054da88  51                   push ecx
// 0054da89  52                   push edx
// 0054da8a  8bce                 mov ecx, esi
// 0054da8c  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 0054da94  e8a7a80000           call 0x558340
// 0054da99  8d4c241c             lea ecx, [esp + 0x1c]
// 0054da9d  c684249400000003     mov byte ptr [esp + 0x94], 3
// 0054daa5  ff1500a49e00         call dword ptr [0x9ea400]
// 0054daab  8d4c2454             lea ecx, [esp + 0x54]
// 0054daaf  c684249400000002     mov byte ptr [esp + 0x94], 2
// 0054dab7  ff1500a49e00         call dword ptr [0x9ea400]
// 0054dabd  8d0c24               lea ecx, [esp]
// 0054dac0  c684249400000001     mov byte ptr [esp + 0x94], 1
// 0054dac8  ff1500a49e00         call dword ptr [0x9ea400]
// 0054dace  8d4c2438             lea ecx, [esp + 0x38]
// 0054dad2  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0054dada  ff1500a49e00         call dword ptr [0x9ea400]
// 0054dae0  8d4c2470             lea ecx, [esp + 0x70]
// 0054dae4  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 0054daef  ff1500a49e00         call dword ptr [0x9ea400]
// 0054daf5  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0054dafc  50                   push eax
// 0054dafd  8bce                 mov ecx, esi
// 0054daff  e89ca70000           call 0x5582a0
// 0054db04  8bce                 mov ecx, esi
// 0054db06  e845a30000           call 0x557e50
// 0054db0b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0054db12  64890d00000000       mov dword ptr fs:[0], ecx
// 0054db19  81c498000000         add esp, 0x98
// 0054db1f  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
