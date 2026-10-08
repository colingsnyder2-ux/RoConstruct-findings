// roc 2009-12 005f4670  unit: seg_005f0000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f4670
//
// 005f4670  f30f10442404         movss xmm0, dword ptr [esp + 4]
// 005f4676  8bc1                 mov eax, ecx
// 005f4678  f30f1100             movss dword ptr [eax], xmm0
// 005f467c  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 005f4682  f30f114004           movss dword ptr [eax + 4], xmm0
// 005f4687  f30f1044240c         movss xmm0, dword ptr [esp + 0xc]
// 005f468d  f30f114008           movss dword ptr [eax + 8], xmm0
// 005f4692  f30f10442410         movss xmm0, dword ptr [esp + 0x10]
// 005f4698  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 005f469d  f30f10442414         movss xmm0, dword ptr [esp + 0x14]
// 005f46a3  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 005f46a8  f30f10442418         movss xmm0, dword ptr [esp + 0x18]
// 005f46ae  f30f114014           movss dword ptr [eax + 0x14], xmm0
// 005f46b3  f30f1044241c         movss xmm0, dword ptr [esp + 0x1c]
// 005f46b9  f30f114018           movss dword ptr [eax + 0x18], xmm0
// 005f46be  f30f10442420         movss xmm0, dword ptr [esp + 0x20]
// 005f46c4  f30f11401c           movss dword ptr [eax + 0x1c], xmm0
// 005f46c9  f30f10442424         movss xmm0, dword ptr [esp + 0x24]
// 005f46cf  f30f114020           movss dword ptr [eax + 0x20], xmm0
// 005f46d4  c22400               ret 0x24
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??0Matrix3@G3D@@QAE@MMMMMMMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
