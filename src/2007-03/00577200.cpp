// roc 2007-03 00577200  unit: seg_00570000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00577200
//
// 00577200  8b442404             mov eax, dword ptr [esp + 4]
// 00577204  83ec0c               sub esp, 0xc
// 00577207  56                   push esi
// 00577208  6a00                 push 0
// 0057720a  68e03b8800           push 0x883be0
// 0057720f  68d4118800           push 0x8811d4
// 00577214  6a00                 push 0
// 00577216  50                   push eax
// 00577217  8bf1                 mov esi, ecx
// 00577219  e8a87f0a00           call 0x61f1c6
// 0057721e  83c414               add esp, 0x14
// 00577221  85c0                 test eax, eax
// 00577223  751e                 jne 0x577243
// 00577225  68ac5e7800           push 0x785eac
// 0057722a  8d4c2408             lea ecx, [esp + 8]
// 0057722e  ff1580e97700         call dword ptr [0x77e980]
// 00577234  68c0218400           push 0x8421c0
// 00577239  8d4c2408             lea ecx, [esp + 8]
// 0057723d  51                   push ecx
// 0057723e  e8eb7d0a00           call 0x61f02e
// 00577243  8b90f4000000         mov edx, dword ptr [eax + 0xf4]
// 00577249  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0057724c  8b140a               mov edx, dword ptr [edx + ecx]
// 0057724f  03562c               add edx, dword ptr [esi + 0x2c]
// 00577252  8d8c02f4000000       lea ecx, [edx + eax + 0xf4]
// 00577259  8b4628               mov eax, dword ptr [esi + 0x28]
// 0057725c  ffd0                 call eax
// 0057725e  5e                   pop esi
// 0057725f  83c40c               add esp, 0xc
// 00577262  c20800               ret 8
// library rbxgs/v8datamodel\PartInstance.cpp (function ?execute@?$BoundFuncDesc@VPartInstance@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
