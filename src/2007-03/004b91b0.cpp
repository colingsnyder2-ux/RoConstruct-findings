// roc 2007-03 004b91b0  unit: seg_004b0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b91b0
//
// 004b91b0  0fb6442404           movzx eax, byte ptr [esp + 4]
// 004b91b5  3b4104               cmp eax, dword ptr [ecx + 4]
// 004b91b8  7308                 jae 0x4b91c2
// 004b91ba  8b09                 mov ecx, dword ptr [ecx]
// 004b91bc  8b0481               mov eax, dword ptr [ecx + eax*4]
// 004b91bf  c20400               ret 4
// 004b91c2  33c0                 xor eax, eax
// 004b91c4  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?GetNodeFromIndex@RPCMap@@QAEPAURPCNode@@E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
