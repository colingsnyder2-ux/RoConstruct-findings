// roc 2007-03 004feaa0  unit: seg_004f0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004feaa0
//
// 004feaa0  53                   push ebx
// 004feaa1  55                   push ebp
// 004feaa2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004feaa6  56                   push esi
// 004feaa7  57                   push edi
// 004feaa8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004feaac  8bdf                 mov ebx, edi
// 004feaae  8d7508               lea esi, [ebp + 8]
// 004feab1  8d5104               lea edx, [ecx + 4]
// 004feab4  2bd9                 sub ebx, ecx
// 004feab6  2be9                 sub ebp, ecx
// 004feab8  8bcf                 mov ecx, edi
// 004feaba  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 004feabe  b803000000           mov eax, 3
// 004feac3  d942fc               fld dword ptr [edx - 4]
// 004feac6  83c70c               add edi, 0xc
// 004feac9  d847f4               fadd dword ptr [edi - 0xc]
// 004feacc  83c20c               add edx, 0xc
// 004feacf  83c60c               add esi, 0xc
// 004fead2  83e801               sub eax, 1
// 004fead5  d95eec               fstp dword ptr [esi - 0x14]
// 004fead8  d94413f4             fld dword ptr [ebx + edx - 0xc]
// 004feadc  d842f4               fadd dword ptr [edx - 0xc]
// 004feadf  d95c2af4             fstp dword ptr [edx + ebp - 0xc]
// 004feae3  d94431f4             fld dword ptr [ecx + esi - 0xc]
// 004feae7  d842f8               fadd dword ptr [edx - 8]
// 004feaea  d95ef4               fstp dword ptr [esi - 0xc]
// 004feaed  75d4                 jne 0x4feac3
// 004feaef  8b442414             mov eax, dword ptr [esp + 0x14]
// 004feaf3  5f                   pop edi
// 004feaf4  5e                   pop esi
// 004feaf5  5d                   pop ebp
// 004feaf6  5b                   pop ebx
// 004feaf7  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ??HMatrix3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
