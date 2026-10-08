// roc 2007-03 004fec90  unit: seg_004f0000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fec90
//
// 004fec90  8b442404             mov eax, dword ptr [esp + 4]
// 004fec94  56                   push esi
// 004fec95  8bf1                 mov esi, ecx
// 004fec97  57                   push edi
// 004fec98  8d5004               lea edx, [eax + 4]
// 004fec9b  2bf0                 sub esi, eax
// 004fec9d  bf03000000           mov edi, 3
// 004feca2  d901                 fld dword ptr [ecx]
// 004feca4  83c10c               add ecx, 0xc
// 004feca7  d9e0                 fchs 
// 004feca9  83c20c               add edx, 0xc
// 004fecac  83ef01               sub edi, 1
// 004fecaf  d95af0               fstp dword ptr [edx - 0x10]
// 004fecb2  d94416f4             fld dword ptr [esi + edx - 0xc]
// 004fecb6  d9e0                 fchs 
// 004fecb8  d95af4               fstp dword ptr [edx - 0xc]
// 004fecbb  d941fc               fld dword ptr [ecx - 4]
// 004fecbe  d9e0                 fchs 
// 004fecc0  d95af8               fstp dword ptr [edx - 8]
// 004fecc3  75dd                 jne 0x4feca2
// 004fecc5  5f                   pop edi
// 004fecc6  5e                   pop esi
// 004fecc7  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ??GMatrix3@G3D@@QBE?AV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
