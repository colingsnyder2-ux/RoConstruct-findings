// roc 2010-06 0054e400  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054e400
//
// 0054e400  64a100000000         mov eax, dword ptr fs:[0]
// 0054e406  6aff                 push -1
// 0054e408  68ae099900           push 0x9909ae
// 0054e40d  50                   push eax
// 0054e40e  64892500000000       mov dword ptr fs:[0], esp
// 0054e415  e886faffff           call 0x54dea0
// 0054e41a  b801000000           mov eax, 1
// 0054e41f  8405a89ec000         test byte ptr [0xc09ea8], al
// 0054e425  752b                 jne 0x54e452
// 0054e427  0905a89ec000         or dword ptr [0xc09ea8], eax
// 0054e42d  683892c000           push 0xc09238
// 0054e432  b98c9ec000           mov ecx, 0xc09e8c
// 0054e437  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0054e43f  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e445  68b0e09d00           push 0x9de0b0
// 0054e44a  e814a62500           call 0x7a8a63
// 0054e44f  83c404               add esp, 4
// 0054e452  8b0c24               mov ecx, dword ptr [esp]
// 0054e455  b88c9ec000           mov eax, 0xc09e8c
// 0054e45a  64890d00000000       mov dword ptr fs:[0], ecx
// 0054e461  83c40c               add esp, 0xc
// 0054e464  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
