// roc 2009-06 00623490  unit: ArchiveBinder  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00623490
//
// 00623490  64a100000000         mov eax, dword ptr fs:[0]
// 00623496  8b542404             mov edx, dword ptr [esp + 4]
// 0062349a  6aff                 push -1
// 0062349c  68b2db8500           push 0x85dbb2
// 006234a1  50                   push eax
// 006234a2  64892500000000       mov dword ptr fs:[0], esp
// 006234a9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006234ac  83ec44               sub esp, 0x44
// 006234af  56                   push esi
// 006234b0  be55555515           mov esi, 0x15555555
// 006234b5  2bf0                 sub esi, eax
// 006234b7  3bf2                 cmp esi, edx
// 006234b9  5e                   pop esi
// 006234ba  7358                 jae 0x623514
// 006234bc  68d00b8b00           push 0x8b0bd0
// 006234c1  8d4c2404             lea ecx, [esp + 4]
// 006234c5  ff15b4e48900         call dword ptr [0x89e4b4]
// 006234cb  8d4c241c             lea ecx, [esp + 0x1c]
// 006234cf  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 006234d7  ff15b8e98900         call dword ptr [0x89e9b8]
// 006234dd  8d0424               lea eax, [esp]
// 006234e0  50                   push eax
// 006234e1  8d4c242c             lea ecx, [esp + 0x2c]
// 006234e5  c644245001           mov byte ptr [esp + 0x50], 1
// 006234ea  c744242044c98a00     mov dword ptr [esp + 0x20], 0x8ac944
// 006234f2  ff15b8e48900         call dword ptr [0x89e4b8]
// 006234f8  6834929700           push 0x979234
// 006234fd  8d4c2420             lea ecx, [esp + 0x20]
// 00623501  51                   push ecx
// 00623502  c644245400           mov byte ptr [esp + 0x54], 0
// 00623507  c744242450c98a00     mov dword ptr [esp + 0x24], 0x8ac950
// 0062350f  e836650f00           call 0x719a4a
// 00623514  03c2                 add eax, edx
// 00623516  894118               mov dword ptr [ecx + 0x18], eax
// 00623519  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0062351d  64890d00000000       mov dword ptr fs:[0], ecx
// 00623524  83c450               add esp, 0x50
// 00623527  c20400               ret 4
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?_Incsize@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
