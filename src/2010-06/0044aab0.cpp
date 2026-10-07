// roc 2010-06 0044aab0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044aab0
//
// 0044aab0  64a100000000         mov eax, dword ptr fs:[0]
// 0044aab6  6aff                 push -1
// 0044aab8  683e169800           push 0x98163e
// 0044aabd  50                   push eax
// 0044aabe  b801000000           mov eax, 1
// 0044aac3  64892500000000       mov dword ptr fs:[0], esp
// 0044aaca  84051c0fc000         test byte ptr [0xc00f1c], al
// 0044aad0  7525                 jne 0x44aaf7
// 0044aad2  09051c0fc000         or dword ptr [0xc00f1c], eax
// 0044aad8  b9300ec000           mov ecx, 0xc00e30
// 0044aadd  c744240800000000     mov dword ptr [esp + 8], 0
// 0044aae5  e8e6f1ffff           call 0x449cd0
// 0044aaea  6810b89d00           push 0x9db810
// 0044aaef  e86fdf3500           call 0x7a8a63
// 0044aaf4  83c404               add esp, 4
// 0044aaf7  8b0c24               mov ecx, dword ptr [esp]
// 0044aafa  b8300ec000           mov eax, 0xc00e30
// 0044aaff  64890d00000000       mov dword ptr fs:[0], ecx
// 0044ab06  83c40c               add esp, 0xc
// 0044ab09  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
