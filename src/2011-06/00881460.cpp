// from server: 100% by auto
// roc 2011-06 00881460  unit: CXTPMouseManager  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881460
//
// 00881460  b801000000           mov eax, 1
// 00881465  8405048fd100         test byte ptr [0xd18f04], al
// 0088146b  751d                 jne 0x88148a
// 0088146d  0905048fd100         or dword ptr [0xd18f04], eax
// 00881473  b9f48ed100           mov ecx, 0xd18ef4
// 00881478  e833ffffff           call 0x8813b0
// 0088147d  68e0fca300           push 0xa3fce0
// 00881482  e8d69cf8ff           call 0x80b15d
// 00881487  83c404               add esp, 4
// 0088148a  b8f48ed100           mov eax, 0xd18ef4
// 0088148f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
