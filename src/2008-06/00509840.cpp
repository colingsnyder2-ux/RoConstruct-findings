// roc 2008-06 00509840  unit: G3D::Shader  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00509840
//
// 00509840  6aff                 push -1
// 00509842  68e8bc7c00           push 0x7cbce8
// 00509847  64a100000000         mov eax, dword ptr fs:[0]
// 0050984d  50                   push eax
// 0050984e  64892500000000       mov dword ptr fs:[0], esp
// 00509855  81ec88000000         sub esp, 0x88
// 0050985b  b801000000           mov eax, 1
// 00509860  890424               mov dword ptr [esp], eax
// 00509863  88442414             mov byte ptr [esp + 0x14], al
// 00509867  8d0424               lea eax, [esp]
// 0050986a  50                   push eax
// 0050986b  8d4c241c             lea ecx, [esp + 0x1c]
// 0050986f  c644240800           mov byte ptr [esp + 8], 0
// 00509874  c744240c50000000     mov dword ptr [esp + 0xc], 0x50
// 0050987c  c744241004000000     mov dword ptr [esp + 0x10], 4
// 00509884  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0050988c  e83f910000           call 0x5129d0
// 00509891  8d4c2418             lea ecx, [esp + 0x18]
// 00509895  51                   push ecx
// 00509896  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 005098a1  e85af3ffff           call 0x508c00
// 005098a6  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 005098ad  83c404               add esp, 4
// 005098b0  52                   push edx
// 005098b1  8d4c241c             lea ecx, [esp + 0x1c]
// 005098b5  e856900000           call 0x512910
// 005098ba  8d4c2418             lea ecx, [esp + 0x18]
// 005098be  c7842490000000ffffffff mov dword ptr [esp + 0x90], 0xffffffff
// 005098c9  e8326ef6ff           call 0x470700
// 005098ce  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 005098d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005098dc  81c494000000         add esp, 0x94
// 005098e2  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?describeSystem@System@G3D@@SAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
