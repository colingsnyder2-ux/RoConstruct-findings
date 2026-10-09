// roc 2011-06 0071ec50  unit: RBX::AdvLuaDragger  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071ec50
//
// 0071ec50  8b442404             mov eax, dword ptr [esp + 4]
// 0071ec54  83f805               cmp eax, 5
// 0071ec57  772f                 ja 0x71ec88
// 0071ec59  ff248590ec7100       jmp dword ptr [eax*4 + 0x71ec90]
// 0071ec60  b8bc3dcd00           mov eax, 0xcd3dbc
// 0071ec65  c20400               ret 4
// 0071ec68  b81c3dcd00           mov eax, 0xcd3d1c
// 0071ec6d  c20400               ret 4
// 0071ec70  b8283fcd00           mov eax, 0xcd3f28
// 0071ec75  c20400               ret 4
// 0071ec78  b8443ecd00           mov eax, 0xcd3e44
// 0071ec7d  c20400               ret 4
// 0071ec80  b84c3fcd00           mov eax, 0xcd3f4c
// 0071ec85  c20400               ret 4
// 0071ec88  b8d43bcd00           mov eax, 0xcd3bd4
// 0071ec8d  c20400               ret 4
// 0071ec90  78ec                 js 0x71ec7e
// 0071ec92  7100                 jno 0x71ec94
// 0071ec94  88ec                 mov ah, ch
// 0071ec96  7100                 jno 0x71ec98
// 0071ec98  68ec710080           push 0x800071ec
// 0071ec9d  ec                   in al, dx
// 0071ec9e  7100                 jno 0x71eca0
// 0071eca0  60                   pushal 
// 0071eca1  ec                   in al, dx
// 0071eca2  7100                 jno 0x71eca4
// 0071eca4  70ec                 jo 0x71ec92
// 0071eca6  7100                 jno 0x71eca8
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getSurfaceType@Surfaces@RBX@@QBEABVPropertyDescriptor@Reflection@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
