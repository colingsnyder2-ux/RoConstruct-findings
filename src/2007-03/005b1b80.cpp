// roc 2007-03 005b1b80  unit: seg_005b0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b1b80
//
// 005b1b80  8b442404             mov eax, dword ptr [esp + 4]
// 005b1b84  3d08fb8b00           cmp eax, 0x8bfb08
// 005b1b89  7503                 jne 0x5b1b8e
// 005b1b8b  b001                 mov al, 1
// 005b1b8d  c3                   ret 
// 005b1b8e  3db0f98b00           cmp eax, 0x8bf9b0
// 005b1b93  74f6                 je 0x5b1b8b
// 005b1b95  3d20fa8b00           cmp eax, 0x8bfa20
// 005b1b9a  74ef                 je 0x5b1b8b
// 005b1b9c  3db4fb8b00           cmp eax, 0x8bfbb4
// 005b1ba1  74e8                 je 0x5b1b8b
// 005b1ba3  3d90f98b00           cmp eax, 0x8bf990
// 005b1ba8  74e1                 je 0x5b1b8b
// 005b1baa  3de8f88b00           cmp eax, 0x8bf8e8
// 005b1baf  0f94c0               sete al
// 005b1bb2  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isSurfaceDescriptor@Surfaces@RBX@@SA?B_NABVPropertyDescriptor@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
