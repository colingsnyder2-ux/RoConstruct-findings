// roc 2008-06 00677300  unit: RBX::AdornG3D  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00677300
//
// 00677300  83ec18               sub esp, 0x18
// 00677303  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00677307  d94004               fld dword ptr [eax + 4]
// 0067730a  68d8f69700           push 0x97f6d8
// 0067730f  d944242c             fld dword ptr [esp + 0x2c]
// 00677313  68d4f69700           push 0x97f6d4
// 00677318  dcc9                 fmul st(1), st(0)
// 0067731a  8d4c2408             lea ecx, [esp + 8]
// 0067731e  d94008               fld dword ptr [eax + 8]
// 00677321  d8c9                 fmul st(1)
// 00677323  d9400c               fld dword ptr [eax + 0xc]
// 00677326  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0067732a  deca                 fmulp st(2)
// 0067732c  50                   push eax
// 0067732d  d905ac9b8100         fld dword ptr [0x819bac]
// 00677333  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00677337  51                   push ecx
// 00677338  dccb                 fmul st(3), st(0)
// 0067733a  8d5010               lea edx, [eax + 0x10]
// 0067733d  dcc9                 fmul st(1), st(0)
// 0067733f  52                   push edx
// 00677340  deca                 fmulp st(2)
// 00677342  83c004               add eax, 4
// 00677345  50                   push eax
// 00677346  d9c2                 fld st(2)
// 00677348  d9e0                 fchs 
// 0067734a  d9c1                 fld st(1)
// 0067734c  d9e0                 fchs 
// 0067734e  d9c3                 fld st(3)
// 00677350  d9e0                 fchs 
// 00677352  d9ca                 fxch st(2)
// 00677354  d95c2418             fstp dword ptr [esp + 0x18]
// 00677358  d95c241c             fstp dword ptr [esp + 0x1c]
// 0067735c  d95c2420             fstp dword ptr [esp + 0x20]
// 00677360  d9ca                 fxch st(2)
// 00677362  d95c2424             fstp dword ptr [esp + 0x24]
// 00677366  d9c9                 fxch st(1)
// 00677368  d95c2428             fstp dword ptr [esp + 0x28]
// 0067736c  d95c242c             fstp dword ptr [esp + 0x2c]
// 00677370  e8fb431400           call 0x7bb770
// 00677375  83c430               add esp, 0x30
// 00677378  c3                   ret 
// library openrbx-client/Rendering\AppDraw\HitTest.cpp (function ?hitTestBox@HitTest@RBX@@CA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client Rendering/AppDraw/HitTest.cpp
