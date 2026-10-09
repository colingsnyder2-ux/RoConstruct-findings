// roc 2009-12 00443750  unit: RBX::MergeBinder  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00443750
//
// 00443750  6aff                 push -1
// 00443752  6888039400           push 0x940388
// 00443757  64a100000000         mov eax, dword ptr fs:[0]
// 0044375d  50                   push eax
// 0044375e  64892500000000       mov dword ptr fs:[0], esp
// 00443765  83ec08               sub esp, 8
// 00443768  56                   push esi
// 00443769  c744240400000000     mov dword ptr [esp + 4], 0
// 00443771  c744240800000000     mov dword ptr [esp + 8], 0
// 00443779  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0044377d  8d442404             lea eax, [esp + 4]
// 00443781  50                   push eax
// 00443782  8bce                 mov ecx, esi
// 00443784  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0044378c  e8af3b2300           call 0x677340
// 00443791  84c0                 test al, al
// 00443793  746e                 je 0x443803
// 00443795  8b542420             mov edx, dword ptr [esp + 0x20]
// 00443799  83ec08               sub esp, 8
// 0044379c  8bcc                 mov ecx, esp
// 0044379e  89642424             mov dword ptr [esp + 0x24], esp
// 004437a2  52                   push edx
// 004437a3  51                   push ecx
// 004437a4  e887cbfcff           call 0x410330
// 004437a9  83c408               add esp, 8
// 004437ac  8d4c240c             lea ecx, [esp + 0xc]
// 004437b0  e8cb232800           call 0x6c5b80
// 004437b5  8b742408             mov esi, dword ptr [esp + 8]
// 004437b9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004437c1  85f6                 test esi, esi
// 004437c3  742a                 je 0x4437ef
// 004437c5  8d4604               lea eax, [esi + 4]
// 004437c8  83c9ff               or ecx, 0xffffffff
// 004437cb  f00fc108             lock xadd dword ptr [eax], ecx
// 004437cf  751e                 jne 0x4437ef
// 004437d1  8b16                 mov edx, dword ptr [esi]
// 004437d3  8b4204               mov eax, dword ptr [edx + 4]
// 004437d6  8bce                 mov ecx, esi
// 004437d8  ffd0                 call eax
// 004437da  8d4e08               lea ecx, [esi + 8]
// 004437dd  83caff               or edx, 0xffffffff
// 004437e0  f00fc111             lock xadd dword ptr [ecx], edx
// 004437e4  7509                 jne 0x4437ef
// 004437e6  8b06                 mov eax, dword ptr [esi]
// 004437e8  8b5008               mov edx, dword ptr [eax + 8]
// 004437eb  8bce                 mov ecx, esi
// 004437ed  ffd2                 call edx
// 004437ef  b001                 mov al, 1
// 004437f1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004437f5  64890d00000000       mov dword ptr fs:[0], ecx
// 004437fc  5e                   pop esi
// 004437fd  83c414               add esp, 0x14
// 00443800  c20800               ret 8
// 00443803  a1600cb900           mov eax, dword ptr [0xb90c60]
// 00443808  50                   push eax
// 00443809  8bce                 mov ecx, esi
// 0044380b  e880352300           call 0x676d90
// 00443810  8b742408             mov esi, dword ptr [esp + 8]
// 00443814  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0044381c  84c0                 test al, al
// 0044381e  7442                 je 0x443862
// 00443820  85f6                 test esi, esi
// 00443822  742a                 je 0x44384e
// 00443824  8d4e04               lea ecx, [esi + 4]
// 00443827  83caff               or edx, 0xffffffff
// 0044382a  f00fc111             lock xadd dword ptr [ecx], edx
// 0044382e  751e                 jne 0x44384e
// 00443830  8b06                 mov eax, dword ptr [esi]
// 00443832  8b5004               mov edx, dword ptr [eax + 4]
// 00443835  8bce                 mov ecx, esi
// 00443837  ffd2                 call edx
// 00443839  8d4608               lea eax, [esi + 8]
// 0044383c  83c9ff               or ecx, 0xffffffff
// 0044383f  f00fc108             lock xadd dword ptr [eax], ecx
// 00443843  7509                 jne 0x44384e
// 00443845  8b16                 mov edx, dword ptr [esi]
// 00443847  8b4208               mov eax, dword ptr [edx + 8]
// 0044384a  8bce                 mov ecx, esi
// 0044384c  ffd0                 call eax
// 0044384e  b001                 mov al, 1
// 00443850  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00443854  64890d00000000       mov dword ptr fs:[0], ecx
// 0044385b  5e                   pop esi
// 0044385c  83c414               add esp, 0x14
// 0044385f  c20800               ret 8
// 00443862  85f6                 test esi, esi
// 00443864  742a                 je 0x443890
// 00443866  8d4e04               lea ecx, [esi + 4]
// 00443869  83caff               or edx, 0xffffffff
// 0044386c  f00fc111             lock xadd dword ptr [ecx], edx
// 00443870  751e                 jne 0x443890
// 00443872  8b06                 mov eax, dword ptr [esi]
// 00443874  8b5004               mov edx, dword ptr [eax + 4]
// 00443877  8bce                 mov ecx, esi
// 00443879  ffd2                 call edx
// 0044387b  8d4608               lea eax, [esi + 8]
// 0044387e  83c9ff               or ecx, 0xffffffff
// 00443881  f00fc108             lock xadd dword ptr [eax], ecx
// 00443885  7509                 jne 0x443890
// 00443887  8b16                 mov edx, dword ptr [esi]
// 00443889  8b4208               mov eax, dword ptr [edx + 8]
// 0044388c  8bce                 mov ecx, esi
// 0044388e  ffd0                 call eax
// 00443890  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00443894  32c0                 xor al, al
// 00443896  64890d00000000       mov dword ptr fs:[0], ecx
// 0044389d  5e                   pop esi
// 0044389e  83c414               add esp, 0x14
// 004438a1  c20800               ret 8
// library rbxgs/v8xml\SerializerV2.cpp (function ?processID@MergeBinder@RBX@@MAE_NPBVXmlNameValuePair@@PAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
