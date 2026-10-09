// roc 2009-06 0066f2d0  unit: RBX::VSpecialShape::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f2d0
//
// 0066f2d0  8b442404             mov eax, dword ptr [esp + 4]
// 0066f2d4  3981f8000000         cmp dword ptr [ecx + 0xf8], eax
// 0066f2da  7413                 je 0x66f2ef
// 0066f2dc  8981f8000000         mov dword ptr [ecx + 0xf8], eax
// 0066f2e2  c7442404a0dca400     mov dword ptr [esp + 4], 0xa4dca0
// 0066f2ea  e9e1cfd9ff           jmp 0x40c2d0
// 0066f2ef  c20400               ret 4
// library openrbx-client/App\v8datamodel\FaceInstance.cpp (function ?setFace@FaceInstance@RBX@@QAEXW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/FaceInstance.cpp
