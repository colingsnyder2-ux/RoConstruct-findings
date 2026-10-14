// roc 2009-06 00577cc0  unit: G3D::LineSegment  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577cc0
//
// 00577cc0  8b442404             mov eax, dword ptr [esp + 4]
// 00577cc4  8b542408             mov edx, dword ptr [esp + 8]
// 00577cc8  56                   push esi
// 00577cc9  57                   push edi
// 00577cca  83c104               add ecx, 4
// 00577ccd  8d7008               lea esi, [eax + 8]
// 00577cd0  bf03000000           mov edi, 3
// 00577cd5  d94218               fld dword ptr [edx + 0x18]
// 00577cd8  83c10c               add ecx, 0xc
// 00577cdb  d849f8               fmul dword ptr [ecx - 8]
// 00577cde  83c60c               add esi, 0xc
// 00577ce1  83ef01               sub edi, 1
// 00577ce4  d941f4               fld dword ptr [ecx - 0xc]
// 00577ce7  d84a0c               fmul dword ptr [edx + 0xc]
// 00577cea  dec1                 faddp st(1)
// 00577cec  d941f0               fld dword ptr [ecx - 0x10]
// 00577cef  d80a                 fmul dword ptr [edx]
// 00577cf1  dec1                 faddp st(1)
// 00577cf3  d95eec               fstp dword ptr [esi - 0x14]
// 00577cf6  d9421c               fld dword ptr [edx + 0x1c]
// 00577cf9  d849f8               fmul dword ptr [ecx - 8]
// 00577cfc  d941f4               fld dword ptr [ecx - 0xc]
// 00577cff  d84a10               fmul dword ptr [edx + 0x10]
// 00577d02  dec1                 faddp st(1)
// 00577d04  d941f0               fld dword ptr [ecx - 0x10]
// 00577d07  d84a04               fmul dword ptr [edx + 4]
// 00577d0a  dec1                 faddp st(1)
// 00577d0c  d95ef0               fstp dword ptr [esi - 0x10]
// 00577d0f  d94214               fld dword ptr [edx + 0x14]
// 00577d12  d849f4               fmul dword ptr [ecx - 0xc]
// 00577d15  d941f8               fld dword ptr [ecx - 8]
// 00577d18  d84a20               fmul dword ptr [edx + 0x20]
// 00577d1b  dec1                 faddp st(1)
// 00577d1d  d941f0               fld dword ptr [ecx - 0x10]
// 00577d20  d84a08               fmul dword ptr [edx + 8]
// 00577d23  dec1                 faddp st(1)
// 00577d25  d95ef4               fstp dword ptr [esi - 0xc]
// 00577d28  75ab                 jne 0x577cd5
// 00577d2a  5f                   pop edi
// 00577d2b  5e                   pop esi
// 00577d2c  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ??DMatrix3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp
