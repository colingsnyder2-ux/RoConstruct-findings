// from server: 100% by auto
// roc 2012-06 00828620  unit: RBX::BallBallContact  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00828620
//
// 00828620  33c0                 xor eax, eax
// 00828622  39412c               cmp dword ptr [ecx + 0x2c], eax
// 00828625  0f95c0               setne al
// 00828628  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPResourceImage.cpp (function ?IsValid@CXTPResourceImages@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceImage.cpp
