// from server: 100% by auto
// roc 2010-06 0054f190  unit: G3D::Shader  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f190
//
// 0054f190  6aff                 push -1
// 0054f192  68780c9900           push 0x990c78
// 0054f197  64a100000000         mov eax, dword ptr fs:[0]
// 0054f19d  50                   push eax
// 0054f19e  64892500000000       mov dword ptr fs:[0], esp
// 0054f1a5  81ec88000000         sub esp, 0x88
// 0054f1ab  b801000000           mov eax, 1
// 0054f1b0  890424               mov dword ptr [esp], eax
// 0054f1b3  88442414             mov byte ptr [esp + 0x14], al
// 0054f1b7  8d0424               lea eax, [esp]
// 0054f1ba  50                   push eax
// 0054f1bb  8d4c241c             lea ecx, [esp + 0x1c]
// 0054f1bf  c644240800           mov byte ptr [esp + 8], 0
// 0054f1c4  c744240c50000000     mov dword ptr [esp + 0xc], 0x50
// 0054f1cc  c744241004000000     mov dword ptr [esp + 0x10], 4
// 0054f1d4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0054f1dc  e8bf8b0000           call 0x557da0
// 0054f1e1  8d4c2418             lea ecx, [esp + 0x18]
// 0054f1e5  51                   push ecx
// 0054f1e6  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 0054f1f1  e8eaf3ffff           call 0x54e5e0
// 0054f1f6  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 0054f1fd  83c404               add esp, 4
// 0054f200  52                   push edx
// 0054f201  8d4c241c             lea ecx, [esp + 0x1c]
// 0054f205  e8d68a0000           call 0x557ce0
// 0054f20a  8d4c2418             lea ecx, [esp + 0x18]
// 0054f20e  c7842490000000ffffffff mov dword ptr [esp + 0x90], 0xffffffff
// 0054f219  e862d8f3ff           call 0x48ca80
// 0054f21e  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0054f225  64890d00000000       mov dword ptr fs:[0], ecx
// 0054f22c  81c494000000         add esp, 0x94
// 0054f232  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?describeSystem@System@G3D@@SAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
