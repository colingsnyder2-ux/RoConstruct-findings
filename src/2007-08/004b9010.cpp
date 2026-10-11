// roc 2007-08 004b9010  unit: RakPeer  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9010
//
// 004b9010  51                   push ecx
// 004b9011  8b81d4060000         mov eax, dword ptr [ecx + 0x6d4]
// 004b9017  85c0                 test eax, eax
// 004b9019  7630                 jbe 0x4b904b
// 004b901b  8b89dc060000         mov ecx, dword ptr [ecx + 0x6dc]
// 004b9021  85c9                 test ecx, ecx
// 004b9023  890c24               mov dword ptr [esp], ecx
// 004b9026  db0424               fild dword ptr [esp]
// 004b9029  7d06                 jge 0x4b9031
// 004b902b  d805706f7800         fadd dword ptr [0x786f70]
// 004b9031  85c0                 test eax, eax
// 004b9033  890424               mov dword ptr [esp], eax
// 004b9036  db0424               fild dword ptr [esp]
// 004b9039  7d06                 jge 0x4b9041
// 004b903b  d805706f7800         fadd dword ptr [0x786f70]
// 004b9041  def9                 fdivp st(1)
// 004b9043  d91c24               fstp dword ptr [esp]
// 004b9046  d90424               fld dword ptr [esp]
// 004b9049  59                   pop ecx
// 004b904a  c3                   ret 
// 004b904b  d9ee                 fldz 
// 004b904d  59                   pop ecx
// 004b904e  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ?GetCompressionRatio@RakPeer@@UBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
