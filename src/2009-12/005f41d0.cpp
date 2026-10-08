// roc 2009-12 005f41d0  unit: seg_005f0000  size: 393 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f41d0
//
// 005f41d0  8b442404             mov eax, dword ptr [esp + 4]
// 005f41d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f41d8  f30f1000             movss xmm0, dword ptr [eax]
// 005f41dc  f30f5901             mulss xmm0, dword ptr [ecx]
// 005f41e0  f30f104804           movss xmm1, dword ptr [eax + 4]
// 005f41e5  f30f59490c           mulss xmm1, dword ptr [ecx + 0xc]
// 005f41ea  f30f58c1             addss xmm0, xmm1
// 005f41ee  f30f104808           movss xmm1, dword ptr [eax + 8]
// 005f41f3  f30f594918           mulss xmm1, dword ptr [ecx + 0x18]
// 005f41f8  f30f58c1             addss xmm0, xmm1
// 005f41fc  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005f4200  f30f1102             movss dword ptr [edx], xmm0
// 005f4204  f30f104004           movss xmm0, dword ptr [eax + 4]
// 005f4209  f30f594110           mulss xmm0, dword ptr [ecx + 0x10]
// 005f420e  f30f104808           movss xmm1, dword ptr [eax + 8]
// 005f4213  f30f59491c           mulss xmm1, dword ptr [ecx + 0x1c]
// 005f4218  f30f58c1             addss xmm0, xmm1
// 005f421c  f30f104904           movss xmm1, dword ptr [ecx + 4]
// 005f4221  f30f5908             mulss xmm1, dword ptr [eax]
// 005f4225  f30f58c1             addss xmm0, xmm1
// 005f4229  f30f114204           movss dword ptr [edx + 4], xmm0
// 005f422e  f30f104004           movss xmm0, dword ptr [eax + 4]
// 005f4233  f30f594114           mulss xmm0, dword ptr [ecx + 0x14]
// 005f4238  f30f104808           movss xmm1, dword ptr [eax + 8]
// 005f423d  f30f594920           mulss xmm1, dword ptr [ecx + 0x20]
// 005f4242  f30f58c1             addss xmm0, xmm1
// 005f4246  f30f104908           movss xmm1, dword ptr [ecx + 8]
// 005f424b  f30f5908             mulss xmm1, dword ptr [eax]
// 005f424f  f30f58c1             addss xmm0, xmm1
// 005f4253  f30f114208           movss dword ptr [edx + 8], xmm0
// 005f4258  f30f104010           movss xmm0, dword ptr [eax + 0x10]
// 005f425d  f30f59410c           mulss xmm0, dword ptr [ecx + 0xc]
// 005f4262  f30f104918           movss xmm1, dword ptr [ecx + 0x18]
// 005f4267  f30f594814           mulss xmm1, dword ptr [eax + 0x14]
// 005f426c  f30f58c1             addss xmm0, xmm1
// 005f4270  f30f10480c           movss xmm1, dword ptr [eax + 0xc]
// 005f4275  f30f5909             mulss xmm1, dword ptr [ecx]
// 005f4279  f30f58c1             addss xmm0, xmm1
// 005f427d  f30f11420c           movss dword ptr [edx + 0xc], xmm0
// 005f4282  f30f104010           movss xmm0, dword ptr [eax + 0x10]
// 005f4287  f30f594110           mulss xmm0, dword ptr [ecx + 0x10]
// 005f428c  f30f104904           movss xmm1, dword ptr [ecx + 4]
// 005f4291  f30f59480c           mulss xmm1, dword ptr [eax + 0xc]
// 005f4296  f30f58c1             addss xmm0, xmm1
// 005f429a  f30f10491c           movss xmm1, dword ptr [ecx + 0x1c]
// 005f429f  f30f594814           mulss xmm1, dword ptr [eax + 0x14]
// 005f42a4  f30f58c1             addss xmm0, xmm1
// 005f42a8  f30f114210           movss dword ptr [edx + 0x10], xmm0
// 005f42ad  f30f104010           movss xmm0, dword ptr [eax + 0x10]
// 005f42b2  f30f594114           mulss xmm0, dword ptr [ecx + 0x14]
// 005f42b7  f30f104908           movss xmm1, dword ptr [ecx + 8]
// 005f42bc  f30f59480c           mulss xmm1, dword ptr [eax + 0xc]
// 005f42c1  f30f58c1             addss xmm0, xmm1
// 005f42c5  f30f104920           movss xmm1, dword ptr [ecx + 0x20]
// 005f42ca  f30f594814           mulss xmm1, dword ptr [eax + 0x14]
// 005f42cf  f30f58c1             addss xmm0, xmm1
// 005f42d3  f30f114214           movss dword ptr [edx + 0x14], xmm0
// 005f42d8  f30f10401c           movss xmm0, dword ptr [eax + 0x1c]
// 005f42dd  f30f59410c           mulss xmm0, dword ptr [ecx + 0xc]
// 005f42e2  f30f104918           movss xmm1, dword ptr [ecx + 0x18]
// 005f42e7  f30f594820           mulss xmm1, dword ptr [eax + 0x20]
// 005f42ec  f30f58c1             addss xmm0, xmm1
// 005f42f0  f30f104818           movss xmm1, dword ptr [eax + 0x18]
// 005f42f5  f30f5909             mulss xmm1, dword ptr [ecx]
// 005f42f9  f30f58c1             addss xmm0, xmm1
// 005f42fd  f30f114218           movss dword ptr [edx + 0x18], xmm0
// 005f4302  f30f10401c           movss xmm0, dword ptr [eax + 0x1c]
// 005f4307  f30f594110           mulss xmm0, dword ptr [ecx + 0x10]
// 005f430c  f30f104904           movss xmm1, dword ptr [ecx + 4]
// 005f4311  f30f594818           mulss xmm1, dword ptr [eax + 0x18]
// 005f4316  f30f58c1             addss xmm0, xmm1
// 005f431a  f30f10491c           movss xmm1, dword ptr [ecx + 0x1c]
// 005f431f  f30f594820           mulss xmm1, dword ptr [eax + 0x20]
// 005f4324  f30f58c1             addss xmm0, xmm1
// 005f4328  f30f11421c           movss dword ptr [edx + 0x1c], xmm0
// 005f432d  f30f10401c           movss xmm0, dword ptr [eax + 0x1c]
// 005f4332  f30f104908           movss xmm1, dword ptr [ecx + 8]
// 005f4337  f30f594818           mulss xmm1, dword ptr [eax + 0x18]
// 005f433c  f30f594114           mulss xmm0, dword ptr [ecx + 0x14]
// 005f4341  f30f58c1             addss xmm0, xmm1
// 005f4345  f30f104920           movss xmm1, dword ptr [ecx + 0x20]
// 005f434a  f30f594820           mulss xmm1, dword ptr [eax + 0x20]
// 005f434f  f30f58c1             addss xmm0, xmm1
// 005f4353  f30f114220           movss dword ptr [edx + 0x20], xmm0
// 005f4358  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?_mul@Matrix3@G3D@@CAXABV12@0AAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
