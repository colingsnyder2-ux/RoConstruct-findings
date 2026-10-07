// roc 2012-06 00561d30  unit: RBX::VHint::?$FactoryProduct::Creator  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561d30
//
// 00561d30  8b11                 mov edx, dword ptr [ecx]
// 00561d32  8b442404             mov eax, dword ptr [esp + 4]
// 00561d36  3b10                 cmp edx, dword ptr [eax]
// 00561d38  7508                 jne 0x561d42
// 00561d3a  8b4904               mov ecx, dword ptr [ecx + 4]
// 00561d3d  3b4804               cmp ecx, dword ptr [eax + 4]
// 00561d40  7408                 je 0x561d4a
// 00561d42  b801000000           mov eax, 1
// 00561d47  c20400               ret 4
// 00561d4a  33c0                 xor eax, eax
// 00561d4c  c20400               ret 4
// library rbx2016-raknet/RakNetTypes.cpp (function ??9RakNetGUID@RakNet@@QBE_NABU01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
