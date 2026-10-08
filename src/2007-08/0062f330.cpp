// roc 2007-08 0062f330  unit: RBX::AdornG3D  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062f330
//
// 0062f330  83ec24               sub esp, 0x24
// 0062f333  8b442428             mov eax, dword ptr [esp + 0x28]
// 0062f337  d94004               fld dword ptr [eax + 4]
// 0062f33a  68cc9b8c00           push 0x8c9bcc
// 0062f33f  d9442438             fld dword ptr [esp + 0x38]
// 0062f343  68c89b8c00           push 0x8c9bc8
// 0062f348  d9c0                 fld st(0)
// 0062f34a  8d4c2414             lea ecx, [esp + 0x14]
// 0062f34e  deca                 fmulp st(2)
// 0062f350  d9c9                 fxch st(1)
// 0062f352  d95c2408             fstp dword ptr [esp + 8]
// 0062f356  d94008               fld dword ptr [eax + 8]
// 0062f359  d8c9                 fmul st(1)
// 0062f35b  d95c240c             fstp dword ptr [esp + 0xc]
// 0062f35f  d8480c               fmul dword ptr [eax + 0xc]
// 0062f362  8b442438             mov eax, dword ptr [esp + 0x38]
// 0062f366  50                   push eax
// 0062f367  8b442438             mov eax, dword ptr [esp + 0x38]
// 0062f36b  d95c2414             fstp dword ptr [esp + 0x14]
// 0062f36f  51                   push ecx
// 0062f370  d9442410             fld dword ptr [esp + 0x10]
// 0062f374  8d5010               lea edx, [eax + 0x10]
// 0062f377  dd05485b7900         fld qword ptr [0x795b48]
// 0062f37d  52                   push edx
// 0062f37e  dcc9                 fmul st(1), st(0)
// 0062f380  83c004               add eax, 4
// 0062f383  d9c9                 fxch st(1)
// 0062f385  50                   push eax
// 0062f386  d95c2424             fstp dword ptr [esp + 0x24]
// 0062f38a  d944241c             fld dword ptr [esp + 0x1c]
// 0062f38e  d8c9                 fmul st(1)
// 0062f390  d95c2428             fstp dword ptr [esp + 0x28]
// 0062f394  d84c2420             fmul dword ptr [esp + 0x20]
// 0062f398  d95c242c             fstp dword ptr [esp + 0x2c]
// 0062f39c  d9442424             fld dword ptr [esp + 0x24]
// 0062f3a0  d9c0                 fld st(0)
// 0062f3a2  d9e0                 fchs 
// 0062f3a4  d95c2418             fstp dword ptr [esp + 0x18]
// 0062f3a8  d9442428             fld dword ptr [esp + 0x28]
// 0062f3ac  d9c0                 fld st(0)
// 0062f3ae  d9e0                 fchs 
// 0062f3b0  d95c241c             fstp dword ptr [esp + 0x1c]
// 0062f3b4  d944242c             fld dword ptr [esp + 0x2c]
// 0062f3b8  d9c0                 fld st(0)
// 0062f3ba  d9e0                 fchs 
// 0062f3bc  d95c2420             fstp dword ptr [esp + 0x20]
// 0062f3c0  d9442418             fld dword ptr [esp + 0x18]
// 0062f3c4  d95c2424             fstp dword ptr [esp + 0x24]
// 0062f3c8  d944241c             fld dword ptr [esp + 0x1c]
// 0062f3cc  d95c2428             fstp dword ptr [esp + 0x28]
// 0062f3d0  d9442420             fld dword ptr [esp + 0x20]
// 0062f3d4  d95c242c             fstp dword ptr [esp + 0x2c]
// 0062f3d8  d9ca                 fxch st(2)
// 0062f3da  d95c2430             fstp dword ptr [esp + 0x30]
// 0062f3de  d95c2434             fstp dword ptr [esp + 0x34]
// 0062f3e2  d95c2438             fstp dword ptr [esp + 0x38]
// 0062f3e6  e835861000           call 0x737a20
// 0062f3eb  83c43c               add esp, 0x3c
// 0062f3ee  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?hitTestBox@HitTest@RBX@@CA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp
