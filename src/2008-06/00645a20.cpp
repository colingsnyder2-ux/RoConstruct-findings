// roc 2008-06 00645a20  unit: RBX::RigidJoint  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645a20
//
// 00645a20  8b442408             mov eax, dword ptr [esp + 8]
// 00645a24  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00645a28  d900                 fld dword ptr [eax]
// 00645a2a  d821                 fsub dword ptr [ecx]
// 00645a2c  d94004               fld dword ptr [eax + 4]
// 00645a2f  d86104               fsub dword ptr [ecx + 4]
// 00645a32  d94008               fld dword ptr [eax + 8]
// 00645a35  d86108               fsub dword ptr [ecx + 8]
// 00645a38  d9c2                 fld st(2)
// 00645a3a  decb                 fmulp st(3)
// 00645a3c  dcc8                 fmul st(0), st(0)
// 00645a3e  dec2                 faddp st(2)
// 00645a40  dcc8                 fmul st(0), st(0)
// 00645a42  dec1                 faddp st(1)
// 00645a44  d81da0ad8400         fcomp dword ptr [0x84ada0]
// 00645a4a  dfe0                 fnstsw ax
// 00645a4c  f6c441               test ah, 0x41
// 00645a4f  7506                 jne 0x645a57
// 00645a51  b801000000           mov eax, 1
// 00645a56  c3                   ret 
// 00645a57  33c0                 xor eax, eax
// 00645a59  c3                   ret 
// library rbxgs-dll/v8world\RotateJoint.cpp (function ?pointsUnaligned@Tolerance@RBX@@SA_NABVVector3@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8world/RotateJoint.cpp
