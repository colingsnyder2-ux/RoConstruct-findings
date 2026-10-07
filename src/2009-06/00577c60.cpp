// roc 2009-06 00577c60  unit: G3D::LineSegment  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577c60
//
// 00577c60  53                   push ebx
// 00577c61  55                   push ebp
// 00577c62  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00577c66  56                   push esi
// 00577c67  57                   push edi
// 00577c68  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00577c6c  8bdf                 mov ebx, edi
// 00577c6e  8d7508               lea esi, [ebp + 8]
// 00577c71  8d5104               lea edx, [ecx + 4]
// 00577c74  2bd9                 sub ebx, ecx
// 00577c76  2be9                 sub ebp, ecx
// 00577c78  8bcf                 mov ecx, edi
// 00577c7a  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00577c7e  b803000000           mov eax, 3
// 00577c83  d942fc               fld dword ptr [edx - 4]
// 00577c86  83c70c               add edi, 0xc
// 00577c89  d847f4               fadd dword ptr [edi - 0xc]
// 00577c8c  83c20c               add edx, 0xc
// 00577c8f  83c60c               add esi, 0xc
// 00577c92  83e801               sub eax, 1
// 00577c95  d95eec               fstp dword ptr [esi - 0x14]
// 00577c98  d94413f4             fld dword ptr [ebx + edx - 0xc]
// 00577c9c  d842f4               fadd dword ptr [edx - 0xc]
// 00577c9f  d95c2af4             fstp dword ptr [edx + ebp - 0xc]
// 00577ca3  d94431f4             fld dword ptr [ecx + esi - 0xc]
// 00577ca7  d842f8               fadd dword ptr [edx - 8]
// 00577caa  d95ef4               fstp dword ptr [esi - 0xc]
// 00577cad  75d4                 jne 0x577c83
// 00577caf  8b442414             mov eax, dword ptr [esp + 0x14]
// 00577cb3  5f                   pop edi
// 00577cb4  5e                   pop esi
// 00577cb5  5d                   pop ebp
// 00577cb6  5b                   pop ebx
// 00577cb7  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??HMatrix3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
