// roc 2007-03 00722140  unit: seg_00720000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00722140
//
// 00722140  8b442404             mov eax, dword ptr [esp + 4]
// 00722144  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 0072214a  c20400               ret 4
// library rbxgs-raknet/LogCommandParser.cpp (function ?OnTransportChange@LogCommandParser@@UAEXPAVTransportInterface@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LogCommandParser.cpp
