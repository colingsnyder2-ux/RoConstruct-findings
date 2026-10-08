// roc 2007-08 00487a70  unit: P8CRenderSettings::?$GetSetImpl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00487a70
//
// 00487a70  8b442404             mov eax, dword ptr [esp + 4]
// 00487a74  85c0                 test eax, eax
// 00487a76  8bd1                 mov edx, ecx
// 00487a78  7418                 je 0x487a92
// 00487a7a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00487a7e  0fb609               movzx ecx, byte ptr [ecx]
// 00487a81  51                   push ecx
// 00487a82  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 00487a85  8b5210               mov edx, dword ptr [edx + 0x10]
// 00487a88  83c0fc               add eax, -4
// 00487a8b  03c8                 add ecx, eax
// 00487a8d  ffd2                 call edx
// 00487a8f  c20800               ret 8
// 00487a92  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00487a96  0fb609               movzx ecx, byte ptr [ecx]
// 00487a99  51                   push ecx
// 00487a9a  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 00487a9d  8b5210               mov edx, dword ptr [edx + 0x10]
// 00487aa0  33c0                 xor eax, eax
// 00487aa2  03c8                 add ecx, eax
// 00487aa4  ffd2                 call edx
// 00487aa6  c20800               ret 8
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setValue@?$GetSetImpl@P8DebugSettings@RBX@@BE_NXZP812@AEX_N@Z@?$PropDescriptor@VDebugSettings@RBX@@_N@Reflection@RBX@@UBEXPAVDescribedBase@34@AB_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
