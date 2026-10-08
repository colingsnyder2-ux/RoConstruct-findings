// roc 2007-08 00487c10  unit: P8CRenderSettings::?$GetSetImpl  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00487c10
//
// 00487c10  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00487c16  85c0                 test eax, eax
// 00487c18  7410                 je 0x487c2a
// 00487c1a  8b4804               mov ecx, dword ptr [eax + 4]
// 00487c1d  85c9                 test ecx, ecx
// 00487c1f  7409                 je 0x487c2a
// 00487c21  8b4008               mov eax, dword ptr [eax + 8]
// 00487c24  2bc1                 sub eax, ecx
// 00487c26  c1f803               sar eax, 3
// 00487c29  c3                   ret 
// 00487c2a  33c0                 xor eax, eax
// 00487c2c  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?numChildren@Instance@RBX@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
