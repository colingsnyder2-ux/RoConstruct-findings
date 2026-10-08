// roc 2009-12 007f9c80  unit: CXTPControlComboBoxList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9c80
//
// 007f9c80  6aff                 push -1
// 007f9c82  68ee8a9500           push 0x958aee
// 007f9c87  64a100000000         mov eax, dword ptr fs:[0]
// 007f9c8d  50                   push eax
// 007f9c8e  a10052b600           mov eax, dword ptr [0xb65200]
// 007f9c93  33c4                 xor eax, esp
// 007f9c95  50                   push eax
// 007f9c96  8d442404             lea eax, [esp + 4]
// 007f9c9a  64a300000000         mov dword ptr fs:[0], eax
// 007f9ca0  b801000000           mov eax, 1
// 007f9ca5  8405a0adb900         test byte ptr [0xb9ada0], al
// 007f9cab  7525                 jne 0x7f9cd2
// 007f9cad  0905a0adb900         or dword ptr [0xb9ada0], eax
// 007f9cb3  b994adb900           mov ecx, 0xb9ad94
// 007f9cb8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007f9cc0  e89bf1ffff           call 0x7f8e60
// 007f9cc5  68f0a49800           push 0x98a4f0
// 007f9cca  e85aacffff           call 0x7f4929
// 007f9ccf  83c404               add esp, 4
// 007f9cd2  b894adb900           mov eax, 0xb9ad94
// 007f9cd7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007f9cdb  64890d00000000       mov dword ptr fs:[0], ecx
// 007f9ce2  59                   pop ecx
// 007f9ce3  83c40c               add esp, 0xc
// 007f9ce6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
