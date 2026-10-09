// roc 2008-06 0060c370  unit: RBX::VNetworkSettings::?$EnumPropDescriptor  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c370
//
// 0060c370  8b442404             mov eax, dword ptr [esp + 4]
// 0060c374  398144010000         cmp dword ptr [ecx + 0x144], eax
// 0060c37a  7413                 je 0x60c38f
// 0060c37c  898144010000         mov dword ptr [ecx + 0x144], eax
// 0060c382  c7442404d8bd9700     mov dword ptr [esp + 4], 0x97bdd8
// 0060c38a  e97117e0ff           jmp 0x40db00
// 0060c38f  c20400               ret 4
// library openrbx-client/App\v8datamodel\Feature.cpp (function ?setTopBottom@Feature@RBX@@QAEXW4TopBottom@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
