// roc 2009-12 009263b0  unit: seg_00920000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009263b0
//
// 009263b0  56                   push esi
// 009263b1  57                   push edi
// 009263b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009263b6  d907                 fld dword ptr [edi]
// 009263b8  83ec08               sub esp, 8
// 009263bb  d805dcf29a00         fadd dword ptr [0x9af2dc]
// 009263c1  8bf1                 mov esi, ecx
// 009263c3  dd1c24               fstp qword ptr [esp]
// 009263c6  e8ebececff           call 0x7f50b6
// 009263cb  e820e9ecff           call 0x7f4cf0
// 009263d0  668906               mov word ptr [esi], ax
// 009263d3  d94704               fld dword ptr [edi + 4]
// 009263d6  d805dcf29a00         fadd dword ptr [0x9af2dc]
// 009263dc  dd1c24               fstp qword ptr [esp]
// 009263df  e8d2ececff           call 0x7f50b6
// 009263e4  e807e9ecff           call 0x7f4cf0
// 009263e9  66894602             mov word ptr [esi + 2], ax
// 009263ed  d94708               fld dword ptr [edi + 8]
// 009263f0  d805dcf29a00         fadd dword ptr [0x9af2dc]
// 009263f6  dd1c24               fstp qword ptr [esp]
// 009263f9  e8b8ececff           call 0x7f50b6
// 009263fe  83c408               add esp, 8
// 00926401  e8eae8ecff           call 0x7f4cf0
// 00926406  66894604             mov word ptr [esi + 4], ax
// 0092640a  5f                   pop edi
// 0092640b  8bc6                 mov eax, esi
// 0092640d  5e                   pop esi
// 0092640e  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Vector3int16.cpp (function ??0Vector3int16@G3D@@QAE@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector3int16.cpp
