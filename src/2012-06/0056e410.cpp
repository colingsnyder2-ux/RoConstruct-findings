// roc 2012-06 0056e410  unit: RBX::Network::IdSerializer  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056e410
//
// 0056e410  64a100000000         mov eax, dword ptr fs:[0]
// 0056e416  6aff                 push -1
// 0056e418  687eefaa00           push 0xaaef7e
// 0056e41d  50                   push eax
// 0056e41e  b801000000           mov eax, 1
// 0056e423  64892500000000       mov dword ptr fs:[0], esp
// 0056e42a  8405d445e200         test byte ptr [0xe245d4], al
// 0056e430  7524                 jne 0x56e456
// 0056e432  0905d445e200         or dword ptr [0xe245d4], eax
// 0056e438  33c0                 xor eax, eax
// 0056e43a  685045b100           push 0xb14550
// 0056e43f  a3c845e200           mov dword ptr [0xe245c8], eax
// 0056e444  a3cc45e200           mov dword ptr [0xe245cc], eax
// 0056e449  a3d045e200           mov dword ptr [0xe245d0], eax
// 0056e44e  e8a24d4100           call 0x9831f5
// 0056e453  83c404               add esp, 4
// 0056e456  8b0c24               mov ecx, dword ptr [esp]
// 0056e459  b8c445e200           mov eax, 0xe245c4
// 0056e45e  64890d00000000       mov dword ptr fs:[0], ecx
// 0056e465  83c40c               add esp, 0xc
// 0056e468  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
