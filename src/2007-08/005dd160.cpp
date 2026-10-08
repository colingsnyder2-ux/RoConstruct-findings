// roc 2007-08 005dd160  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dd160
//
// 005dd160  8b442404             mov eax, dword ptr [esp + 4]
// 005dd164  398100010000         cmp dword ptr [ecx + 0x100], eax
// 005dd16a  7413                 je 0x5dd17f
// 005dd16c  898100010000         mov dword ptr [ecx + 0x100], eax
// 005dd172  c7442404086d8c00     mov dword ptr [esp + 4], 0x8c6d08
// 005dd17a  e99175e6ff           jmp 0x444710
// 005dd17f  c20400               ret 4
// library rbxgs/v8datamodel\Feature.cpp (function ?setFaceId@Feature@RBX@@QAEXW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Feature.cpp
