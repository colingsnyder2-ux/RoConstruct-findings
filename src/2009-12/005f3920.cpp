// roc 2009-12 005f3920  unit: seg_005f0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f3920
//
// 005f3920  f30f10442404         movss xmm0, dword ptr [esp + 4]
// 005f3926  f30f1101             movss dword ptr [ecx], xmm0
// 005f392a  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 005f3930  f30f114104           movss dword ptr [ecx + 4], xmm0
// 005f3935  f30f1044240c         movss xmm0, dword ptr [esp + 0xc]
// 005f393b  f30f114108           movss dword ptr [ecx + 8], xmm0
// 005f3940  f30f10442410         movss xmm0, dword ptr [esp + 0x10]
// 005f3946  f30f11410c           movss dword ptr [ecx + 0xc], xmm0
// 005f394b  f30f10442414         movss xmm0, dword ptr [esp + 0x14]
// 005f3951  f30f114110           movss dword ptr [ecx + 0x10], xmm0
// 005f3956  f30f10442418         movss xmm0, dword ptr [esp + 0x18]
// 005f395c  f30f114114           movss dword ptr [ecx + 0x14], xmm0
// 005f3961  f30f1044241c         movss xmm0, dword ptr [esp + 0x1c]
// 005f3967  f30f114118           movss dword ptr [ecx + 0x18], xmm0
// 005f396c  f30f10442420         movss xmm0, dword ptr [esp + 0x20]
// 005f3972  f30f11411c           movss dword ptr [ecx + 0x1c], xmm0
// 005f3977  f30f10442424         movss xmm0, dword ptr [esp + 0x24]
// 005f397d  f30f114120           movss dword ptr [ecx + 0x20], xmm0
// 005f3982  c22400               ret 0x24
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?set@Matrix3@G3D@@QAEXMMMMMMMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
