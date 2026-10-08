// from server: 100% by auto
// roc 2010-06 004e4690  unit: RBX::Network::IdSerializer  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e4690
//
// 004e4690  8b442404             mov eax, dword ptr [esp + 4]
// 004e4694  8b542408             mov edx, dword ptr [esp + 8]
// 004e4698  50                   push eax
// 004e4699  52                   push edx
// 004e469a  e881ffffff           call 0x4e4620
// 004e469f  c20800               ret 8
// library g3d-6.09/G3Dcpp\Crypto_md5.cpp (function ?readBytes@BinaryInput@G3D@@QAEXPAXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto_md5.cpp
