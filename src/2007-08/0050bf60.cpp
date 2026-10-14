// roc 2007-08 0050bf60  unit: seg_00500000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050bf60
//
// 0050bf60  6aff                 push -1
// 0050bf62  6899407400           push 0x744099
// 0050bf67  64a100000000         mov eax, dword ptr fs:[0]
// 0050bf6d  50                   push eax
// 0050bf6e  83ec44               sub esp, 0x44
// 0050bf71  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050bf76  33c4                 xor eax, esp
// 0050bf78  50                   push eax
// 0050bf79  8d442448             lea eax, [esp + 0x48]
// 0050bf7d  64a300000000         mov dword ptr fs:[0], eax
// 0050bf83  68640c7a00           push 0x7a0c64
// 0050bf88  8d4c2408             lea ecx, [esp + 8]
// 0050bf8c  ff1598e67700         call dword ptr [0x77e698]
// 0050bf92  8d442404             lea eax, [esp + 4]
// 0050bf96  50                   push eax
// 0050bf97  8d4c2424             lea ecx, [esp + 0x24]
// 0050bf9b  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0050bfa3  e81865efff           call 0x4024c0
// 0050bfa8  6878f78300           push 0x83f778
// 0050bfad  8d4c2424             lea ecx, [esp + 0x24]
// 0050bfb1  51                   push ecx
// 0050bfb2  c74424286c4e7800     mov dword ptr [esp + 0x28], 0x784e6c
// 0050bfba  e8df4b1200           call 0x630b9e
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?_Xlen@?$vector@_NV?$allocator@_N@std@@@std@@IBEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
