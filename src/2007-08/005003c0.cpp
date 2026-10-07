// roc 2007-08 005003c0  unit: G3D::Shader  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005003c0
//
// 005003c0  6aff                 push -1
// 005003c2  68eeeb7400           push 0x74ebee
// 005003c7  64a100000000         mov eax, dword ptr fs:[0]
// 005003cd  50                   push eax
// 005003ce  a188518b00           mov eax, dword ptr [0x8b5188]
// 005003d3  33c4                 xor eax, esp
// 005003d5  50                   push eax
// 005003d6  8d442404             lea eax, [esp + 4]
// 005003da  64a300000000         mov dword ptr fs:[0], eax
// 005003e0  e84bf8ffff           call 0x4ffc30
// 005003e5  b801000000           mov eax, 1
// 005003ea  8405f0088c00         test byte ptr [0x8c08f0], al
// 005003f0  752b                 jne 0x50041d
// 005003f2  0905f0088c00         or dword ptr [0x8c08f0], eax
// 005003f8  6888fc8b00           push 0x8bfc88
// 005003fd  b9d4088c00           mov ecx, 0x8c08d4
// 00500402  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0050040a  ff1598e67700         call dword ptr [0x77e698]
// 00500410  6890927700           push 0x779290
// 00500415  e809091300           call 0x630d23
// 0050041a  83c404               add esp, 4
// 0050041d  b8d4088c00           mov eax, 0x8c08d4
// 00500422  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00500426  64890d00000000       mov dword ptr fs:[0], ecx
// 0050042d  59                   pop ecx
// 0050042e  83c40c               add esp, 0xc
// 00500431  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
