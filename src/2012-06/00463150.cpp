// roc 2012-06 00463150  unit: RBX::MergeBinder  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00463150
//
// 00463150  6aff                 push -1
// 00463152  6808c8ac00           push 0xacc808
// 00463157  64a100000000         mov eax, dword ptr fs:[0]
// 0046315d  50                   push eax
// 0046315e  64892500000000       mov dword ptr fs:[0], esp
// 00463165  83ec08               sub esp, 8
// 00463168  56                   push esi
// 00463169  c744240400000000     mov dword ptr [esp + 4], 0
// 00463171  c744240800000000     mov dword ptr [esp + 8], 0
// 00463179  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0046317d  8d442404             lea eax, [esp + 4]
// 00463181  50                   push eax
// 00463182  8bce                 mov ecx, esi
// 00463184  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0046318c  e81fec2800           call 0x6f1db0
// 00463191  84c0                 test al, al
// 00463193  746e                 je 0x463203
// 00463195  8b542420             mov edx, dword ptr [esp + 0x20]
// 00463199  83ec08               sub esp, 8
// 0046319c  8bcc                 mov ecx, esp
// 0046319e  89642424             mov dword ptr [esp + 0x24], esp
// 004631a2  52                   push edx
// 004631a3  51                   push ecx
// 004631a4  e837feffff           call 0x462fe0
// 004631a9  83c408               add esp, 8
// 004631ac  8d4c240c             lea ecx, [esp + 0xc]
// 004631b0  e89bd22e00           call 0x750450
// 004631b5  8b742408             mov esi, dword ptr [esp + 8]
// 004631b9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004631c1  85f6                 test esi, esi
// 004631c3  742a                 je 0x4631ef
// 004631c5  8d4604               lea eax, [esi + 4]
// 004631c8  83c9ff               or ecx, 0xffffffff
// 004631cb  f00fc108             lock xadd dword ptr [eax], ecx
// 004631cf  751e                 jne 0x4631ef
// 004631d1  8b16                 mov edx, dword ptr [esi]
// 004631d3  8b4204               mov eax, dword ptr [edx + 4]
// 004631d6  8bce                 mov ecx, esi
// 004631d8  ffd0                 call eax
// 004631da  8d4e08               lea ecx, [esi + 8]
// 004631dd  83caff               or edx, 0xffffffff
// 004631e0  f00fc111             lock xadd dword ptr [ecx], edx
// 004631e4  7509                 jne 0x4631ef
// 004631e6  8b06                 mov eax, dword ptr [esi]
// 004631e8  8b5008               mov edx, dword ptr [eax + 8]
// 004631eb  8bce                 mov ecx, esi
// 004631ed  ffd2                 call edx
// 004631ef  b001                 mov al, 1
// 004631f1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004631f5  64890d00000000       mov dword ptr fs:[0], ecx
// 004631fc  5e                   pop esi
// 004631fd  83c414               add esp, 0x14
// 00463200  c20800               ret 8
// 00463203  a1d801e300           mov eax, dword ptr [0xe301d8]
// 00463208  50                   push eax
// 00463209  8bce                 mov ecx, esi
// 0046320b  e8e0e52800           call 0x6f17f0
// 00463210  8b742408             mov esi, dword ptr [esp + 8]
// 00463214  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0046321c  84c0                 test al, al
// 0046321e  7442                 je 0x463262
// 00463220  85f6                 test esi, esi
// 00463222  742a                 je 0x46324e
// 00463224  8d4e04               lea ecx, [esi + 4]
// 00463227  83caff               or edx, 0xffffffff
// 0046322a  f00fc111             lock xadd dword ptr [ecx], edx
// 0046322e  751e                 jne 0x46324e
// 00463230  8b06                 mov eax, dword ptr [esi]
// 00463232  8b5004               mov edx, dword ptr [eax + 4]
// 00463235  8bce                 mov ecx, esi
// 00463237  ffd2                 call edx
// 00463239  8d4608               lea eax, [esi + 8]
// 0046323c  83c9ff               or ecx, 0xffffffff
// 0046323f  f00fc108             lock xadd dword ptr [eax], ecx
// 00463243  7509                 jne 0x46324e
// 00463245  8b16                 mov edx, dword ptr [esi]
// 00463247  8b4208               mov eax, dword ptr [edx + 8]
// 0046324a  8bce                 mov ecx, esi
// 0046324c  ffd0                 call eax
// 0046324e  b001                 mov al, 1
// 00463250  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00463254  64890d00000000       mov dword ptr fs:[0], ecx
// 0046325b  5e                   pop esi
// 0046325c  83c414               add esp, 0x14
// 0046325f  c20800               ret 8
// 00463262  85f6                 test esi, esi
// 00463264  742a                 je 0x463290
// 00463266  8d4e04               lea ecx, [esi + 4]
// 00463269  83caff               or edx, 0xffffffff
// 0046326c  f00fc111             lock xadd dword ptr [ecx], edx
// 00463270  751e                 jne 0x463290
// 00463272  8b06                 mov eax, dword ptr [esi]
// 00463274  8b5004               mov edx, dword ptr [eax + 4]
// 00463277  8bce                 mov ecx, esi
// 00463279  ffd2                 call edx
// 0046327b  8d4608               lea eax, [esi + 8]
// 0046327e  83c9ff               or ecx, 0xffffffff
// 00463281  f00fc108             lock xadd dword ptr [eax], ecx
// 00463285  7509                 jne 0x463290
// 00463287  8b16                 mov edx, dword ptr [esi]
// 00463289  8b4208               mov eax, dword ptr [edx + 8]
// 0046328c  8bce                 mov ecx, esi
// 0046328e  ffd0                 call eax
// 00463290  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00463294  32c0                 xor al, al
// 00463296  64890d00000000       mov dword ptr fs:[0], ecx
// 0046329d  5e                   pop esi
// 0046329e  83c414               add esp, 0x14
// 004632a1  c20800               ret 8
// library rbxgs/v8xml\SerializerV2.cpp (function ?processID@MergeBinder@RBX@@MAE_NPBVXmlNameValuePair@@PAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
