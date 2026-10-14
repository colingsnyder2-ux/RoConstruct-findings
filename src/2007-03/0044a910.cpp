// roc 2007-03 0044a910  unit: seg_00440000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044a910
//
// 0044a910  6aff                 push -1
// 0044a912  68a9287400           push 0x7428a9
// 0044a917  64a100000000         mov eax, dword ptr fs:[0]
// 0044a91d  50                   push eax
// 0044a91e  83ec44               sub esp, 0x44
// 0044a921  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0044a926  33c4                 xor eax, esp
// 0044a928  50                   push eax
// 0044a929  8d442448             lea eax, [esp + 0x48]
// 0044a92d  64a300000000         mov dword ptr fs:[0], eax
// 0044a933  6810557800           push 0x785510
// 0044a938  8d4c2408             lea ecx, [esp + 8]
// 0044a93c  ff1578e77700         call dword ptr [0x77e778]
// 0044a942  8d442404             lea eax, [esp + 4]
// 0044a946  50                   push eax
// 0044a947  8d4c2424             lea ecx, [esp + 0x24]
// 0044a94b  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0044a953  e8487bfbff           call 0x4024a0
// 0044a958  6870f78300           push 0x83f770
// 0044a95d  8d4c2424             lea ecx, [esp + 0x24]
// 0044a961  51                   push ecx
// 0044a962  c7442428443e7800     mov dword ptr [esp + 0x28], 0x783e44
// 0044a96a  e8bf461d00           call 0x61f02e
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?_Xlen@?$vector@IV?$allocator@I@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
