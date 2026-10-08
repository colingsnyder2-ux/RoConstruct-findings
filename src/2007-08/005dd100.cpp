// roc 2007-08 005dd100  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dd100
//
// 005dd100  8b442404             mov eax, dword ptr [esp + 4]
// 005dd104  3981f8000000         cmp dword ptr [ecx + 0xf8], eax
// 005dd10a  7413                 je 0x5dd11f
// 005dd10c  8981f8000000         mov dword ptr [ecx + 0xf8], eax
// 005dd112  c7442404a46d8c00     mov dword ptr [esp + 4], 0x8c6da4
// 005dd11a  e9f175e6ff           jmp 0x444710
// 005dd11f  c20400               ret 4
// library openrbx-client/App\v8datamodel\FaceInstance.cpp (function ?setFace@FaceInstance@RBX@@QAEXW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/FaceInstance.cpp
