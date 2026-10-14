// roc 2009-06 0058a1a0  unit: seg_00580000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058a1a0
//
// 0058a1a0  56                   push esi
// 0058a1a1  57                   push edi
// 0058a1a2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0058a1a6  d94708               fld dword ptr [edi + 8]
// 0058a1a9  8d7708               lea esi, [edi + 8]
// 0058a1ac  d85908               fcomp dword ptr [ecx + 8]
// 0058a1af  8d5108               lea edx, [ecx + 8]
// 0058a1b2  dfe0                 fnstsw ax
// 0058a1b4  f6c441               test ah, 0x41
// 0058a1b7  7402                 je 0x58a1bb
// 0058a1b9  8bd6                 mov edx, esi
// 0058a1bb  d902                 fld dword ptr [edx]
// 0058a1bd  8d7704               lea esi, [edi + 4]
// 0058a1c0  d906                 fld dword ptr [esi]
// 0058a1c2  8d5104               lea edx, [ecx + 4]
// 0058a1c5  d81a                 fcomp dword ptr [edx]
// 0058a1c7  dfe0                 fnstsw ax
// 0058a1c9  f6c441               test ah, 0x41
// 0058a1cc  7402                 je 0x58a1d0
// 0058a1ce  8bd6                 mov edx, esi
// 0058a1d0  d902                 fld dword ptr [edx]
// 0058a1d2  d907                 fld dword ptr [edi]
// 0058a1d4  d819                 fcomp dword ptr [ecx]
// 0058a1d6  dfe0                 fnstsw ax
// 0058a1d8  f6c441               test ah, 0x41
// 0058a1db  7402                 je 0x58a1df
// 0058a1dd  8bcf                 mov ecx, edi
// 0058a1df  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0058a1e3  d901                 fld dword ptr [ecx]
// 0058a1e5  d918                 fstp dword ptr [eax]
// 0058a1e7  5f                   pop edi
// 0058a1e8  5e                   pop esi
// 0058a1e9  d95804               fstp dword ptr [eax + 4]
// 0058a1ec  d95808               fstp dword ptr [eax + 8]
// 0058a1ef  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Capsule.cpp (function ?min@Vector3@G3D@@QBE?AV12@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Capsule.cpp
