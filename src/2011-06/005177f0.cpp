// from server: 100% by auto
// roc 2011-06 005177f0  unit: RBX::Network::NetworkOwnerJob  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005177f0
//
// 005177f0  8b442404             mov eax, dword ptr [esp + 4]
// 005177f4  8b542408             mov edx, dword ptr [esp + 8]
// 005177f8  50                   push eax
// 005177f9  52                   push edx
// 005177fa  e8b1fdffff           call 0x5175b0
// 005177ff  c20800               ret 8
// library g3d-6.09/G3Dcpp\Crypto_md5.cpp (function ?readBytes@BinaryInput@G3D@@QAEXPAXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto_md5.cpp
