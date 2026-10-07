// roc 2012-06 0054af10  unit: RBX::VInsertService::?$FactoryProduct::Creator  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0054af10
//
// 0054af10  64a100000000         mov eax, dword ptr fs:[0]
// 0054af16  6aff                 push -1
// 0054af18  683ed2aa00           push 0xaad23e
// 0054af1d  50                   push eax
// 0054af1e  b801000000           mov eax, 1
// 0054af23  64892500000000       mov dword ptr fs:[0], esp
// 0054af2a  8405e416e200         test byte ptr [0xe216e4], al
// 0054af30  7525                 jne 0x54af57
// 0054af32  0905e416e200         or dword ptr [0xe216e4], eax
// 0054af38  b93816e200           mov ecx, 0xe21638
// 0054af3d  c744240800000000     mov dword ptr [esp + 8], 0
// 0054af45  e866fbffff           call 0x54aab0
// 0054af4a  68e039b100           push 0xb139e0
// 0054af4f  e8a1824300           call 0x9831f5
// 0054af54  83c404               add esp, 4
// 0054af57  8b0c24               mov ecx, dword ptr [esp]
// 0054af5a  b83816e200           mov eax, 0xe21638
// 0054af5f  64890d00000000       mov dword ptr fs:[0], ecx
// 0054af66  83c40c               add esp, 0xc
// 0054af69  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
