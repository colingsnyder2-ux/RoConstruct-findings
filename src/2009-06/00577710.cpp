// roc 2009-06 00577710  unit: G3D::LineSegment  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577710
//
// 00577710  51                   push ecx
// 00577711  8bc1                 mov eax, ecx
// 00577713  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577717  d901                 fld dword ptr [ecx]
// 00577719  d80df8b68c00         fmul dword ptr [0x8cb6f8]
// 0057771f  d91c24               fstp dword ptr [esp]
// 00577722  d90424               fld dword ptr [esp]
// 00577725  db5c2408             fistp dword ptr [esp + 8]
// 00577729  8b542408             mov edx, dword ptr [esp + 8]
// 0057772d  81faff000000         cmp edx, 0xff
// 00577733  7e05                 jle 0x57773a
// 00577735  baff000000           mov edx, 0xff
// 0057773a  8810                 mov byte ptr [eax], dl
// 0057773c  d94104               fld dword ptr [ecx + 4]
// 0057773f  d80df8b68c00         fmul dword ptr [0x8cb6f8]
// 00577745  d91c24               fstp dword ptr [esp]
// 00577748  d90424               fld dword ptr [esp]
// 0057774b  db5c2408             fistp dword ptr [esp + 8]
// 0057774f  8b542408             mov edx, dword ptr [esp + 8]
// 00577753  81faff000000         cmp edx, 0xff
// 00577759  7e05                 jle 0x577760
// 0057775b  baff000000           mov edx, 0xff
// 00577760  885001               mov byte ptr [eax + 1], dl
// 00577763  d94108               fld dword ptr [ecx + 8]
// 00577766  d80df8b68c00         fmul dword ptr [0x8cb6f8]
// 0057776c  d91c24               fstp dword ptr [esp]
// 0057776f  d90424               fld dword ptr [esp]
// 00577772  db5c2408             fistp dword ptr [esp + 8]
// 00577776  8b542408             mov edx, dword ptr [esp + 8]
// 0057777a  81faff000000         cmp edx, 0xff
// 00577780  7e05                 jle 0x577787
// 00577782  baff000000           mov edx, 0xff
// 00577787  885002               mov byte ptr [eax + 2], dl
// 0057778a  d9410c               fld dword ptr [ecx + 0xc]
// 0057778d  d80df8b68c00         fmul dword ptr [0x8cb6f8]
// 00577793  d91c24               fstp dword ptr [esp]
// 00577796  d90424               fld dword ptr [esp]
// 00577799  db5c2408             fistp dword ptr [esp + 8]
// 0057779d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005777a1  81f9ff000000         cmp ecx, 0xff
// 005777a7  7e05                 jle 0x5777ae
// 005777a9  b9ff000000           mov ecx, 0xff
// 005777ae  884803               mov byte ptr [eax + 3], cl
// 005777b1  59                   pop ecx
// 005777b2  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Color4uint8.cpp (function ??0Color4uint8@G3D@@QAE@ABVColor4@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Color4uint8.cpp
