// roc 2008-06 007f54b0  unit: seg_007f0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f54b0
//
// 007f54b0  33c9                 xor ecx, ecx
// 007f54b2  51                   push ecx
// 007f54b3  6864d68200           push 0x82d664
// 007f54b8  51                   push ecx
// 007f54b9  b840d55b00           mov eax, 0x5bd540
// 007f54be  50                   push eax
// 007f54bf  b938719700           mov ecx, 0x977138
// 007f54c4  e8c76bdcff           call 0x5bc090
// 007f54c9  6800e57f00           push 0x7fe500
// 007f54ce  e8dcc2eaff           call 0x6a17af
// 007f54d3  59                   pop ecx
// 007f54d4  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??__EpauseFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
