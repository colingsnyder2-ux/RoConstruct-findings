// roc 2008-06 00508890  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00508890
//
// 00508890  64a100000000         mov eax, dword ptr fs:[0]
// 00508896  6aff                 push -1
// 00508898  681eba7c00           push 0x7cba1e
// 0050889d  50                   push eax
// 0050889e  64892500000000       mov dword ptr fs:[0], esp
// 005088a5  e866f8ffff           call 0x508110
// 005088aa  b801000000           mov eax, 1
// 005088af  840558359700         test byte ptr [0x973558], al
// 005088b5  752b                 jne 0x5088e2
// 005088b7  090558359700         or dword ptr [0x973558], eax
// 005088bd  68f0289700           push 0x9728f0
// 005088c2  b93c359700           mov ecx, 0x97353c
// 005088c7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005088cf  ff1558248000         call dword ptr [0x802458]
// 005088d5  6800c67f00           push 0x7fc600
// 005088da  e8d08e1900           call 0x6a17af
// 005088df  83c404               add esp, 4
// 005088e2  8b0c24               mov ecx, dword ptr [esp]
// 005088e5  b83c359700           mov eax, 0x97353c
// 005088ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005088f1  83c40c               add esp, 0xc
// 005088f4  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
