// roc 2009-12 00910470  unit: RBX::RenderNew::RenderScene  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00910470
//
// 00910470  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00910474  d901                 fld dword ptr [ecx]
// 00910476  53                   push ebx
// 00910477  55                   push ebp
// 00910478  56                   push esi
// 00910479  57                   push edi
// 0091047a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0091047e  8d87a8040000         lea eax, [edi + 0x4a8]
// 00910484  d918                 fstp dword ptr [eax]
// 00910486  50                   push eax
// 00910487  d94104               fld dword ptr [ecx + 4]
// 0091048a  d95804               fstp dword ptr [eax + 4]
// 0091048d  d94108               fld dword ptr [ecx + 8]
// 00910490  d95808               fstp dword ptr [eax + 8]
// 00910493  d9410c               fld dword ptr [ecx + 0xc]
// 00910496  d9580c               fstp dword ptr [eax + 0xc]
// 00910499  ff15b8bb9800         call dword ptr [0x98bbb8]
// 0091049f  6a05                 push 5
// 009104a1  8bcf                 mov ecx, edi
// 009104a3  e858eebbff           call 0x4cf300
// 009104a8  d9ee                 fldz 
// 009104aa  8b1d6cbb9800         mov ebx, dword ptr [0x98bb6c]
// 009104b0  83ec08               sub esp, 8
// 009104b3  d9542404             fst dword ptr [esp + 4]
// 009104b7  d91c24               fstp dword ptr [esp]
// 009104ba  ffd3                 call ebx
// 009104bc  8b742414             mov esi, dword ptr [esp + 0x14]
// 009104c0  d94604               fld dword ptr [esi + 4]
// 009104c3  8b2d94bb9800         mov ebp, dword ptr [0x98bb94]
// 009104c9  83ec08               sub esp, 8
// 009104cc  d95c2404             fstp dword ptr [esp + 4]
// 009104d0  d906                 fld dword ptr [esi]
// 009104d2  d91c24               fstp dword ptr [esp]
// 009104d5  ffd5                 call ebp
// 009104d7  d9e8                 fld1 
// 009104d9  83ec08               sub esp, 8
// 009104dc  d95c2404             fstp dword ptr [esp + 4]
// 009104e0  d9ee                 fldz 
// 009104e2  d91c24               fstp dword ptr [esp]
// 009104e5  ffd3                 call ebx
// 009104e7  d9460c               fld dword ptr [esi + 0xc]
// 009104ea  83ec08               sub esp, 8
// 009104ed  d95c2404             fstp dword ptr [esp + 4]
// 009104f1  d906                 fld dword ptr [esi]
// 009104f3  d91c24               fstp dword ptr [esp]
// 009104f6  ffd5                 call ebp
// 009104f8  d9e8                 fld1 
// 009104fa  83ec08               sub esp, 8
// 009104fd  d9542404             fst dword ptr [esp + 4]
// 00910501  d91c24               fstp dword ptr [esp]
// 00910504  ffd3                 call ebx
// 00910506  d9460c               fld dword ptr [esi + 0xc]
// 00910509  83ec08               sub esp, 8
// 0091050c  d95c2404             fstp dword ptr [esp + 4]
// 00910510  d94608               fld dword ptr [esi + 8]
// 00910513  d91c24               fstp dword ptr [esp]
// 00910516  ffd5                 call ebp
// 00910518  d9ee                 fldz 
// 0091051a  83ec08               sub esp, 8
// 0091051d  d95c2404             fstp dword ptr [esp + 4]
// 00910521  d9e8                 fld1 
// 00910523  d91c24               fstp dword ptr [esp]
// 00910526  ffd3                 call ebx
// 00910528  d94604               fld dword ptr [esi + 4]
// 0091052b  83ec08               sub esp, 8
// 0091052e  d95c2404             fstp dword ptr [esp + 4]
// 00910532  d94608               fld dword ptr [esi + 8]
// 00910535  d91c24               fstp dword ptr [esp]
// 00910538  ffd5                 call ebp
// 0091053a  8bcf                 mov ecx, edi
// 0091053c  e83fc1bbff           call 0x4cc680
// 00910541  83477008             add dword ptr [edi + 0x70], 8
// 00910545  5f                   pop edi
// 00910546  5e                   pop esi
// 00910547  5d                   pop ebp
// 00910548  5b                   pop ebx
// 00910549  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?fastRect2D@Draw@G3D@@SAXABVRect2D@2@PAVRenderDevice@2@ABVColor4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
