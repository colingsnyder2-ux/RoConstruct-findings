// roc 2012-06 007070d0  unit: ArchiveBinder  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007070d0
//
// 007070d0  64a100000000         mov eax, dword ptr fs:[0]
// 007070d6  8b542404             mov edx, dword ptr [esp + 4]
// 007070da  6aff                 push -1
// 007070dc  684269aa00           push 0xaa6942
// 007070e1  50                   push eax
// 007070e2  64892500000000       mov dword ptr fs:[0], esp
// 007070e9  8b4108               mov eax, dword ptr [ecx + 8]
// 007070ec  83ec44               sub esp, 0x44
// 007070ef  56                   push esi
// 007070f0  be55555515           mov esi, 0x15555555
// 007070f5  2bf0                 sub esi, eax
// 007070f7  3bf2                 cmp esi, edx
// 007070f9  5e                   pop esi
// 007070fa  7358                 jae 0x707154
// 007070fc  6824f5b400           push 0xb4f524
// 00707101  8d4c2404             lea ecx, [esp + 4]
// 00707105  ff154826b200         call dword ptr [0xb22648]
// 0070710b  8d4c241c             lea ecx, [esp + 0x1c]
// 0070710f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00707117  ff15dc29b200         call dword ptr [0xb229dc]
// 0070711d  8d0424               lea eax, [esp]
// 00707120  50                   push eax
// 00707121  8d4c242c             lea ecx, [esp + 0x2c]
// 00707125  c644245001           mov byte ptr [esp + 0x50], 1
// 0070712a  c7442420a02eb400     mov dword ptr [esp + 0x20], 0xb42ea0
// 00707132  ff154426b200         call dword ptr [0xb22644]
// 00707138  680462cd00           push 0xcd6204
// 0070713d  8d4c2420             lea ecx, [esp + 0x20]
// 00707141  51                   push ecx
// 00707142  c644245400           mov byte ptr [esp + 0x54], 0
// 00707147  c7442424ac2eb400     mov dword ptr [esp + 0x24], 0xb42eac
// 0070714f  e8f0bf2700           call 0x983144
// 00707154  03c2                 add eax, edx
// 00707156  894108               mov dword ptr [ecx + 8], eax
// 00707159  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0070715d  64890d00000000       mov dword ptr fs:[0], ecx
// 00707164  83c450               add esp, 0x50
// 00707167  c20400               ret 4
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?_Incsize@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
