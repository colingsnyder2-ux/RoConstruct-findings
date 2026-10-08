// from server: 100% by auto
// roc 2010-06 0053d070  unit: RBX::ImmediateMeshGenAdapter  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053d070
//
// 0053d070  8bc1                 mov eax, ecx
// 0053d072  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0053d076  d901                 fld dword ptr [ecx]
// 0053d078  d918                 fstp dword ptr [eax]
// 0053d07a  d94104               fld dword ptr [ecx + 4]
// 0053d07d  d95804               fstp dword ptr [eax + 4]
// 0053d080  d94108               fld dword ptr [ecx + 8]
// 0053d083  d95808               fstp dword ptr [eax + 8]
// 0053d086  d9410c               fld dword ptr [ecx + 0xc]
// 0053d089  d9580c               fstp dword ptr [eax + 0xc]
// 0053d08c  d94110               fld dword ptr [ecx + 0x10]
// 0053d08f  d95810               fstp dword ptr [eax + 0x10]
// 0053d092  d94114               fld dword ptr [ecx + 0x14]
// 0053d095  d95814               fstp dword ptr [eax + 0x14]
// 0053d098  c20400               ret 4
// library g3d-6.09/G3Dcpp\AABox.cpp (function ??4AABox@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/AABox.cpp
