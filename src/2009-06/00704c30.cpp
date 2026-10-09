// roc 2009-06 00704c30  unit: RBX::AdornG3D  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00704c30
//
// 00704c30  6aff                 push -1
// 00704c32  68d8318700           push 0x8731d8
// 00704c37  64a100000000         mov eax, dword ptr fs:[0]
// 00704c3d  50                   push eax
// 00704c3e  64892500000000       mov dword ptr fs:[0], esp
// 00704c45  81eca0000000         sub esp, 0xa0
// 00704c4b  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00704c52  53                   push ebx
// 00704c53  56                   push esi
// 00704c54  57                   push edi
// 00704c55  8d480c               lea ecx, [eax + 0xc]
// 00704c58  51                   push ecx
// 00704c59  50                   push eax
// 00704c5a  8d4c2450             lea ecx, [esp + 0x50]
// 00704c5e  e8fd701400           call 0x84bd60
// 00704c63  d9ee                 fldz 
// 00704c65  8bb424c0000000       mov esi, dword ptr [esp + 0xc0]
// 00704c6c  d9542430             fst dword ptr [esp + 0x30]
// 00704c70  d9542434             fst dword ptr [esp + 0x34]
// 00704c74  33db                 xor ebx, ebx
// 00704c76  d9542438             fst dword ptr [esp + 0x38]
// 00704c7a  6a05                 push 5
// 00704c7c  d9542428             fst dword ptr [esp + 0x28]
// 00704c80  8bce                 mov ecx, esi
// 00704c82  d954242c             fst dword ptr [esp + 0x2c]
// 00704c86  899c24b8000000       mov dword ptr [esp + 0xb8], ebx
// 00704c8d  d9542430             fst dword ptr [esp + 0x30]
// 00704c91  d9542410             fst dword ptr [esp + 0x10]
// 00704c95  d9542414             fst dword ptr [esp + 0x14]
// 00704c99  d9542418             fst dword ptr [esp + 0x18]
// 00704c9d  d954241c             fst dword ptr [esp + 0x1c]
// 00704ca1  d9542420             fst dword ptr [esp + 0x20]
// 00704ca5  d95c2424             fstp dword ptr [esp + 0x24]
// 00704ca9  e872dcd9ff           call 0x4a2920
// 00704cae  bffc4c9200           mov edi, 0x924cfc
// 00704cb3  8d542418             lea edx, [esp + 0x18]
// 00704cb7  52                   push edx
// 00704cb8  8d442410             lea eax, [esp + 0x10]
// 00704cbc  50                   push eax
// 00704cbd  8d4c242c             lea ecx, [esp + 0x2c]
// 00704cc1  51                   push ecx
// 00704cc2  8d54243c             lea edx, [esp + 0x3c]
// 00704cc6  52                   push edx
// 00704cc7  53                   push ebx
// 00704cc8  8d4c245c             lea ecx, [esp + 0x5c]
// 00704ccc  e8ef6f1400           call 0x84bcc0
// 00704cd1  d947fc               fld dword ptr [edi - 4]
// 00704cd4  d95c243c             fstp dword ptr [esp + 0x3c]
// 00704cd8  8d44243c             lea eax, [esp + 0x3c]
// 00704cdc  d907                 fld dword ptr [edi]
// 00704cde  50                   push eax
// 00704cdf  d95c2444             fstp dword ptr [esp + 0x44]
// 00704ce3  8bce                 mov ecx, esi
// 00704ce5  d94704               fld dword ptr [edi + 4]
// 00704ce8  d95c2448             fstp dword ptr [esp + 0x48]
// 00704cec  e82fa7d9ff           call 0x49f420
// 00704cf1  8d4c2430             lea ecx, [esp + 0x30]
// 00704cf5  51                   push ecx
// 00704cf6  8bce                 mov ecx, esi
// 00704cf8  e833a8d9ff           call 0x49f530
// 00704cfd  8d542424             lea edx, [esp + 0x24]
// 00704d01  52                   push edx
// 00704d02  8bce                 mov ecx, esi
// 00704d04  e827a8d9ff           call 0x49f530
// 00704d09  8d44240c             lea eax, [esp + 0xc]
// 00704d0d  50                   push eax
// 00704d0e  8bce                 mov ecx, esi
// 00704d10  e81ba8d9ff           call 0x49f530
// 00704d15  8d4c2418             lea ecx, [esp + 0x18]
// 00704d19  51                   push ecx
// 00704d1a  8bce                 mov ecx, esi
// 00704d1c  e80fa8d9ff           call 0x49f530
// 00704d21  83c70c               add edi, 0xc
// 00704d24  43                   inc ebx
// 00704d25  81ff444d9200         cmp edi, 0x924d44
// 00704d2b  7c86                 jl 0x704cb3
// 00704d2d  8bce                 mov ecx, esi
// 00704d2f  e83cb2d9ff           call 0x49ff70
// 00704d34  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 00704d3b  5f                   pop edi
// 00704d3c  5e                   pop esi
// 00704d3d  5b                   pop ebx
// 00704d3e  64890d00000000       mov dword ptr fs:[0], ecx
// 00704d45  81c4ac000000         add esp, 0xac
// 00704d4b  c3                   ret 
// library openrbx-client/Rendering\AppDraw\DrawPrimitives.cpp (function ?rawBox@DrawPrimitives@RBX@@SAXABVAABox@G3D@@PAVRenderDevice@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/AppDraw/DrawPrimitives.cpp
