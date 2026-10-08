// from server: 100% by auto
// roc 2009-06 0056ca80  unit: G3D::Shader  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056ca80
//
// 0056ca80  6aff                 push -1
// 0056ca82  68c8ff8500           push 0x85ffc8
// 0056ca87  64a100000000         mov eax, dword ptr fs:[0]
// 0056ca8d  50                   push eax
// 0056ca8e  64892500000000       mov dword ptr fs:[0], esp
// 0056ca95  81ec88000000         sub esp, 0x88
// 0056ca9b  b801000000           mov eax, 1
// 0056caa0  890424               mov dword ptr [esp], eax
// 0056caa3  88442414             mov byte ptr [esp + 0x14], al
// 0056caa7  8d0424               lea eax, [esp]
// 0056caaa  50                   push eax
// 0056caab  8d4c241c             lea ecx, [esp + 0x1c]
// 0056caaf  c644240800           mov byte ptr [esp + 8], 0
// 0056cab4  c744240c50000000     mov dword ptr [esp + 0xc], 0x50
// 0056cabc  c744241004000000     mov dword ptr [esp + 0x10], 4
// 0056cac4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0056cacc  e89fd10000           call 0x579c70
// 0056cad1  8d4c2418             lea ecx, [esp + 0x18]
// 0056cad5  51                   push ecx
// 0056cad6  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 0056cae1  e8eaf3ffff           call 0x56bed0
// 0056cae6  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 0056caed  83c404               add esp, 4
// 0056caf0  52                   push edx
// 0056caf1  8d4c241c             lea ecx, [esp + 0x1c]
// 0056caf5  e8b6d00000           call 0x579bb0
// 0056cafa  8d4c2418             lea ecx, [esp + 0x18]
// 0056cafe  c7842490000000ffffffff mov dword ptr [esp + 0x90], 0xffffffff
// 0056cb09  e8e29ef3ff           call 0x4a69f0
// 0056cb0e  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0056cb15  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cb1c  81c494000000         add esp, 0x94
// 0056cb22  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?describeSystem@System@G3D@@SAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
