// roc 2008-06 0060c3d0  unit: RBX::VNetworkSettings::?$EnumPropDescriptor  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c3d0
//
// 0060c3d0  8b442404             mov eax, dword ptr [esp + 4]
// 0060c3d4  39814c010000         cmp dword ptr [ecx + 0x14c], eax
// 0060c3da  7413                 je 0x60c3ef
// 0060c3dc  89814c010000         mov dword ptr [ecx + 0x14c], eax
// 0060c3e2  c744240438be9700     mov dword ptr [esp + 4], 0x97be38
// 0060c3ea  e91117e0ff           jmp 0x40db00
// 0060c3ef  c20400               ret 4
// library openrbx-client/App\v8datamodel\Feature.cpp (function ?setInOut@Feature@RBX@@QAEXW4InOut@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
