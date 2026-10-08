// roc 2007-03 00497eb0  unit: seg_00490000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497eb0
//
// 00497eb0  56                   push esi
// 00497eb1  57                   push edi
// 00497eb2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00497eb6  85ff                 test edi, edi
// 00497eb8  8bf1                 mov esi, ecx
// 00497eba  7450                 je 0x497f0c
// 00497ebc  f60607               test byte ptr [esi], 7
// 00497ebf  7535                 jne 0x497ef6
// 00497ec1  8d04fd00000000       lea eax, [edi*8]
// 00497ec8  50                   push eax
// 00497ec9  e862fcffff           call 0x497b30
// 00497ece  8b16                 mov edx, dword ptr [esi]
// 00497ed0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00497ed4  83c207               add edx, 7
// 00497ed7  c1fa03               sar edx, 3
// 00497eda  03560c               add edx, dword ptr [esi + 0xc]
// 00497edd  57                   push edi
// 00497ede  51                   push ecx
// 00497edf  52                   push edx
// 00497ee0  e8fd721800           call 0x61f1e2
// 00497ee5  83c40c               add esp, 0xc
// 00497ee8  8d04fd00000000       lea eax, [edi*8]
// 00497eef  0106                 add dword ptr [esi], eax
// 00497ef1  5f                   pop edi
// 00497ef2  5e                   pop esi
// 00497ef3  c20800               ret 8
// 00497ef6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00497efa  6a01                 push 1
// 00497efc  8d0cfd00000000       lea ecx, [edi*8]
// 00497f03  51                   push ecx
// 00497f04  52                   push edx
// 00497f05  8bce                 mov ecx, esi
// 00497f07  e8a4feffff           call 0x497db0
// 00497f0c  5f                   pop edi
// 00497f0d  5e                   pop esi
// 00497f0e  c20800               ret 8
// library rbxgs-raknet/BitStream.cpp (function ?Write@BitStream@RakNet@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
