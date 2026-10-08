// roc 2009-12 0047d8e0  unit: RBX::LDraw2Lua::LuaWriter  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047d8e0
//
// 0047d8e0  83ec30               sub esp, 0x30
// 0047d8e3  56                   push esi
// 0047d8e4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0047d8e8  f30f105028           movss xmm2, dword ptr [eax + 0x28]
// 0047d8ed  f30f10482c           movss xmm1, dword ptr [eax + 0x2c]
// 0047d8f2  f30f105824           movss xmm3, dword ptr [eax + 0x24]
// 0047d8f7  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 0047d8fc  f30f106108           movss xmm4, dword ptr [ecx + 8]
// 0047d901  f30f59c2             mulss xmm0, xmm2
// 0047d905  f30f59e1             mulss xmm4, xmm1
// 0047d909  f30f58c4             addss xmm0, xmm4
// 0047d90d  0f28e3               movaps xmm4, xmm3
// 0047d910  f30f5921             mulss xmm4, dword ptr [ecx]
// 0047d914  f30f58c4             addss xmm0, xmm4
// 0047d918  f30f584124           addss xmm0, dword ptr [ecx + 0x24]
// 0047d91d  f30f106110           movss xmm4, dword ptr [ecx + 0x10]
// 0047d922  f30f11442404         movss dword ptr [esp + 4], xmm0
// 0047d928  f30f10410c           movss xmm0, dword ptr [ecx + 0xc]
// 0047d92d  f30f59c3             mulss xmm0, xmm3
// 0047d931  f30f59e2             mulss xmm4, xmm2
// 0047d935  f30f58c4             addss xmm0, xmm4
// 0047d939  f30f106114           movss xmm4, dword ptr [ecx + 0x14]
// 0047d93e  f30f59e1             mulss xmm4, xmm1
// 0047d942  f30f58c4             addss xmm0, xmm4
// 0047d946  f30f584128           addss xmm0, dword ptr [ecx + 0x28]
// 0047d94b  f30f11442408         movss dword ptr [esp + 8], xmm0
// 0047d951  f30f104118           movss xmm0, dword ptr [ecx + 0x18]
// 0047d956  f30f59c3             mulss xmm0, xmm3
// 0047d95a  f30f10591c           movss xmm3, dword ptr [ecx + 0x1c]
// 0047d95f  f30f59da             mulss xmm3, xmm2
// 0047d963  f30f105120           movss xmm2, dword ptr [ecx + 0x20]
// 0047d968  50                   push eax
// 0047d969  f30f58c3             addss xmm0, xmm3
// 0047d96d  f30f59d1             mulss xmm2, xmm1
// 0047d971  8d442414             lea eax, [esp + 0x14]
// 0047d975  f30f58c2             addss xmm0, xmm2
// 0047d979  f30f58412c           addss xmm0, dword ptr [ecx + 0x2c]
// 0047d97e  50                   push eax
// 0047d97f  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 0047d985  e836611700           call 0x5f3ac0
// 0047d98a  8b742438             mov esi, dword ptr [esp + 0x38]
// 0047d98e  50                   push eax
// 0047d98f  8bce                 mov ecx, esi
// 0047d991  e86a5f1700           call 0x5f3900
// 0047d996  f30f10442404         movss xmm0, dword ptr [esp + 4]
// 0047d99c  f30f114624           movss dword ptr [esi + 0x24], xmm0
// 0047d9a1  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 0047d9a7  f30f114628           movss dword ptr [esi + 0x28], xmm0
// 0047d9ac  f30f1044240c         movss xmm0, dword ptr [esp + 0xc]
// 0047d9b2  f30f11462c           movss dword ptr [esi + 0x2c], xmm0
// 0047d9b7  8bc6                 mov eax, esi
// 0047d9b9  5e                   pop esi
// 0047d9ba  83c430               add esp, 0x30
// 0047d9bd  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??DCoordinateFrame@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
