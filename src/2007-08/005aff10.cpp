// roc 2007-08 005aff10  unit: RBX::Network::P8Player::?$GetSetImpl  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aff10
//
// 005aff10  8b442404             mov eax, dword ptr [esp + 4]
// 005aff14  85c0                 test eax, eax
// 005aff16  8bd1                 mov edx, ecx
// 005aff18  7415                 je 0x5aff2f
// 005aff1a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005aff1e  51                   push ecx
// 005aff1f  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 005aff22  8b5210               mov edx, dword ptr [edx + 0x10]
// 005aff25  83c0fc               add eax, -4
// 005aff28  03c8                 add ecx, eax
// 005aff2a  ffd2                 call edx
// 005aff2c  c20800               ret 8
// 005aff2f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005aff33  51                   push ecx
// 005aff34  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 005aff37  8b5210               mov edx, dword ptr [edx + 0x10]
// 005aff3a  33c0                 xor eax, eax
// 005aff3c  03c8                 add ecx, eax
// 005aff3e  ffd2                 call edx
// 005aff40  c20800               ret 8
// library rbxgs/script\Script.cpp (function ?setValue@?$GetSetImpl@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBEXPAVDescribedBase@34@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
