// roc 2009-12 006f1db0  unit: RBX::BasicPartInstance  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f1db0
//
// 006f1db0  8b442404             mov eax, dword ptr [esp + 4]
// 006f1db4  3d4045b900           cmp eax, 0xb94540
// 006f1db9  7503                 jne 0x6f1dbe
// 006f1dbb  b001                 mov al, 1
// 006f1dbd  c3                   ret 
// 006f1dbe  3db443b900           cmp eax, 0xb943b4
// 006f1dc3  74f6                 je 0x6f1dbb
// 006f1dc5  3d3844b900           cmp eax, 0xb94438
// 006f1dca  74ef                 je 0x6f1dbb
// 006f1dcc  3d0846b900           cmp eax, 0xb94608
// 006f1dd1  74e8                 je 0x6f1dbb
// 006f1dd3  3d9043b900           cmp eax, 0xb94390
// 006f1dd8  74e1                 je 0x6f1dbb
// 006f1dda  3dd042b900           cmp eax, 0xb942d0
// 006f1ddf  0f94c0               sete al
// 006f1de2  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isSurfaceDescriptor@Surfaces@RBX@@SA?B_NABVPropertyDescriptor@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
