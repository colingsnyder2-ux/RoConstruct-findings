// roc 2009-12 00537b20  unit: RBX::Network::Replicator  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00537b20
//
// 00537b20  8bc1                 mov eax, ecx
// 00537b22  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00537b26  d94104               fld dword ptr [ecx + 4]
// 00537b29  c700b0cd9b00         mov dword ptr [eax], 0x9bcdb0
// 00537b2f  d95804               fstp dword ptr [eax + 4]
// 00537b32  d94108               fld dword ptr [ecx + 8]
// 00537b35  d95808               fstp dword ptr [eax + 8]
// 00537b38  d9410c               fld dword ptr [ecx + 0xc]
// 00537b3b  d9580c               fstp dword ptr [eax + 0xc]
// 00537b3e  d94110               fld dword ptr [ecx + 0x10]
// 00537b41  d95810               fstp dword ptr [eax + 0x10]
// 00537b44  d94114               fld dword ptr [ecx + 0x14]
// 00537b47  d95814               fstp dword ptr [eax + 0x14]
// 00537b4a  d94118               fld dword ptr [ecx + 0x18]
// 00537b4d  d95818               fstp dword ptr [eax + 0x18]
// 00537b50  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??0Ray@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
