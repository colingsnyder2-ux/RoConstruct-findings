// roc 2009-06 005764a0  unit: G3D::BinaryInput  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005764a0
//
// 005764a0  b801000000           mov eax, 1
// 005764a5  8405d82aa400         test byte ptr [0xa42ad8], al
// 005764ab  751c                 jne 0x5764c9
// 005764ad  d9e8                 fld1 
// 005764af  0905d82aa400         or dword ptr [0xa42ad8], eax
// 005764b5  d915cc2aa400         fst dword ptr [0xa42acc]
// 005764bb  d91dd02aa400         fstp dword ptr [0xa42ad0]
// 005764c1  d9ee                 fldz 
// 005764c3  d91dd42aa400         fstp dword ptr [0xa42ad4]
// 005764c9  b8cc2aa400           mov eax, 0xa42acc
// 005764ce  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?yellow@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
