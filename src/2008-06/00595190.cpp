// roc 2008-06 00595190  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595190
//
// 00595190  64a100000000         mov eax, dword ptr fs:[0]
// 00595196  8b542404             mov edx, dword ptr [esp + 4]
// 0059519a  6aff                 push -1
// 0059519c  6842e87d00           push 0x7de842
// 005951a1  50                   push eax
// 005951a2  64892500000000       mov dword ptr fs:[0], esp
// 005951a9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005951ac  83ec44               sub esp, 0x44
// 005951af  56                   push esi
// 005951b0  be55555515           mov esi, 0x15555555
// 005951b5  2bf0                 sub esi, eax
// 005951b7  3bf2                 cmp esi, edx
// 005951b9  5e                   pop esi
// 005951ba  7358                 jae 0x595214
// 005951bc  6800d48000           push 0x80d400
// 005951c1  8d4c2404             lea ecx, [esp + 4]
// 005951c5  ff1558248000         call dword ptr [0x802458]
// 005951cb  8d4c241c             lea ecx, [esp + 0x1c]
// 005951cf  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 005951d7  ff1598288000         call dword ptr [0x802898]
// 005951dd  8d0424               lea eax, [esp]
// 005951e0  50                   push eax
// 005951e1  8d4c242c             lea ecx, [esp + 0x2c]
// 005951e5  c644245001           mov byte ptr [esp + 0x50], 1
// 005951ea  c744242010b18000     mov dword ptr [esp + 0x20], 0x80b110
// 005951f2  ff155c248000         call dword ptr [0x80245c]
// 005951f8  68c00c8d00           push 0x8d0cc0
// 005951fd  8d4c2420             lea ecx, [esp + 0x20]
// 00595201  51                   push ecx
// 00595202  c644245400           mov byte ptr [esp + 0x54], 0
// 00595207  c74424241cb18000     mov dword ptr [esp + 0x24], 0x80b11c
// 0059520f  e878c31000           call 0x6a158c
// 00595214  03c2                 add eax, edx
// 00595216  894118               mov dword ptr [ecx + 0x18], eax
// 00595219  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0059521d  64890d00000000       mov dword ptr fs:[0], ecx
// 00595224  83c450               add esp, 0x50
// 00595227  c20400               ret 4
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?_Incsize@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
