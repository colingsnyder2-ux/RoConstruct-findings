// roc 2007-08 005093b0  unit: G3D::GCamera  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005093b0
//
// 005093b0  8b442404             mov eax, dword ptr [esp + 4]
// 005093b4  50                   push eax
// 005093b5  683c0b7a00           push 0x7a0b3c
// 005093ba  51                   push ecx
// 005093bb  e840ffffff           call 0x509300
// 005093c0  83c40c               add esp, 0xc
// 005093c3  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeNumber@TextOutput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
