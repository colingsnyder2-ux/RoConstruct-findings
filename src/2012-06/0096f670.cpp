// roc 2012-06 0096f670  unit: W4_D3DFORMAT::?$EnumDesc  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0096f670
//
// 0096f670  b801000000           mov eax, 1
// 0096f675  8405f87fe500         test byte ptr [0xe57ff8], al
// 0096f67b  751d                 jne 0x96f69a
// 0096f67d  0905f87fe500         or dword ptr [0xe57ff8], eax
// 0096f683  b96074e500           mov ecx, 0xe57460
// 0096f688  e8c3efffff           call 0x96e650
// 0096f68d  68c014b200           push 0xb214c0
// 0096f692  e85e3b0100           call 0x9831f5
// 0096f697  83c404               add esp, 4
// 0096f69a  b86074e500           mov eax, 0xe57460
// 0096f69f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
