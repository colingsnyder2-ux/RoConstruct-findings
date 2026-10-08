// from server: 100% by auto
// roc 2012-06 00972120  unit: seg_00970000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00972120
//
// 00972120  b801000000           mov eax, 1
// 00972125  84055c80e500         test byte ptr [0xe5805c], al
// 0097212b  751d                 jne 0x97214a
// 0097212d  09055c80e500         or dword ptr [0xe5805c], eax
// 00972133  b90080e500           mov ecx, 0xe58000
// 00972138  e873f3ffff           call 0x9714b0
// 0097213d  68e014b200           push 0xb214e0
// 00972142  e8ae100100           call 0x9831f5
// 00972147  83c404               add esp, 4
// 0097214a  b80080e500           mov eax, 0xe58000
// 0097214f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
