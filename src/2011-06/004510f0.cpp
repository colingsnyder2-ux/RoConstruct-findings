// roc 2011-06 004510f0  unit: RBX::MergeBinder  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004510f0
//
// 004510f0  6aff                 push -1
// 004510f2  6868449d00           push 0x9d4468
// 004510f7  64a100000000         mov eax, dword ptr fs:[0]
// 004510fd  50                   push eax
// 004510fe  64892500000000       mov dword ptr fs:[0], esp
// 00451105  83ec08               sub esp, 8
// 00451108  56                   push esi
// 00451109  c744240400000000     mov dword ptr [esp + 4], 0
// 00451111  c744240800000000     mov dword ptr [esp + 8], 0
// 00451119  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0045111d  8d442404             lea eax, [esp + 4]
// 00451121  50                   push eax
// 00451122  8bce                 mov ecx, esi
// 00451124  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0045112c  e88f1d1b00           call 0x602ec0
// 00451131  84c0                 test al, al
// 00451133  746e                 je 0x4511a3
// 00451135  8b542420             mov edx, dword ptr [esp + 0x20]
// 00451139  83ec08               sub esp, 8
// 0045113c  8bcc                 mov ecx, esp
// 0045113e  89642424             mov dword ptr [esp + 0x24], esp
// 00451142  52                   push edx
// 00451143  51                   push ecx
// 00451144  e8d7032d00           call 0x721520
// 00451149  83c408               add esp, 8
// 0045114c  8d4c240c             lea ecx, [esp + 0xc]
// 00451150  e8bba82000           call 0x65ba10
// 00451155  8b742408             mov esi, dword ptr [esp + 8]
// 00451159  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00451161  85f6                 test esi, esi
// 00451163  742a                 je 0x45118f
// 00451165  8d4604               lea eax, [esi + 4]
// 00451168  83c9ff               or ecx, 0xffffffff
// 0045116b  f00fc108             lock xadd dword ptr [eax], ecx
// 0045116f  751e                 jne 0x45118f
// 00451171  8b16                 mov edx, dword ptr [esi]
// 00451173  8b4204               mov eax, dword ptr [edx + 4]
// 00451176  8bce                 mov ecx, esi
// 00451178  ffd0                 call eax
// 0045117a  8d4e08               lea ecx, [esi + 8]
// 0045117d  83caff               or edx, 0xffffffff
// 00451180  f00fc111             lock xadd dword ptr [ecx], edx
// 00451184  7509                 jne 0x45118f
// 00451186  8b06                 mov eax, dword ptr [esi]
// 00451188  8b5008               mov edx, dword ptr [eax + 8]
// 0045118b  8bce                 mov ecx, esi
// 0045118d  ffd2                 call edx
// 0045118f  b001                 mov al, 1
// 00451191  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00451195  64890d00000000       mov dword ptr fs:[0], ecx
// 0045119c  5e                   pop esi
// 0045119d  83c414               add esp, 0x14
// 004511a0  c20800               ret 8
// 004511a3  a1b8b7cc00           mov eax, dword ptr [0xccb7b8]
// 004511a8  50                   push eax
// 004511a9  8bce                 mov ecx, esi
// 004511ab  e8e0171b00           call 0x602990
// 004511b0  8b742408             mov esi, dword ptr [esp + 8]
// 004511b4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004511bc  84c0                 test al, al
// 004511be  7442                 je 0x451202
// 004511c0  85f6                 test esi, esi
// 004511c2  742a                 je 0x4511ee
// 004511c4  8d4e04               lea ecx, [esi + 4]
// 004511c7  83caff               or edx, 0xffffffff
// 004511ca  f00fc111             lock xadd dword ptr [ecx], edx
// 004511ce  751e                 jne 0x4511ee
// 004511d0  8b06                 mov eax, dword ptr [esi]
// 004511d2  8b5004               mov edx, dword ptr [eax + 4]
// 004511d5  8bce                 mov ecx, esi
// 004511d7  ffd2                 call edx
// 004511d9  8d4608               lea eax, [esi + 8]
// 004511dc  83c9ff               or ecx, 0xffffffff
// 004511df  f00fc108             lock xadd dword ptr [eax], ecx
// 004511e3  7509                 jne 0x4511ee
// 004511e5  8b16                 mov edx, dword ptr [esi]
// 004511e7  8b4208               mov eax, dword ptr [edx + 8]
// 004511ea  8bce                 mov ecx, esi
// 004511ec  ffd0                 call eax
// 004511ee  b001                 mov al, 1
// 004511f0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004511f4  64890d00000000       mov dword ptr fs:[0], ecx
// 004511fb  5e                   pop esi
// 004511fc  83c414               add esp, 0x14
// 004511ff  c20800               ret 8
// 00451202  85f6                 test esi, esi
// 00451204  742a                 je 0x451230
// 00451206  8d4e04               lea ecx, [esi + 4]
// 00451209  83caff               or edx, 0xffffffff
// 0045120c  f00fc111             lock xadd dword ptr [ecx], edx
// 00451210  751e                 jne 0x451230
// 00451212  8b06                 mov eax, dword ptr [esi]
// 00451214  8b5004               mov edx, dword ptr [eax + 4]
// 00451217  8bce                 mov ecx, esi
// 00451219  ffd2                 call edx
// 0045121b  8d4608               lea eax, [esi + 8]
// 0045121e  83c9ff               or ecx, 0xffffffff
// 00451221  f00fc108             lock xadd dword ptr [eax], ecx
// 00451225  7509                 jne 0x451230
// 00451227  8b16                 mov edx, dword ptr [esi]
// 00451229  8b4208               mov eax, dword ptr [edx + 8]
// 0045122c  8bce                 mov ecx, esi
// 0045122e  ffd0                 call eax
// 00451230  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00451234  32c0                 xor al, al
// 00451236  64890d00000000       mov dword ptr fs:[0], ecx
// 0045123d  5e                   pop esi
// 0045123e  83c414               add esp, 0x14
// 00451241  c20800               ret 8
// library rbxgs/v8xml\SerializerV2.cpp (function ?processID@MergeBinder@RBX@@MAE_NPBVXmlNameValuePair@@PAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
