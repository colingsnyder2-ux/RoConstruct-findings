// roc 2007-03 0056a9b0  unit: seg_00560000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056a9b0
//
// 0056a9b0  64a100000000         mov eax, dword ptr fs:[0]
// 0056a9b6  8b542404             mov edx, dword ptr [esp + 4]
// 0056a9ba  6aff                 push -1
// 0056a9bc  68926f7500           push 0x756f92
// 0056a9c1  50                   push eax
// 0056a9c2  64892500000000       mov dword ptr fs:[0], esp
// 0056a9c9  8b4108               mov eax, dword ptr [ecx + 8]
// 0056a9cc  83ec44               sub esp, 0x44
// 0056a9cf  56                   push esi
// 0056a9d0  be55555515           mov esi, 0x15555555
// 0056a9d5  2bf0                 sub esi, eax
// 0056a9d7  3bf2                 cmp esi, edx
// 0056a9d9  5e                   pop esi
// 0056a9da  7358                 jae 0x56aa34
// 0056a9dc  686c637800           push 0x78636c
// 0056a9e1  8d4c2404             lea ecx, [esp + 4]
// 0056a9e5  ff1578e77700         call dword ptr [0x77e778]
// 0056a9eb  8d4c241c             lea ecx, [esp + 0x1c]
// 0056a9ef  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0056a9f7  ff1560e97700         call dword ptr [0x77e960]
// 0056a9fd  8d0424               lea eax, [esp]
// 0056aa00  50                   push eax
// 0056aa01  8d4c242c             lea ecx, [esp + 0x2c]
// 0056aa05  c644245001           mov byte ptr [esp + 0x50], 1
// 0056aa0a  c7442420383e7800     mov dword ptr [esp + 0x20], 0x783e38
// 0056aa12  ff157ce77700         call dword ptr [0x77e77c]
// 0056aa18  6870f78300           push 0x83f770
// 0056aa1d  8d4c2420             lea ecx, [esp + 0x20]
// 0056aa21  51                   push ecx
// 0056aa22  c644245400           mov byte ptr [esp + 0x54], 0
// 0056aa27  c7442424443e7800     mov dword ptr [esp + 0x24], 0x783e44
// 0056aa2f  e8fa450b00           call 0x61f02e
// 0056aa34  03c2                 add eax, edx
// 0056aa36  894108               mov dword ptr [ecx + 8], eax
// 0056aa39  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0056aa3d  64890d00000000       mov dword ptr fs:[0], ecx
// 0056aa44  83c450               add esp, 0x50
// 0056aa47  c20400               ret 4
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?_Incsize@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
