// roc 2008-06 0048ae20  unit: RBX::Network::P8Player::?$GetSetImpl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ae20
//
// 0048ae20  8b8908010000         mov ecx, dword ptr [ecx + 0x108]
// 0048ae26  85c9                 test ecx, ecx
// 0048ae28  740a                 je 0x48ae34
// 0048ae2a  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0048ae2d  2b410c               sub eax, dword ptr [ecx + 0xc]
// 0048ae30  c1f803               sar eax, 3
// 0048ae33  c3                   ret 
// 0048ae34  33c0                 xor eax, eax
// 0048ae36  c3                   ret 
// library openrbx-client/App\gui\GUI.cpp (function ?numChildren@Instance@RBX@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp
