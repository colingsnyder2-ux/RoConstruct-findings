// roc 2007-08 004c9f40  unit: seg_004c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c9f40
//
// 004c9f40  0fb6442404           movzx eax, byte ptr [esp + 4]
// 004c9f45  3b4104               cmp eax, dword ptr [ecx + 4]
// 004c9f48  7308                 jae 0x4c9f52
// 004c9f4a  8b09                 mov ecx, dword ptr [ecx]
// 004c9f4c  8b0481               mov eax, dword ptr [ecx + eax*4]
// 004c9f4f  c20400               ret 4
// 004c9f52  33c0                 xor eax, eax
// 004c9f54  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?GetNodeFromIndex@RPCMap@@QAEPAURPCNode@@E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
