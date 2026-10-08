// roc 2007-03 005ddbf0  unit: seg_005d0000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ddbf0
//
// 005ddbf0  56                   push esi
// 005ddbf1  57                   push edi
// 005ddbf2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005ddbf6  57                   push edi
// 005ddbf7  8bf1                 mov esi, ecx
// 005ddbf9  e8a223f6ff           call 0x53ffa0
// 005ddbfe  3937                 cmp dword ptr [edi], esi
// 005ddc00  7520                 jne 0x5ddc22
// 005ddc02  8b4708               mov eax, dword ptr [edi + 8]
// 005ddc05  6a00                 push 0
// 005ddc07  68e03b8800           push 0x883be0
// 005ddc0c  6864108800           push 0x881064
// 005ddc11  6a00                 push 0
// 005ddc13  50                   push eax
// 005ddc14  e8ad150400           call 0x61f1c6
// 005ddc19  83c414               add esp, 0x14
// 005ddc1c  898600010000         mov dword ptr [esi + 0x100], eax
// 005ddc22  8bce                 mov ecx, esi
// 005ddc24  e8d7feffff           call 0x5ddb00
// 005ddc29  5f                   pop edi
// 005ddc2a  5e                   pop esi
// 005ddc2b  c20400               ret 4
// library rbxgs/v8datamodel\Gyro.cpp (function ?onAncestorChanged@BodyMover@RBX@@MAEXABUAncestorChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
