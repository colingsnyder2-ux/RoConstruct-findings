// roc 2011-06 00808aa0  unit: seg_00800000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00808aa0
//
// 00808aa0  b801000000           mov eax, 1
// 00808aa5  8405ec7dd100         test byte ptr [0xd17dec], al
// 00808aab  751d                 jne 0x808aca
// 00808aad  0905ec7dd100         or dword ptr [0xd17dec], eax
// 00808ab3  b9907dd100           mov ecx, 0xd17d90
// 00808ab8  e873f3ffff           call 0x807e30
// 00808abd  6890faa300           push 0xa3fa90
// 00808ac2  e896260000           call 0x80b15d
// 00808ac7  83c404               add esp, 4
// 00808aca  b8907dd100           mov eax, 0xd17d90
// 00808acf  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
