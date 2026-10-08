// from server: 100% by auto
// roc 2011-06 004f2940  unit: RBX::Network::IdSerializer  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f2940
//
// 004f2940  64a100000000         mov eax, dword ptr fs:[0]
// 004f2946  6aff                 push -1
// 004f2948  681ebd9d00           push 0x9dbd1e
// 004f294d  50                   push eax
// 004f294e  b801000000           mov eax, 1
// 004f2953  64892500000000       mov dword ptr fs:[0], esp
// 004f295a  84053882cb00         test byte ptr [0xcb8238], al
// 004f2960  7524                 jne 0x4f2986
// 004f2962  09053882cb00         or dword ptr [0xcb8238], eax
// 004f2968  33c0                 xor eax, eax
// 004f296a  68903aa300           push 0xa33a90
// 004f296f  a32c82cb00           mov dword ptr [0xcb822c], eax
// 004f2974  a33082cb00           mov dword ptr [0xcb8230], eax
// 004f2979  a33482cb00           mov dword ptr [0xcb8234], eax
// 004f297e  e8da873100           call 0x80b15d
// 004f2983  83c404               add esp, 4
// 004f2986  8b0c24               mov ecx, dword ptr [esp]
// 004f2989  b82882cb00           mov eax, 0xcb8228
// 004f298e  64890d00000000       mov dword ptr fs:[0], ecx
// 004f2995  83c40c               add esp, 0xc
// 004f2998  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
