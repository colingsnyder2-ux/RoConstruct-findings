// roc 2009-06 0056bcf0  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056bcf0
//
// 0056bcf0  64a100000000         mov eax, dword ptr fs:[0]
// 0056bcf6  6aff                 push -1
// 0056bcf8  68fefc8500           push 0x85fcfe
// 0056bcfd  50                   push eax
// 0056bcfe  64892500000000       mov dword ptr fs:[0], esp
// 0056bd05  e886faffff           call 0x56b790
// 0056bd0a  b801000000           mov eax, 1
// 0056bd0f  84057029a400         test byte ptr [0xa42970], al
// 0056bd15  752b                 jne 0x56bd42
// 0056bd17  09057029a400         or dword ptr [0xa42970], eax
// 0056bd1d  68001da400           push 0xa41d00
// 0056bd22  b95429a400           mov ecx, 0xa42954
// 0056bd27  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056bd2f  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056bd35  68706a8900           push 0x896a70
// 0056bd3a  e8bcdd1a00           call 0x719afb
// 0056bd3f  83c404               add esp, 4
// 0056bd42  8b0c24               mov ecx, dword ptr [esp]
// 0056bd45  b85429a400           mov eax, 0xa42954
// 0056bd4a  64890d00000000       mov dword ptr fs:[0], ecx
// 0056bd51  83c40c               add esp, 0xc
// 0056bd54  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
