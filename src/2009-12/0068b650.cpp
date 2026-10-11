// roc 2009-12 0068b650  unit: ArchiveBinder  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068b650
//
// 0068b650  64a100000000         mov eax, dword ptr fs:[0]
// 0068b656  8b542404             mov edx, dword ptr [esp + 4]
// 0068b65a  6aff                 push -1
// 0068b65c  6812699500           push 0x956912
// 0068b661  50                   push eax
// 0068b662  64892500000000       mov dword ptr fs:[0], esp
// 0068b669  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0068b66c  83ec44               sub esp, 0x44
// 0068b66f  56                   push esi
// 0068b670  be55555515           mov esi, 0x15555555
// 0068b675  2bf0                 sub esi, eax
// 0068b677  3bf2                 cmp esi, edx
// 0068b679  5e                   pop esi
// 0068b67a  7358                 jae 0x68b6d4
// 0068b67c  6884389a00           push 0x9a3884
// 0068b681  8d4c2404             lea ecx, [esp + 4]
// 0068b685  ff15f4b69800         call dword ptr [0x98b6f4]
// 0068b68b  8d4c241c             lea ecx, [esp + 0x1c]
// 0068b68f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0068b697  ff1554b79800         call dword ptr [0x98b754]
// 0068b69d  8d0424               lea eax, [esp]
// 0068b6a0  50                   push eax
// 0068b6a1  8d4c242c             lea ecx, [esp + 0x2c]
// 0068b6a5  c644245001           mov byte ptr [esp + 0x50], 1
// 0068b6aa  c744242084f49900     mov dword ptr [esp + 0x20], 0x99f484
// 0068b6b2  ff15f0b69800         call dword ptr [0x98b6f0]
// 0068b6b8  68e4efa800           push 0xa8efe4
// 0068b6bd  8d4c2420             lea ecx, [esp + 0x20]
// 0068b6c1  51                   push ecx
// 0068b6c2  c644245400           mov byte ptr [esp + 0x54], 0
// 0068b6c7  c744242490f49900     mov dword ptr [esp + 0x24], 0x99f490
// 0068b6cf  e8a4911600           call 0x7f4878
// 0068b6d4  03c2                 add eax, edx
// 0068b6d6  894118               mov dword ptr [ecx + 0x18], eax
// 0068b6d9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0068b6dd  64890d00000000       mov dword ptr fs:[0], ecx
// 0068b6e4  83c450               add esp, 0x50
// 0068b6e7  c20400               ret 4
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?_Incsize@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
