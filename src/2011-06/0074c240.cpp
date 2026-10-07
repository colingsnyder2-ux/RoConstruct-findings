// roc 2011-06 0074c240  unit: RBX::BallBallContact  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074c240
//
// 0074c240  33c0                 xor eax, eax
// 0074c242  39412c               cmp dword ptr [ecx + 0x2c], eax
// 0074c245  0f95c0               setne al
// 0074c248  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPResourceImage.cpp (function ?IsValid@CXTPResourceImages@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceImage.cpp
