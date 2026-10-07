// roc 2012-06 00a66a30  unit: CXTPOffice2007Image  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a66a30
//
// 00a66a30  6aff                 push -1
// 00a66a32  685e83ae00           push 0xae835e
// 00a66a37  64a100000000         mov eax, dword ptr fs:[0]
// 00a66a3d  50                   push eax
// 00a66a3e  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a66a43  33c4                 xor eax, esp
// 00a66a45  50                   push eax
// 00a66a46  8d442404             lea eax, [esp + 4]
// 00a66a4a  64a300000000         mov dword ptr fs:[0], eax
// 00a66a50  b801000000           mov eax, 1
// 00a66a55  8405f8a3e500         test byte ptr [0xe5a3f8], al
// 00a66a5b  7525                 jne 0xa66a82
// 00a66a5d  0905f8a3e500         or dword ptr [0xe5a3f8], eax
// 00a66a63  b9b0a3e500           mov ecx, 0xe5a3b0
// 00a66a68  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00a66a70  e89bf7ffff           call 0xa66210
// 00a66a75  682018b200           push 0xb21820
// 00a66a7a  e876c7f1ff           call 0x9831f5
// 00a66a7f  83c404               add esp, 4
// 00a66a82  b8b0a3e500           mov eax, 0xe5a3b0
// 00a66a87  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a66a8b  64890d00000000       mov dword ptr fs:[0], ecx
// 00a66a92  59                   pop ecx
// 00a66a93  83c40c               add esp, 0xc
// 00a66a96  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
