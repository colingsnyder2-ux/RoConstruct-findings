// roc 2008-06 0049eef0  unit: RBX::Network::VClient::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049eef0
//
// 0049eef0  56                   push esi
// 0049eef1  8bf1                 mov esi, ecx
// 0049eef3  e848570100           call 0x4b4640
// 0049eef8  c706442e8200         mov dword ptr [esi], 0x822e44
// 0049eefe  c74610382e8200       mov dword ptr [esi + 0x10], 0x822e38
// 0049ef05  c74614302e8200       mov dword ptr [esi + 0x14], 0x822e30
// 0049ef0c  c74620282e8200       mov dword ptr [esi + 0x20], 0x822e28
// 0049ef13  c74624182e8200       mov dword ptr [esi + 0x24], 0x822e18
// 0049ef1a  c74644082e8200       mov dword ptr [esi + 0x44], 0x822e08
// 0049ef21  c74664f82d8200       mov dword ptr [esi + 0x64], 0x822df8
// 0049ef28  c78684000000e82d8200 mov dword ptr [esi + 0x84], 0x822de8
// 0049ef32  c786a4000000d82d8200 mov dword ptr [esi + 0xa4], 0x822dd8
// 0049ef3c  c786c4000000c82d8200 mov dword ptr [esi + 0xc4], 0x822dc8
// 0049ef46  c78630010000982d8200 mov dword ptr [esi + 0x130], 0x822d98
// 0049ef50  c786340100008c2d8200 mov dword ptr [esi + 0x134], 0x822d8c
// 0049ef5a  8bc6                 mov eax, esi
// 0049ef5c  5e                   pop esi
// 0049ef5d  c3                   ret 
// library openrbx-client/App\script\ScriptContext.cpp (function ??0ScriptContext@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptContext.cpp
