// roc 2008-06 00677f60  unit: RBX::AdornG3D  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00677f60
//
// 00677f60  6aff                 push -1
// 00677f62  6898d07d00           push 0x7dd098
// 00677f67  64a100000000         mov eax, dword ptr fs:[0]
// 00677f6d  50                   push eax
// 00677f6e  64892500000000       mov dword ptr fs:[0], esp
// 00677f75  81eca0000000         sub esp, 0xa0
// 00677f7b  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00677f82  53                   push ebx
// 00677f83  56                   push esi
// 00677f84  57                   push edi
// 00677f85  8d480c               lea ecx, [eax + 0xc]
// 00677f88  51                   push ecx
// 00677f89  50                   push eax
// 00677f8a  8d4c2450             lea ecx, [esp + 0x50]
// 00677f8e  e83d3f1400           call 0x7bbed0
// 00677f93  d9ee                 fldz 
// 00677f95  8bb424c0000000       mov esi, dword ptr [esp + 0xc0]
// 00677f9c  d9542430             fst dword ptr [esp + 0x30]
// 00677fa0  d9542434             fst dword ptr [esp + 0x34]
// 00677fa4  33db                 xor ebx, ebx
// 00677fa6  d9542438             fst dword ptr [esp + 0x38]
// 00677faa  6a05                 push 5
// 00677fac  d9542428             fst dword ptr [esp + 0x28]
// 00677fb0  8bce                 mov ecx, esi
// 00677fb2  d954242c             fst dword ptr [esp + 0x2c]
// 00677fb6  899c24b8000000       mov dword ptr [esp + 0xb8], ebx
// 00677fbd  d9542430             fst dword ptr [esp + 0x30]
// 00677fc1  d9542410             fst dword ptr [esp + 0x10]
// 00677fc5  d9542414             fst dword ptr [esp + 0x14]
// 00677fc9  d9542418             fst dword ptr [esp + 0x18]
// 00677fcd  d954241c             fst dword ptr [esp + 0x1c]
// 00677fd1  d9542420             fst dword ptr [esp + 0x20]
// 00677fd5  d95c2424             fstp dword ptr [esp + 0x24]
// 00677fd9  e83234e0ff           call 0x47b410
// 00677fde  bfa45d8700           mov edi, 0x875da4
// 00677fe3  8d542418             lea edx, [esp + 0x18]
// 00677fe7  52                   push edx
// 00677fe8  8d442410             lea eax, [esp + 0x10]
// 00677fec  50                   push eax
// 00677fed  8d4c242c             lea ecx, [esp + 0x2c]
// 00677ff1  51                   push ecx
// 00677ff2  8d54243c             lea edx, [esp + 0x3c]
// 00677ff6  52                   push edx
// 00677ff7  53                   push ebx
// 00677ff8  8d4c245c             lea ecx, [esp + 0x5c]
// 00677ffc  e82f3e1400           call 0x7bbe30
// 00678001  d947fc               fld dword ptr [edi - 4]
// 00678004  d95c243c             fstp dword ptr [esp + 0x3c]
// 00678008  8d44243c             lea eax, [esp + 0x3c]
// 0067800c  d907                 fld dword ptr [edi]
// 0067800e  50                   push eax
// 0067800f  d95c2444             fstp dword ptr [esp + 0x44]
// 00678013  8bce                 mov ecx, esi
// 00678015  d94704               fld dword ptr [edi + 4]
// 00678018  d95c2448             fstp dword ptr [esp + 0x48]
// 0067801c  e88ffddfff           call 0x477db0
// 00678021  8d4c2430             lea ecx, [esp + 0x30]
// 00678025  51                   push ecx
// 00678026  8bce                 mov ecx, esi
// 00678028  e893fedfff           call 0x477ec0
// 0067802d  8d542424             lea edx, [esp + 0x24]
// 00678031  52                   push edx
// 00678032  8bce                 mov ecx, esi
// 00678034  e887fedfff           call 0x477ec0
// 00678039  8d44240c             lea eax, [esp + 0xc]
// 0067803d  50                   push eax
// 0067803e  8bce                 mov ecx, esi
// 00678040  e87bfedfff           call 0x477ec0
// 00678045  8d4c2418             lea ecx, [esp + 0x18]
// 00678049  51                   push ecx
// 0067804a  8bce                 mov ecx, esi
// 0067804c  e86ffedfff           call 0x477ec0
// 00678051  83c70c               add edi, 0xc
// 00678054  43                   inc ebx
// 00678055  81ffec5d8700         cmp edi, 0x875dec
// 0067805b  7c86                 jl 0x677fe3
// 0067805d  8bce                 mov ecx, esi
// 0067805f  e82c09e0ff           call 0x478990
// 00678064  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 0067806b  5f                   pop edi
// 0067806c  5e                   pop esi
// 0067806d  5b                   pop ebx
// 0067806e  64890d00000000       mov dword ptr fs:[0], ecx
// 00678075  81c4ac000000         add esp, 0xac
// 0067807b  c3                   ret 
// library openrbx-client/Rendering\AppDraw\DrawPrimitives.cpp (function ?rawBox@DrawPrimitives@RBX@@SAXABVAABox@G3D@@PAVRenderDevice@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/AppDraw/DrawPrimitives.cpp
