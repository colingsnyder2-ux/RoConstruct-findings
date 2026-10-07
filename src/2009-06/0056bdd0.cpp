// roc 2009-06 0056bdd0  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056bdd0
//
// 0056bdd0  64a100000000         mov eax, dword ptr fs:[0]
// 0056bdd6  6aff                 push -1
// 0056bdd8  683efd8500           push 0x85fd3e
// 0056bddd  50                   push eax
// 0056bdde  64892500000000       mov dword ptr fs:[0], esp
// 0056bde5  e8a6f9ffff           call 0x56b790
// 0056bdea  b801000000           mov eax, 1
// 0056bdef  8405b029a400         test byte ptr [0xa429b0], al
// 0056bdf5  752b                 jne 0x56be22
// 0056bdf7  0905b029a400         or dword ptr [0xa429b0], eax
// 0056bdfd  681025a400           push 0xa42510
// 0056be02  b99429a400           mov ecx, 0xa42994
// 0056be07  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056be0f  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056be15  68906a8900           push 0x896a90
// 0056be1a  e8dcdc1a00           call 0x719afb
// 0056be1f  83c404               add esp, 4
// 0056be22  8b0c24               mov ecx, dword ptr [esp]
// 0056be25  b89429a400           mov eax, 0xa42994
// 0056be2a  64890d00000000       mov dword ptr fs:[0], ecx
// 0056be31  83c40c               add esp, 0xc
// 0056be34  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
