// roc 2007-03 005e1440  unit: seg_005e0000  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1440
//
// 005e1440  6aff                 push -1
// 005e1442  6820bd7500           push 0x75bd20
// 005e1447  64a100000000         mov eax, dword ptr fs:[0]
// 005e144d  50                   push eax
// 005e144e  64892500000000       mov dword ptr fs:[0], esp
// 005e1455  83ec14               sub esp, 0x14
// 005e1458  56                   push esi
// 005e1459  57                   push edi
// 005e145a  8bf9                 mov edi, ecx
// 005e145c  c744240800000000     mov dword ptr [esp + 8], 0
// 005e1464  8d442408             lea eax, [esp + 8]
// 005e1468  50                   push eax
// 005e1469  6a01                 push 1
// 005e146b  8d4c2414             lea ecx, [esp + 0x14]
// 005e146f  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005e1477  e8647fe3ff           call 0x4193e0
// 005e147c  8b742410             mov esi, dword ptr [esp + 0x10]
// 005e1480  85f6                 test esi, esi
// 005e1482  c744242401000000     mov dword ptr [esp + 0x24], 1
// 005e148a  740b                 je 0x5e1497
// 005e148c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e1490  2bce                 sub ecx, esi
// 005e1492  c1f902               sar ecx, 2
// 005e1495  750a                 jne 0x5e14a1
// 005e1497  ff1544e97700         call dword ptr [0x77e944]
// 005e149d  8b742410             mov esi, dword ptr [esp + 0x10]
// 005e14a1  6a08                 push 8
// 005e14a3  e860cc0300           call 0x61e108
// 005e14a8  83c404               add esp, 4
// 005e14ab  85c0                 test eax, eax
// 005e14ad  740f                 je 0x5e14be
// 005e14af  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005e14b3  c7005c627800         mov dword ptr [eax], 0x78625c
// 005e14b9  895004               mov dword ptr [eax + 4], edx
// 005e14bc  eb02                 jmp 0x5e14c0
// 005e14be  33c0                 xor eax, eax
// 005e14c0  8b0e                 mov ecx, dword ptr [esi]
// 005e14c2  85c9                 test ecx, ecx
// 005e14c4  8906                 mov dword ptr [esi], eax
// 005e14c6  7408                 je 0x5e14d0
// 005e14c8  8b01                 mov eax, dword ptr [ecx]
// 005e14ca  8b10                 mov edx, dword ptr [eax]
// 005e14cc  6a01                 push 1
// 005e14ce  ffd2                 call edx
// 005e14d0  8b0f                 mov ecx, dword ptr [edi]
// 005e14d2  8b01                 mov eax, dword ptr [ecx]
// 005e14d4  8b4004               mov eax, dword ptr [eax + 4]
// 005e14d7  8d54240c             lea edx, [esp + 0xc]
// 005e14db  52                   push edx
// 005e14dc  ffd0                 call eax
// 005e14de  8b742410             mov esi, dword ptr [esp + 0x10]
// 005e14e2  85f6                 test esi, esi
// 005e14e4  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005e14ec  742c                 je 0x5e151a
// 005e14ee  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e14f2  3bf0                 cmp esi, eax
// 005e14f4  8bf8                 mov edi, eax
// 005e14f6  7419                 je 0x5e1511
// 005e14f8  8b0e                 mov ecx, dword ptr [esi]
// 005e14fa  85c9                 test ecx, ecx
// 005e14fc  7408                 je 0x5e1506
// 005e14fe  8b11                 mov edx, dword ptr [ecx]
// 005e1500  8b02                 mov eax, dword ptr [edx]
// 005e1502  6a01                 push 1
// 005e1504  ffd0                 call eax
// 005e1506  83c604               add esi, 4
// 005e1509  3bf7                 cmp esi, edi
// 005e150b  75eb                 jne 0x5e14f8
// 005e150d  8b742410             mov esi, dword ptr [esp + 0x10]
// 005e1511  56                   push esi
// 005e1512  e8d9cb0300           call 0x61e0f0
// 005e1517  83c404               add esp, 4
// 005e151a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e151e  5f                   pop edi
// 005e151f  5e                   pop esi
// 005e1520  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1527  83c420               add esp, 0x20
// 005e152a  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXPBVPropertyDescriptor@Reflection@RBX@@@Z@Reflection@RBX@@QBEXPBVPropertyDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
