// roc 2011-06 0071ebb0  unit: RBX::AdvLuaDragger  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071ebb0
//
// 0071ebb0  8b442404             mov eax, dword ptr [esp + 4]
// 0071ebb4  3d003ecd00           cmp eax, 0xcd3e00
// 0071ebb9  7503                 jne 0x71ebbe
// 0071ebbb  b001                 mov al, 1
// 0071ebbd  c3                   ret 
// 0071ebbe  3d743ccd00           cmp eax, 0xcd3c74
// 0071ebc3  74f6                 je 0x71ebbb
// 0071ebc5  3df83ccd00           cmp eax, 0xcd3cf8
// 0071ebca  74ef                 je 0x71ebbb
// 0071ebcc  3dc83ecd00           cmp eax, 0xcd3ec8
// 0071ebd1  74e8                 je 0x71ebbb
// 0071ebd3  3d503ccd00           cmp eax, 0xcd3c50
// 0071ebd8  74e1                 je 0x71ebbb
// 0071ebda  3d903bcd00           cmp eax, 0xcd3b90
// 0071ebdf  0f94c0               sete al
// 0071ebe2  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isSurfaceDescriptor@Surfaces@RBX@@SA?B_NABVPropertyDescriptor@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
