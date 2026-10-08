// roc 2007-03 0061dbb0  unit: seg_00610000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061dbb0
//
// 0061dbb0  83ec24               sub esp, 0x24
// 0061dbb3  8b442428             mov eax, dword ptr [esp + 0x28]
// 0061dbb7  d94004               fld dword ptr [eax + 4]
// 0061dbba  68842c8c00           push 0x8c2c84
// 0061dbbf  d9442438             fld dword ptr [esp + 0x38]
// 0061dbc3  68802c8c00           push 0x8c2c80
// 0061dbc8  d9c0                 fld st(0)
// 0061dbca  8d4c2414             lea ecx, [esp + 0x14]
// 0061dbce  deca                 fmulp st(2)
// 0061dbd0  d9c9                 fxch st(1)
// 0061dbd2  d95c2408             fstp dword ptr [esp + 8]
// 0061dbd6  d94008               fld dword ptr [eax + 8]
// 0061dbd9  d8c9                 fmul st(1)
// 0061dbdb  d95c240c             fstp dword ptr [esp + 0xc]
// 0061dbdf  d8480c               fmul dword ptr [eax + 0xc]
// 0061dbe2  8b442438             mov eax, dword ptr [esp + 0x38]
// 0061dbe6  50                   push eax
// 0061dbe7  8b442438             mov eax, dword ptr [esp + 0x38]
// 0061dbeb  d95c2414             fstp dword ptr [esp + 0x14]
// 0061dbef  51                   push ecx
// 0061dbf0  d9442410             fld dword ptr [esp + 0x10]
// 0061dbf4  8d5010               lea edx, [eax + 0x10]
// 0061dbf7  dd05584f7900         fld qword ptr [0x794f58]
// 0061dbfd  52                   push edx
// 0061dbfe  dcc9                 fmul st(1), st(0)
// 0061dc00  83c004               add eax, 4
// 0061dc03  d9c9                 fxch st(1)
// 0061dc05  50                   push eax
// 0061dc06  d95c2424             fstp dword ptr [esp + 0x24]
// 0061dc0a  d944241c             fld dword ptr [esp + 0x1c]
// 0061dc0e  d8c9                 fmul st(1)
// 0061dc10  d95c2428             fstp dword ptr [esp + 0x28]
// 0061dc14  d84c2420             fmul dword ptr [esp + 0x20]
// 0061dc18  d95c242c             fstp dword ptr [esp + 0x2c]
// 0061dc1c  d9442424             fld dword ptr [esp + 0x24]
// 0061dc20  d9c0                 fld st(0)
// 0061dc22  d9e0                 fchs 
// 0061dc24  d95c2418             fstp dword ptr [esp + 0x18]
// 0061dc28  d9442428             fld dword ptr [esp + 0x28]
// 0061dc2c  d9c0                 fld st(0)
// 0061dc2e  d9e0                 fchs 
// 0061dc30  d95c241c             fstp dword ptr [esp + 0x1c]
// 0061dc34  d944242c             fld dword ptr [esp + 0x2c]
// 0061dc38  d9c0                 fld st(0)
// 0061dc3a  d9e0                 fchs 
// 0061dc3c  d95c2420             fstp dword ptr [esp + 0x20]
// 0061dc40  d9442418             fld dword ptr [esp + 0x18]
// 0061dc44  d95c2424             fstp dword ptr [esp + 0x24]
// 0061dc48  d944241c             fld dword ptr [esp + 0x1c]
// 0061dc4c  d95c2428             fstp dword ptr [esp + 0x28]
// 0061dc50  d9442420             fld dword ptr [esp + 0x20]
// 0061dc54  d95c242c             fstp dword ptr [esp + 0x2c]
// 0061dc58  d9ca                 fxch st(2)
// 0061dc5a  d95c2430             fstp dword ptr [esp + 0x30]
// 0061dc5e  d95c2434             fstp dword ptr [esp + 0x34]
// 0061dc62  d95c2438             fstp dword ptr [esp + 0x38]
// 0061dc66  e825c41100           call 0x73a090
// 0061dc6b  83c43c               add esp, 0x3c
// 0061dc6e  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?hitTestBox@HitTest@RBX@@CA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp
