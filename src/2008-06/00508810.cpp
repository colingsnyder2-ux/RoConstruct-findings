// roc 2008-06 00508810  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00508810
//
// 00508810  64a100000000         mov eax, dword ptr fs:[0]
// 00508816  6aff                 push -1
// 00508818  68feb97c00           push 0x7cb9fe
// 0050881d  50                   push eax
// 0050881e  64892500000000       mov dword ptr fs:[0], esp
// 00508825  e8e6f8ffff           call 0x508110
// 0050882a  b801000000           mov eax, 1
// 0050882f  840538359700         test byte ptr [0x973538], al
// 00508835  752b                 jne 0x508862
// 00508837  090538359700         or dword ptr [0x973538], eax
// 0050883d  6850239400           push 0x942350
// 00508842  b91c359700           mov ecx, 0x97351c
// 00508847  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0050884f  ff1558248000         call dword ptr [0x802458]
// 00508855  68f0c57f00           push 0x7fc5f0
// 0050885a  e8508f1900           call 0x6a17af
// 0050885f  83c404               add esp, 4
// 00508862  8b0c24               mov ecx, dword ptr [esp]
// 00508865  b81c359700           mov eax, 0x97351c
// 0050886a  64890d00000000       mov dword ptr fs:[0], ecx
// 00508871  83c40c               add esp, 0xc
// 00508874  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?cpuVendor@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
