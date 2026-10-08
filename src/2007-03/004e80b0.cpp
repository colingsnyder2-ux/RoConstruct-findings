// roc 2007-03 004e80b0  unit: seg_004e0000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e80b0
//
// 004e80b0  51                   push ecx
// 004e80b1  d94108               fld dword ptr [ecx + 8]
// 004e80b4  56                   push esi
// 004e80b5  57                   push edi
// 004e80b6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004e80ba  d94708               fld dword ptr [edi + 8]
// 004e80bd  8d5108               lea edx, [ecx + 8]
// 004e80c0  8d7708               lea esi, [edi + 8]
// 004e80c3  ded9                 fcompp 
// 004e80c5  dfe0                 fnstsw ax
// 004e80c7  f6c441               test ah, 0x41
// 004e80ca  7402                 je 0x4e80ce
// 004e80cc  8bd6                 mov edx, esi
// 004e80ce  d902                 fld dword ptr [edx]
// 004e80d0  8d5104               lea edx, [ecx + 4]
// 004e80d3  d95c2408             fstp dword ptr [esp + 8]
// 004e80d7  8d7704               lea esi, [edi + 4]
// 004e80da  d902                 fld dword ptr [edx]
// 004e80dc  d906                 fld dword ptr [esi]
// 004e80de  ded9                 fcompp 
// 004e80e0  dfe0                 fnstsw ax
// 004e80e2  f6c441               test ah, 0x41
// 004e80e5  7402                 je 0x4e80e9
// 004e80e7  8bd6                 mov edx, esi
// 004e80e9  d902                 fld dword ptr [edx]
// 004e80eb  d95c2414             fstp dword ptr [esp + 0x14]
// 004e80ef  d901                 fld dword ptr [ecx]
// 004e80f1  d907                 fld dword ptr [edi]
// 004e80f3  ded9                 fcompp 
// 004e80f5  dfe0                 fnstsw ax
// 004e80f7  f6c441               test ah, 0x41
// 004e80fa  7402                 je 0x4e80fe
// 004e80fc  8bcf                 mov ecx, edi
// 004e80fe  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e8102  d901                 fld dword ptr [ecx]
// 004e8104  d918                 fstp dword ptr [eax]
// 004e8106  5f                   pop edi
// 004e8107  d9442410             fld dword ptr [esp + 0x10]
// 004e810b  5e                   pop esi
// 004e810c  d95804               fstp dword ptr [eax + 4]
// 004e810f  d90424               fld dword ptr [esp]
// 004e8112  d95808               fstp dword ptr [eax + 8]
// 004e8115  59                   pop ecx
// 004e8116  c20800               ret 8
// library rbxgs/util\Extents.cpp (function ?min@Vector3@G3D@@QBE?AV12@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Extents.cpp
