// roc 2009-06 00574700  unit: G3D::GCamera  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00574700
//
// 00574700  56                   push esi
// 00574701  57                   push edi
// 00574702  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00574706  d907                 fld dword ptr [edi]
// 00574708  83ec08               sub esp, 8
// 0057470b  d8054cad8b00         fadd dword ptr [0x8bad4c]
// 00574711  8bf1                 mov esi, ecx
// 00574713  dd1c24               fstp qword ptr [esp]
// 00574716  e8655b1a00           call 0x71a280
// 0057471b  e8a0571a00           call 0x719ec0
// 00574720  668906               mov word ptr [esi], ax
// 00574723  d94704               fld dword ptr [edi + 4]
// 00574726  d8054cad8b00         fadd dword ptr [0x8bad4c]
// 0057472c  dd1c24               fstp qword ptr [esp]
// 0057472f  e84c5b1a00           call 0x71a280
// 00574734  83c408               add esp, 8
// 00574737  e884571a00           call 0x719ec0
// 0057473c  66894602             mov word ptr [esi + 2], ax
// 00574740  5f                   pop edi
// 00574741  8bc6                 mov eax, esi
// 00574743  5e                   pop esi
// 00574744  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Vector2int16.cpp (function ??0Vector2int16@G3D@@QAE@ABVVector2@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector2int16.cpp
