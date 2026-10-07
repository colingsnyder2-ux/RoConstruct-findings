// roc 2007-08 005096f0  unit: G3D::GCamera  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005096f0
//
// 005096f0  53                   push ebx
// 005096f1  55                   push ebp
// 005096f2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005096f6  56                   push esi
// 005096f7  57                   push edi
// 005096f8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005096fc  8bdf                 mov ebx, edi
// 005096fe  8d7508               lea esi, [ebp + 8]
// 00509701  8d5104               lea edx, [ecx + 4]
// 00509704  2bd9                 sub ebx, ecx
// 00509706  2be9                 sub ebp, ecx
// 00509708  8bcf                 mov ecx, edi
// 0050970a  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0050970e  b803000000           mov eax, 3
// 00509713  d942fc               fld dword ptr [edx - 4]
// 00509716  83c70c               add edi, 0xc
// 00509719  d847f4               fadd dword ptr [edi - 0xc]
// 0050971c  83c20c               add edx, 0xc
// 0050971f  83c60c               add esi, 0xc
// 00509722  83e801               sub eax, 1
// 00509725  d95eec               fstp dword ptr [esi - 0x14]
// 00509728  d94413f4             fld dword ptr [ebx + edx - 0xc]
// 0050972c  d842f4               fadd dword ptr [edx - 0xc]
// 0050972f  d95c2af4             fstp dword ptr [edx + ebp - 0xc]
// 00509733  d94431f4             fld dword ptr [ecx + esi - 0xc]
// 00509737  d842f8               fadd dword ptr [edx - 8]
// 0050973a  d95ef4               fstp dword ptr [esi - 0xc]
// 0050973d  75d4                 jne 0x509713
// 0050973f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00509743  5f                   pop edi
// 00509744  5e                   pop esi
// 00509745  5d                   pop ebp
// 00509746  5b                   pop ebx
// 00509747  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??HMatrix3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
