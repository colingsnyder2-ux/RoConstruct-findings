// roc 2010-06 004a54b0  unit: boost::any::placeholder  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a54b0
//
// 004a54b0  64a100000000         mov eax, dword ptr fs:[0]
// 004a54b6  8b542404             mov edx, dword ptr [esp + 4]
// 004a54ba  6aff                 push -1
// 004a54bc  68e22f9a00           push 0x9a2fe2
// 004a54c1  50                   push eax
// 004a54c2  64892500000000       mov dword ptr fs:[0], esp
// 004a54c9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004a54cc  83ec44               sub esp, 0x44
// 004a54cf  56                   push esi
// 004a54d0  beffffff0f           mov esi, 0xfffffff
// 004a54d5  2bf0                 sub esi, eax
// 004a54d7  3bf2                 cmp esi, edx
// 004a54d9  5e                   pop esi
// 004a54da  7358                 jae 0x4a5534
// 004a54dc  68e845a000           push 0xa045e8
// 004a54e1  8d4c2404             lea ecx, [esp + 4]
// 004a54e5  ff1510a49e00         call dword ptr [0x9ea410]
// 004a54eb  8d4c241c             lea ecx, [esp + 0x1c]
// 004a54ef  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004a54f7  ff1518a99e00         call dword ptr [0x9ea918]
// 004a54fd  8d0424               lea eax, [esp]
// 004a5500  50                   push eax
// 004a5501  8d4c242c             lea ecx, [esp + 0x2c]
// 004a5505  c644245001           mov byte ptr [esp + 0x50], 1
// 004a550a  c74424202c00a000     mov dword ptr [esp + 0x20], 0xa0002c
// 004a5512  ff150ca49e00         call dword ptr [0x9ea40c]
// 004a5518  68601bb000           push 0xb01b60
// 004a551d  8d4c2420             lea ecx, [esp + 0x20]
// 004a5521  51                   push ecx
// 004a5522  c644245400           mov byte ptr [esp + 0x54], 0
// 004a5527  c74424243800a000     mov dword ptr [esp + 0x24], 0xa00038
// 004a552f  e87e343000           call 0x7a89b2
// 004a5534  03c2                 add eax, edx
// 004a5536  894118               mov dword ptr [ecx + 0x18], eax
// 004a5539  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004a553d  64890d00000000       mov dword ptr fs:[0], ecx
// 004a5544  83c450               add esp, 0x50
// 004a5547  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ?_Incsize@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
