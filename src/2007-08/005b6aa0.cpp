// roc 2007-08 005b6aa0  unit: RBX::Sky  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6aa0
//
// 005b6aa0  8b442404             mov eax, dword ptr [esp + 4]
// 005b6aa4  3dc0638c00           cmp eax, 0x8c63c0
// 005b6aa9  7503                 jne 0x5b6aae
// 005b6aab  b001                 mov al, 1
// 005b6aad  c3                   ret 
// 005b6aae  3d68628c00           cmp eax, 0x8c6268
// 005b6ab3  74f6                 je 0x5b6aab
// 005b6ab5  3dd8628c00           cmp eax, 0x8c62d8
// 005b6aba  74ef                 je 0x5b6aab
// 005b6abc  3d6c648c00           cmp eax, 0x8c646c
// 005b6ac1  74e8                 je 0x5b6aab
// 005b6ac3  3d48628c00           cmp eax, 0x8c6248
// 005b6ac8  74e1                 je 0x5b6aab
// 005b6aca  3da0618c00           cmp eax, 0x8c61a0
// 005b6acf  0f94c0               sete al
// 005b6ad2  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isSurfaceDescriptor@Surfaces@RBX@@SA?B_NABVPropertyDescriptor@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
