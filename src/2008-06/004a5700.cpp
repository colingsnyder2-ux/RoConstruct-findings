// roc 2008-06 004a5700  unit: RBX::VHint::?$FactoryProduct::Creator  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5700
//
// 004a5700  56                   push esi
// 004a5701  57                   push edi
// 004a5702  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a5706  8bf1                 mov esi, ecx
// 004a5708  85ff                 test edi, edi
// 004a570a  7450                 je 0x4a575c
// 004a570c  f60607               test byte ptr [esi], 7
// 004a570f  7535                 jne 0x4a5746
// 004a5711  8d04fd00000000       lea eax, [edi*8]
// 004a5718  50                   push eax
// 004a5719  e892fcffff           call 0x4a53b0
// 004a571e  8b16                 mov edx, dword ptr [esi]
// 004a5720  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a5724  83c207               add edx, 7
// 004a5727  c1fa03               sar edx, 3
// 004a572a  03560c               add edx, dword ptr [esi + 0xc]
// 004a572d  57                   push edi
// 004a572e  51                   push ecx
// 004a572f  52                   push edx
// 004a5730  e8abc01f00           call 0x6a17e0
// 004a5735  83c40c               add esp, 0xc
// 004a5738  8d04fd00000000       lea eax, [edi*8]
// 004a573f  0106                 add dword ptr [esi], eax
// 004a5741  5f                   pop edi
// 004a5742  5e                   pop esi
// 004a5743  c20800               ret 8
// 004a5746  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004a574a  6a01                 push 1
// 004a574c  8d0cfd00000000       lea ecx, [edi*8]
// 004a5753  51                   push ecx
// 004a5754  52                   push edx
// 004a5755  8bce                 mov ecx, esi
// 004a5757  e8a4feffff           call 0x4a5600
// 004a575c  5f                   pop edi
// 004a575d  5e                   pop esi
// 004a575e  c20800               ret 8
// library rbxgs-raknet/BitStream.cpp (function ?Write@BitStream@RakNet@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
