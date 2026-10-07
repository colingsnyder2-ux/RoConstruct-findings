// roc 2009-06 005730e0  unit: G3D::Ray  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005730e0
//
// 005730e0  d9ee                 fldz 
// 005730e2  8bc1                 mov eax, ecx
// 005730e4  b901000000           mov ecx, 1
// 005730e9  c70014b78c00         mov dword ptr [eax], 0x8cb714
// 005730ef  840db01ca400         test byte ptr [0xa41cb0], cl
// 005730f5  751a                 jne 0x573111
// 005730f7  090db01ca400         or dword ptr [0xa41cb0], ecx
// 005730fd  d915a41ca400         fst dword ptr [0xa41ca4]
// 00573103  d9e8                 fld1 
// 00573105  d91da81ca400         fstp dword ptr [0xa41ca8]
// 0057310b  d915ac1ca400         fst dword ptr [0xa41cac]
// 00573111  d905a41ca400         fld dword ptr [0xa41ca4]
// 00573117  d95804               fstp dword ptr [eax + 4]
// 0057311a  d905a81ca400         fld dword ptr [0xa41ca8]
// 00573120  d95808               fstp dword ptr [eax + 8]
// 00573123  d905ac1ca400         fld dword ptr [0xa41cac]
// 00573129  d9580c               fstp dword ptr [eax + 0xc]
// 0057312c  d95810               fstp dword ptr [eax + 0x10]
// 0057312f  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??0Plane@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
