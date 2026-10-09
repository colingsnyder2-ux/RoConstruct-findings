// roc 2008-06 005ef770  unit: RBX::FaceInstance  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef770
//
// 005ef770  8b442404             mov eax, dword ptr [esp + 4]
// 005ef774  398140010000         cmp dword ptr [ecx + 0x140], eax
// 005ef77a  7413                 je 0x5ef78f
// 005ef77c  898140010000         mov dword ptr [ecx + 0x140], eax
// 005ef782  c74424047cb59700     mov dword ptr [esp + 4], 0x97b57c
// 005ef78a  e971e3e1ff           jmp 0x40db00
// 005ef78f  c20400               ret 4
// library openrbx-client/App\v8datamodel\Feature.cpp (function ?setFaceId@Feature@RBX@@QAEXW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
