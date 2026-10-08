// roc 2007-08 0062f6e0  unit: RBX::IndexBox  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062f6e0
//
// 0062f6e0  6aff                 push -1
// 0062f6e2  68a8d77500           push 0x75d7a8
// 0062f6e7  64a100000000         mov eax, dword ptr fs:[0]
// 0062f6ed  50                   push eax
// 0062f6ee  64892500000000       mov dword ptr fs:[0], esp
// 0062f6f5  81eca0000000         sub esp, 0xa0
// 0062f6fb  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 0062f702  53                   push ebx
// 0062f703  56                   push esi
// 0062f704  57                   push edi
// 0062f705  8d480c               lea ecx, [eax + 0xc]
// 0062f708  51                   push ecx
// 0062f709  50                   push eax
// 0062f70a  8d4c2450             lea ecx, [esp + 0x50]
// 0062f70e  e84d8b1000           call 0x738260
// 0062f713  d9ee                 fldz 
// 0062f715  8bb424c0000000       mov esi, dword ptr [esp + 0xc0]
// 0062f71c  d9542430             fst dword ptr [esp + 0x30]
// 0062f720  d9542434             fst dword ptr [esp + 0x34]
// 0062f724  33db                 xor ebx, ebx
// 0062f726  d9542438             fst dword ptr [esp + 0x38]
// 0062f72a  6a05                 push 5
// 0062f72c  d9542428             fst dword ptr [esp + 0x28]
// 0062f730  8bce                 mov ecx, esi
// 0062f732  d954242c             fst dword ptr [esp + 0x2c]
// 0062f736  899c24b8000000       mov dword ptr [esp + 0xb8], ebx
// 0062f73d  d9542430             fst dword ptr [esp + 0x30]
// 0062f741  d9542410             fst dword ptr [esp + 0x10]
// 0062f745  d9542414             fst dword ptr [esp + 0x14]
// 0062f749  d9542418             fst dword ptr [esp + 0x18]
// 0062f74d  d954241c             fst dword ptr [esp + 0x1c]
// 0062f751  d9542420             fst dword ptr [esp + 0x20]
// 0062f755  d95c2424             fstp dword ptr [esp + 0x24]
// 0062f759  e8e286e4ff           call 0x477e40
// 0062f75e  bfe48d7e00           mov edi, 0x7e8de4
// 0062f763  8d542418             lea edx, [esp + 0x18]
// 0062f767  52                   push edx
// 0062f768  8d442410             lea eax, [esp + 0x10]
// 0062f76c  50                   push eax
// 0062f76d  8d4c242c             lea ecx, [esp + 0x2c]
// 0062f771  51                   push ecx
// 0062f772  8d54243c             lea edx, [esp + 0x3c]
// 0062f776  52                   push edx
// 0062f777  53                   push ebx
// 0062f778  8d4c245c             lea ecx, [esp + 0x5c]
// 0062f77c  e83f8a1000           call 0x7381c0
// 0062f781  d947fc               fld dword ptr [edi - 4]
// 0062f784  d95c243c             fstp dword ptr [esp + 0x3c]
// 0062f788  8d44243c             lea eax, [esp + 0x3c]
// 0062f78c  d907                 fld dword ptr [edi]
// 0062f78e  50                   push eax
// 0062f78f  d95c2444             fstp dword ptr [esp + 0x44]
// 0062f793  8bce                 mov ecx, esi
// 0062f795  d94704               fld dword ptr [edi + 4]
// 0062f798  d95c2448             fstp dword ptr [esp + 0x48]
// 0062f79c  e83f53e4ff           call 0x474ae0
// 0062f7a1  8d4c2430             lea ecx, [esp + 0x30]
// 0062f7a5  51                   push ecx
// 0062f7a6  8bce                 mov ecx, esi
// 0062f7a8  e84354e4ff           call 0x474bf0
// 0062f7ad  8d542424             lea edx, [esp + 0x24]
// 0062f7b1  52                   push edx
// 0062f7b2  8bce                 mov ecx, esi
// 0062f7b4  e83754e4ff           call 0x474bf0
// 0062f7b9  8d44240c             lea eax, [esp + 0xc]
// 0062f7bd  50                   push eax
// 0062f7be  8bce                 mov ecx, esi
// 0062f7c0  e82b54e4ff           call 0x474bf0
// 0062f7c5  8d4c2418             lea ecx, [esp + 0x18]
// 0062f7c9  51                   push ecx
// 0062f7ca  8bce                 mov ecx, esi
// 0062f7cc  e81f54e4ff           call 0x474bf0
// 0062f7d1  83c70c               add edi, 0xc
// 0062f7d4  83c301               add ebx, 1
// 0062f7d7  81ff2c8e7e00         cmp edi, 0x7e8e2c
// 0062f7dd  7c84                 jl 0x62f763
// 0062f7df  8bce                 mov ecx, esi
// 0062f7e1  e80a60e4ff           call 0x4757f0
// 0062f7e6  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 0062f7ed  5f                   pop edi
// 0062f7ee  5e                   pop esi
// 0062f7ef  5b                   pop ebx
// 0062f7f0  64890d00000000       mov dword ptr fs:[0], ecx
// 0062f7f7  81c4ac000000         add esp, 0xac
// 0062f7fd  c3                   ret 
// library openrbx-client/Rendering\AppDraw\DrawPrimitives.cpp (function ?rawBox@DrawPrimitives@RBX@@SAXABVAABox@G3D@@PAVRenderDevice@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/AppDraw/DrawPrimitives.cpp
