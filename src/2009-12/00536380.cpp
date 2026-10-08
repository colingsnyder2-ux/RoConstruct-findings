// roc 2009-12 00536380  unit: RBX::Network::IdSerializer  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00536380
//
// 00536380  8b442404             mov eax, dword ptr [esp + 4]
// 00536384  8b542408             mov edx, dword ptr [esp + 8]
// 00536388  50                   push eax
// 00536389  52                   push edx
// 0053638a  e881ffffff           call 0x536310
// 0053638f  c20800               ret 8
// library g3d-6.09/G3Dcpp\Crypto_md5.cpp (function ?readBytes@BinaryInput@G3D@@QAEXPAXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto_md5.cpp
