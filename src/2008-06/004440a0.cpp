// roc 2008-06 004440a0  unit: RBX::MergeBinder  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004440a0
//
// 004440a0  6aff                 push -1
// 004440a2  6868917d00           push 0x7d9168
// 004440a7  64a100000000         mov eax, dword ptr fs:[0]
// 004440ad  50                   push eax
// 004440ae  64892500000000       mov dword ptr fs:[0], esp
// 004440b5  83ec08               sub esp, 8
// 004440b8  56                   push esi
// 004440b9  c744240400000000     mov dword ptr [esp + 4], 0
// 004440c1  c744240800000000     mov dword ptr [esp + 8], 0
// 004440c9  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004440cd  8d442404             lea eax, [esp + 4]
// 004440d1  50                   push eax
// 004440d2  8bce                 mov ecx, esi
// 004440d4  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004440dc  e8ff851300           call 0x57c6e0
// 004440e1  84c0                 test al, al
// 004440e3  746e                 je 0x444153
// 004440e5  8b542420             mov edx, dword ptr [esp + 0x20]
// 004440e9  83ec08               sub esp, 8
// 004440ec  8bcc                 mov ecx, esp
// 004440ee  89642424             mov dword ptr [esp + 0x24], esp
// 004440f2  52                   push edx
// 004440f3  51                   push ecx
// 004440f4  e847491d00           call 0x618a40
// 004440f9  83c408               add esp, 8
// 004440fc  8d4c240c             lea ecx, [esp + 0xc]
// 00444100  e85b0c1500           call 0x594d60
// 00444105  8b742408             mov esi, dword ptr [esp + 8]
// 00444109  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00444111  85f6                 test esi, esi
// 00444113  742a                 je 0x44413f
// 00444115  8d4604               lea eax, [esi + 4]
// 00444118  83c9ff               or ecx, 0xffffffff
// 0044411b  f00fc108             lock xadd dword ptr [eax], ecx
// 0044411f  751e                 jne 0x44413f
// 00444121  8b16                 mov edx, dword ptr [esi]
// 00444123  8b4204               mov eax, dword ptr [edx + 4]
// 00444126  8bce                 mov ecx, esi
// 00444128  ffd0                 call eax
// 0044412a  8d4e08               lea ecx, [esi + 8]
// 0044412d  83caff               or edx, 0xffffffff
// 00444130  f00fc111             lock xadd dword ptr [ecx], edx
// 00444134  7509                 jne 0x44413f
// 00444136  8b06                 mov eax, dword ptr [esi]
// 00444138  8b5008               mov edx, dword ptr [eax + 8]
// 0044413b  8bce                 mov ecx, esi
// 0044413d  ffd2                 call edx
// 0044413f  b001                 mov al, 1
// 00444141  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00444145  64890d00000000       mov dword ptr fs:[0], ecx
// 0044414c  5e                   pop esi
// 0044414d  83c414               add esp, 0x14
// 00444150  c20800               ret 8
// 00444153  a184539700           mov eax, dword ptr [0x975384]
// 00444158  50                   push eax
// 00444159  8bce                 mov ecx, esi
// 0044415b  e850801300           call 0x57c1b0
// 00444160  8b742408             mov esi, dword ptr [esp + 8]
// 00444164  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0044416c  84c0                 test al, al
// 0044416e  7442                 je 0x4441b2
// 00444170  85f6                 test esi, esi
// 00444172  742a                 je 0x44419e
// 00444174  8d4e04               lea ecx, [esi + 4]
// 00444177  83caff               or edx, 0xffffffff
// 0044417a  f00fc111             lock xadd dword ptr [ecx], edx
// 0044417e  751e                 jne 0x44419e
// 00444180  8b06                 mov eax, dword ptr [esi]
// 00444182  8b5004               mov edx, dword ptr [eax + 4]
// 00444185  8bce                 mov ecx, esi
// 00444187  ffd2                 call edx
// 00444189  8d4608               lea eax, [esi + 8]
// 0044418c  83c9ff               or ecx, 0xffffffff
// 0044418f  f00fc108             lock xadd dword ptr [eax], ecx
// 00444193  7509                 jne 0x44419e
// 00444195  8b16                 mov edx, dword ptr [esi]
// 00444197  8b4208               mov eax, dword ptr [edx + 8]
// 0044419a  8bce                 mov ecx, esi
// 0044419c  ffd0                 call eax
// 0044419e  b001                 mov al, 1
// 004441a0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004441a4  64890d00000000       mov dword ptr fs:[0], ecx
// 004441ab  5e                   pop esi
// 004441ac  83c414               add esp, 0x14
// 004441af  c20800               ret 8
// 004441b2  85f6                 test esi, esi
// 004441b4  742a                 je 0x4441e0
// 004441b6  8d4e04               lea ecx, [esi + 4]
// 004441b9  83caff               or edx, 0xffffffff
// 004441bc  f00fc111             lock xadd dword ptr [ecx], edx
// 004441c0  751e                 jne 0x4441e0
// 004441c2  8b06                 mov eax, dword ptr [esi]
// 004441c4  8b5004               mov edx, dword ptr [eax + 4]
// 004441c7  8bce                 mov ecx, esi
// 004441c9  ffd2                 call edx
// 004441cb  8d4608               lea eax, [esi + 8]
// 004441ce  83c9ff               or ecx, 0xffffffff
// 004441d1  f00fc108             lock xadd dword ptr [eax], ecx
// 004441d5  7509                 jne 0x4441e0
// 004441d7  8b16                 mov edx, dword ptr [esi]
// 004441d9  8b4208               mov eax, dword ptr [edx + 8]
// 004441dc  8bce                 mov ecx, esi
// 004441de  ffd0                 call eax
// 004441e0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004441e4  32c0                 xor al, al
// 004441e6  64890d00000000       mov dword ptr fs:[0], ecx
// 004441ed  5e                   pop esi
// 004441ee  83c414               add esp, 0x14
// 004441f1  c20800               ret 8
// library rbxgs/v8xml\SerializerV2.cpp (function ?processID@MergeBinder@RBX@@MAE_NPBVXmlNameValuePair@@PAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
