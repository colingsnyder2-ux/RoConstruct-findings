// roc 2007-08 0050d6a0  unit: G3D::BinaryInput  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d6a0
//
// 0050d6a0  83f803               cmp eax, 3
// 0050d6a3  771f                 ja 0x50d6c4
// 0050d6a5  ff2485ccd65000       jmp dword ptr [eax*4 + 0x50d6cc]
// 0050d6ac  b86c0d7a00           mov eax, 0x7a0d6c
// 0050d6b1  c3                   ret 
// 0050d6b2  b85c0d7a00           mov eax, 0x7a0d5c
// 0050d6b7  c3                   ret 
// 0050d6b8  b84c0d7a00           mov eax, 0x7a0d4c
// 0050d6bd  c3                   ret 
// 0050d6be  b8400d7a00           mov eax, 0x7a0d40
// 0050d6c3  c3                   ret 
// 0050d6c4  b8d8de7900           mov eax, 0x79ded8
// 0050d6c9  c3                   ret 
// 0050d6ca  8bff                 mov edi, edi
// 0050d6cc  b2d6                 mov dl, 0xd6
// 0050d6ce  50                   push eax
// 0050d6cf  00acd65000b8d6       add byte ptr [esi + edx*8 - 0x2947ffb0], ch
// 0050d6d6  50                   push eax
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?tokenTypeToString@G3D@@YAPBDW4Type@Token@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
