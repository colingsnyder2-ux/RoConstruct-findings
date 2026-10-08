// from server: 100% by auto
// roc 2008-06 005132f0  unit: G3D::GCamera  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005132f0
//
// 005132f0  53                   push ebx
// 005132f1  55                   push ebp
// 005132f2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005132f6  56                   push esi
// 005132f7  57                   push edi
// 005132f8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005132fc  8bdf                 mov ebx, edi
// 005132fe  8d7508               lea esi, [ebp + 8]
// 00513301  8d5104               lea edx, [ecx + 4]
// 00513304  2bd9                 sub ebx, ecx
// 00513306  2be9                 sub ebp, ecx
// 00513308  8bcf                 mov ecx, edi
// 0051330a  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0051330e  b803000000           mov eax, 3
// 00513313  d942fc               fld dword ptr [edx - 4]
// 00513316  83c70c               add edi, 0xc
// 00513319  d847f4               fadd dword ptr [edi - 0xc]
// 0051331c  83c20c               add edx, 0xc
// 0051331f  83c60c               add esi, 0xc
// 00513322  83e801               sub eax, 1
// 00513325  d95eec               fstp dword ptr [esi - 0x14]
// 00513328  d94413f4             fld dword ptr [ebx + edx - 0xc]
// 0051332c  d842f4               fadd dword ptr [edx - 0xc]
// 0051332f  d95c2af4             fstp dword ptr [edx + ebp - 0xc]
// 00513333  d94431f4             fld dword ptr [ecx + esi - 0xc]
// 00513337  d842f8               fadd dword ptr [edx - 8]
// 0051333a  d95ef4               fstp dword ptr [esi - 0xc]
// 0051333d  75d4                 jne 0x513313
// 0051333f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00513343  5f                   pop edi
// 00513344  5e                   pop esi
// 00513345  5d                   pop ebp
// 00513346  5b                   pop ebx
// 00513347  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??HMatrix3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
