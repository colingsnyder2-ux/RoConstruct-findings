// roc 2007-08 0056ac20  unit: ArchiveBinder  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056ac20
//
// 0056ac20  64a100000000         mov eax, dword ptr fs:[0]
// 0056ac26  8b542404             mov edx, dword ptr [esp + 4]
// 0056ac2a  6aff                 push -1
// 0056ac2c  68b2417500           push 0x7541b2
// 0056ac31  50                   push eax
// 0056ac32  64892500000000       mov dword ptr fs:[0], esp
// 0056ac39  8b4108               mov eax, dword ptr [ecx + 8]
// 0056ac3c  83ec44               sub esp, 0x44
// 0056ac3f  56                   push esi
// 0056ac40  be55555515           mov esi, 0x15555555
// 0056ac45  2bf0                 sub esi, eax
// 0056ac47  3bf2                 cmp esi, edx
// 0056ac49  5e                   pop esi
// 0056ac4a  7358                 jae 0x56aca4
// 0056ac4c  688c597800           push 0x78598c
// 0056ac51  8d4c2404             lea ecx, [esp + 4]
// 0056ac55  ff1598e67700         call dword ptr [0x77e698]
// 0056ac5b  8d4c241c             lea ecx, [esp + 0x1c]
// 0056ac5f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0056ac67  ff15f8e67700         call dword ptr [0x77e6f8]
// 0056ac6d  8d0424               lea eax, [esp]
// 0056ac70  50                   push eax
// 0056ac71  8d4c242c             lea ecx, [esp + 0x2c]
// 0056ac75  c644245001           mov byte ptr [esp + 0x50], 1
// 0056ac7a  c7442420604e7800     mov dword ptr [esp + 0x20], 0x784e60
// 0056ac82  ff159ce67700         call dword ptr [0x77e69c]
// 0056ac88  6878f78300           push 0x83f778
// 0056ac8d  8d4c2420             lea ecx, [esp + 0x20]
// 0056ac91  51                   push ecx
// 0056ac92  c644245400           mov byte ptr [esp + 0x54], 0
// 0056ac97  c74424246c4e7800     mov dword ptr [esp + 0x24], 0x784e6c
// 0056ac9f  e8fa5e0c00           call 0x630b9e
// 0056aca4  03c2                 add eax, edx
// 0056aca6  894108               mov dword ptr [ecx + 8], eax
// 0056aca9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0056acad  64890d00000000       mov dword ptr fs:[0], ecx
// 0056acb4  83c450               add esp, 0x50
// 0056acb7  c20400               ret 4
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?_Incsize@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
