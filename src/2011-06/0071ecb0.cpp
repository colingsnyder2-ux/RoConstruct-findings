// roc 2011-06 0071ecb0  unit: RBX::AdvLuaDragger  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071ecb0
//
// 0071ecb0  8b442404             mov eax, dword ptr [esp + 4]
// 0071ecb4  83f805               cmp eax, 5
// 0071ecb7  772f                 ja 0x71ece8
// 0071ecb9  ff2485f0ec7100       jmp dword ptr [eax*4 + 0x71ecf0]
// 0071ecc0  b8243ecd00           mov eax, 0xcd3e24
// 0071ecc5  c20400               ret 4
// 0071ecc8  b8b43ccd00           mov eax, 0xcd3cb4
// 0071eccd  c20400               ret 4
// 0071ecd0  b8d83ccd00           mov eax, 0xcd3cd8
// 0071ecd5  c20400               ret 4
// 0071ecd8  b8683ecd00           mov eax, 0xcd3e68
// 0071ecdd  c20400               ret 4
// 0071ece0  b8403dcd00           mov eax, 0xcd3d40
// 0071ece5  c20400               ret 4
// 0071ece8  b8303ccd00           mov eax, 0xcd3c30
// 0071eced  c20400               ret 4
// 0071ecf0  d8ec                 fsubr st(4)
// 0071ecf2  7100                 jno 0x71ecf4
// 0071ecf4  e8ec7100c8           call 0xc8725ee5
// 0071ecf9  ec                   in al, dx
// 0071ecfa  7100                 jno 0x71ecfc
// 0071ecfc  e0ec                 loopne 0x71ecea
// 0071ecfe  7100                 jno 0x71ed00
// 0071ed00  c0ec71               shr ah, 0x71
// 0071ed03  00d0                 add al, dl
// 0071ed05  ec                   in al, dx
// 0071ed06  7100                 jno 0x71ed08
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getSurfaceType@Surfaces@RBX@@QBEABVPropertyDescriptor@Reflection@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
