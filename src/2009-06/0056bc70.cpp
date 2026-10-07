// roc 2009-06 0056bc70  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056bc70
//
// 0056bc70  64a100000000         mov eax, dword ptr fs:[0]
// 0056bc76  6aff                 push -1
// 0056bc78  68defc8500           push 0x85fcde
// 0056bc7d  50                   push eax
// 0056bc7e  64892500000000       mov dword ptr fs:[0], esp
// 0056bc85  e806fbffff           call 0x56b790
// 0056bc8a  b801000000           mov eax, 1
// 0056bc8f  84055029a400         test byte ptr [0xa42950], al
// 0056bc95  752b                 jne 0x56bcc2
// 0056bc97  09055029a400         or dword ptr [0xa42950], eax
// 0056bc9d  68b8c39f00           push 0x9fc3b8
// 0056bca2  b93429a400           mov ecx, 0xa42934
// 0056bca7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056bcaf  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056bcb5  68606a8900           push 0x896a60
// 0056bcba  e83cde1a00           call 0x719afb
// 0056bcbf  83c404               add esp, 4
// 0056bcc2  8b0c24               mov ecx, dword ptr [esp]
// 0056bcc5  b83429a400           mov eax, 0xa42934
// 0056bcca  64890d00000000       mov dword ptr fs:[0], ecx
// 0056bcd1  83c40c               add esp, 0xc
// 0056bcd4  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?cpuVendor@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
