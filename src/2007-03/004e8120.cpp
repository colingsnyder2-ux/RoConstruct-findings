// roc 2007-03 004e8120  unit: seg_004e0000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e8120
//
// 004e8120  51                   push ecx
// 004e8121  56                   push esi
// 004e8122  57                   push edi
// 004e8123  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004e8127  d94708               fld dword ptr [edi + 8]
// 004e812a  8d7708               lea esi, [edi + 8]
// 004e812d  d94108               fld dword ptr [ecx + 8]
// 004e8130  8d5108               lea edx, [ecx + 8]
// 004e8133  ded9                 fcompp 
// 004e8135  dfe0                 fnstsw ax
// 004e8137  f6c441               test ah, 0x41
// 004e813a  7402                 je 0x4e813e
// 004e813c  8bd6                 mov edx, esi
// 004e813e  d902                 fld dword ptr [edx]
// 004e8140  8d7704               lea esi, [edi + 4]
// 004e8143  d95c2408             fstp dword ptr [esp + 8]
// 004e8147  8d5104               lea edx, [ecx + 4]
// 004e814a  d906                 fld dword ptr [esi]
// 004e814c  d902                 fld dword ptr [edx]
// 004e814e  ded9                 fcompp 
// 004e8150  dfe0                 fnstsw ax
// 004e8152  f6c441               test ah, 0x41
// 004e8155  7402                 je 0x4e8159
// 004e8157  8bd6                 mov edx, esi
// 004e8159  d902                 fld dword ptr [edx]
// 004e815b  d95c2414             fstp dword ptr [esp + 0x14]
// 004e815f  d907                 fld dword ptr [edi]
// 004e8161  d901                 fld dword ptr [ecx]
// 004e8163  ded9                 fcompp 
// 004e8165  dfe0                 fnstsw ax
// 004e8167  f6c441               test ah, 0x41
// 004e816a  7402                 je 0x4e816e
// 004e816c  8bcf                 mov ecx, edi
// 004e816e  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e8172  d901                 fld dword ptr [ecx]
// 004e8174  d918                 fstp dword ptr [eax]
// 004e8176  5f                   pop edi
// 004e8177  d9442410             fld dword ptr [esp + 0x10]
// 004e817b  5e                   pop esi
// 004e817c  d95804               fstp dword ptr [eax + 4]
// 004e817f  d90424               fld dword ptr [esp]
// 004e8182  d95808               fstp dword ptr [eax + 8]
// 004e8185  59                   pop ecx
// 004e8186  c20800               ret 8
// library rbxgs/util\Extents.cpp (function ?max@Vector3@G3D@@QBE?AV12@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Extents.cpp
