// roc 2007-08 004a00e0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a00e0
//
// 004a00e0  d9ee                 fldz 
// 004a00e2  dd442404             fld qword ptr [esp + 4]
// 004a00e6  d8d1                 fcom st(1)
// 004a00e8  dfe0                 fnstsw ax
// 004a00ea  f6c405               test ah, 5
// 004a00ed  7a04                 jp 0x4a00f3
// 004a00ef  b101                 mov cl, 1
// 004a00f1  eb02                 jmp 0x4a00f5
// 004a00f3  32c9                 xor cl, cl
// 004a00f5  d8d1                 fcom st(1)
// 004a00f7  dfe0                 fnstsw ax
// 004a00f9  ddd9                 fstp st(1)
// 004a00fb  f6c401               test ah, 1
// 004a00fe  7504                 jne 0x4a0104
// 004a0100  b001                 mov al, 1
// 004a0102  eb02                 jmp 0x4a0106
// 004a0104  32c0                 xor al, al
// 004a0106  84c9                 test cl, cl
// 004a0108  7504                 jne 0x4a010e
// 004a010a  84c0                 test al, al
// 004a010c  745e                 je 0x4a016c
// 004a010e  8b0d08d18b00         mov ecx, dword ptr [0x8bd108]
// 004a0114  f6c101               test cl, 1
// 004a0117  8b1564e57700         mov edx, dword ptr [0x77e564]
// 004a011d  7513                 jne 0x4a0132
// 004a011f  83c901               or ecx, 1
// 004a0122  890d08d18b00         mov dword ptr [0x8bd108], ecx
// 004a0128  dd02                 fld qword ptr [edx]
// 004a012a  dd1500d18b00         fst qword ptr [0x8bd100]
// 004a0130  eb06                 jmp 0x4a0138
// 004a0132  dd0500d18b00         fld qword ptr [0x8bd100]
// 004a0138  d8d1                 fcom st(1)
// 004a013a  dfe0                 fnstsw ax
// 004a013c  f6c441               test ah, 0x41
// 004a013f  7529                 jne 0x4a016a
// 004a0141  f6c101               test cl, 1
// 004a0144  7513                 jne 0x4a0159
// 004a0146  83c901               or ecx, 1
// 004a0149  ddd8                 fstp st(0)
// 004a014b  890d08d18b00         mov dword ptr [0x8bd108], ecx
// 004a0151  dd02                 fld qword ptr [edx]
// 004a0153  dd1500d18b00         fst qword ptr [0x8bd100]
// 004a0159  d9e0                 fchs 
// 004a015b  ded9                 fcompp 
// 004a015d  dfe0                 fnstsw ax
// 004a015f  f6c405               test ah, 5
// 004a0162  7a0a                 jp 0x4a016e
// 004a0164  b801000000           mov eax, 1
// 004a0169  c3                   ret 
// 004a016a  ddd9                 fstp st(1)
// 004a016c  ddd8                 fstp st(0)
// 004a016e  33c0                 xor eax, eax
// 004a0170  c3                   ret 
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ?isFinite@G3D@@YA_NN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
