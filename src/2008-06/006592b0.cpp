// roc 2008-06 006592b0  unit: RBX::BallBallContact  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006592b0
//
// 006592b0  83ec0c               sub esp, 0xc
// 006592b3  53                   push ebx
// 006592b4  56                   push esi
// 006592b5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006592b9  d94608               fld dword ptr [esi + 8]
// 006592bc  57                   push edi
// 006592bd  83ec08               sub esp, 8
// 006592c0  dd1c24               fstp qword ptr [esp]
// 006592c3  e8e8880400           call 0x6a1bb0
// 006592c8  d95c2418             fstp dword ptr [esp + 0x18]
// 006592cc  83c408               add esp, 8
// 006592cf  d9442410             fld dword ptr [esp + 0x10]
// 006592d3  db5c2420             fistp dword ptr [esp + 0x20]
// 006592d7  d94604               fld dword ptr [esi + 4]
// 006592da  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006592de  83ec08               sub esp, 8
// 006592e1  dd1c24               fstp qword ptr [esp]
// 006592e4  e8c7880400           call 0x6a1bb0
// 006592e9  d95c2418             fstp dword ptr [esp + 0x18]
// 006592ed  83c408               add esp, 8
// 006592f0  d9442410             fld dword ptr [esp + 0x10]
// 006592f4  db5c240c             fistp dword ptr [esp + 0xc]
// 006592f8  d906                 fld dword ptr [esi]
// 006592fa  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006592fe  83ec08               sub esp, 8
// 00659301  dd1c24               fstp qword ptr [esp]
// 00659304  e8a7880400           call 0x6a1bb0
// 00659309  d95c241c             fstp dword ptr [esp + 0x1c]
// 0065930d  83c408               add esp, 8
// 00659310  d9442414             fld dword ptr [esp + 0x14]
// 00659314  db5c2410             fistp dword ptr [esp + 0x10]
// 00659318  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0065931c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00659320  897808               mov dword ptr [eax + 8], edi
// 00659323  5f                   pop edi
// 00659324  5e                   pop esi
// 00659325  895804               mov dword ptr [eax + 4], ebx
// 00659328  8908                 mov dword ptr [eax], ecx
// 0065932a  5b                   pop ebx
// 0065932b  83c40c               add esp, 0xc
// 0065932e  c3                   ret 
// library rbxgs-dll/v8world\SpatialHash.cpp (function ?floor@Vector3int32@RBX@@SA?AV12@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8world/SpatialHash.cpp
