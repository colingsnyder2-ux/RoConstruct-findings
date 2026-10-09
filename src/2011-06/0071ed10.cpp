// roc 2011-06 0071ed10  unit: RBX::AdvLuaDragger  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071ed10
//
// 0071ed10  8b442404             mov eax, dword ptr [esp + 4]
// 0071ed14  83f805               cmp eax, 5
// 0071ed17  772f                 ja 0x71ed48
// 0071ed19  ff248550ed7100       jmp dword ptr [eax*4 + 0x71ed50]
// 0071ed20  b8ec3ecd00           mov eax, 0xcd3eec
// 0071ed25  c20400               ret 4
// 0071ed28  b8883ecd00           mov eax, 0xcd3e88
// 0071ed2d  c20400               ret 4
// 0071ed30  b89c3dcd00           mov eax, 0xcd3d9c
// 0071ed35  c20400               ret 4
// 0071ed38  b8b43bcd00           mov eax, 0xcd3bb4
// 0071ed3d  c20400               ret 4
// 0071ed40  b8e03dcd00           mov eax, 0xcd3de0
// 0071ed45  c20400               ret 4
// 0071ed48  b87c3dcd00           mov eax, 0xcd3d7c
// 0071ed4d  c20400               ret 4
// 0071ed50  38ed                 cmp ch, ch
// 0071ed52  7100                 jno 0x71ed54
// 0071ed54  48                   dec eax
// 0071ed55  ed                   in eax, dx
// 0071ed56  7100                 jno 0x71ed58
// 0071ed58  28ed                 sub ch, ch
// 0071ed5a  7100                 jno 0x71ed5c
// 0071ed5c  40                   inc eax
// 0071ed5d  ed                   in eax, dx
// 0071ed5e  7100                 jno 0x71ed60
// 0071ed60  20ed                 and ch, ch
// 0071ed62  7100                 jno 0x71ed64
// 0071ed64  30ed                 xor ch, ch
// 0071ed66  7100                 jno 0x71ed68
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getSurfaceType@Surfaces@RBX@@QBEABVPropertyDescriptor@Reflection@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
