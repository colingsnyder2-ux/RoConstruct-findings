// from server: 100% by auto
// roc 2007-08 005086f0  unit: G3D::GCamera  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005086f0
//
// 005086f0  56                   push esi
// 005086f1  57                   push edi
// 005086f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005086f6  d907                 fld dword ptr [edi]
// 005086f8  83ec08               sub esp, 8
// 005086fb  dc05485b7900         fadd qword ptr [0x795b48]
// 00508701  8bf1                 mov esi, ecx
// 00508703  dd1c24               fstp qword ptr [esp]
// 00508706  e81d8a1200           call 0x631128
// 0050870b  e850861200           call 0x630d60
// 00508710  668906               mov word ptr [esi], ax
// 00508713  d94704               fld dword ptr [edi + 4]
// 00508716  dc05485b7900         fadd qword ptr [0x795b48]
// 0050871c  dd1c24               fstp qword ptr [esp]
// 0050871f  e8048a1200           call 0x631128
// 00508724  83c408               add esp, 8
// 00508727  e834861200           call 0x630d60
// 0050872c  66894602             mov word ptr [esi + 2], ax
// 00508730  5f                   pop edi
// 00508731  8bc6                 mov eax, esi
// 00508733  5e                   pop esi
// 00508734  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector2int16.cpp (function ??0Vector2int16@G3D@@QAE@ABVVector2@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector2int16.cpp
