// roc 2007-08 00447340  unit: VCRenderSettings::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00447340
//
// 00447340  8b442404             mov eax, dword ptr [esp + 4]
// 00447344  3b811c010000         cmp eax, dword ptr [ecx + 0x11c]
// 0044734a  7413                 je 0x44735f
// 0044734c  89811c010000         mov dword ptr [ecx + 0x11c], eax
// 00447352  c744240418bc8b00     mov dword ptr [esp + 4], 0x8bbc18
// 0044735a  e9b1d3ffff           jmp 0x444710
// 0044735f  c20400               ret 4
// library openrbx-client/App\v8datamodel\Accoutrement.cpp (function ?setBackendAccoutrementState@Accoutrement@RBX@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Accoutrement.cpp
