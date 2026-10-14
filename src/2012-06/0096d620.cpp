// roc 2012-06 0096d620  unit: W4_D3DFORMAT::?$EnumDesc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0096d620
//
// 0096d620  6aff                 push -1
// 0096d622  68c9aaad00           push 0xadaac9
// 0096d627  64a100000000         mov eax, dword ptr fs:[0]
// 0096d62d  50                   push eax
// 0096d62e  83ec44               sub esp, 0x44
// 0096d631  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0096d636  33c4                 xor eax, esp
// 0096d638  50                   push eax
// 0096d639  8d442448             lea eax, [esp + 0x48]
// 0096d63d  64a300000000         mov dword ptr fs:[0], eax
// 0096d643  683061b400           push 0xb46130
// 0096d648  8d4c2408             lea ecx, [esp + 8]
// 0096d64c  ff154826b200         call dword ptr [0xb22648]
// 0096d652  8d442404             lea eax, [esp + 4]
// 0096d656  50                   push eax
// 0096d657  8d4c2424             lea ecx, [esp + 0x24]
// 0096d65b  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0096d663  e8783da9ff           call 0x4013e0
// 0096d668  680462cd00           push 0xcd6204
// 0096d66d  8d4c2424             lea ecx, [esp + 0x24]
// 0096d671  51                   push ecx
// 0096d672  c7442428ac2eb400     mov dword ptr [esp + 0x28], 0xb42eac
// 0096d67a  e8c55a0100           call 0x983144
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?_Xlen@?$vector@IV?$allocator@I@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
