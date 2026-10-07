// roc 2010-06 00513fd0  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00513fd0
//
// 00513fd0  8bc1                 mov eax, ecx
// 00513fd2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00513fd6  8b11                 mov edx, dword ptr [ecx]
// 00513fd8  8910                 mov dword ptr [eax], edx
// 00513fda  8b5104               mov edx, dword ptr [ecx + 4]
// 00513fdd  895004               mov dword ptr [eax + 4], edx
// 00513fe0  8b5108               mov edx, dword ptr [ecx + 8]
// 00513fe3  895008               mov dword ptr [eax + 8], edx
// 00513fe6  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00513fe9  89480c               mov dword ptr [eax + 0xc], ecx
// 00513fec  c20400               ret 4
// library g3d-6.09/G3Dcpp\NetAddress.cpp (function ??0NetAddress@G3D@@AAE@ABUsockaddr_in@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/NetAddress.cpp
