// roc 2008-06 004d3d10  unit: seg_004d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d3d10
//
// 004d3d10  0fb6442404           movzx eax, byte ptr [esp + 4]
// 004d3d15  3b4104               cmp eax, dword ptr [ecx + 4]
// 004d3d18  7308                 jae 0x4d3d22
// 004d3d1a  8b09                 mov ecx, dword ptr [ecx]
// 004d3d1c  8b0481               mov eax, dword ptr [ecx + eax*4]
// 004d3d1f  c20400               ret 4
// 004d3d22  33c0                 xor eax, eax
// 004d3d24  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?GetNodeFromIndex@RPCMap@@QAEPAURPCNode@@E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
