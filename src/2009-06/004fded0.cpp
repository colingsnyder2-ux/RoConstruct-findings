// from server: 100% by auto
// roc 2009-06 004fded0  unit: RBX::Network::NetworkOwnerJob  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fded0
//
// 004fded0  8bc1                 mov eax, ecx
// 004fded2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004fded6  8b11                 mov edx, dword ptr [ecx]
// 004fded8  8910                 mov dword ptr [eax], edx
// 004fdeda  8b5104               mov edx, dword ptr [ecx + 4]
// 004fdedd  895004               mov dword ptr [eax + 4], edx
// 004fdee0  8b5108               mov edx, dword ptr [ecx + 8]
// 004fdee3  895008               mov dword ptr [eax + 8], edx
// 004fdee6  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004fdee9  89480c               mov dword ptr [eax + 0xc], ecx
// 004fdeec  c20400               ret 4
// library g3d-6.09/G3Dcpp\NetAddress.cpp (function ??0NetAddress@G3D@@AAE@ABUsockaddr_in@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/NetAddress.cpp
