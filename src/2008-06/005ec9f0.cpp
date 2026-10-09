// roc 2008-06 005ec9f0  unit: RBX::Sky  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec9f0
//
// 005ec9f0  8b442404             mov eax, dword ptr [esp + 4]
// 005ec9f4  3d48b39700           cmp eax, 0x97b348
// 005ec9f9  7503                 jne 0x5ec9fe
// 005ec9fb  b001                 mov al, 1
// 005ec9fd  c3                   ret 
// 005ec9fe  3df0b19700           cmp eax, 0x97b1f0
// 005eca03  74f6                 je 0x5ec9fb
// 005eca05  3d60b29700           cmp eax, 0x97b260
// 005eca0a  74ef                 je 0x5ec9fb
// 005eca0c  3df4b39700           cmp eax, 0x97b3f4
// 005eca11  74e8                 je 0x5ec9fb
// 005eca13  3dd0b19700           cmp eax, 0x97b1d0
// 005eca18  74e1                 je 0x5ec9fb
// 005eca1a  3d28b19700           cmp eax, 0x97b128
// 005eca1f  0f94c0               sete al
// 005eca22  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isSurfaceDescriptor@Surfaces@RBX@@SA?B_NABVPropertyDescriptor@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
