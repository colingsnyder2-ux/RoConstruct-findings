// roc 2007-08 00500330  unit: G3D::Shader  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00500330
//
// 00500330  6aff                 push -1
// 00500332  68beeb7400           push 0x74ebbe
// 00500337  64a100000000         mov eax, dword ptr fs:[0]
// 0050033d  50                   push eax
// 0050033e  a188518b00           mov eax, dword ptr [0x8b5188]
// 00500343  33c4                 xor eax, esp
// 00500345  50                   push eax
// 00500346  8d442404             lea eax, [esp + 4]
// 0050034a  64a300000000         mov dword ptr fs:[0], eax
// 00500350  e8dbf8ffff           call 0x4ffc30
// 00500355  b801000000           mov eax, 1
// 0050035a  8405d0088c00         test byte ptr [0x8c08d0], al
// 00500360  752b                 jne 0x50038d
// 00500362  0905d0088c00         or dword ptr [0x8c08d0], eax
// 00500368  68c07c8900           push 0x897cc0
// 0050036d  b9b4088c00           mov ecx, 0x8c08b4
// 00500372  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0050037a  ff1598e67700         call dword ptr [0x77e698]
// 00500380  6880927700           push 0x779280
// 00500385  e899091300           call 0x630d23
// 0050038a  83c404               add esp, 4
// 0050038d  b8b4088c00           mov eax, 0x8c08b4
// 00500392  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00500396  64890d00000000       mov dword ptr fs:[0], ecx
// 0050039d  59                   pop ecx
// 0050039e  83c40c               add esp, 0xc
// 005003a1  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?cpuVendor@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
