// roc 2009-06 005776b0  unit: G3D::LineSegment  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005776b0
//
// 005776b0  d94108               fld dword ptr [ecx + 8]
// 005776b3  56                   push esi
// 005776b4  57                   push edi
// 005776b5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005776b9  d85f08               fcomp dword ptr [edi + 8]
// 005776bc  8d5108               lea edx, [ecx + 8]
// 005776bf  8d7708               lea esi, [edi + 8]
// 005776c2  dfe0                 fnstsw ax
// 005776c4  f6c441               test ah, 0x41
// 005776c7  7402                 je 0x5776cb
// 005776c9  8bd6                 mov edx, esi
// 005776cb  d902                 fld dword ptr [edx]
// 005776cd  8d5104               lea edx, [ecx + 4]
// 005776d0  d902                 fld dword ptr [edx]
// 005776d2  8d7704               lea esi, [edi + 4]
// 005776d5  d81e                 fcomp dword ptr [esi]
// 005776d7  dfe0                 fnstsw ax
// 005776d9  f6c441               test ah, 0x41
// 005776dc  7402                 je 0x5776e0
// 005776de  8bd6                 mov edx, esi
// 005776e0  d902                 fld dword ptr [edx]
// 005776e2  d901                 fld dword ptr [ecx]
// 005776e4  d81f                 fcomp dword ptr [edi]
// 005776e6  dfe0                 fnstsw ax
// 005776e8  f6c441               test ah, 0x41
// 005776eb  7402                 je 0x5776ef
// 005776ed  8bcf                 mov ecx, edi
// 005776ef  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005776f3  d901                 fld dword ptr [ecx]
// 005776f5  d918                 fstp dword ptr [eax]
// 005776f7  5f                   pop edi
// 005776f8  5e                   pop esi
// 005776f9  d95804               fstp dword ptr [eax + 4]
// 005776fc  d95808               fstp dword ptr [eax + 8]
// 005776ff  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Capsule.cpp (function ?max@Vector3@G3D@@QBE?AV12@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Capsule.cpp
