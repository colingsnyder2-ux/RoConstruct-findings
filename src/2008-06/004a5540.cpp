// roc 2008-06 004a5540  unit: RBX::VHint::?$FactoryProduct::Creator  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5540
//
// 004a5540  56                   push esi
// 004a5541  6a01                 push 1
// 004a5543  8bf1                 mov esi, ecx
// 004a5545  e866feffff           call 0x4a53b0
// 004a554a  8b06                 mov eax, dword ptr [esi]
// 004a554c  a807                 test al, 7
// 004a554e  750a                 jne 0x4a555a
// 004a5550  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a5553  c1f803               sar eax, 3
// 004a5556  c6040800             mov byte ptr [eax + ecx], 0
// 004a555a  ff06                 inc dword ptr [esi]
// 004a555c  5e                   pop esi
// 004a555d  c3                   ret 
// library rbxgs-raknet/BitStream.cpp (function ?Write0@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
