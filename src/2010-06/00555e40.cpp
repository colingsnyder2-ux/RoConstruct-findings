// roc 2010-06 00555e40  unit: seg_00550000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00555e40
//
// 00555e40  56                   push esi
// 00555e41  57                   push edi
// 00555e42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00555e46  d907                 fld dword ptr [edi]
// 00555e48  83ec08               sub esp, 8
// 00555e4b  d805e026a100         fadd dword ptr [0xa126e0]
// 00555e51  8bf1                 mov esi, ecx
// 00555e53  dd1c24               fstp qword ptr [esp]
// 00555e56  e895332500           call 0x7a91f0
// 00555e5b  e8d02f2500           call 0x7a8e30
// 00555e60  668906               mov word ptr [esi], ax
// 00555e63  d94704               fld dword ptr [edi + 4]
// 00555e66  d805e026a100         fadd dword ptr [0xa126e0]
// 00555e6c  dd1c24               fstp qword ptr [esp]
// 00555e6f  e87c332500           call 0x7a91f0
// 00555e74  83c408               add esp, 8
// 00555e77  e8b42f2500           call 0x7a8e30
// 00555e7c  66894602             mov word ptr [esi + 2], ax
// 00555e80  5f                   pop edi
// 00555e81  8bc6                 mov eax, esi
// 00555e83  5e                   pop esi
// 00555e84  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Vector2int16.cpp (function ??0Vector2int16@G3D@@QAE@ABVVector2@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector2int16.cpp
