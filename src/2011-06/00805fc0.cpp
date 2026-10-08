// from server: 100% by auto
// roc 2011-06 00805fc0  unit: W4_D3DFORMAT::?$EnumDesc  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00805fc0
//
// 00805fc0  b801000000           mov eax, 1
// 00805fc5  8405887dd100         test byte ptr [0xd17d88], al
// 00805fcb  751d                 jne 0x805fea
// 00805fcd  0905887dd100         or dword ptr [0xd17d88], eax
// 00805fd3  b9f071d100           mov ecx, 0xd171f0
// 00805fd8  e8f3efffff           call 0x804fd0
// 00805fdd  6870faa300           push 0xa3fa70
// 00805fe2  e876510000           call 0x80b15d
// 00805fe7  83c404               add esp, 4
// 00805fea  b8f071d100           mov eax, 0xd171f0
// 00805fef  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
