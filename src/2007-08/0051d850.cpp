// from server: 100% by auto
// roc 2007-08 0051d850  unit: seg_00510000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051d850
//
// 0051d850  83ec0c               sub esp, 0xc
// 0051d853  6a02                 push 2
// 0051d855  8d442404             lea eax, [esp + 4]
// 0051d859  50                   push eax
// 0051d85a  e8e1bdfeff           call 0x509640
// 0051d85f  d900                 fld dword ptr [eax]
// 0051d861  dd0590657900         fld qword ptr [0x796590]
// 0051d867  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051d86b  dcc9                 fmul st(1), st(0)
// 0051d86d  d9c9                 fxch st(1)
// 0051d86f  d919                 fstp dword ptr [ecx]
// 0051d871  d94004               fld dword ptr [eax + 4]
// 0051d874  d8c9                 fmul st(1)
// 0051d876  d95904               fstp dword ptr [ecx + 4]
// 0051d879  d84808               fmul dword ptr [eax + 8]
// 0051d87c  8bc1                 mov eax, ecx
// 0051d87e  d95908               fstp dword ptr [ecx + 8]
// 0051d881  83c40c               add esp, 0xc
// 0051d884  c20400               ret 4
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?lookVector@CoordinateFrame@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
