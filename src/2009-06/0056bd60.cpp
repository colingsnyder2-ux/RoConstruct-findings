// from server: 100% by auto
// roc 2009-06 0056bd60  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056bd60
//
// 0056bd60  64a100000000         mov eax, dword ptr fs:[0]
// 0056bd66  6aff                 push -1
// 0056bd68  681efd8500           push 0x85fd1e
// 0056bd6d  50                   push eax
// 0056bd6e  64892500000000       mov dword ptr fs:[0], esp
// 0056bd75  e816faffff           call 0x56b790
// 0056bd7a  b801000000           mov eax, 1
// 0056bd7f  84059029a400         test byte ptr [0xa42990], al
// 0056bd85  752b                 jne 0x56bdb2
// 0056bd87  09059029a400         or dword ptr [0xa42990], eax
// 0056bd8d  681021a400           push 0xa42110
// 0056bd92  b97429a400           mov ecx, 0xa42974
// 0056bd97  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056bd9f  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056bda5  68806a8900           push 0x896a80
// 0056bdaa  e84cdd1a00           call 0x719afb
// 0056bdaf  83c404               add esp, 4
// 0056bdb2  8b0c24               mov ecx, dword ptr [esp]
// 0056bdb5  b87429a400           mov eax, 0xa42974
// 0056bdba  64890d00000000       mov dword ptr fs:[0], ecx
// 0056bdc1  83c40c               add esp, 0xc
// 0056bdc4  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
