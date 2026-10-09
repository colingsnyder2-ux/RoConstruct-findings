// roc 2008-06 0060c340  unit: RBX::VNetworkSettings::?$EnumPropDescriptor  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c340
//
// 0060c340  8b442404             mov eax, dword ptr [esp + 4]
// 0060c344  398140010000         cmp dword ptr [ecx + 0x140], eax
// 0060c34a  7413                 je 0x60c35f
// 0060c34c  898140010000         mov dword ptr [ecx + 0x140], eax
// 0060c352  c74424045cbe9700     mov dword ptr [esp + 4], 0x97be5c
// 0060c35a  e9a117e0ff           jmp 0x40db00
// 0060c35f  c20400               ret 4
// library openrbx-client/App\v8datamodel\Feature.cpp (function ?setFaceId@Feature@RBX@@QAEXW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
