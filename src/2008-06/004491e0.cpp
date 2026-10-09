// roc 2008-06 004491e0  unit: CRenderSettings  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004491e0
//
// 004491e0  8b442404             mov eax, dword ptr [esp + 4]
// 004491e4  3b8134010000         cmp eax, dword ptr [ecx + 0x134]
// 004491ea  7413                 je 0x4491ff
// 004491ec  898134010000         mov dword ptr [ecx + 0x134], eax
// 004491f2  c7442404a4d39600     mov dword ptr [esp + 4], 0x96d3a4
// 004491fa  e90149fcff           jmp 0x40db00
// 004491ff  c20400               ret 4
// library openrbx-client/App\v8datamodel\DebugSettings.cpp (function ?setErrorReporting@DebugSettings@RBX@@QAEXW4ErrorReporting@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/DebugSettings.cpp
