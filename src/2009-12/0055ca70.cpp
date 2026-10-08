// roc 2009-12 0055ca70  unit: RBX::Network::NetworkOwnerJob  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0055ca70
//
// 0055ca70  8b442404             mov eax, dword ptr [esp + 4]
// 0055ca74  8b542408             mov edx, dword ptr [esp + 8]
// 0055ca78  50                   push eax
// 0055ca79  52                   push edx
// 0055ca7a  e8118cfdff           call 0x535690
// 0055ca7f  c20800               ret 8
// library g3d-6.09/G3Dcpp\Crypto_md5.cpp (function ?readBytes@BinaryInput@G3D@@QAEXPAXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto_md5.cpp
