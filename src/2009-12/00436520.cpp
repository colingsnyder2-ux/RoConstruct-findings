// roc 2009-12 00436520  unit: HVCXTPPropertyGridItem::?$XItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00436520
//
// 00436520  8b542404             mov edx, dword ptr [esp + 4]
// 00436524  f30f1001             movss xmm0, dword ptr [ecx]
// 00436528  0f2e02               ucomiss xmm0, dword ptr [edx]
// 0043652b  9f                   lahf 
// 0043652c  f6c444               test ah, 0x44
// 0043652f  7a26                 jp 0x436557
// 00436531  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 00436536  0f2e4204             ucomiss xmm0, dword ptr [edx + 4]
// 0043653a  9f                   lahf 
// 0043653b  f6c444               test ah, 0x44
// 0043653e  7a17                 jp 0x436557
// 00436540  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 00436545  0f2e4208             ucomiss xmm0, dword ptr [edx + 8]
// 00436549  9f                   lahf 
// 0043654a  f6c444               test ah, 0x44
// 0043654d  7a08                 jp 0x436557
// 0043654f  b801000000           mov eax, 1
// 00436554  c20400               ret 4
// 00436557  33c0                 xor eax, eax
// 00436559  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??8Vector3@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
