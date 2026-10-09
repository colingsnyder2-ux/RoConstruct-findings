// roc 2009-06 006628b0  unit: DxUserInput  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006628b0
//
// 006628b0  8b442404             mov eax, dword ptr [esp + 4]
// 006628b4  3d5cd2a400           cmp eax, 0xa4d25c
// 006628b9  7503                 jne 0x6628be
// 006628bb  b001                 mov al, 1
// 006628bd  c3                   ret 
// 006628be  3d04d1a400           cmp eax, 0xa4d104
// 006628c3  74f6                 je 0x6628bb
// 006628c5  3d74d1a400           cmp eax, 0xa4d174
// 006628ca  74ef                 je 0x6628bb
// 006628cc  3d14d3a400           cmp eax, 0xa4d314
// 006628d1  74e8                 je 0x6628bb
// 006628d3  3de4d0a400           cmp eax, 0xa4d0e4
// 006628d8  74e1                 je 0x6628bb
// 006628da  3d3cd0a400           cmp eax, 0xa4d03c
// 006628df  0f94c0               sete al
// 006628e2  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isSurfaceDescriptor@Surfaces@RBX@@SA?B_NABVPropertyDescriptor@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
