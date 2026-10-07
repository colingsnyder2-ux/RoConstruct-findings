// roc 2012-06 005a8b10  unit: RBX::Image  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a8b10
//
// 005a8b10  8b442404             mov eax, dword ptr [esp + 4]
// 005a8b14  8b542408             mov edx, dword ptr [esp + 8]
// 005a8b18  50                   push eax
// 005a8b19  52                   push edx
// 005a8b1a  e8b1fdffff           call 0x5a88d0
// 005a8b1f  c20800               ret 8
// library g3d-6.09/G3Dcpp\Crypto_md5.cpp (function ?readBytes@BinaryInput@G3D@@QAEXPAXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto_md5.cpp
