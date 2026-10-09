// roc 2009-12 005520e0  unit: RBX::Network::VMarker::?$EventDesc  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005520e0
//
// 005520e0  56                   push esi
// 005520e1  8bf1                 mov esi, ecx
// 005520e3  e88899fdff           call 0x52ba70
// 005520e8  33c0                 xor eax, eax
// 005520ea  b101                 mov cl, 1
// 005520ec  894604               mov dword ptr [esi + 4], eax
// 005520ef  88460a               mov byte ptr [esi + 0xa], al
// 005520f2  88860a010000         mov byte ptr [esi + 0x10a], al
// 005520f8  c70624e99b00         mov dword ptr [esi], 0x9be924
// 005520fe  884e08               mov byte ptr [esi + 8], cl
// 00552101  884e09               mov byte ptr [esi + 9], cl
// 00552104  8bc6                 mov eax, esi
// 00552106  5e                   pop esi
// 00552107  c3                   ret 
// library rbxgs-raknet/PacketLogger.cpp (function ??0PacketLogger@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
