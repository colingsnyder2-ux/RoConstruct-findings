// roc 2009-06 00840a20  unit: Ogre::RbxSceneNode  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00840a20
//
// 00840a20  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00840a24  d901                 fld dword ptr [ecx]
// 00840a26  53                   push ebx
// 00840a27  55                   push ebp
// 00840a28  56                   push esi
// 00840a29  57                   push edi
// 00840a2a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00840a2e  8d87a8040000         lea eax, [edi + 0x4a8]
// 00840a34  d918                 fstp dword ptr [eax]
// 00840a36  50                   push eax
// 00840a37  d94104               fld dword ptr [ecx + 4]
// 00840a3a  d95804               fstp dword ptr [eax + 4]
// 00840a3d  d94108               fld dword ptr [ecx + 8]
// 00840a40  d95808               fstp dword ptr [eax + 8]
// 00840a43  d9410c               fld dword ptr [ecx + 0xc]
// 00840a46  d9580c               fstp dword ptr [eax + 0xc]
// 00840a49  ff1594eb8900         call dword ptr [0x89eb94]
// 00840a4f  6a05                 push 5
// 00840a51  8bcf                 mov ecx, edi
// 00840a53  e8c81ec6ff           call 0x4a2920
// 00840a58  d9ee                 fldz 
// 00840a5a  8b1da0ea8900         mov ebx, dword ptr [0x89eaa0]
// 00840a60  83ec08               sub esp, 8
// 00840a63  d9542404             fst dword ptr [esp + 4]
// 00840a67  d91c24               fstp dword ptr [esp]
// 00840a6a  ffd3                 call ebx
// 00840a6c  8b742414             mov esi, dword ptr [esp + 0x14]
// 00840a70  d94604               fld dword ptr [esi + 4]
// 00840a73  8b2d64ea8900         mov ebp, dword ptr [0x89ea64]
// 00840a79  83ec08               sub esp, 8
// 00840a7c  d95c2404             fstp dword ptr [esp + 4]
// 00840a80  d906                 fld dword ptr [esi]
// 00840a82  d91c24               fstp dword ptr [esp]
// 00840a85  ffd5                 call ebp
// 00840a87  d9e8                 fld1 
// 00840a89  83ec08               sub esp, 8
// 00840a8c  d95c2404             fstp dword ptr [esp + 4]
// 00840a90  d9ee                 fldz 
// 00840a92  d91c24               fstp dword ptr [esp]
// 00840a95  ffd3                 call ebx
// 00840a97  d9460c               fld dword ptr [esi + 0xc]
// 00840a9a  83ec08               sub esp, 8
// 00840a9d  d95c2404             fstp dword ptr [esp + 4]
// 00840aa1  d906                 fld dword ptr [esi]
// 00840aa3  d91c24               fstp dword ptr [esp]
// 00840aa6  ffd5                 call ebp
// 00840aa8  d9e8                 fld1 
// 00840aaa  83ec08               sub esp, 8
// 00840aad  d9542404             fst dword ptr [esp + 4]
// 00840ab1  d91c24               fstp dword ptr [esp]
// 00840ab4  ffd3                 call ebx
// 00840ab6  d9460c               fld dword ptr [esi + 0xc]
// 00840ab9  83ec08               sub esp, 8
// 00840abc  d95c2404             fstp dword ptr [esp + 4]
// 00840ac0  d94608               fld dword ptr [esi + 8]
// 00840ac3  d91c24               fstp dword ptr [esp]
// 00840ac6  ffd5                 call ebp
// 00840ac8  d9ee                 fldz 
// 00840aca  83ec08               sub esp, 8
// 00840acd  d95c2404             fstp dword ptr [esp + 4]
// 00840ad1  d9e8                 fld1 
// 00840ad3  d91c24               fstp dword ptr [esp]
// 00840ad6  ffd3                 call ebx
// 00840ad8  d94604               fld dword ptr [esi + 4]
// 00840adb  83ec08               sub esp, 8
// 00840ade  d95c2404             fstp dword ptr [esp + 4]
// 00840ae2  d94608               fld dword ptr [esi + 8]
// 00840ae5  d91c24               fstp dword ptr [esp]
// 00840ae8  ffd5                 call ebp
// 00840aea  8bcf                 mov ecx, edi
// 00840aec  e87ff4c5ff           call 0x49ff70
// 00840af1  83477008             add dword ptr [edi + 0x70], 8
// 00840af5  5f                   pop edi
// 00840af6  5e                   pop esi
// 00840af7  5d                   pop ebp
// 00840af8  5b                   pop ebx
// 00840af9  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?fastRect2D@Draw@G3D@@SAXABVRect2D@2@PAVRenderDevice@2@ABVColor4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
