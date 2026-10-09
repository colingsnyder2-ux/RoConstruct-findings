// roc 2008-06 0060c3a0  unit: RBX::VNetworkSettings::?$EnumPropDescriptor  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c3a0
//
// 0060c3a0  8b442404             mov eax, dword ptr [esp + 4]
// 0060c3a4  398148010000         cmp dword ptr [ecx + 0x148], eax
// 0060c3aa  7413                 je 0x60c3bf
// 0060c3ac  898148010000         mov dword ptr [ecx + 0x148], eax
// 0060c3b2  c7442404b4bd9700     mov dword ptr [esp + 4], 0x97bdb4
// 0060c3ba  e94117e0ff           jmp 0x40db00
// 0060c3bf  c20400               ret 4
// library openrbx-client/App\v8datamodel\Feature.cpp (function ?setLeftRight@Feature@RBX@@QAEXW4LeftRight@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
