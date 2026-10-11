// roc 2011-06 00614350  unit: ArchiveBinder  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00614350
//
// 00614350  64a100000000         mov eax, dword ptr fs:[0]
// 00614356  8b542404             mov edx, dword ptr [esp + 4]
// 0061435a  6aff                 push -1
// 0061435c  68221b9d00           push 0x9d1b22
// 00614361  50                   push eax
// 00614362  64892500000000       mov dword ptr fs:[0], esp
// 00614369  8b4108               mov eax, dword ptr [ecx + 8]
// 0061436c  83ec44               sub esp, 0x44
// 0061436f  56                   push esi
// 00614370  be55555515           mov esi, 0x15555555
// 00614375  2bf0                 sub esi, eax
// 00614377  3bf2                 cmp esi, edx
// 00614379  5e                   pop esi
// 0061437a  7358                 jae 0x6143d4
// 0061437c  688457a600           push 0xa65784
// 00614381  8d4c2404             lea ecx, [esp + 4]
// 00614385  ff15c404a400         call dword ptr [0xa404c4]
// 0061438b  8d4c241c             lea ecx, [esp + 0x1c]
// 0061438f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00614397  ff15600aa400         call dword ptr [0xa40a60]
// 0061439d  8d0424               lea eax, [esp]
// 006143a0  50                   push eax
// 006143a1  8d4c242c             lea ecx, [esp + 0x2c]
// 006143a5  c644245001           mov byte ptr [esp + 0x50], 1
// 006143aa  c7442420c0b5a500     mov dword ptr [esp + 0x20], 0xa5b5c0
// 006143b2  ff15c804a400         call dword ptr [0xa404c8]
// 006143b8  687073b800           push 0xb87370
// 006143bd  8d4c2420             lea ecx, [esp + 0x20]
// 006143c1  51                   push ecx
// 006143c2  c644245400           mov byte ptr [esp + 0x54], 0
// 006143c7  c7442424ccb5a500     mov dword ptr [esp + 0x24], 0xa5b5cc
// 006143cf  e8d86c1f00           call 0x80b0ac
// 006143d4  03c2                 add eax, edx
// 006143d6  894108               mov dword ptr [ecx + 8], eax
// 006143d9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006143dd  64890d00000000       mov dword ptr fs:[0], ecx
// 006143e4  83c450               add esp, 0x50
// 006143e7  c20400               ret 4
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?_Incsize@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
