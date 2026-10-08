// from server: 100% by auto
// roc 2009-06 004dc570  unit: RBX::Network::ConcurrentRakPeer::PacketJob  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004dc570
//
// 004dc570  d9ee                 fldz 
// 004dc572  dd442404             fld qword ptr [esp + 4]
// 004dc576  d8d1                 fcom st(1)
// 004dc578  dfe0                 fnstsw ax
// 004dc57a  f6c405               test ah, 5
// 004dc57d  7a04                 jp 0x4dc583
// 004dc57f  b101                 mov cl, 1
// 004dc581  eb02                 jmp 0x4dc585
// 004dc583  32c9                 xor cl, cl
// 004dc585  d8d1                 fcom st(1)
// 004dc587  dfe0                 fnstsw ax
// 004dc589  ddd9                 fstp st(1)
// 004dc58b  f6c401               test ah, 1
// 004dc58e  7504                 jne 0x4dc594
// 004dc590  b001                 mov al, 1
// 004dc592  eb02                 jmp 0x4dc596
// 004dc594  32c0                 xor al, al
// 004dc596  84c9                 test cl, cl
// 004dc598  7504                 jne 0x4dc59e
// 004dc59a  84c0                 test al, al
// 004dc59c  745e                 je 0x4dc5fc
// 004dc59e  8b0db8c8a300         mov ecx, dword ptr [0xa3c8b8]
// 004dc5a4  8b1544e58900         mov edx, dword ptr [0x89e544]
// 004dc5aa  f6c101               test cl, 1
// 004dc5ad  7513                 jne 0x4dc5c2
// 004dc5af  83c901               or ecx, 1
// 004dc5b2  890db8c8a300         mov dword ptr [0xa3c8b8], ecx
// 004dc5b8  dd02                 fld qword ptr [edx]
// 004dc5ba  dd15b0c8a300         fst qword ptr [0xa3c8b0]
// 004dc5c0  eb06                 jmp 0x4dc5c8
// 004dc5c2  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 004dc5c8  d8d1                 fcom st(1)
// 004dc5ca  dfe0                 fnstsw ax
// 004dc5cc  f6c441               test ah, 0x41
// 004dc5cf  7529                 jne 0x4dc5fa
// 004dc5d1  f6c101               test cl, 1
// 004dc5d4  7513                 jne 0x4dc5e9
// 004dc5d6  83c901               or ecx, 1
// 004dc5d9  ddd8                 fstp st(0)
// 004dc5db  890db8c8a300         mov dword ptr [0xa3c8b8], ecx
// 004dc5e1  dd02                 fld qword ptr [edx]
// 004dc5e3  dd15b0c8a300         fst qword ptr [0xa3c8b0]
// 004dc5e9  d9e0                 fchs 
// 004dc5eb  ded9                 fcompp 
// 004dc5ed  dfe0                 fnstsw ax
// 004dc5ef  f6c405               test ah, 5
// 004dc5f2  7a0a                 jp 0x4dc5fe
// 004dc5f4  b801000000           mov eax, 1
// 004dc5f9  c3                   ret 
// 004dc5fa  ddd9                 fstp st(1)
// 004dc5fc  ddd8                 fstp st(0)
// 004dc5fe  33c0                 xor eax, eax
// 004dc600  c3                   ret 
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ?isFinite@G3D@@YA_NN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
