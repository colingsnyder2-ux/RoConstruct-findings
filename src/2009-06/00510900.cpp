// roc 2009-06 00510900  unit: CSHA1  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00510900
//
// 00510900  0fb6442404           movzx eax, byte ptr [esp + 4]
// 00510905  3b4104               cmp eax, dword ptr [ecx + 4]
// 00510908  7308                 jae 0x510912
// 0051090a  8b09                 mov ecx, dword ptr [ecx]
// 0051090c  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0051090f  c20400               ret 4
// 00510912  33c0                 xor eax, eax
// 00510914  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?GetNodeFromIndex@RPCMap@@QAEPAURPCNode@@E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
