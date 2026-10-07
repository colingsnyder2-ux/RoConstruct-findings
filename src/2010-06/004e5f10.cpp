// roc 2010-06 004e5f10  unit: RBX::Network::Replicator  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e5f10
//
// 004e5f10  8bc1                 mov eax, ecx
// 004e5f12  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e5f16  d94104               fld dword ptr [ecx + 4]
// 004e5f19  c70090aca100         mov dword ptr [eax], 0xa1ac90
// 004e5f1f  d95804               fstp dword ptr [eax + 4]
// 004e5f22  d94108               fld dword ptr [ecx + 8]
// 004e5f25  d95808               fstp dword ptr [eax + 8]
// 004e5f28  d9410c               fld dword ptr [ecx + 0xc]
// 004e5f2b  d9580c               fstp dword ptr [eax + 0xc]
// 004e5f2e  d94110               fld dword ptr [ecx + 0x10]
// 004e5f31  d95810               fstp dword ptr [eax + 0x10]
// 004e5f34  d94114               fld dword ptr [ecx + 0x14]
// 004e5f37  d95814               fstp dword ptr [eax + 0x14]
// 004e5f3a  d94118               fld dword ptr [ecx + 0x18]
// 004e5f3d  d95818               fstp dword ptr [eax + 0x18]
// 004e5f40  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??0Ray@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
