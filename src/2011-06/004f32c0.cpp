// from server: 100% by auto
// roc 2011-06 004f32c0  unit: RBX::Network::IdSerializer  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f32c0
//
// 004f32c0  8b442404             mov eax, dword ptr [esp + 4]
// 004f32c4  8b542408             mov edx, dword ptr [esp + 8]
// 004f32c8  50                   push eax
// 004f32c9  52                   push edx
// 004f32ca  e871ffffff           call 0x4f3240
// 004f32cf  c20800               ret 8
// library g3d-6.09/G3Dcpp\Crypto_md5.cpp (function ?readBytes@BinaryInput@G3D@@QAEXPAXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto_md5.cpp
