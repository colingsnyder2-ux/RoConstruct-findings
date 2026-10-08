// roc 2010-06 00690210  unit: RBX::Mechanism  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00690210
//
// 00690210  64a100000000         mov eax, dword ptr fs:[0]
// 00690216  6aff                 push -1
// 00690218  683e189a00           push 0x9a183e
// 0069021d  50                   push eax
// 0069021e  b801000000           mov eax, 1
// 00690223  64892500000000       mov dword ptr fs:[0], esp
// 0069022a  840510e3c100         test byte ptr [0xc1e310], al
// 00690230  754a                 jne 0x69027c
// 00690232  090510e3c100         or dword ptr [0xc1e310], eax
// 00690238  d9e8                 fld1 
// 0069023a  83ec24               sub esp, 0x24
// 0069023d  d9542420             fst dword ptr [esp + 0x20]
// 00690241  d9ee                 fldz 
// 00690243  b9ece2c100           mov ecx, 0xc1e2ec
// 00690248  d954241c             fst dword ptr [esp + 0x1c]
// 0069024c  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00690254  d9542418             fst dword ptr [esp + 0x18]
// 00690258  d9542414             fst dword ptr [esp + 0x14]
// 0069025c  d9542410             fst dword ptr [esp + 0x10]
// 00690260  d90510c6a000         fld dword ptr [0xa0c610]
// 00690266  d95c240c             fstp dword ptr [esp + 0xc]
// 0069026a  d9542408             fst dword ptr [esp + 8]
// 0069026e  d9c9                 fxch st(1)
// 00690270  d95c2404             fstp dword ptr [esp + 4]
// 00690274  d91c24               fstp dword ptr [esp]
// 00690277  e8646decff           call 0x556fe0
// 0069027c  8b0c24               mov ecx, dword ptr [esp]
// 0069027f  b8ece2c100           mov eax, 0xc1e2ec
// 00690284  64890d00000000       mov dword ptr fs:[0], ecx
// 0069028b  83c40c               add esp, 0xc
// 0069028e  c3                   ret 
// library rbxgs/util\Math.cpp (function ?matrixTiltZ@Math@RBX@@SAABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
