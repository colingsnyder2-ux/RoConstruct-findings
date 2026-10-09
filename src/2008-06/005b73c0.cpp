// roc 2008-06 005b73c0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b73c0
//
// 005b73c0  8b442404             mov eax, dword ptr [esp + 4]
// 005b73c4  8bd1                 mov edx, ecx
// 005b73c6  85c0                 test eax, eax
// 005b73c8  7415                 je 0x5b73df
// 005b73ca  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b73ce  51                   push ecx
// 005b73cf  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 005b73d2  8b5210               mov edx, dword ptr [edx + 0x10]
// 005b73d5  83c0ec               add eax, -0x14
// 005b73d8  03c8                 add ecx, eax
// 005b73da  ffd2                 call edx
// 005b73dc  c20800               ret 8
// 005b73df  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b73e3  51                   push ecx
// 005b73e4  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 005b73e7  8b5210               mov edx, dword ptr [edx + 0x10]
// 005b73ea  33c0                 xor eax, eax
// 005b73ec  03c8                 add ecx, eax
// 005b73ee  ffd2                 call edx
// 005b73f0  c20800               ret 8
// library openrbx-client/App\v8datamodel\Message.cpp (function ?setValue@?$GetSetImpl@P8Message@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VMessage@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBEXPAVDescribedBase@34@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Message.cpp
