// roc 2007-08 0049fe90  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049fe90
//
// 0049fe90  56                   push esi
// 0049fe91  57                   push edi
// 0049fe92  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0049fe96  85ff                 test edi, edi
// 0049fe98  8bf1                 mov esi, ecx
// 0049fe9a  7450                 je 0x49feec
// 0049fe9c  f60607               test byte ptr [esi], 7
// 0049fe9f  7535                 jne 0x49fed6
// 0049fea1  8d04fd00000000       lea eax, [edi*8]
// 0049fea8  50                   push eax
// 0049fea9  e892fcffff           call 0x49fb40
// 0049feae  8b16                 mov edx, dword ptr [esi]
// 0049feb0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049feb4  83c207               add edx, 7
// 0049feb7  c1fa03               sar edx, 3
// 0049feba  03560c               add edx, dword ptr [esi + 0xc]
// 0049febd  57                   push edi
// 0049febe  51                   push ecx
// 0049febf  52                   push edx
// 0049fec0  e8870e1900           call 0x630d4c
// 0049fec5  83c40c               add esp, 0xc
// 0049fec8  8d04fd00000000       lea eax, [edi*8]
// 0049fecf  0106                 add dword ptr [esi], eax
// 0049fed1  5f                   pop edi
// 0049fed2  5e                   pop esi
// 0049fed3  c20800               ret 8
// 0049fed6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0049feda  6a01                 push 1
// 0049fedc  8d0cfd00000000       lea ecx, [edi*8]
// 0049fee3  51                   push ecx
// 0049fee4  52                   push edx
// 0049fee5  8bce                 mov ecx, esi
// 0049fee7  e8a4feffff           call 0x49fd90
// 0049feec  5f                   pop edi
// 0049feed  5e                   pop esi
// 0049feee  c20800               ret 8
// library rbxgs-raknet/BitStream.cpp (function ?Write@BitStream@RakNet@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
