// roc 2009-12 005f36d0  unit: seg_005f0000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f36d0
//
// 005f36d0  56                   push esi
// 005f36d1  57                   push edi
// 005f36d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005f36d6  d907                 fld dword ptr [edi]
// 005f36d8  83ec08               sub esp, 8
// 005f36db  d805dcf29a00         fadd dword ptr [0x9af2dc]
// 005f36e1  8bf1                 mov esi, ecx
// 005f36e3  dd1c24               fstp qword ptr [esp]
// 005f36e6  e8cb192000           call 0x7f50b6
// 005f36eb  e800162000           call 0x7f4cf0
// 005f36f0  668906               mov word ptr [esi], ax
// 005f36f3  d94704               fld dword ptr [edi + 4]
// 005f36f6  d805dcf29a00         fadd dword ptr [0x9af2dc]
// 005f36fc  dd1c24               fstp qword ptr [esp]
// 005f36ff  e8b2192000           call 0x7f50b6
// 005f3704  83c408               add esp, 8
// 005f3707  e8e4152000           call 0x7f4cf0
// 005f370c  66894602             mov word ptr [esi + 2], ax
// 005f3710  5f                   pop edi
// 005f3711  8bc6                 mov eax, esi
// 005f3713  5e                   pop esi
// 005f3714  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Vector2int16.cpp (function ??0Vector2int16@G3D@@QAE@ABVVector2@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector2int16.cpp
