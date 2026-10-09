// roc 2008-06 0048abf0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048abf0
//
// 0048abf0  8b442404             mov eax, dword ptr [esp + 4]
// 0048abf4  8bd1                 mov edx, ecx
// 0048abf6  85c0                 test eax, eax
// 0048abf8  7418                 je 0x48ac12
// 0048abfa  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048abfe  0fb609               movzx ecx, byte ptr [ecx]
// 0048ac01  51                   push ecx
// 0048ac02  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0048ac05  8b5210               mov edx, dword ptr [edx + 0x10]
// 0048ac08  83c0ec               add eax, -0x14
// 0048ac0b  03c8                 add ecx, eax
// 0048ac0d  ffd2                 call edx
// 0048ac0f  c20800               ret 8
// 0048ac12  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048ac16  0fb609               movzx ecx, byte ptr [ecx]
// 0048ac19  51                   push ecx
// 0048ac1a  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0048ac1d  8b5210               mov edx, dword ptr [edx + 0x10]
// 0048ac20  33c0                 xor eax, eax
// 0048ac22  03c8                 add ecx, eax
// 0048ac24  ffd2                 call edx
// 0048ac26  c20800               ret 8
// library openrbx-client/App\v8datamodel\DebugSettings.cpp (function ?setValue@?$GetSetImpl@P8DebugSettings@RBX@@BE_NXZP812@AEX_N@Z@?$PropDescriptor@VDebugSettings@RBX@@_N@Reflection@RBX@@UBEXPAVDescribedBase@34@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/DebugSettings.cpp
