// roc 2008-06 005666d0  unit: RBX::VTeam::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005666d0
//
// 005666d0  8b442404             mov eax, dword ptr [esp + 4]
// 005666d4  398130010000         cmp dword ptr [ecx + 0x130], eax
// 005666da  7413                 je 0x5666ef
// 005666dc  898130010000         mov dword ptr [ecx + 0x130], eax
// 005666e2  c7442404cc489700     mov dword ptr [esp + 4], 0x9748cc
// 005666ea  e91174eaff           jmp 0x40db00
// 005666ef  c20400               ret 4
// library openrbx-client/App\v8datamodel\FaceInstance.cpp (function ?setFace@FaceInstance@RBX@@QAEXW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/FaceInstance.cpp
