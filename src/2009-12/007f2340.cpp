// roc 2009-12 007f2340  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f2340
//
// 007f2340  b801000000           mov eax, 1
// 007f2345  8405dca9b900         test byte ptr [0xb9a9dc], al
// 007f234b  751d                 jne 0x7f236a
// 007f234d  0905dca9b900         or dword ptr [0xb9a9dc], eax
// 007f2353  b980a9b900           mov ecx, 0xb9a980
// 007f2358  e873f3ffff           call 0x7f16d0
// 007f235d  68e0a49800           push 0x98a4e0
// 007f2362  e8c2250000           call 0x7f4929
// 007f2367  83c404               add esp, 4
// 007f236a  b880a9b900           mov eax, 0xb9a980
// 007f236f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
