// roc 2012-06 00561840  unit: RBX::VHint::?$FactoryProduct::Creator  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561840
//
// 00561840  66833902             cmp word ptr [ecx], 2
// 00561844  7514                 jne 0x56185a
// 00561846  8b4104               mov eax, dword ptr [ecx + 4]
// 00561849  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056184d  3b4104               cmp eax, dword ptr [ecx + 4]
// 00561850  7508                 jne 0x56185a
// 00561852  b801000000           mov eax, 1
// 00561857  c20400               ret 4
// 0056185a  33c0                 xor eax, eax
// 0056185c  c20400               ret 4
// library rbx2016-raknet/RakNetTypes.cpp (function ?EqualsExcludingPort@SystemAddress@RakNet@@QBE_NABU12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
