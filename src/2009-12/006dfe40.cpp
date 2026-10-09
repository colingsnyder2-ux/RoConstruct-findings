// roc 2009-12 006dfe40  unit: RBX::VSpecialShape::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006dfe40
//
// 006dfe40  8b442404             mov eax, dword ptr [esp + 4]
// 006dfe44  398100010000         cmp dword ptr [ecx + 0x100], eax
// 006dfe4a  7413                 je 0x6dfe5f
// 006dfe4c  898100010000         mov dword ptr [ecx + 0x100], eax
// 006dfe52  c74424040c34b900     mov dword ptr [esp + 4], 0xb9340c
// 006dfe5a  e921c2d2ff           jmp 0x40c080
// 006dfe5f  c20400               ret 4
// library rbxgs/v8datamodel\Feature.cpp (function ?setFaceId@Feature@RBX@@QAEXW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Feature.cpp
