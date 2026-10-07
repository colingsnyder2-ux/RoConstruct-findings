// roc 2012-06 005618a0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005618a0
//
// 005618a0  668b5102             mov dx, word ptr [ecx + 2]
// 005618a4  8b442404             mov eax, dword ptr [esp + 4]
// 005618a8  663b5002             cmp dx, word ptr [eax + 2]
// 005618ac  7516                 jne 0x5618c4
// 005618ae  66833902             cmp word ptr [ecx], 2
// 005618b2  7510                 jne 0x5618c4
// 005618b4  8b4904               mov ecx, dword ptr [ecx + 4]
// 005618b7  3b4804               cmp ecx, dword ptr [eax + 4]
// 005618ba  7508                 jne 0x5618c4
// 005618bc  b801000000           mov eax, 1
// 005618c1  c20400               ret 4
// 005618c4  33c0                 xor eax, eax
// 005618c6  c20400               ret 4
// library rbx2016-raknet/RakNetTypes.cpp (function ??8SystemAddress@RakNet@@QBE_NABU01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
