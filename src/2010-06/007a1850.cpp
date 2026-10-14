// roc 2010-06 007a1850  unit: W4_D3DFORMAT::?$EnumDesc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a1850
//
// 007a1850  6aff                 push -1
// 007a1852  6839e39a00           push 0x9ae339
// 007a1857  64a100000000         mov eax, dword ptr fs:[0]
// 007a185d  50                   push eax
// 007a185e  83ec44               sub esp, 0x44
// 007a1861  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007a1866  33c4                 xor eax, esp
// 007a1868  50                   push eax
// 007a1869  8d442448             lea eax, [esp + 0x48]
// 007a186d  64a300000000         mov dword ptr fs:[0], eax
// 007a1873  68f024a000           push 0xa024f0
// 007a1878  8d4c2408             lea ecx, [esp + 8]
// 007a187c  ff1510a49e00         call dword ptr [0x9ea410]
// 007a1882  8d442404             lea eax, [esp + 4]
// 007a1886  50                   push eax
// 007a1887  8d4c2424             lea ecx, [esp + 0x24]
// 007a188b  c744245400000000     mov dword ptr [esp + 0x54], 0
// 007a1893  e8d8fbc5ff           call 0x401470
// 007a1898  68601bb000           push 0xb01b60
// 007a189d  8d4c2424             lea ecx, [esp + 0x24]
// 007a18a1  51                   push ecx
// 007a18a2  c74424283800a000     mov dword ptr [esp + 0x28], 0xa00038
// 007a18aa  e803710000           call 0x7a89b2
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?_Xlen@?$vector@IV?$allocator@I@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
