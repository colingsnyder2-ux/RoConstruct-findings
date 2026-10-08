// from server: 100% by auto
// roc 2010-06 0050b480  unit: RBX::Network::NetworkOwnerJob  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0050b480
//
// 0050b480  8b442404             mov eax, dword ptr [esp + 4]
// 0050b484  8b542408             mov edx, dword ptr [esp + 8]
// 0050b488  50                   push eax
// 0050b489  52                   push edx
// 0050b48a  e81185fdff           call 0x4e39a0
// 0050b48f  c20800               ret 8
// library g3d-6.09/G3Dcpp\Crypto_md5.cpp (function ?readBytes@BinaryInput@G3D@@QAEXPAXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto_md5.cpp
