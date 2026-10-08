// roc 2009-12 005ebbb0  unit: G3D::Shader  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ebbb0
//
// 005ebbb0  6aff                 push -1
// 005ebbb2  68d8ee9300           push 0x93eed8
// 005ebbb7  64a100000000         mov eax, dword ptr fs:[0]
// 005ebbbd  50                   push eax
// 005ebbbe  64892500000000       mov dword ptr fs:[0], esp
// 005ebbc5  81ec88000000         sub esp, 0x88
// 005ebbcb  b801000000           mov eax, 1
// 005ebbd0  890424               mov dword ptr [esp], eax
// 005ebbd3  88442414             mov byte ptr [esp + 0x14], al
// 005ebbd7  8d0424               lea eax, [esp]
// 005ebbda  50                   push eax
// 005ebbdb  8d4c241c             lea ecx, [esp + 0x1c]
// 005ebbdf  c644240800           mov byte ptr [esp + 8], 0
// 005ebbe4  c744240c50000000     mov dword ptr [esp + 0xc], 0x50
// 005ebbec  c744241004000000     mov dword ptr [esp + 0x10], 4
// 005ebbf4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ebbfc  e8ffe50000           call 0x5fa200
// 005ebc01  8d4c2418             lea ecx, [esp + 0x18]
// 005ebc05  51                   push ecx
// 005ebc06  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 005ebc11  e8eaf3ffff           call 0x5eb000
// 005ebc16  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 005ebc1d  83c404               add esp, 4
// 005ebc20  52                   push edx
// 005ebc21  8d4c241c             lea ecx, [esp + 0x1c]
// 005ebc25  e816e50000           call 0x5fa140
// 005ebc2a  8d4c2418             lea ecx, [esp + 0x18]
// 005ebc2e  c7842490000000ffffffff mov dword ptr [esp + 0x90], 0xffffffff
// 005ebc39  e88279eeff           call 0x4d35c0
// 005ebc3e  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 005ebc45  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebc4c  81c494000000         add esp, 0x94
// 005ebc52  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?describeSystem@System@G3D@@SAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
