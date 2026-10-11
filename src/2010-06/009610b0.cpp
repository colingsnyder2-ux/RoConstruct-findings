// roc 2010-06 009610b0  unit: RBX::SphereBuilder  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009610b0
//
// 009610b0  64a100000000         mov eax, dword ptr fs:[0]
// 009610b6  8b542404             mov edx, dword ptr [esp + 4]
// 009610ba  6aff                 push -1
// 009610bc  68e22f9a00           push 0x9a2fe2
// 009610c1  50                   push eax
// 009610c2  64892500000000       mov dword ptr fs:[0], esp
// 009610c9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 009610cc  83ec44               sub esp, 0x44
// 009610cf  56                   push esi
// 009610d0  be55555515           mov esi, 0x15555555
// 009610d5  2bf0                 sub esi, eax
// 009610d7  3bf2                 cmp esi, edx
// 009610d9  5e                   pop esi
// 009610da  7358                 jae 0x961134
// 009610dc  68e845a000           push 0xa045e8
// 009610e1  8d4c2404             lea ecx, [esp + 4]
// 009610e5  ff1510a49e00         call dword ptr [0x9ea410]
// 009610eb  8d4c241c             lea ecx, [esp + 0x1c]
// 009610ef  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 009610f7  ff1518a99e00         call dword ptr [0x9ea918]
// 009610fd  8d0424               lea eax, [esp]
// 00961100  50                   push eax
// 00961101  8d4c242c             lea ecx, [esp + 0x2c]
// 00961105  c644245001           mov byte ptr [esp + 0x50], 1
// 0096110a  c74424202c00a000     mov dword ptr [esp + 0x20], 0xa0002c
// 00961112  ff150ca49e00         call dword ptr [0x9ea40c]
// 00961118  68601bb000           push 0xb01b60
// 0096111d  8d4c2420             lea ecx, [esp + 0x20]
// 00961121  51                   push ecx
// 00961122  c644245400           mov byte ptr [esp + 0x54], 0
// 00961127  c74424243800a000     mov dword ptr [esp + 0x24], 0xa00038
// 0096112f  e87e78e4ff           call 0x7a89b2
// 00961134  03c2                 add eax, edx
// 00961136  894118               mov dword ptr [ecx + 0x18], eax
// 00961139  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0096113d  64890d00000000       mov dword ptr fs:[0], ecx
// 00961144  83c450               add esp, 0x50
// 00961147  c20400               ret 4
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?_Incsize@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
