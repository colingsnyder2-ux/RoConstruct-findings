// roc 2009-06 005777c0  unit: G3D::LineSegment  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005777c0
//
// 005777c0  53                   push ebx
// 005777c1  55                   push ebp
// 005777c2  8bc1                 mov eax, ecx
// 005777c4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005777c8  56                   push esi
// 005777c9  57                   push edi
// 005777ca  8d580c               lea ebx, [eax + 0xc]
// 005777cd  8d7924               lea edi, [ecx + 0x24]
// 005777d0  8d7008               lea esi, [eax + 8]
// 005777d3  8d5108               lea edx, [ecx + 8]
// 005777d6  bd03000000           mov ebp, 3
// 005777db  eb03                 jmp 0x5777e0
// 005777dd  8d4900               lea ecx, [ecx]
// 005777e0  d942f8               fld dword ptr [edx - 8]
// 005777e3  83c20c               add edx, 0xc
// 005777e6  d95ef8               fstp dword ptr [esi - 8]
// 005777e9  83c610               add esi, 0x10
// 005777ec  d942f0               fld dword ptr [edx - 0x10]
// 005777ef  83c704               add edi, 4
// 005777f2  d95eec               fstp dword ptr [esi - 0x14]
// 005777f5  83c310               add ebx, 0x10
// 005777f8  83ed01               sub ebp, 1
// 005777fb  d942f4               fld dword ptr [edx - 0xc]
// 005777fe  d95ef0               fstp dword ptr [esi - 0x10]
// 00577801  d947fc               fld dword ptr [edi - 4]
// 00577804  d95bf0               fstp dword ptr [ebx - 0x10]
// 00577807  75d7                 jne 0x5777e0
// 00577809  d9ee                 fldz 
// 0057780b  5f                   pop edi
// 0057780c  d95030               fst dword ptr [eax + 0x30]
// 0057780f  5e                   pop esi
// 00577810  d95034               fst dword ptr [eax + 0x34]
// 00577813  5d                   pop ebp
// 00577814  d95838               fstp dword ptr [eax + 0x38]
// 00577817  5b                   pop ebx
// 00577818  d9e8                 fld1 
// 0057781a  d9583c               fstp dword ptr [eax + 0x3c]
// 0057781d  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ??0Matrix4@G3D@@QAE@ABVCoordinateFrame@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
