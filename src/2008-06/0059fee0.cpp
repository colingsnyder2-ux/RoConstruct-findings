// roc 2008-06 0059fee0  unit: RBX::SpecialShape  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059fee0
//
// 0059fee0  8b442404             mov eax, dword ptr [esp + 4]
// 0059fee4  398130010000         cmp dword ptr [ecx + 0x130], eax
// 0059feea  7413                 je 0x59feff
// 0059feec  898130010000         mov dword ptr [ecx + 0x130], eax
// 0059fef2  c744240458689700     mov dword ptr [esp + 4], 0x976858
// 0059fefa  e901dce6ff           jmp 0x40db00
// 0059feff  c20400               ret 4
// library openrbx-client/App\v8datamodel\FaceInstance.cpp (function ?setFace@FaceInstance@RBX@@QAEXW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/FaceInstance.cpp
