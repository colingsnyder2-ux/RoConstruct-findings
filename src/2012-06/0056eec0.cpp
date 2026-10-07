// roc 2012-06 0056eec0  unit: RBX::Network::IdSerializer  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056eec0
//
// 0056eec0  8b442404             mov eax, dword ptr [esp + 4]
// 0056eec4  8b542408             mov edx, dword ptr [esp + 8]
// 0056eec8  50                   push eax
// 0056eec9  52                   push edx
// 0056eeca  e831ffffff           call 0x56ee00
// 0056eecf  c20800               ret 8
// library g3d-6.09/G3Dcpp\Crypto_md5.cpp (function ?readBytes@BinaryInput@G3D@@QAEXPAXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto_md5.cpp
