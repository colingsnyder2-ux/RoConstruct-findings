// roc 2010-06 0051eea0  unit: CSHA1  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051eea0
//
// 0051eea0  0fb6442404           movzx eax, byte ptr [esp + 4]
// 0051eea5  3b4104               cmp eax, dword ptr [ecx + 4]
// 0051eea8  7308                 jae 0x51eeb2
// 0051eeaa  8b09                 mov ecx, dword ptr [ecx]
// 0051eeac  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0051eeaf  c20400               ret 4
// 0051eeb2  33c0                 xor eax, eax
// 0051eeb4  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?GetNodeFromIndex@RPCMap@@QAEPAURPCNode@@E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
