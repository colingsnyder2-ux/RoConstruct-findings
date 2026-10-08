// roc 2007-03 00572220  unit: seg_00570000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572220
//
// 00572220  8b5104               mov edx, dword ptr [ecx + 4]
// 00572223  85d2                 test edx, edx
// 00572225  7503                 jne 0x57222a
// 00572227  33c0                 xor eax, eax
// 00572229  c3                   ret 
// 0057222a  8b4108               mov eax, dword ptr [ecx + 8]
// 0057222d  2bc2                 sub eax, edx
// 0057222f  c1f803               sar eax, 3
// 00572232  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?size@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
