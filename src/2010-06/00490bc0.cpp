// from server: 100% by auto
// roc 2010-06 00490bc0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00490bc0
//
// 00490bc0  83ec30               sub esp, 0x30
// 00490bc3  56                   push esi
// 00490bc4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00490bc8  f30f105028           movss xmm2, dword ptr [eax + 0x28]
// 00490bcd  f30f10482c           movss xmm1, dword ptr [eax + 0x2c]
// 00490bd2  f30f105824           movss xmm3, dword ptr [eax + 0x24]
// 00490bd7  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 00490bdc  f30f106108           movss xmm4, dword ptr [ecx + 8]
// 00490be1  f30f59c2             mulss xmm0, xmm2
// 00490be5  f30f59e1             mulss xmm4, xmm1
// 00490be9  f30f58c4             addss xmm0, xmm4
// 00490bed  0f28e3               movaps xmm4, xmm3
// 00490bf0  f30f5921             mulss xmm4, dword ptr [ecx]
// 00490bf4  f30f58c4             addss xmm0, xmm4
// 00490bf8  f30f584124           addss xmm0, dword ptr [ecx + 0x24]
// 00490bfd  f30f106110           movss xmm4, dword ptr [ecx + 0x10]
// 00490c02  f30f11442404         movss dword ptr [esp + 4], xmm0
// 00490c08  f30f10410c           movss xmm0, dword ptr [ecx + 0xc]
// 00490c0d  f30f59c3             mulss xmm0, xmm3
// 00490c11  f30f59e2             mulss xmm4, xmm2
// 00490c15  f30f58c4             addss xmm0, xmm4
// 00490c19  f30f106114           movss xmm4, dword ptr [ecx + 0x14]
// 00490c1e  f30f59e1             mulss xmm4, xmm1
// 00490c22  f30f58c4             addss xmm0, xmm4
// 00490c26  f30f584128           addss xmm0, dword ptr [ecx + 0x28]
// 00490c2b  f30f11442408         movss dword ptr [esp + 8], xmm0
// 00490c31  f30f104118           movss xmm0, dword ptr [ecx + 0x18]
// 00490c36  f30f59c3             mulss xmm0, xmm3
// 00490c3a  f30f10591c           movss xmm3, dword ptr [ecx + 0x1c]
// 00490c3f  f30f59da             mulss xmm3, xmm2
// 00490c43  f30f105120           movss xmm2, dword ptr [ecx + 0x20]
// 00490c48  50                   push eax
// 00490c49  f30f58c3             addss xmm0, xmm3
// 00490c4d  f30f59d1             mulss xmm2, xmm1
// 00490c51  8d442414             lea eax, [esp + 0x14]
// 00490c55  f30f58c2             addss xmm0, xmm2
// 00490c59  f30f58412c           addss xmm0, dword ptr [ecx + 0x2c]
// 00490c5e  50                   push eax
// 00490c5f  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 00490c65  e8c6550c00           call 0x556230
// 00490c6a  8b742438             mov esi, dword ptr [esp + 0x38]
// 00490c6e  50                   push eax
// 00490c6f  8bce                 mov ecx, esi
// 00490c71  e8fa530c00           call 0x556070
// 00490c76  f30f10442404         movss xmm0, dword ptr [esp + 4]
// 00490c7c  f30f114624           movss dword ptr [esi + 0x24], xmm0
// 00490c81  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 00490c87  f30f114628           movss dword ptr [esi + 0x28], xmm0
// 00490c8c  f30f1044240c         movss xmm0, dword ptr [esp + 0xc]
// 00490c92  f30f11462c           movss dword ptr [esi + 0x2c], xmm0
// 00490c97  8bc6                 mov eax, esi
// 00490c99  5e                   pop esi
// 00490c9a  83c430               add esp, 0x30
// 00490c9d  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??DCoordinateFrame@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
