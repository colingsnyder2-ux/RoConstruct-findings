// from server: 100% by auto
// roc 2011-06 00516430  unit: RBX::Network::NetworkOwnerJob  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00516430
//
// 00516430  8bc1                 mov eax, ecx
// 00516432  c700a8eec200         mov dword ptr [eax], 0xc2eea8
// 00516438  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
