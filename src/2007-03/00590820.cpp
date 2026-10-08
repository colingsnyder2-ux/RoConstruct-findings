// roc 2007-03 00590820  unit: seg_00590000  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00590820
//
// 00590820  64a100000000         mov eax, dword ptr fs:[0]
// 00590826  6aff                 push -1
// 00590828  68e8397500           push 0x7539e8
// 0059082d  50                   push eax
// 0059082e  64892500000000       mov dword ptr fs:[0], esp
// 00590835  83ec08               sub esp, 8
// 00590838  56                   push esi
// 00590839  8bf1                 mov esi, ecx
// 0059083b  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 00590841  57                   push edi
// 00590842  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00590846  3bf8                 cmp edi, eax
// 00590848  0f84a8000000         je 0x5908f6
// 0059084e  6a00                 push 0
// 00590850  68e4768900           push 0x8976e4
// 00590855  6864108800           push 0x881064
// 0059085a  6a00                 push 0
// 0059085c  57                   push edi
// 0059085d  e864e90800           call 0x61f1c6
// 00590862  83c414               add esp, 0x14
// 00590865  85c0                 test eax, eax
// 00590867  0f8489000000         je 0x5908f6
// 0059086d  8d442408             lea eax, [esp + 8]
// 00590871  57                   push edi
// 00590872  50                   push eax
// 00590873  e82896eaff           call 0x439ea0
// 00590878  83c408               add esp, 8
// 0059087b  8b08                 mov ecx, dword ptr [eax]
// 0059087d  83c004               add eax, 4
// 00590880  898e9c010000         mov dword ptr [esi + 0x19c], ecx
// 00590886  50                   push eax
// 00590887  8d8ea0010000         lea ecx, [esi + 0x1a0]
// 0059088d  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00590895  e8d6d6e7ff           call 0x40df70
// 0059089a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0059089e  85c0                 test eax, eax
// 005908a0  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005908a8  742c                 je 0x5908d6
// 005908aa  8bf8                 mov edi, eax
// 005908ac  83c004               add eax, 4
// 005908af  83caff               or edx, 0xffffffff
// 005908b2  f00fc110             lock xadd dword ptr [eax], edx
// 005908b6  751e                 jne 0x5908d6
// 005908b8  8b07                 mov eax, dword ptr [edi]
// 005908ba  8b5004               mov edx, dword ptr [eax + 4]
// 005908bd  8bcf                 mov ecx, edi
// 005908bf  ffd2                 call edx
// 005908c1  8d4708               lea eax, [edi + 8]
// 005908c4  83c9ff               or ecx, 0xffffffff
// 005908c7  f00fc108             lock xadd dword ptr [eax], ecx
// 005908cb  7509                 jne 0x5908d6
// 005908cd  8b17                 mov edx, dword ptr [edi]
// 005908cf  8b4208               mov eax, dword ptr [edx + 8]
// 005908d2  8bcf                 mov ecx, edi
// 005908d4  ffd0                 call eax
// 005908d6  6814e78b00           push 0x8be714
// 005908db  8bce                 mov ecx, esi
// 005908dd  e85e35ebff           call 0x443e40
// 005908e2  8bce                 mov ecx, esi
// 005908e4  e837d9ffff           call 0x58e220
// 005908e9  85c0                 test eax, eax
// 005908eb  7409                 je 0x5908f6
// 005908ed  8b10                 mov edx, dword ptr [eax]
// 005908ef  8bc8                 mov ecx, eax
// 005908f1  8b420c               mov eax, dword ptr [edx + 0xc]
// 005908f4  ffd0                 call eax
// 005908f6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005908fa  5f                   pop edi
// 005908fb  5e                   pop esi
// 005908fc  64890d00000000       mov dword ptr fs:[0], ecx
// 00590903  83c414               add esp, 0x14
// 00590906  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?setCameraSubject@Camera@RBX@@QAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
