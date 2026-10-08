// from server: 100% by auto
// roc 2009-06 00577dc0  unit: G3D::LineSegment  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577dc0
//
// 00577dc0  8b442404             mov eax, dword ptr [esp + 4]
// 00577dc4  56                   push esi
// 00577dc5  8bf1                 mov esi, ecx
// 00577dc7  57                   push edi
// 00577dc8  8d5004               lea edx, [eax + 4]
// 00577dcb  2bf0                 sub esi, eax
// 00577dcd  bf03000000           mov edi, 3
// 00577dd2  d901                 fld dword ptr [ecx]
// 00577dd4  83c10c               add ecx, 0xc
// 00577dd7  d9e0                 fchs 
// 00577dd9  83c20c               add edx, 0xc
// 00577ddc  83ef01               sub edi, 1
// 00577ddf  d95af0               fstp dword ptr [edx - 0x10]
// 00577de2  d94416f4             fld dword ptr [esi + edx - 0xc]
// 00577de6  d9e0                 fchs 
// 00577de8  d95af4               fstp dword ptr [edx - 0xc]
// 00577deb  d941fc               fld dword ptr [ecx - 4]
// 00577dee  d9e0                 fchs 
// 00577df0  d95af8               fstp dword ptr [edx - 8]
// 00577df3  75dd                 jne 0x577dd2
// 00577df5  5f                   pop edi
// 00577df6  5e                   pop esi
// 00577df7  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??GMatrix3@G3D@@QBE?AV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
