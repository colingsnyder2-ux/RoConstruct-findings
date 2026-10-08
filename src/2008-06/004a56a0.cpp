// roc 2008-06 004a56a0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a56a0
//
// 004a56a0  56                   push esi
// 004a56a1  6a01                 push 1
// 004a56a3  8bf1                 mov esi, ecx
// 004a56a5  e806fdffff           call 0x4a53b0
// 004a56aa  807c240800           cmp byte ptr [esp + 8], 0
// 004a56af  8b06                 mov eax, dword ptr [esi]
// 004a56b1  742b                 je 0x4a56de
// 004a56b3  8bc8                 mov ecx, eax
// 004a56b5  c1f803               sar eax, 3
// 004a56b8  83e107               and ecx, 7
// 004a56bb  750d                 jne 0x4a56ca
// 004a56bd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a56c0  c6040880             mov byte ptr [eax + ecx], 0x80
// 004a56c4  ff06                 inc dword ptr [esi]
// 004a56c6  5e                   pop esi
// 004a56c7  c20400               ret 4
// 004a56ca  8b560c               mov edx, dword ptr [esi + 0xc]
// 004a56cd  03c2                 add eax, edx
// 004a56cf  ba80000000           mov edx, 0x80
// 004a56d4  d3fa                 sar edx, cl
// 004a56d6  0810                 or byte ptr [eax], dl
// 004a56d8  ff06                 inc dword ptr [esi]
// 004a56da  5e                   pop esi
// 004a56db  c20400               ret 4
// 004a56de  a807                 test al, 7
// 004a56e0  750a                 jne 0x4a56ec
// 004a56e2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a56e5  c1f803               sar eax, 3
// 004a56e8  c6040800             mov byte ptr [eax + ecx], 0
// 004a56ec  ff06                 inc dword ptr [esi]
// 004a56ee  5e                   pop esi
// 004a56ef  c20400               ret 4
// library rbxgs-raknet/BitStream.cpp (function ??$Write@_N@BitStream@RakNet@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
